#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82906C38"))) PPC_WEAK_FUNC(sub_82906C38);
PPC_FUNC_IMPL(__imp__sub_82906C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82906C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r11,19400
	ctx.r29.s64 = ctx.r11.s64 + 19400;
	// lwz r3,1776(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,1772(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1772, ctx.r29.u32);
	// beq cr6,0x82906c6c
	if (ctx.cr6.eq) goto loc_82906C6C;
	// lwz r11,1780(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1780);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82912478
	ctx.lr = 0x82906C6C;
	sub_82912478(ctx, base);
loc_82906C6C:
	// addi r31,r27,1772
	ctx.r31.s64 = ctx.r27.s64 + 1772;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82906C74:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906c94
	if (ctx.cr6.eq) goto loc_82906C94;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82912478
	ctx.lr = 0x82906C94;
	sub_82912478(ctx, base);
loc_82906C94:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82906c74
	if (!ctx.cr6.lt) goto loc_82906C74;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r31,r27,1612
	ctx.r31.s64 = ctx.r27.s64 + 1612;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r30,r11,19312
	ctx.r30.s64 = ctx.r11.s64 + 19312;
loc_82906CB0:
	// addi r31,r31,-176
	ctx.r31.s64 = ctx.r31.s64 + -176;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906cd4
	if (ctx.cr6.eq) goto loc_82906CD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82912478
	ctx.lr = 0x82906CD4;
	sub_82912478(ctx, base);
loc_82906CD4:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82906cb0
	if (!ctx.cr6.lt) goto loc_82906CB0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8290b5c0
	ctx.lr = 0x82906CE8;
	sub_8290B5C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906CF0"))) PPC_WEAK_FUNC(sub_82906CF0);
PPC_FUNC_IMPL(__imp__sub_82906CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82906c38
	ctx.lr = 0x82906D10;
	sub_82906C38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82906d2c
	if (ctx.cr6.eq) goto loc_82906D2C;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x82912478
	ctx.lr = 0x82906D28;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82906D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82906D48"))) PPC_WEAK_FUNC(sub_82906D48);
PPC_FUNC_IMPL(__imp__sub_82906D48) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905400
	sub_82905400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906D58"))) PPC_WEAK_FUNC(sub_82906D58);
PPC_FUNC_IMPL(__imp__sub_82906D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82906D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,19820
	ctx.r5.s64 = ctx.r11.s64 + 19820;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x82912420
	ctx.lr = 0x82906D84;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906d9c
	if (ctx.cr6.eq) goto loc_82906D9C;
	// bl 0x82906920
	ctx.lr = 0x82906D90;
	sub_82906920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82906db8
	if (!ctx.cr6.eq) goto loc_82906DB8;
loc_82906D9C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// bl 0x829117c8
	ctx.lr = 0x82906DAC;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82906DB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lfs f0,14092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1804, temp.u32);
	// bl 0x82903700
	ctx.lr = 0x82906DD4;
	sub_82903700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905ce0
	ctx.lr = 0x82906DDC;
	sub_82905CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906DE8"))) PPC_WEAK_FUNC(sub_82906DE8);
PPC_FUNC_IMPL(__imp__sub_82906DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82906DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,19932
	ctx.r5.s64 = ctx.r11.s64 + 19932;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82912420
	ctx.lr = 0x82906E14;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906e2c
	if (ctx.cr6.eq) goto loc_82906E2C;
	// bl 0x82904f40
	ctx.lr = 0x82906E20;
	sub_82904F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82906e48
	if (!ctx.cr6.eq) goto loc_82906E48;
loc_82906E2C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,19920
	ctx.r3.s64 = ctx.r11.s64 + 19920;
	// bl 0x829117c8
	ctx.lr = 0x82906E3C;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82906E48:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r4,r11,19908
	ctx.r4.s64 = ctx.r11.s64 + 19908;
	// bl 0x82906080
	ctx.lr = 0x82906E60;
	sub_82906080(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x82906e80
	if (!ctx.cr6.eq) goto loc_82906E80;
loc_82906E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82906E70:
	// bl 0x82904fc0
	ctx.lr = 0x82906E74;
	sub_82904FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82906E80:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19892
	ctx.r4.s64 = ctx.r11.s64 + 19892;
	// bl 0x82905b88
	ctx.lr = 0x82906E90;
	sub_82905B88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19876
	ctx.r4.s64 = ctx.r11.s64 + 19876;
	// bl 0x82905b88
	ctx.lr = 0x82906EAC;
	sub_82905B88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,19864
	ctx.r4.s64 = ctx.r10.s64 + 19864;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// bl 0x82906d58
	ctx.lr = 0x82906ED4;
	sub_82906D58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19852
	ctx.r4.s64 = ctx.r11.s64 + 19852;
	// bl 0x82905f48
	ctx.lr = 0x82906EF0;
	sub_82905F48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19840
	ctx.r4.s64 = ctx.r11.s64 + 19840;
	// bl 0x82906080
	ctx.lr = 0x82906F0C;
	sub_82906080(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,19828
	ctx.r4.s64 = ctx.r11.s64 + 19828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82902d88
	ctx.lr = 0x82906F2C;
	sub_82902D88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f13,116(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f13,128(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290b748
	ctx.lr = 0x82906F90;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8290b748
	ctx.lr = 0x82906FA8;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8290b748
	ctx.lr = 0x82906FC0;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8290b748
	ctx.lr = 0x82906FD8;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8290b748
	ctx.lr = 0x82906FF0;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8290b748
	ctx.lr = 0x82907008;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82906e6c
	if (ctx.cr6.eq) goto loc_82906E6C;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8290b748
	ctx.lr = 0x82907020;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82906e70
	if (ctx.cr6.eq) goto loc_82906E70;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821ef318
	ctx.lr = 0x82907038;
	sub_821EF318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82581810
	ctx.lr = 0x82907044;
	sub_82581810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907050"))) PPC_WEAK_FUNC(sub_82907050);
PPC_FUNC_IMPL(__imp__sub_82907050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82907058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,19988
	ctx.r5.s64 = ctx.r11.s64 + 19988;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82912420
	ctx.lr = 0x8290707C;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82907104
	if (ctx.cr6.eq) goto loc_82907104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r10,r11,19456
	ctx.r10.s64 = ctx.r11.s64 + 19456;
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
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lfs f0,14092(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x829130e0
	ctx.lr = 0x829070D8;
	sub_829130E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82907120
	if (!ctx.cr6.eq) goto loc_82907120;
loc_829070E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829070F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82907104:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// bl 0x829117c8
	ctx.lr = 0x82907114;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82907120:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290d468
	ctx.lr = 0x82907128;
	sub_8290D468(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x829070e4
	if (ctx.cr6.eq) goto loc_829070E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19964
	ctx.r4.s64 = ctx.r11.s64 + 19964;
	// bl 0x829063a8
	ctx.lr = 0x82907144;
	sub_829063A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq cr6,0x829070e4
	if (ctx.cr6.eq) goto loc_829070E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,19944
	ctx.r4.s64 = ctx.r11.s64 + 19944;
	// bl 0x82906de8
	ctx.lr = 0x82907160;
	sub_82906DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// beq cr6,0x829070e4
	if (ctx.cr6.eq) goto loc_829070E4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x829049b0
	ctx.lr = 0x82907178;
	sub_829049B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907188"))) PPC_WEAK_FUNC(sub_82907188);
PPC_FUNC_IMPL(__imp__sub_82907188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82907190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,20088
	ctx.r4.s64 = ctx.r11.s64 + 20088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82907050
	ctx.lr = 0x829071BC;
	sub_82907050(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82907200
	if (!ctx.cr6.eq) goto loc_82907200;
	// li r10,-3
	ctx.r10.s64 = -3;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20076
	ctx.r3.s64 = ctx.r11.s64 + 20076;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x829117c8
	ctx.lr = 0x829071E0;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829071F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82907200:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,20052
	ctx.r5.s64 = ctx.r11.s64 + 20052;
	// bl 0x829065f0
	ctx.lr = 0x82907214;
	sub_829065F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82907258
	if (!ctx.cr6.eq) goto loc_82907258;
	// li r10,-3
	ctx.r10.s64 = -3;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x829117c8
	ctx.lr = 0x82907238;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290724C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82907258:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,20024
	ctx.r5.s64 = ctx.r11.s64 + 20024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82902ca0
	ctx.lr = 0x8290726C;
	sub_82902CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x829072b0
	if (!ctx.cr6.eq) goto loc_829072B0;
	// li r10,-3
	ctx.r10.s64 = -3;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20012
	ctx.r3.s64 = ctx.r11.s64 + 20012;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x829117c8
	ctx.lr = 0x82907290;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829072A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_829072B0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,24(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290b748
	ctx.lr = 0x829072C8;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x8290730c
	if (!ctx.cr6.eq) goto loc_8290730C;
	// li r10,-3
	ctx.r10.s64 = -3;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x829117c8
	ctx.lr = 0x829072EC;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290730C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8290b668
	ctx.lr = 0x82907318;
	sub_8290B668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907328"))) PPC_WEAK_FUNC(sub_82907328);
PPC_FUNC_IMPL(__imp__sub_82907328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20124
	ctx.r11.s64 = ctx.r11.s64 + 20124;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82907360
	if (ctx.cr6.eq) goto loc_82907360;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82912478
	ctx.lr = 0x8290735C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82907360:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907378"))) PPC_WEAK_FUNC(sub_82907378);
PPC_FUNC_IMPL(__imp__sub_82907378) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82907394"))) PPC_WEAK_FUNC(sub_82907394);
PPC_FUNC_IMPL(__imp__sub_82907394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907398"))) PPC_WEAK_FUNC(sub_82907398);
PPC_FUNC_IMPL(__imp__sub_82907398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x829073A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82912f38
	ctx.lr = 0x829073B8;
	sub_82912F38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x829073cc
	if (!ctx.cr6.eq) goto loc_829073CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_829073CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214520
	ctx.lr = 0x829073D4;
	sub_82214520(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// ble cr6,0x829073e8
	if (!ctx.cr6.gt) goto loc_829073E8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_829073E8:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
	// ble cr6,0x82907470
	if (!ctx.cr6.gt) goto loc_82907470;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82907408:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82912c70
	ctx.lr = 0x8290741C;
	sub_82912C70(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// bl 0x82912c70
	ctx.lr = 0x82907448;
	sub_82912C70(ctx, base);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290745c
	if (!ctx.cr6.eq) goto loc_8290745C;
	// stb r27,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r27.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
loc_8290745C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82907408
	if (ctx.cr6.lt) goto loc_82907408;
loc_82907470:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82912498
	ctx.lr = 0x82907478;
	sub_82912498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907488"))) PPC_WEAK_FUNC(sub_82907488);
PPC_FUNC_IMPL(__imp__sub_82907488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82907490;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82907648
	if (ctx.cr6.eq) goto loc_82907648;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829074b8
	if (!ctx.cr6.eq) goto loc_829074B8;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_829074B8:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8290763c
	if (!ctx.cr6.eq) goto loc_8290763C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290755c
	if (!ctx.cr6.eq) goto loc_8290755C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82907398
	ctx.lr = 0x829074DC;
	sub_82907398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82907558
	if (ctx.cr6.eq) goto loc_82907558;
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8290e130
	ctx.lr = 0x829074F4;
	sub_8290E130(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290755c
	if (ctx.cr6.eq) goto loc_8290755C;
	// lhz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82907520
	if (!ctx.cr6.eq) goto loc_82907520;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
	// b 0x82907554
	goto loc_82907554;
loc_82907520:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// sth r29,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r29.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_82907554:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82907558:
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_8290755C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82907610
	if (!ctx.cr6.eq) goto loc_82907610;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829136a0
	ctx.lr = 0x82907570;
	sub_829136A0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x829075f8
	if (ctx.cr6.lt) goto loc_829075F8;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8290757C:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x829075ec
	if (!ctx.cr6.lt) goto loc_829075EC;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82631500
	ctx.lr = 0x829075C4;
	sub_82631500(ctx, base);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829075e0
	if (ctx.cr6.eq) goto loc_829075E0;
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829075ec
	if (ctx.cr6.eq) goto loc_829075EC;
loc_829075E0:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
loc_829075EC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8290757c
	if (!ctx.cr6.eq) goto loc_8290757C;
loc_829075F8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82631338
	ctx.lr = 0x8290760C;
	sub_82631338(ctx, base);
	// stb r29,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r29.u8);
loc_82907610:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82907648
	if (!ctx.cr6.eq) goto loc_82907648;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829132a0
	ctx.lr = 0x82907624;
	sub_829132A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82907648
	if (!ctx.cr6.eq) goto loc_82907648;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290763C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82907648
	if (!ctx.cr6.eq) goto loc_82907648;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82907648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907650"))) PPC_WEAK_FUNC(sub_82907650);
PPC_FUNC_IMPL(__imp__sub_82907650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82913dd8
	ctx.lr = 0x82907678;
	sub_82913DD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x829076a0
	if (ctx.cr6.eq) goto loc_829076A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290769C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
loc_829076A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829076B8"))) PPC_WEAK_FUNC(sub_829076B8);
PPC_FUNC_IMPL(__imp__sub_829076B8) {
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
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829076f0
	if (ctx.cr6.eq) goto loc_829076F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829076F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829076F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82907720"))) PPC_WEAK_FUNC(sub_82907720);
PPC_FUNC_IMPL(__imp__sub_82907720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82907728;
	__savegprlr_27(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82907748
	if (!ctx.cr6.eq) goto loc_82907748;
loc_8290773C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82907748:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82907764:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290777C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82907764
	if (!ctx.cr6.eq) goto loc_82907764;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82912f38
	ctx.lr = 0x82907794;
	sub_82912F38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8290773c
	if (ctx.cr6.eq) goto loc_8290773C;
	// bl 0x82214520
	ctx.lr = 0x829077A4;
	sub_82214520(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
loc_829077BC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82912c70
	ctx.lr = 0x829077D0;
	sub_82912C70(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// bl 0x82912c70
	ctx.lr = 0x829077FC;
	sub_82912C70(ctx, base);
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82907810
	if (!ctx.cr6.eq) goto loc_82907810;
	// stb r27,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r27.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
loc_82907810:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829077bc
	if (ctx.cr6.lt) goto loc_829077BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82912498
	ctx.lr = 0x8290782C;
	sub_82912498(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290784C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907858"))) PPC_WEAK_FUNC(sub_82907858);
PPC_FUNC_IMPL(__imp__sub_82907858) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82907974
	if (ctx.cr6.eq) goto loc_82907974;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82907890
	if (!ctx.cr6.eq) goto loc_82907890;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82907890:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82907968
	if (!ctx.cr6.eq) goto loc_82907968;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829078c0
	if (!ctx.cr6.eq) goto loc_829078C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82907720
	ctx.lr = 0x829078B4;
	sub_82907720(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x829078c0
	if (!ctx.cr6.eq) goto loc_829078C0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_829078C0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82907940
	if (!ctx.cr6.eq) goto loc_82907940;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82907974
	if (ctx.cr6.eq) goto loc_82907974;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,48000
	ctx.r5.u64 = ctx.r5.u64 | 48000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82631338
	ctx.lr = 0x829078F0;
	sub_82631338(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82913228
	ctx.lr = 0x8290793C;
	sub_82913228(ctx, base);
	// stb r30,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r30.u8);
loc_82907940:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82907974
	if (!ctx.cr6.eq) goto loc_82907974;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829132a0
	ctx.lr = 0x82907954;
	sub_829132A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82907974
	if (!ctx.cr6.eq) goto loc_82907974;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82907974
	goto loc_82907974;
loc_82907968:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82907974
	if (!ctx.cr6.eq) goto loc_82907974;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82907974:
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

__attribute__((alias("__imp__sub_82907990"))) PPC_WEAK_FUNC(sub_82907990);
PPC_FUNC_IMPL(__imp__sub_82907990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829079B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829079CC;
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
}

__attribute__((alias("__imp__sub_829079E0"))) PPC_WEAK_FUNC(sub_829079E0);
PPC_FUNC_IMPL(__imp__sub_829079E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e2b0
	sub_8290E2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829079E8"))) PPC_WEAK_FUNC(sub_829079E8);
PPC_FUNC_IMPL(__imp__sub_829079E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e2c0
	sub_8290E2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829079F0"))) PPC_WEAK_FUNC(sub_829079F0);
PPC_FUNC_IMPL(__imp__sub_829079F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e2e0
	sub_8290E2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829079F8"))) PPC_WEAK_FUNC(sub_829079F8);
PPC_FUNC_IMPL(__imp__sub_829079F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e348
	sub_8290E348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A00"))) PPC_WEAK_FUNC(sub_82907A00);
PPC_FUNC_IMPL(__imp__sub_82907A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e318
	sub_8290E318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A08"))) PPC_WEAK_FUNC(sub_82907A08);
PPC_FUNC_IMPL(__imp__sub_82907A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e330
	sub_8290E330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A10"))) PPC_WEAK_FUNC(sub_82907A10);
PPC_FUNC_IMPL(__imp__sub_82907A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e2d0
	sub_8290E2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A18"))) PPC_WEAK_FUNC(sub_82907A18);
PPC_FUNC_IMPL(__imp__sub_82907A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e360
	sub_8290E360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A20"))) PPC_WEAK_FUNC(sub_82907A20);
PPC_FUNC_IMPL(__imp__sub_82907A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e370
	sub_8290E370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A28"))) PPC_WEAK_FUNC(sub_82907A28);
PPC_FUNC_IMPL(__imp__sub_82907A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e3a0
	sub_8290E3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A30"))) PPC_WEAK_FUNC(sub_82907A30);
PPC_FUNC_IMPL(__imp__sub_82907A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e3b0
	sub_8290E3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907A38"))) PPC_WEAK_FUNC(sub_82907A38);
PPC_FUNC_IMPL(__imp__sub_82907A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82907A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82907a68
	if (ctx.cr6.eq) goto loc_82907A68;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82907a78
	if (!ctx.cr6.eq) goto loc_82907A78;
loc_82907A68:
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stb r30,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r30.u8);
	// stb r30,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r30.u8);
loc_82907A78:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r29,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r29.u8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e248
	ctx.lr = 0x82907A88;
	sub_8290E248(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907AA0"))) PPC_WEAK_FUNC(sub_82907AA0);
PPC_FUNC_IMPL(__imp__sub_82907AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e258
	ctx.lr = 0x82907ABC;
	sub_8290E258(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_82907AD8"))) PPC_WEAK_FUNC(sub_82907AD8);
PPC_FUNC_IMPL(__imp__sub_82907AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e268
	ctx.lr = 0x82907AF4;
	sub_8290E268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_82907B10"))) PPC_WEAK_FUNC(sub_82907B10);
PPC_FUNC_IMPL(__imp__sub_82907B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8290e278
	sub_8290E278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907B18"))) PPC_WEAK_FUNC(sub_82907B18);
PPC_FUNC_IMPL(__imp__sub_82907B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82907c0c
	if (!ctx.cr6.eq) goto loc_82907C0C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290d040
	ctx.lr = 0x82907B58;
	sub_8290D040(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82907bb8
	if (!ctx.cr6.eq) goto loc_82907BB8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e3c0
	ctx.lr = 0x82907B74;
	sub_8290E3C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82907bb8
	if (!ctx.cr6.eq) goto loc_82907BB8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e3d0
	ctx.lr = 0x82907B84;
	sub_8290E3D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82907bb8
	if (!ctx.cr6.eq) goto loc_82907BB8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e268
	ctx.lr = 0x82907B9C;
	sub_8290E268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82907BB8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8290e500
	ctx.lr = 0x82907BC0;
	sub_8290E500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82907c0c
	if (!ctx.cr6.eq) goto loc_82907C0C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82907bf8
	if (!ctx.cr6.eq) goto loc_82907BF8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82907c0c
	goto loc_82907C0C;
loc_82907BF8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82907c0c
	if (!ctx.cr6.eq) goto loc_82907C0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82907C0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907C28"))) PPC_WEAK_FUNC(sub_82907C28);
PPC_FUNC_IMPL(__imp__sub_82907C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82907c54
	if (ctx.cr6.eq) goto loc_82907C54;
	// bl 0x829be770
	ctx.lr = 0x82907C4C;
	sub_829BE770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82907C54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907C68"))) PPC_WEAK_FUNC(sub_82907C68);
PPC_FUNC_IMPL(__imp__sub_82907C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82907ca0
	if (ctx.cr6.eq) goto loc_82907CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82907CA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907CB8"))) PPC_WEAK_FUNC(sub_82907CB8);
PPC_FUNC_IMPL(__imp__sub_82907CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82913b68
	sub_82913B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907CD0"))) PPC_WEAK_FUNC(sub_82907CD0);
PPC_FUNC_IMPL(__imp__sub_82907CD0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,144
	ctx.r5.s64 = 144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,20256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82913f10
	ctx.lr = 0x82907D28;
	sub_82913F10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907D38"))) PPC_WEAK_FUNC(sub_82907D38);
PPC_FUNC_IMPL(__imp__sub_82907D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,20272
	ctx.r5.s64 = ctx.r11.s64 + 20272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82912420
	ctx.lr = 0x82907D64;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82907d90
	if (ctx.cr6.eq) goto loc_82907D90;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,20136
	ctx.r11.s64 = ctx.r11.s64 + 20136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82907D90:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20260
	ctx.r3.s64 = ctx.r11.s64 + 20260;
	// bl 0x829117c8
	ctx.lr = 0x82907DA0;
	sub_829117C8(ctx, base);
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

__attribute__((alias("__imp__sub_82907DB8"))) PPC_WEAK_FUNC(sub_82907DB8);
PPC_FUNC_IMPL(__imp__sub_82907DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20124
	ctx.r11.s64 = ctx.r11.s64 + 20124;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82907df0
	if (ctx.cr6.eq) goto loc_82907DF0;
	// li r4,184
	ctx.r4.s64 = 184;
	// bl 0x82912478
	ctx.lr = 0x82907DEC;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82907DF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907E08"))) PPC_WEAK_FUNC(sub_82907E08);
PPC_FUNC_IMPL(__imp__sub_82907E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,20296
	ctx.r5.s64 = ctx.r11.s64 + 20296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82912420
	ctx.lr = 0x82907E34;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82907e68
	if (ctx.cr6.eq) goto loc_82907E68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,20148
	ctx.r11.s64 = ctx.r11.s64 + 20148;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82907E68:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20284
	ctx.r3.s64 = ctx.r11.s64 + 20284;
	// bl 0x829117c8
	ctx.lr = 0x82907E78;
	sub_829117C8(ctx, base);
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

__attribute__((alias("__imp__sub_82907E90"))) PPC_WEAK_FUNC(sub_82907E90);
PPC_FUNC_IMPL(__imp__sub_82907E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20124
	ctx.r11.s64 = ctx.r11.s64 + 20124;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82907ec8
	if (ctx.cr6.eq) goto loc_82907EC8;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x82912478
	ctx.lr = 0x82907EC4;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82907EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907EE0"))) PPC_WEAK_FUNC(sub_82907EE0);
PPC_FUNC_IMPL(__imp__sub_82907EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82907f18
	if (ctx.cr6.eq) goto loc_82907F18;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82912478
	ctx.lr = 0x82907F14;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82907F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907F30"))) PPC_WEAK_FUNC(sub_82907F30);
PPC_FUNC_IMPL(__imp__sub_82907F30) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82907f88
	if (ctx.cr6.eq) goto loc_82907F88;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82907fac
	if (!ctx.cr6.eq) goto loc_82907FAC;
loc_82907F80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82907F88:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F94;
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
loc_82907FAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8290d1d8
	ctx.lr = 0x82907FB8;
	sub_8290D1D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x82907f80
	if (ctx.cr6.eq) goto loc_82907F80;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8290e298
	ctx.lr = 0x82907FD0;
	sub_8290E298(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908000"))) PPC_WEAK_FUNC(sub_82908000);
PPC_FUNC_IMPL(__imp__sub_82908000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82908034
	if (ctx.cr6.eq) goto loc_82908034;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8290d270
	ctx.lr = 0x8290802C;
	sub_8290D270(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82908034:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290805C;
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
}

__attribute__((alias("__imp__sub_82908070"))) PPC_WEAK_FUNC(sub_82908070);
PPC_FUNC_IMPL(__imp__sub_82908070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82908078;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r11,20324
	ctx.r5.s64 = ctx.r11.s64 + 20324;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82912420
	ctx.lr = 0x829080B0;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82908138
	if (ctx.cr6.eq) goto loc_82908138;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r11,20192
	ctx.r10.s64 = ctx.r11.s64 + 20192;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
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
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290810C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290812c
	if (!ctx.cr6.eq) goto loc_8290812C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290812C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82908138:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20312
	ctx.r3.s64 = ctx.r11.s64 + 20312;
	// bl 0x829117c8
	ctx.lr = 0x82908148;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908158"))) PPC_WEAK_FUNC(sub_82908158);
PPC_FUNC_IMPL(__imp__sub_82908158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82908190
	if (ctx.cr6.eq) goto loc_82908190;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x82912478
	ctx.lr = 0x8290818C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82908190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829081A8"))) PPC_WEAK_FUNC(sub_829081A8);
PPC_FUNC_IMPL(__imp__sub_829081A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82907d38
	ctx.lr = 0x829081C8;
	sub_82907D38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829081e4
	if (!ctx.cr6.eq) goto loc_829081E4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_829081E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908208"))) PPC_WEAK_FUNC(sub_82908208);
PPC_FUNC_IMPL(__imp__sub_82908208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82908210;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r11,20348
	ctx.r5.s64 = ctx.r11.s64 + 20348;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82912420
	ctx.lr = 0x82908244;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829082c8
	if (ctx.cr6.eq) goto loc_829082C8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r11,20224
	ctx.r10.s64 = ctx.r11.s64 + 20224;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
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
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290829C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x829082bc
	if (!ctx.cr6.eq) goto loc_829082BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829082B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829082BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_829082C8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// bl 0x829117c8
	ctx.lr = 0x829082D8;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829082E8"))) PPC_WEAK_FUNC(sub_829082E8);
PPC_FUNC_IMPL(__imp__sub_829082E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82908320
	if (ctx.cr6.eq) goto loc_82908320;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82912478
	ctx.lr = 0x8290831C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82908320:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908338"))) PPC_WEAK_FUNC(sub_82908338);
PPC_FUNC_IMPL(__imp__sub_82908338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82907e08
	ctx.lr = 0x8290835C;
	sub_82907E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82908378
	if (ctx.cr6.eq) goto loc_82908378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82907650
	ctx.lr = 0x82908374;
	sub_82907650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82908378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908390"))) PPC_WEAK_FUNC(sub_82908390);
PPC_FUNC_IMPL(__imp__sub_82908390) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x829083a8
	if (ctx.cr6.eq) goto loc_829083A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_829083A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829083B0"))) PPC_WEAK_FUNC(sub_829083B0);
PPC_FUNC_IMPL(__imp__sub_829083B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x829083c8
	if (ctx.cr6.eq) goto loc_829083C8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_829083C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829083D0"))) PPC_WEAK_FUNC(sub_829083D0);
PPC_FUNC_IMPL(__imp__sub_829083D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x829083e8
	if (ctx.cr6.eq) goto loc_829083E8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_829083E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829083F0"))) PPC_WEAK_FUNC(sub_829083F0);
PPC_FUNC_IMPL(__imp__sub_829083F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f6,160(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f1.f64));
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f31.f64));
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f30.f64));
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lfs f7,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908510"))) PPC_WEAK_FUNC(sub_82908510);
PPC_FUNC_IMPL(__imp__sub_82908510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82908544
	if (ctx.cr6.eq) goto loc_82908544;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82912370
	ctx.lr = 0x82908538;
	sub_82912370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82908548
	goto loc_82908548;
loc_82908544:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82908548:
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

__attribute__((alias("__imp__sub_82908560"))) PPC_WEAK_FUNC(sub_82908560);
PPC_FUNC_IMPL(__imp__sub_82908560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82908578
	if (ctx.cr6.gt) goto loc_82908578;
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82908578:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82908598
	if (ctx.cr6.lt) goto loc_82908598;
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82908598:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x829085f0
	if (ctx.cr6.lt) goto loc_829085F0;
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
loc_829085AC:
	// lfs f0,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82908634
	if (!ctx.cr6.gt) goto loc_82908634;
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82908620
	if (!ctx.cr6.gt) goto loc_82908620;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82908628
	if (!ctx.cr6.gt) goto loc_82908628;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82908630
	if (!ctx.cr6.gt) goto loc_82908630;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r9,-3
	ctx.r7.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x829085ac
	if (ctx.cr6.lt) goto loc_829085AC;
loc_829085F0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82908634
	if (!ctx.cr6.lt) goto loc_82908634;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82908600:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82908634
	if (!ctx.cr6.gt) goto loc_82908634;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82908600
	if (ctx.cr6.lt) goto loc_82908600;
	// b 0x82908634
	goto loc_82908634;
loc_82908620:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82908634
	goto loc_82908634;
loc_82908628:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82908634
	goto loc_82908634;
loc_82908630:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82908634:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908668"))) PPC_WEAK_FUNC(sub_82908668);
PPC_FUNC_IMPL(__imp__sub_82908668) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82908678:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82908678
	if (!ctx.cr6.eq) goto loc_82908678;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829086d4
	if (ctx.cr6.eq) goto loc_829086D4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_829086B0:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,58
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 58, ctx.xer);
	// beq cr6,0x829086d4
	if (ctx.cr6.eq) goto loc_829086D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r7,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829086b0
	if (ctx.cr6.lt) goto loc_829086B0;
loc_829086D4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stbx r31,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r31.u8);
	// bge cr6,0x829086f8
	if (!ctx.cr6.lt) goto loc_829086F8;
loc_829086E0:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x829086f8
	if (!ctx.cr6.eq) goto loc_829086F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829086e0
	if (ctx.cr6.lt) goto loc_829086E0;
loc_829086F8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82908724
	if (!ctx.cr6.lt) goto loc_82908724;
loc_82908704:
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,58
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 58, ctx.xer);
	// beq cr6,0x82908724
	if (ctx.cr6.eq) goto loc_82908724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82908704
	if (ctx.cr6.lt) goto loc_82908704;
loc_82908724:
	// stbx r31,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r31.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908738"))) PPC_WEAK_FUNC(sub_82908738);
PPC_FUNC_IMPL(__imp__sub_82908738) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829087b4
	if (ctx.cr6.eq) goto loc_829087B4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829087b4
	if (ctx.cr6.eq) goto loc_829087B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82908754:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82908754
	if (!ctx.cr6.eq) goto loc_82908754;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82908798
	if (ctx.cr6.eq) goto loc_82908798;
loc_8290877C:
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x8290878c
	if (!ctx.cr6.eq) goto loc_8290878C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8290878C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8290877c
	if (ctx.cr6.lt) goto loc_8290877C;
loc_82908798:
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x829087ac
	if (ctx.cr6.eq) goto loc_829087AC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_829087AC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_829087B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829087C0"))) PPC_WEAK_FUNC(sub_829087C0);
PPC_FUNC_IMPL(__imp__sub_829087C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829087C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829087c8
	if (!ctx.cr6.eq) goto loc_829087C8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8290881c
	if (ctx.cr6.eq) goto loc_8290881C;
loc_829087F8:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290881c
	if (ctx.cr6.eq) goto loc_8290881C;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82908810
	if (!ctx.cr6.eq) goto loc_82908810;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82908810:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x829087f8
	if (ctx.cr6.lt) goto loc_829087F8;
loc_8290881C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82908848
	if (!ctx.cr6.lt) goto loc_82908848;
loc_82908828:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82908848
	if (ctx.cr6.eq) goto loc_82908848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82908828
	if (ctx.cr6.lt) goto loc_82908828;
loc_82908848:
	// stbx r7,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908850"))) PPC_WEAK_FUNC(sub_82908850);
PPC_FUNC_IMPL(__imp__sub_82908850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82908870
	if (!ctx.cr6.eq) goto loc_82908870;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_82908870:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,4
	ctx.r9.s64 = 4;
loc_829088B0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x829088e0
	if (!ctx.cr6.gt) goto loc_829088E0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_829088E0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829088f0
	if (!ctx.cr6.lt) goto loc_829088F0;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_829088F0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829088b0
	if (ctx.cr6.lt) goto loc_829088B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908908"))) PPC_WEAK_FUNC(sub_82908908);
PPC_FUNC_IMPL(__imp__sub_82908908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290892C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908944;
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
}

__attribute__((alias("__imp__sub_82908958"))) PPC_WEAK_FUNC(sub_82908958);
PPC_FUNC_IMPL(__imp__sub_82908958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f0,f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829089d8
	if (!ctx.cr6.gt) goto loc_829089D8;
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fadds f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x82908998
	if (ctx.cr6.gt) goto loc_82908998;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82908998:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x829089ac
	if (ctx.cr6.lt) goto loc_829089AC;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_829089AC:
	// bl 0x826e0d50
	ctx.lr = 0x829089B0;
	sub_826E0D50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,5456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f1,f13,f0,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
loc_829089D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829089F0"))) PPC_WEAK_FUNC(sub_829089F0);
PPC_FUNC_IMPL(__imp__sub_829089F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82908A20:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82908a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82908A20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82908cac
	if (!ctx.cr6.gt) goto loc_82908CAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f9,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f9.f64 = double(temp.f32);
loc_82908A4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f8.f64;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x82908560
	ctx.lr = 0x82908A5C;
	sub_82908560(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x82908c64
	if (ctx.cr6.gt) goto loc_82908C64;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// addi r12,r12,-30080
	ctx.r12.s64 = ctx.r12.s64 + -30080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82908ADC;
	case 1:
		goto loc_82908AEC;
	case 2:
		goto loc_82908AFC;
	case 3:
		goto loc_82908B2C;
	case 4:
		goto loc_82908B0C;
	case 5:
		goto loc_82908B40;
	case 6:
		goto loc_82908B4C;
	case 7:
		goto loc_82908B58;
	case 8:
		goto loc_82908B64;
	case 9:
		goto loc_82908B70;
	case 10:
		goto loc_82908B7C;
	case 11:
		goto loc_82908B88;
	case 12:
		goto loc_82908B94;
	case 13:
		goto loc_82908BA0;
	case 14:
		goto loc_82908BB4;
	case 15:
		goto loc_82908BC8;
	case 16:
		goto loc_82908BDC;
	case 17:
		goto loc_82908BF0;
	case 18:
		goto loc_82908C04;
	case 19:
		goto loc_82908C18;
	case 20:
		goto loc_82908C2C;
	case 21:
		goto loc_82908C40;
	case 22:
		goto loc_82908C54;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-29988(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29988);
	// lwz r20,-29972(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29972);
	// lwz r20,-29956(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29956);
	// lwz r20,-29908(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29908);
	// lwz r20,-29940(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29940);
	// lwz r20,-29888(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29888);
	// lwz r20,-29876(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29876);
	// lwz r20,-29864(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29864);
	// lwz r20,-29852(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29852);
	// lwz r20,-29840(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29840);
	// lwz r20,-29828(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29828);
	// lwz r20,-29816(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29816);
	// lwz r20,-29804(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29804);
	// lwz r20,-29792(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29792);
	// lwz r20,-29772(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29772);
	// lwz r20,-29752(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29752);
	// lwz r20,-29732(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29732);
	// lwz r20,-29712(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29712);
	// lwz r20,-29692(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29692);
	// lwz r20,-29672(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29672);
	// lwz r20,-29652(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29652);
	// lwz r20,-29632(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29632);
	// lwz r20,-29612(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -29612);
loc_82908ADC:
	// lfs f0,32(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908AEC:
	// lfs f0,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,36(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908AFC:
	// lfs f0,40(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,40(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B0C:
	// lfs f12,112(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f13,116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,112(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 112, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B2C:
	// lfs f13,104(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,104(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 104, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B40:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B4C:
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B58:
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B64:
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B70:
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B7C:
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B88:
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908B94:
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82908c64
	goto loc_82908C64;
loc_82908BA0:
	// lfs f13,232(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,232(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 232, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908BB4:
	// lfs f13,236(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,268(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,236(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 236, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908BC8:
	// lfs f13,240(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,272(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,240(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 240, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908BDC:
	// lfs f13,244(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,276(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,244(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 244, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908BF0:
	// lfs f13,248(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,280(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,248(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 248, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908C04:
	// lfs f13,252(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,284(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,252(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 252, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908C18:
	// lfs f13,256(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,288(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,256(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 256, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908C2C:
	// lfs f13,260(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,292(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,260(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 260, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908C40:
	// lfs f13,340(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,344(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,340(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 340, temp.u32);
	// b 0x82908c64
	goto loc_82908C64;
loc_82908C54:
	// lfs f13,348(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,352(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,348(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 348, temp.u32);
loc_82908C64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82908a4c
	if (ctx.cr6.lt) goto loc_82908A4C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82908cac
	if (!ctx.cr6.eq) goto loc_82908CAC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,16256
	ctx.r10.s64 = 1065353216;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82908C90:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82908c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82908C90;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x829083f0
	ctx.lr = 0x82908CAC;
	sub_829083F0(ctx, base);
loc_82908CAC:
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

__attribute__((alias("__imp__sub_82908CC8"))) PPC_WEAK_FUNC(sub_82908CC8);
PPC_FUNC_IMPL(__imp__sub_82908CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82908CD0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82912f38
	ctx.lr = 0x82908CF0;
	sub_82912F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82908d3c
	if (!ctx.cr6.eq) goto loc_82908D3C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// bl 0x829117c8
	ctx.lr = 0x82908D0C;
	sub_829117C8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82908d28
	if (ctx.cr6.eq) goto loc_82908D28;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82912370
	ctx.lr = 0x82908D24;
	sub_82912370(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82908D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82908D3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82214520
	ctx.lr = 0x82908D44;
	sub_82214520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82912498
	ctx.lr = 0x82908D54;
	sub_82912498(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,20448
	ctx.r5.s64 = ctx.r11.s64 + 20448;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82912310
	ctx.lr = 0x82908D70;
	sub_82912310(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82908da4
	if (!ctx.cr6.eq) goto loc_82908DA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20436
	ctx.r3.s64 = ctx.r11.s64 + 20436;
	// bl 0x829117c8
	ctx.lr = 0x82908D8C;
	sub_829117C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908510
	ctx.lr = 0x82908D94;
	sub_82908510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82908DA4:
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82912f38
	ctx.lr = 0x82908DB4;
	sub_82912F38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82908de8
	if (!ctx.cr6.eq) goto loc_82908DE8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20424
	ctx.r3.s64 = ctx.r11.s64 + 20424;
	// bl 0x829117c8
	ctx.lr = 0x82908DD0;
	sub_829117C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908510
	ctx.lr = 0x82908DD8;
	sub_82908510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82908DE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82908ea0
	if (!ctx.cr6.gt) goto loc_82908EA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-17156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17156);
	ctx.f31.f64 = double(temp.f32);
loc_82908E04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82912600
	ctx.lr = 0x82908E14;
	sub_82912600(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82912600
	ctx.lr = 0x82908E28;
	sub_82912600(ctx, base);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfsx f0,r28,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82908e04
	if (ctx.cr6.lt) goto loc_82908E04;
loc_82908EA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82912498
	ctx.lr = 0x82908EA8;
	sub_82912498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908EB8"))) PPC_WEAK_FUNC(sub_82908EB8);
PPC_FUNC_IMPL(__imp__sub_82908EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20376
	ctx.r11.s64 = ctx.r11.s64 + 20376;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82908ef0
	if (ctx.cr6.eq) goto loc_82908EF0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82912478
	ctx.lr = 0x82908EEC;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82908EF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908F08"))) PPC_WEAK_FUNC(sub_82908F08);
PPC_FUNC_IMPL(__imp__sub_82908F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82908F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r11,20488
	ctx.r5.s64 = ctx.r11.s64 + 20488;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82912420
	ctx.lr = 0x82908F34;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82908fc8
	if (ctx.cr6.eq) goto loc_82908FC8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,20376
	ctx.r11.s64 = ctx.r11.s64 + 20376;
	// addi r10,r10,20400
	ctx.r10.s64 = ctx.r10.s64 + 20400;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82908fc0
	if (!ctx.cr6.eq) goto loc_82908FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82908FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82908FC8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20476
	ctx.r3.s64 = ctx.r11.s64 + 20476;
	// bl 0x829117c8
	ctx.lr = 0x82908FD8;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908FE8"))) PPC_WEAK_FUNC(sub_82908FE8);
PPC_FUNC_IMPL(__imp__sub_82908FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82908FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909088
	if (ctx.cr6.eq) goto loc_82909088;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8290906c
	if (!ctx.cr6.gt) goto loc_8290906C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8290901C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82909058
	if (ctx.cr6.eq) goto loc_82909058;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82909048
	if (ctx.cr6.eq) goto loc_82909048;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82912370
	ctx.lr = 0x82909044;
	sub_82912370(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82909048:
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82912478
	ctx.lr = 0x82909058;
	sub_82912478(ctx, base);
loc_82909058:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290901c
	if (ctx.cr6.lt) goto loc_8290901C;
loc_8290906C:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82912370
	ctx.lr = 0x82909078;
	sub_82912370(ctx, base);
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82909088:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909098"))) PPC_WEAK_FUNC(sub_82909098);
PPC_FUNC_IMPL(__imp__sub_82909098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x829090A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,20512
	ctx.r5.s64 = ctx.r11.s64 + 20512;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82912420
	ctx.lr = 0x829090C4;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82909110
	if (ctx.cr6.eq) goto loc_82909110;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82908cc8
	ctx.lr = 0x829090F0;
	sub_82908CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82909108
	if (!ctx.cr6.eq) goto loc_82909108;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82912478
	ctx.lr = 0x82909104;
	sub_82912478(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82909108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82909110:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20500
	ctx.r3.s64 = ctx.r11.s64 + 20500;
	// bl 0x829117c8
	ctx.lr = 0x82909120;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909130"))) PPC_WEAK_FUNC(sub_82909130);
PPC_FUNC_IMPL(__imp__sub_82909130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82909138;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912f38
	ctx.lr = 0x82909154;
	sub_82912F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82909190
	if (!ctx.cr6.eq) goto loc_82909190;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20564
	ctx.r3.s64 = ctx.r11.s64 + 20564;
	// bl 0x829117c8
	ctx.lr = 0x82909170;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82909190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82214520
	ctx.lr = 0x82909198;
	sub_82214520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82912498
	ctx.lr = 0x829091A8;
	sub_82912498(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,20512
	ctx.r5.s64 = ctx.r11.s64 + 20512;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82912310
	ctx.lr = 0x829091C4;
	sub_82912310(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x82909200
	if (!ctx.cr6.eq) goto loc_82909200;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// bl 0x829117c8
	ctx.lr = 0x829091E0;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829091F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82909200:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82909234
	if (!ctx.cr6.gt) goto loc_82909234;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82909218:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82909218
	if (ctx.cr6.lt) goto loc_82909218;
loc_82909234:
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912f38
	ctx.lr = 0x82909244;
	sub_82912F38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82909280
	if (!ctx.cr6.eq) goto loc_82909280;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20540
	ctx.r3.s64 = ctx.r11.s64 + 20540;
	// bl 0x829117c8
	ctx.lr = 0x82909260;
	sub_829117C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82909280:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82909358
	if (!ctx.cr6.gt) goto loc_82909358;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82909290:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829124f8
	ctx.lr = 0x829092A0;
	sub_829124F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82912850
	ctx.lr = 0x829092BC;
	sub_82912850(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912850
	ctx.lr = 0x829092D0;
	sub_82912850(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912850
	ctx.lr = 0x829092E4;
	sub_82912850(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912850
	ctx.lr = 0x829092F8;
	sub_82912850(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912c70
	ctx.lr = 0x82909310;
	sub_82912C70(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82909098
	ctx.lr = 0x8290932C;
	sub_82909098(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290936c
	if (ctx.cr6.eq) goto loc_8290936C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909290
	if (ctx.cr6.lt) goto loc_82909290;
loc_82909358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912498
	ctx.lr = 0x82909360;
	sub_82912498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290936C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// bl 0x829117c8
	ctx.lr = 0x8290937C;
	sub_829117C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82912498
	ctx.lr = 0x82909384;
	sub_82912498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829093A8"))) PPC_WEAK_FUNC(sub_829093A8);
PPC_FUNC_IMPL(__imp__sub_829093A8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f13,-14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14604);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f0,-14636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x829093ec
	if (!ctx.cr6.lt) goto loc_829093EC;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x829093f8
	goto loc_829093F8;
loc_829093EC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x829093f8
	if (!ctx.cr6.gt) goto loc_829093F8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_829093F8:
	// fadds f31,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f30,20588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20588);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// bl 0x826e0668
	ctx.lr = 0x8290940C;
	sub_826E0668(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x826e0590
	ctx.lr = 0x82909420;
	sub_826E0590(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_82909448"))) PPC_WEAK_FUNC(sub_82909448);
PPC_FUNC_IMPL(__imp__sub_82909448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82909450;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfb84
	ctx.lr = 0x82909458;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfd f2,2136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2136);
	// bl 0x826e4738
	ctx.lr = 0x82909470;
	sub_826E4738(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f0,-12556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82909490
	if (!ctx.cr6.lt) goto loc_82909490;
	// fadds f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
loc_82909490:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x829094a4
	if (!ctx.cr6.gt) goto loc_829094A4;
	// fsubs f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
loc_829094A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x829094d8
	if (!ctx.cr6.gt) goto loc_829094D8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_829094C0:
	// stfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829094c0
	if (ctx.cr6.lt) goto loc_829094C0;
loc_829094D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f29,-14636(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14636);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82909554
	if (ctx.cr6.eq) goto loc_82909554;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82909500:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x82909520
	if (ctx.cr6.lt) goto loc_82909520;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82909534
	if (ctx.cr6.lt) goto loc_82909534;
loc_82909520:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82909500
	if (ctx.cr6.lt) goto loc_82909500;
	// b 0x82909554
	goto loc_82909554;
loc_82909534:
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x829093a8
	ctx.lr = 0x82909554;
	sub_829093A8(ctx, base);
loc_82909554:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829095f0
	if (!ctx.cr6.eq) goto loc_829095F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x8290957c
	if (!ctx.cr6.lt) goto loc_8290957C;
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
loc_8290957C:
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,-14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14604);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829095b4
	if (!ctx.cr6.lt) goto loc_829095B4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x829095c0
	goto loc_829095C0;
loc_829095B4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x829095c0
	if (!ctx.cr6.gt) goto loc_829095C0;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_829095C0:
	// fadds f31,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f30,20588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20588);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// bl 0x826e0668
	ctx.lr = 0x829095D4;
	sub_826E0668(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// bl 0x826e0590
	ctx.lr = 0x829095E8;
	sub_826E0590(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_829095F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfbd0
	ctx.lr = 0x829095FC;
	__restfpr_27(ctx, base);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909600"))) PPC_WEAK_FUNC(sub_82909600);
PPC_FUNC_IMPL(__imp__sub_82909600) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x8290964c
	if (!ctx.cr6.gt) goto loc_8290964C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
loc_8290964C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8290966c
	if (!ctx.cr6.gt) goto loc_8290966C;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// b 0x82909678
	goto loc_82909678;
loc_8290966C:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82909678
	if (!ctx.cr6.lt) goto loc_82909678;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_82909678:
	// fsubs f12,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f0,8232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x8290969C;
	sub_826E0668(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0590
	ctx.lr = 0x829096AC;
	sub_826E0590(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82909448
	ctx.lr = 0x829096C4;
	sub_82909448(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82909448
	ctx.lr = 0x829096D4;
	sub_82909448(ctx, base);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f12,f30,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f10,f30,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f8,f30,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f7.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
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

__attribute__((alias("__imp__sub_82909748"))) PPC_WEAK_FUNC(sub_82909748);
PPC_FUNC_IMPL(__imp__sub_82909748) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829097ac
	if (ctx.cr6.eq) goto loc_829097AC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8290979c
	if (!ctx.cr6.eq) goto loc_8290979C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8290979c
	if (!ctx.cr6.eq) goto loc_8290979C;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8290979C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// bl 0x829117a8
	ctx.lr = 0x829097A8;
	sub_829117A8(ctx, base);
loc_829097A8:
	// b 0x829097a8
	goto loc_829097A8;
loc_829097AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829097cc
	if (ctx.cr6.eq) goto loc_829097CC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// bl 0x829117a8
	ctx.lr = 0x829097C8;
	sub_829117A8(ctx, base);
loc_829097C8:
	// b 0x829097c8
	goto loc_829097C8;
loc_829097CC:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829097E0"))) PPC_WEAK_FUNC(sub_829097E0);
PPC_FUNC_IMPL(__imp__sub_829097E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290980C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82907a38
	ctx.lr = 0x82909814;
	sub_82907A38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909834;
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
}

__attribute__((alias("__imp__sub_82909848"))) PPC_WEAK_FUNC(sub_82909848);
PPC_FUNC_IMPL(__imp__sub_82909848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82907ad8
	ctx.lr = 0x8290987C;
	sub_82907AD8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290989C;
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
}

__attribute__((alias("__imp__sub_829098B0"))) PPC_WEAK_FUNC(sub_829098B0);
PPC_FUNC_IMPL(__imp__sub_829098B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x829098B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829098e0
	if (!ctx.cr6.eq) goto loc_829098E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_829098E0:
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290997c
	if (ctx.cr6.eq) goto loc_8290997C;
loc_829098F0:
	// lwz r31,136(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a30
	ctx.lr = 0x829098FC;
	sub_82907A30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82909904:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82909928
	if (ctx.cr6.eq) goto loc_82909928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82909904
	if (ctx.cr6.eq) goto loc_82909904;
loc_82909928:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82909970
	if (!ctx.cr6.eq) goto loc_82909970;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82909970
	if (!ctx.cr6.eq) goto loc_82909970;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82909960
	if (ctx.cr6.eq) goto loc_82909960;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a28
	ctx.lr = 0x8290994C;
	sub_82907A28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82907a28
	ctx.lr = 0x82909958;
	sub_82907A28(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82909964
	if (!ctx.cr6.lt) goto loc_82909964;
loc_82909960:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82909964:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82909970:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x829098f0
	if (!ctx.cr6.eq) goto loc_829098F0;
loc_8290997C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909988"))) PPC_WEAK_FUNC(sub_82909988);
PPC_FUNC_IMPL(__imp__sub_82909988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829099AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829099C4;
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
}

__attribute__((alias("__imp__sub_829099D8"))) PPC_WEAK_FUNC(sub_829099D8);
PPC_FUNC_IMPL(__imp__sub_829099D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x829099E0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// addi r10,r31,468
	ctx.r10.s64 = ctx.r31.s64 + 468;
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909A20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909A20;
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// addi r10,r31,584
	ctx.r10.s64 = ctx.r31.s64 + 584;
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// lwz r8,216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r8,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909A5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909A5C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r31,616
	ctx.r10.s64 = ctx.r31.s64 + 616;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909A80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909A80;
	// lwz r9,284(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// addi r10,r31,656
	ctx.r10.s64 = ctx.r31.s64 + 656;
	// stw r9,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909AAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909AAC;
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// addi r10,r31,688
	ctx.r10.s64 = ctx.r31.s64 + 688;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909AD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909AD0;
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r31,492
	ctx.r10.s64 = ctx.r31.s64 + 492;
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r8,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r8.u32);
	// lwz r8,296(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// stw r8,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r8.u32);
	// lwz r8,300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r8,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r8.u32);
	// lwz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// stw r8,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r8.u32);
	// lwz r8,308(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r8,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r8.u32);
	// lwz r8,312(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r8,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r8.u32);
	// lwz r8,316(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r8,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909B34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909B34;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909B58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909b58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909B58;
	// addi r11,r30,120
	ctx.r11.s64 = ctx.r30.s64 + 120;
	// addi r10,r31,556
	ctx.r10.s64 = ctx.r31.s64 + 556;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909B7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909B7C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// bl 0x82900930
	ctx.lr = 0x82909B9C;
	sub_82900930(ctx, base);
	// addi r11,r30,320
	ctx.r11.s64 = ctx.r30.s64 + 320;
	// addi r10,r31,756
	ctx.r10.s64 = ctx.r31.s64 + 756;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82909BB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82909bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909BB0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82908738
	ctx.lr = 0x82909BCC;
	sub_82908738(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// sth r11,796(r31)
	PPC_STORE_U16(ctx.r31.u32 + 796, ctx.r11.u16);
	// bgt cr6,0x82909c84
	if (ctx.cr6.gt) goto loc_82909C84;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82909c60
	if (ctx.cr6.eq) goto loc_82909C60;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,832
	ctx.r29.s64 = ctx.r31.s64 + 832;
	// lfs f30,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
loc_82909C00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829087c0
	ctx.lr = 0x82909C10;
	sub_829087C0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908668
	ctx.lr = 0x82909C20;
	sub_82908668(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82900848
	ctx.lr = 0x82909C30;
	sub_82900848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r3.u32);
	// beq cr6,0x82909c74
	if (ctx.cr6.eq) goto loc_82909C74;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stfs f31,32(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stfs f30,96(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// stfs f31,64(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// lhz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 796);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909c00
	if (ctx.cr6.lt) goto loc_82909C00;
loc_82909C60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82909C74:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20700
	ctx.r3.s64 = ctx.r11.s64 + 20700;
	// bl 0x829117b8
	ctx.lr = 0x82909C84;
	sub_829117B8(ctx, base);
loc_82909C84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909CB0"))) PPC_WEAK_FUNC(sub_82909CB0);
PPC_FUNC_IMPL(__imp__sub_82909CB0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,800
	ctx.r11.s64 = ctx.r3.s64 + 800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82909CC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82909cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82909CC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909CD0"))) PPC_WEAK_FUNC(sub_82909CD0);
PPC_FUNC_IMPL(__imp__sub_82909CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82909CD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x82909CF0;
	sub_826DF680(ctx, base);
	// lhz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 796);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909d5c
	if (ctx.cr6.eq) goto loc_82909D5C;
	// addi r31,r30,800
	ctx.r31.s64 = ctx.r30.s64 + 800;
loc_82909D04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82909d48
	if (ctx.cr6.eq) goto loc_82909D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82909D48:
	// lhz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 796);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909d04
	if (ctx.cr6.lt) goto loc_82909D04;
loc_82909D5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909D80"))) PPC_WEAK_FUNC(sub_82909D80);
PPC_FUNC_IMPL(__imp__sub_82909D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82909D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x82909DA0;
	sub_826DF680(ctx, base);
	// lhz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 796);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909df0
	if (ctx.cr6.eq) goto loc_82909DF0;
	// addi r31,r30,800
	ctx.r31.s64 = ctx.r30.s64 + 800;
loc_82909DB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909ddc
	if (ctx.cr6.eq) goto loc_82909DDC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82909DDC:
	// lhz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 796);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909db4
	if (ctx.cr6.lt) goto loc_82909DB4;
loc_82909DF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909E10"))) PPC_WEAK_FUNC(sub_82909E10);
PPC_FUNC_IMPL(__imp__sub_82909E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,784(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,788(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x828fe970
	sub_828FE970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909E28"))) PPC_WEAK_FUNC(sub_82909E28);
PPC_FUNC_IMPL(__imp__sub_82909E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82909E30;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909ee0
	if (ctx.cr6.eq) goto loc_82909EE0;
	// addi r31,r29,800
	ctx.r31.s64 = ctx.r29.s64 + 800;
loc_82909E5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82909ecc
	if (ctx.cr6.eq) goto loc_82909ECC;
	// bl 0x82629338
	ctx.lr = 0x82909E6C;
	sub_82629338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82909E74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82909e98
	if (ctx.cr6.eq) goto loc_82909E98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82909e74
	if (ctx.cr6.eq) goto loc_82909E74;
loc_82909E98:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82909ecc
	if (!ctx.cr6.eq) goto loc_82909ECC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f3,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82909ECC:
	// lhz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 796);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909e5c
	if (ctx.cr6.lt) goto loc_82909E5C;
loc_82909EE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909EF0"))) PPC_WEAK_FUNC(sub_82909EF0);
PPC_FUNC_IMPL(__imp__sub_82909EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82909EF8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909f90
	if (ctx.cr6.eq) goto loc_82909F90;
	// addi r31,r29,800
	ctx.r31.s64 = ctx.r29.s64 + 800;
loc_82909F2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82909f7c
	if (ctx.cr6.eq) goto loc_82909F7C;
	// bl 0x82629338
	ctx.lr = 0x82909F3C;
	sub_82629338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82909F44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82909f68
	if (ctx.cr6.eq) goto loc_82909F68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82909f44
	if (ctx.cr6.eq) goto loc_82909F44;
loc_82909F68:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82909f7c
	if (!ctx.cr6.eq) goto loc_82909F7C;
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stfs f30,128(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_82909F7C:
	// lhz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 796);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82909f2c
	if (ctx.cr6.lt) goto loc_82909F2C;
loc_82909F90:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909FA8"))) PPC_WEAK_FUNC(sub_82909FA8);
PPC_FUNC_IMPL(__imp__sub_82909FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82909FB0;
	__savegprlr_28(ctx, base);
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
	// bl 0x829099d8
	ctx.lr = 0x82909FC4;
	sub_829099D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82909ffc
	if (ctx.cr6.eq) goto loc_82909FFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x829005b8
	ctx.lr = 0x82909FE4;
	sub_829005B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8290a01c
	if (!ctx.cr6.eq) goto loc_8290A01C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,20732
	ctx.r3.s64 = ctx.r11.s64 + 20732;
	// bl 0x829117b8
	ctx.lr = 0x82909FFC;
	sub_829117B8(ctx, base);
loc_82909FFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290A01C:
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290a034
	if (!ctx.cr6.eq) goto loc_8290A034;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8290a048
	goto loc_8290A048;
loc_8290A034:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// std r28,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r28.u64);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
loc_8290A048:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stb r9,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r9.u8);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// bne cr6,0x8290a08c
	if (!ctx.cr6.eq) goto loc_8290A08C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290A08C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8290a09c
	if (!ctx.cr6.eq) goto loc_8290A09C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
loc_8290A09C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A0A8"))) PPC_WEAK_FUNC(sub_8290A0A8);
PPC_FUNC_IMPL(__imp__sub_8290A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290A0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// lfs f0,456(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290a12c
	if (!ctx.cr6.eq) goto loc_8290A12C;
	// addi r11,r30,424
	ctx.r11.s64 = ctx.r30.s64 + 424;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
loc_8290A12C:
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290a168
	if (!ctx.cr6.eq) goto loc_8290A168;
	// addi r11,r30,468
	ctx.r11.s64 = ctx.r30.s64 + 468;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290A14C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290a14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290A14C;
	// oris r11,r8,16384
	ctx.r11.u64 = ctx.r8.u64 | 1073741824;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_8290A168:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f12,528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,536(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fmadds f13,f11,f13,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290a1d8
	if (!ctx.cr6.eq) goto loc_8290A1D8;
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8290A1D8:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a1f8
	if (!ctx.cr6.eq) goto loc_8290A1F8;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lfs f0,568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_8290A1F8:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a218
	if (!ctx.cr6.eq) goto loc_8290A218;
	// lbz r10,572(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 572);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stb r10,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r10.u8);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_8290A218:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a238
	if (!ctx.cr6.eq) goto loc_8290A238;
	// lwz r10,580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_8290A238:
	// addi r5,r30,616
	ctx.r5.s64 = ctx.r30.s64 + 616;
	// addi r4,r30,584
	ctx.r4.s64 = ctx.r30.s64 + 584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829083f0
	ctx.lr = 0x8290A248;
	sub_829083F0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a268
	if (!ctx.cr6.eq) goto loc_8290A268;
	// lwz r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_8290A268:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a288
	if (!ctx.cr6.eq) goto loc_8290A288;
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_8290A288:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8290a2a8
	if (!ctx.cr6.eq) goto loc_8290A2A8;
	// lwz r10,720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_8290A2A8:
	// lfs f13,688(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lbz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a2e0
	if (!ctx.cr6.eq) goto loc_8290A2E0;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stb r29,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r29.u8);
loc_8290A2E0:
	// lfs f13,692(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lbz r11,377(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 377);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a318
	if (!ctx.cr6.eq) goto loc_8290A318;
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stb r29,377(r31)
	PPC_STORE_U8(ctx.r31.u32 + 377, ctx.r29.u8);
loc_8290A318:
	// lfs f13,696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,664(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lbz r11,378(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 378);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a350
	if (!ctx.cr6.eq) goto loc_8290A350;
	// lwz r11,732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stb r29,378(r31)
	PPC_STORE_U8(ctx.r31.u32 + 378, ctx.r29.u8);
loc_8290A350:
	// lfs f13,700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,668(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lbz r11,379(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 379);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a388
	if (!ctx.cr6.eq) goto loc_8290A388;
	// lwz r11,736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stb r29,379(r31)
	PPC_STORE_U8(ctx.r31.u32 + 379, ctx.r29.u8);
loc_8290A388:
	// lfs f13,704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,672(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,280(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a3c0
	if (!ctx.cr6.eq) goto loc_8290A3C0;
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stb r29,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r29.u8);
loc_8290A3C0:
	// lfs f13,708(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,676(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lbz r11,381(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 381);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a3f8
	if (!ctx.cr6.eq) goto loc_8290A3F8;
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stb r29,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r29.u8);
loc_8290A3F8:
	// lfs f13,712(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,680(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lbz r11,382(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 382);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a430
	if (!ctx.cr6.eq) goto loc_8290A430;
	// lwz r11,748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stb r29,382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 382, ctx.r29.u8);
loc_8290A430:
	// lfs f13,716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lbz r11,383(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 383);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290a468
	if (!ctx.cr6.eq) goto loc_8290A468;
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stb r29,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r29.u8);
loc_8290A468:
	// lfs f0,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,768(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,764(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,344(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f0,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f0,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,760(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,756(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// stw r29,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r29.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A4F8"))) PPC_WEAK_FUNC(sub_8290A4F8);
PPC_FUNC_IMPL(__imp__sub_8290A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290A500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,968
	ctx.r31.s64 = ctx.r29.s64 + 968;
loc_8290A510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a5a0
	if (ctx.cr6.eq) goto loc_8290A5A0;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290a5a0
	if (ctx.cr6.eq) goto loc_8290A5A0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a5c4
	if (ctx.cr6.eq) goto loc_8290A5C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8290a548
	if (!ctx.cr6.eq) goto loc_8290A548;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8290A548:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8290a55c
	if (!ctx.cr6.eq) goto loc_8290A55C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8290A55C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290a570
	if (ctx.cr6.eq) goto loc_8290A570;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8290A570:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290a584
	if (ctx.cr6.eq) goto loc_8290A584;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8290A584:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8290a510
	goto loc_8290A510;
loc_8290A5A0:
	// addi r11,r29,800
	ctx.r11.s64 = ctx.r29.s64 + 800;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290A5B0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290a5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290A5B0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290A5C4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,16852
	ctx.r3.s64 = ctx.r11.s64 + 16852;
	// bl 0x829117a8
	ctx.lr = 0x8290A5D0;
	sub_829117A8(ctx, base);
loc_8290A5D0:
	// b 0x8290a5d0
	goto loc_8290A5D0;
}

__attribute__((alias("__imp__sub_8290A5D8"))) PPC_WEAK_FUNC(sub_8290A5D8);
PPC_FUNC_IMPL(__imp__sub_8290A5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82909cd0
	ctx.lr = 0x8290A5F4;
	sub_82909CD0(ctx, base);
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8290a608
	if (!ctx.cr6.eq) goto loc_8290A608;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8290A608:
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8290a708
	if (ctx.cr6.lt) goto loc_8290A708;
	// beq cr6,0x8290a6a0
	if (ctx.cr6.eq) goto loc_8290A6A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8290a744
	if (!ctx.cr6.lt) goto loc_8290A744;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290a744
	if (ctx.cr6.eq) goto loc_8290A744;
	// lhz r9,976(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 976);
loc_8290A630:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8290a65c
	if (ctx.cr6.eq) goto loc_8290A65C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8290a64c
	if (!ctx.cr6.eq) goto loc_8290A64C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8290A64C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a630
	if (!ctx.cr6.eq) goto loc_8290A630;
	// b 0x8290a744
	goto loc_8290A744;
loc_8290A65C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 976);
	// lwz r10,964(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// sth r11,976(r30)
	PPC_STORE_U16(ctx.r30.u32 + 976, ctx.r11.u16);
	// bne cr6,0x8290a744
	if (!ctx.cr6.eq) goto loc_8290A744;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,976(r30)
	PPC_STORE_U16(ctx.r30.u32 + 976, ctx.r11.u16);
	// b 0x8290a744
	goto loc_8290A744;
loc_8290A6A0:
	// bl 0x826e0d50
	ctx.lr = 0x8290A6A4;
	sub_826E0D50(ctx, base);
	// lwz r11,964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// li r10,0
	ctx.r10.s64 = 0;
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// beq cr6,0x8290a744
	if (ctx.cr6.eq) goto loc_8290A744;
loc_8290A6C0:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8290a6ec
	if (ctx.cr6.eq) goto loc_8290A6EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8290a6dc
	if (!ctx.cr6.eq) goto loc_8290A6DC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8290A6DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a6c0
	if (!ctx.cr6.eq) goto loc_8290A6C0;
	// b 0x8290a744
	goto loc_8290A744;
loc_8290A6EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8290a744
	goto loc_8290A744;
loc_8290A708:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290a744
	if (ctx.cr6.eq) goto loc_8290A744;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
loc_8290A714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a744
	if (ctx.cr6.eq) goto loc_8290A744;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a714
	if (!ctx.cr6.eq) goto loc_8290A714;
loc_8290A744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A760"))) PPC_WEAK_FUNC(sub_8290A760);
PPC_FUNC_IMPL(__imp__sub_8290A760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82909d80
	ctx.lr = 0x8290A77C;
	sub_82909D80(ctx, base);
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a7c8
	if (ctx.cr6.eq) goto loc_8290A7C8;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290a7c8
	if (ctx.cr6.eq) goto loc_8290A7C8;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
loc_8290A798:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a7c8
	if (ctx.cr6.eq) goto loc_8290A7C8;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a798
	if (!ctx.cr6.eq) goto loc_8290A798;
loc_8290A7C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A7E0"))) PPC_WEAK_FUNC(sub_8290A7E0);
PPC_FUNC_IMPL(__imp__sub_8290A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290A7E8;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82909e28
	ctx.lr = 0x8290A800;
	sub_82909E28(ctx, base);
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a85c
	if (ctx.cr6.eq) goto loc_8290A85C;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290a85c
	if (ctx.cr6.eq) goto loc_8290A85C;
loc_8290A81C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8290a844
	if (!ctx.cr6.eq) goto loc_8290A844;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8290A844:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a85c
	if (ctx.cr6.eq) goto loc_8290A85C;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a81c
	if (!ctx.cr6.eq) goto loc_8290A81C;
loc_8290A85C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A870"))) PPC_WEAK_FUNC(sub_8290A870);
PPC_FUNC_IMPL(__imp__sub_8290A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290A878;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82909ef0
	ctx.lr = 0x8290A898;
	sub_82909EF0(ctx, base);
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a8f8
	if (ctx.cr6.eq) goto loc_8290A8F8;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290a8f8
	if (ctx.cr6.eq) goto loc_8290A8F8;
loc_8290A8B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8290a8e0
	if (!ctx.cr6.eq) goto loc_8290A8E0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8290A8E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290a8f8
	if (ctx.cr6.eq) goto loc_8290A8F8;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290a8b4
	if (!ctx.cr6.eq) goto loc_8290A8B4;
loc_8290A8F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A910"))) PPC_WEAK_FUNC(sub_8290A910);
PPC_FUNC_IMPL(__imp__sub_8290A910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f0,456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,768(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,764(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,344(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// stfs f0,340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// lfs f0,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,776(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,772(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,352(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stfs f0,348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// lfs f0,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,760(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,756(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,336(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A9A8"))) PPC_WEAK_FUNC(sub_8290A9A8);
PPC_FUNC_IMPL(__imp__sub_8290A9A8) {
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
	// bl 0x826dfb7c
	ctx.lr = 0x8290A9C0;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x829079e0
	ctx.lr = 0x8290A9F0;
	sub_829079E0(ctx, base);
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x829079e8
	ctx.lr = 0x8290A9FC;
	sub_829079E8(ctx, base);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a10
	ctx.lr = 0x8290AA08;
	sub_82907A10(ctx, base);
	// lfs f6,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f5,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829079f0
	ctx.lr = 0x8290AA28;
	sub_829079F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,13932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13932);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,14172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14172);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,14176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82909600
	ctx.lr = 0x8290AA8C;
	sub_82909600(ctx, base);
	// lfs f0,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f0,f12,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f8,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f31,f0,f11,f8
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f6,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f30,f0,f9,f6
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lfs f4,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f29,f0,f7,f5
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f5.f64));
	// lfs f3,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// fadds f28,f4,f13
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfs f25,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f25.f64 = double(temp.f32);
	// fadds f27,f3,f13
	ctx.f27.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f26,f2,f13
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f25,f25,f13
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f13.f64));
	// bl 0x82907a00
	ctx.lr = 0x8290AAF0;
	sub_82907A00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB00;
	sub_82907A00(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB10;
	sub_82907A00(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB20;
	sub_82907A00(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB30;
	sub_82907A00(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB40;
	sub_82907A00(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB50;
	sub_82907A00(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82907a00
	ctx.lr = 0x8290AB60;
	sub_82907A00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a08
	ctx.lr = 0x8290AB70;
	sub_82907A08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a08
	ctx.lr = 0x8290AB80;
	sub_82907A08(ctx, base);
	// lfs f2,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x829079f8
	ctx.lr = 0x8290AB90;
	sub_829079F8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290aba4
	if (!ctx.cr6.eq) goto loc_8290ABA4;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907b10
	ctx.lr = 0x8290ABA4;
	sub_82907B10(ctx, base);
loc_8290ABA4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290ABBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a20
	ctx.lr = 0x8290ABC8;
	sub_82907A20(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a18
	ctx.lr = 0x8290ABD4;
	sub_82907A18(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826dfbc8
	ctx.lr = 0x8290ABE0;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290ABF8"))) PPC_WEAK_FUNC(sub_8290ABF8);
PPC_FUNC_IMPL(__imp__sub_8290ABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290AC00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290ac74
	if (ctx.cr6.eq) goto loc_8290AC74;
loc_8290AC20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908390
	ctx.lr = 0x8290AC2C;
	sub_82908390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290ac68
	if (ctx.cr6.eq) goto loc_8290AC68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829083b0
	ctx.lr = 0x8290AC40;
	sub_829083B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290ac68
	if (ctx.cr6.eq) goto loc_8290AC68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829083d0
	ctx.lr = 0x8290AC54;
	sub_829083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290ac68
	if (ctx.cr6.eq) goto loc_8290AC68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290a9a8
	ctx.lr = 0x8290AC68;
	sub_8290A9A8(ctx, base);
loc_8290AC68:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290ac20
	if (!ctx.cr6.eq) goto loc_8290AC20;
loc_8290AC74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AC80"))) PPC_WEAK_FUNC(sub_8290AC80);
PPC_FUNC_IMPL(__imp__sub_8290AC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x829098b0
	ctx.lr = 0x8290ACA0;
	sub_829098B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290ad00
	if (ctx.cr6.eq) goto loc_8290AD00;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8290ad00
	if (!ctx.cr6.eq) goto loc_8290AD00;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a28
	ctx.lr = 0x8290ACC4;
	sub_82907A28(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8290acd8
	if (!ctx.cr6.gt) goto loc_8290ACD8;
loc_8290ACD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8290ad04
	goto loc_8290AD04;
loc_8290ACD8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82907a28
	ctx.lr = 0x8290ACE0;
	sub_82907A28(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8290acf8
	if (!ctx.cr6.eq) goto loc_8290ACF8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290acd0
	if (!ctx.cr6.eq) goto loc_8290ACD0;
loc_8290ACF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82909848
	ctx.lr = 0x8290AD00;
	sub_82909848(ctx, base);
loc_8290AD00:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8290AD04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290AD20"))) PPC_WEAK_FUNC(sub_8290AD20);
PPC_FUNC_IMPL(__imp__sub_8290AD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290AD28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,20656
	ctx.r11.s64 = ctx.r11.s64 + 20656;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82901a90
	ctx.lr = 0x8290AD78;
	sub_82901A90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82901b40
	ctx.lr = 0x8290AD80;
	sub_82901B40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82901b40
	ctx.lr = 0x8290AD88;
	sub_82901B40(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82901a90
	ctx.lr = 0x8290AD90;
	sub_82901A90(ctx, base);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r27,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r27.u32);
	// stw r28,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r28.u32);
	// lwz r11,13884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13884);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,13884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13884, ctx.r11.u32);
	// bne cr6,0x8290adb8
	if (!ctx.cr6.eq) goto loc_8290ADB8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13884, ctx.r11.u32);
loc_8290ADB8:
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,832
	ctx.r10.s64 = ctx.r31.s64 + 832;
	// sth r30,796(r31)
	PPC_STORE_U16(ctx.r31.u32 + 796, ctx.r30.u16);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8290ADD0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r30,-32(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32, ctx.r30.u32);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8290add0
	if (!ctx.cr6.eq) goto loc_8290ADD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AE00"))) PPC_WEAK_FUNC(sub_8290AE00);
PPC_FUNC_IMPL(__imp__sub_8290AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20656
	ctx.r11.s64 = ctx.r11.s64 + 20656;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290ae38
	if (ctx.cr6.eq) goto loc_8290AE38;
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x82912478
	ctx.lr = 0x8290AE34;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290AE38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290AE50"))) PPC_WEAK_FUNC(sub_8290AE50);
PPC_FUNC_IMPL(__imp__sub_8290AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82909d80
	ctx.lr = 0x8290AE68;
	sub_82909D80(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r7,792(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// lwz r6,784(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r5,788(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8290abf8
	ctx.lr = 0x8290AE80;
	sub_8290ABF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290AE98"))) PPC_WEAK_FUNC(sub_8290AE98);
PPC_FUNC_IMPL(__imp__sub_8290AE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20656
	ctx.r11.s64 = ctx.r11.s64 + 20656;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290aed0
	if (ctx.cr6.eq) goto loc_8290AED0;
	// li r4,984
	ctx.r4.s64 = 984;
	// bl 0x82912478
	ctx.lr = 0x8290AECC;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290AED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290AEE8"))) PPC_WEAK_FUNC(sub_8290AEE8);
PPC_FUNC_IMPL(__imp__sub_8290AEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8290AEF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r5,r11,20884
	ctx.r5.s64 = ctx.r11.s64 + 20884;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r24,52(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82912420
	ctx.lr = 0x8290AF28;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290afb8
	if (ctx.cr6.eq) goto loc_8290AFB8;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290AF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290afd4
	if (!ctx.cr6.eq) goto loc_8290AFD4;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lbz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82908070
	ctx.lr = 0x8290AF9C;
	sub_82908070(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x8290b06c
	if (ctx.cr6.eq) goto loc_8290B06C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290a9a8
	ctx.lr = 0x8290AFB4;
	sub_8290A9A8(ctx, base);
	// b 0x8290b06c
	goto loc_8290B06C;
loc_8290AFB8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20872
	ctx.r3.s64 = ctx.r11.s64 + 20872;
	// bl 0x829117c8
	ctx.lr = 0x8290AFC8;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8290AFD4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290b068
	if (!ctx.cr6.eq) goto loc_8290B068;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8290AFF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8290aff0
	if (!ctx.cr6.eq) goto loc_8290AFF0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r11,20864
	ctx.r9.s64 = ctx.r11.s64 + 20864;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8290B010:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8290b010
	if (!ctx.cr6.eq) goto loc_8290B010;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8290B024:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8290b024
	if (!ctx.cr6.eq) goto loc_8290B024;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82908208
	ctx.lr = 0x8290B04C;
	sub_82908208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x8290b06c
	if (ctx.cr6.eq) goto loc_8290B06C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290a9a8
	ctx.lr = 0x8290B064;
	sub_8290A9A8(ctx, base);
	// b 0x8290b06c
	goto loc_8290B06C;
loc_8290B068:
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
loc_8290B06C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b09c
	if (!ctx.cr6.eq) goto loc_8290B09C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fe7e8
	ctx.lr = 0x8290B098;
	sub_828FE7E8(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8290B09C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B0A8"))) PPC_WEAK_FUNC(sub_8290B0A8);
PPC_FUNC_IMPL(__imp__sub_8290B0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290B0B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r5,r11,20912
	ctx.r5.s64 = ctx.r11.s64 + 20912;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,960
	ctx.r3.s64 = 960;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82912420
	ctx.lr = 0x8290B0E0;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290b154
	if (ctx.cr6.eq) goto loc_8290B154;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290ad20
	ctx.lr = 0x8290B100;
	sub_8290AD20(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,20776
	ctx.r11.s64 = ctx.r11.s64 + 20776;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290b14c
	if (!ctx.cr6.eq) goto loc_8290B14C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290B14C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290B154:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20900
	ctx.r3.s64 = ctx.r11.s64 + 20900;
	// bl 0x829117c8
	ctx.lr = 0x8290B164;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B170"))) PPC_WEAK_FUNC(sub_8290B170);
PPC_FUNC_IMPL(__imp__sub_8290B170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290B178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82909cd0
	ctx.lr = 0x8290B184;
	sub_82909CD0(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r28,792(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r31,788(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// bl 0x8290ac80
	ctx.lr = 0x8290B1A4;
	sub_8290AC80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290b1e8
	if (ctx.cr6.eq) goto loc_8290B1E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r11,20892
	ctx.r4.s64 = ctx.r11.s64 + 20892;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8290aee8
	ctx.lr = 0x8290B1CC;
	sub_8290AEE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290b1e8
	if (ctx.cr6.eq) goto loc_8290B1E8;
	// bl 0x829097e0
	ctx.lr = 0x8290B1DC;
	sub_829097E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828fe6c0
	ctx.lr = 0x8290B1E8;
	sub_828FE6C0(ctx, base);
loc_8290B1E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B1F0"))) PPC_WEAK_FUNC(sub_8290B1F0);
PPC_FUNC_IMPL(__imp__sub_8290B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290B1F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r5,r11,20936
	ctx.r5.s64 = ctx.r11.s64 + 20936;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,984
	ctx.r3.s64 = 984;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82912420
	ctx.lr = 0x8290B228;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290b2b4
	if (ctx.cr6.eq) goto loc_8290B2B4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290ad20
	ctx.lr = 0x8290B248;
	sub_8290AD20(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r10,r11,20820
	ctx.r10.s64 = ctx.r11.s64 + 20820;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// sth r11,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290b2ac
	if (!ctx.cr6.eq) goto loc_8290B2AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290B2AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290B2B4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,20924
	ctx.r3.s64 = ctx.r11.s64 + 20924;
	// bl 0x829117c8
	ctx.lr = 0x8290B2C4;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B2D0"))) PPC_WEAK_FUNC(sub_8290B2D0);
PPC_FUNC_IMPL(__imp__sub_8290B2D0) {
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
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8290b320
	if (ctx.cr6.lt) goto loc_8290B320;
	// beq cr6,0x8290b30c
	if (ctx.cr6.eq) goto loc_8290B30C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// bl 0x829117a8
	ctx.lr = 0x8290B2F8;
	sub_829117A8(ctx, base);
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
loc_8290B30C:
	// bl 0x8290b1f0
	ctx.lr = 0x8290B310;
	sub_8290B1F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8290B320:
	// bl 0x8290b0a8
	ctx.lr = 0x8290B324;
	sub_8290B0A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B338"))) PPC_WEAK_FUNC(sub_8290B338);
PPC_FUNC_IMPL(__imp__sub_8290B338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8290B340;
	__savegprlr_25(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x829099d8
	ctx.lr = 0x8290B354;
	sub_829099D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290b52c
	if (ctx.cr6.eq) goto loc_8290B52C;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8290b3a0
	if (ctx.cr6.eq) goto loc_8290B3A0;
loc_8290B380:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8290b38c
	if (!ctx.cr6.eq) goto loc_8290B38C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8290B38C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290b380
	if (!ctx.cr6.eq) goto loc_8290B380;
loc_8290B3A0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8290b49c
	if (ctx.cr6.eq) goto loc_8290B49C;
loc_8290B3AC:
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290B3BC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290b3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290B3BC;
	// addi r11,r1,404
	ctx.r11.s64 = ctx.r1.s64 + 404;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290B3D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290b3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290B3D8;
	// addi r11,r1,444
	ctx.r11.s64 = ctx.r1.s64 + 444;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290B3F4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290b3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290B3F4;
	// addi r11,r1,476
	ctx.r11.s64 = ctx.r1.s64 + 476;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8290B410:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290b410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290B410;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829001f0
	ctx.lr = 0x8290B42C;
	sub_829001F0(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82900638
	ctx.lr = 0x8290B43C;
	sub_82900638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8290b51c
	if (ctx.cr6.eq) goto loc_8290B51C;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r6,788(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// blt cr6,0x8290b470
	if (ctx.cr6.lt) goto loc_8290B470;
	// bne cr6,0x8290b4e4
	if (!ctx.cr6.eq) goto loc_8290B4E4;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8290b1f0
	ctx.lr = 0x8290B46C;
	sub_8290B1F0(ctx, base);
	// b 0x8290b47c
	goto loc_8290B47C;
loc_8290B470:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8290b0a8
	ctx.lr = 0x8290B47C;
	sub_8290B0A8(ctx, base);
loc_8290B47C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290b4f0
	if (ctx.cr6.eq) goto loc_8290B4F0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// bl 0x82909748
	ctx.lr = 0x8290B490;
	sub_82909748(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8290b3ac
	if (ctx.cr6.lt) goto loc_8290B3AC;
loc_8290B49C:
	// stw r28,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8290b578
	if (ctx.cr6.lt) goto loc_8290B578;
	// beq cr6,0x8290b564
	if (ctx.cr6.eq) goto loc_8290B564;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8290b54c
	if (ctx.cr6.lt) goto loc_8290B54C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,21084
	ctx.r3.s64 = ctx.r11.s64 + 21084;
	// bl 0x829117a8
	ctx.lr = 0x8290B4C4;
	sub_829117A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290B4E4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// bl 0x829117a8
	ctx.lr = 0x8290B4F0;
	sub_829117A8(ctx, base);
loc_8290B4F0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// bl 0x829117a8
	ctx.lr = 0x8290B4FC;
	sub_829117A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290B51C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20996
	ctx.r3.s64 = ctx.r11.s64 + 20996;
	// bl 0x829117b8
	ctx.lr = 0x8290B52C;
	sub_829117B8(ctx, base);
loc_8290B52C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290B540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290B54C:
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r27,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r27.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290B564:
	// stw r25,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r27,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r27.u16);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290B578:
	// stw r27,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r27,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r27.u16);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B590"))) PPC_WEAK_FUNC(sub_8290B590);
PPC_FUNC_IMPL(__imp__sub_8290B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,21128
	ctx.r10.s64 = ctx.r11.s64 + 21128;
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B5C0"))) PPC_WEAK_FUNC(sub_8290B5C0);
PPC_FUNC_IMPL(__imp__sub_8290B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,21128
	ctx.r11.s64 = ctx.r11.s64 + 21128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B5D0"))) PPC_WEAK_FUNC(sub_8290B5D0);
PPC_FUNC_IMPL(__imp__sub_8290B5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b5ec
	if (ctx.cr6.eq) goto loc_8290B5EC;
loc_8290B5DC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b5dc
	if (!ctx.cr6.eq) goto loc_8290B5DC;
loc_8290B5EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b5fc
	if (ctx.cr6.eq) goto loc_8290B5FC;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_8290B5FC:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B608"))) PPC_WEAK_FUNC(sub_8290B608);
PPC_FUNC_IMPL(__imp__sub_8290B608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b624
	if (ctx.cr6.eq) goto loc_8290B624;
loc_8290B614:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b614
	if (!ctx.cr6.eq) goto loc_8290B614;
loc_8290B624:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8290b63c
	if (!ctx.cr6.eq) goto loc_8290B63C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_8290B63C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290b658
	if (ctx.cr6.eq) goto loc_8290B658;
loc_8290B648:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8290b648
	if (!ctx.cr6.eq) goto loc_8290B648;
loc_8290B658:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B668"))) PPC_WEAK_FUNC(sub_8290B668);
PPC_FUNC_IMPL(__imp__sub_8290B668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b684
	if (ctx.cr6.eq) goto loc_8290B684;
loc_8290B674:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b674
	if (!ctx.cr6.eq) goto loc_8290B674;
loc_8290B684:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b694
	if (ctx.cr6.eq) goto loc_8290B694;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8290B694:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B6A0"))) PPC_WEAK_FUNC(sub_8290B6A0);
PPC_FUNC_IMPL(__imp__sub_8290B6A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b6bc
	if (ctx.cr6.eq) goto loc_8290B6BC;
loc_8290B6AC:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b6ac
	if (!ctx.cr6.eq) goto loc_8290B6AC;
loc_8290B6BC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8290b6d4
	if (!ctx.cr6.eq) goto loc_8290B6D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_8290B6D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290b6f0
	if (ctx.cr6.eq) goto loc_8290B6F0;
loc_8290B6E0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8290b6e0
	if (!ctx.cr6.eq) goto loc_8290B6E0;
loc_8290B6F0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B700"))) PPC_WEAK_FUNC(sub_8290B700);
PPC_FUNC_IMPL(__imp__sub_8290B700) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b72c
	if (ctx.cr6.eq) goto loc_8290B72C;
loc_8290B718:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290b718
	if (!ctx.cr6.eq) goto loc_8290B718;
loc_8290B72C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8290B734:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8290b734
	if (!ctx.cr6.eq) goto loc_8290B734;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B748"))) PPC_WEAK_FUNC(sub_8290B748);
PPC_FUNC_IMPL(__imp__sub_8290B748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bne cr6,0x8290b774
	if (!ctx.cr6.eq) goto loc_8290B774;
loc_8290B76C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8290b7ec
	goto loc_8290B7EC;
loc_8290B774:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,21136
	ctx.r5.s64 = ctx.r11.s64 + 21136;
	// bl 0x82902ca0
	ctx.lr = 0x8290B788;
	sub_82902CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290b76c
	if (ctx.cr6.eq) goto loc_8290B76C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290b7a8
	if (ctx.cr6.eq) goto loc_8290B7A8;
	// bl 0x8290b668
	ctx.lr = 0x8290B7A4;
	sub_8290B668(ctx, base);
	// b 0x8290b7c0
	goto loc_8290B7C0;
loc_8290B7A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b7b8
	if (ctx.cr6.eq) goto loc_8290B7B8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8290B7B8:
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
loc_8290B7C0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290b7d4
	if (ctx.cr6.eq) goto loc_8290B7D4;
	// bl 0x8290b5d0
	ctx.lr = 0x8290B7D0;
	sub_8290B5D0(ctx, base);
	// b 0x8290b7e8
	goto loc_8290B7E8;
loc_8290B7D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290b7e4
	if (ctx.cr6.eq) goto loc_8290B7E4;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_8290B7E4:
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_8290B7E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8290B7EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B808"))) PPC_WEAK_FUNC(sub_8290B808);
PPC_FUNC_IMPL(__imp__sub_8290B808) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290b844
	if (ctx.cr6.eq) goto loc_8290B844;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8290b6a0
	ctx.lr = 0x8290B828;
	sub_8290B6A0(ctx, base);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290b838
	if (ctx.cr6.eq) goto loc_8290B838;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8290b608
	ctx.lr = 0x8290B838;
	sub_8290B608(ctx, base);
loc_8290B838:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82912478
	ctx.lr = 0x8290B844;
	sub_82912478(ctx, base);
loc_8290B844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B858"))) PPC_WEAK_FUNC(sub_8290B858);
PPC_FUNC_IMPL(__imp__sub_8290B858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21128
	ctx.r11.s64 = ctx.r11.s64 + 21128;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290b890
	if (ctx.cr6.eq) goto loc_8290B890;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82912478
	ctx.lr = 0x8290B88C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290B890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B8A8"))) PPC_WEAK_FUNC(sub_8290B8A8);
PPC_FUNC_IMPL(__imp__sub_8290B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290B8B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8290B8D8;
	sub_826DFD40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// lfd f0,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// lfd f13,13960(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// stfd f13,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f13.u64);
	// blt cr6,0x8290b96c
	if (ctx.cr6.lt) goto loc_8290B96C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// lfd f31,208(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 208);
loc_8290B908:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8290b958
	if (ctx.cr6.eq) goto loc_8290B958;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8290B918:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8290e778
	ctx.lr = 0x8290B928;
	sub_8290E778(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8290e6d8
	ctx.lr = 0x8290B938;
	sub_8290E6D8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290e6a0
	ctx.lr = 0x8290B948;
	sub_8290E6A0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8290b918
	if (!ctx.cr6.eq) goto loc_8290B918;
loc_8290B958:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8290b908
	if (!ctx.cr6.gt) goto loc_8290B908;
loc_8290B96C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B978"))) PPC_WEAK_FUNC(sub_8290B978);
PPC_FUNC_IMPL(__imp__sub_8290B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290B980;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// ble cr6,0x8290b9b0
	if (!ctx.cr6.gt) goto loc_8290B9B0;
loc_8290B9A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290B9B0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8290B9C4;
	sub_826DFD40(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8290B9D8;
	sub_826DFD40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f0,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// stfd f0,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
	// bl 0x8290b8a8
	ctx.lr = 0x8290B9F4;
	sub_8290B8A8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8290ba54
	if (ctx.cr6.lt) goto loc_8290BA54;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290BA18:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lfd f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfd f11,32(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfd f0,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, ctx.f0.u64);
	// stfd f13,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, ctx.f13.u64);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// stfd f11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f11.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne cr6,0x8290ba18
	if (!ctx.cr6.eq) goto loc_8290BA18;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8290ba8c
	if (ctx.cr6.gt) goto loc_8290BA8C;
loc_8290BA54:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8290BA70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290ba70
	if (!ctx.cr6.eq) goto loc_8290BA70;
loc_8290BA8C:
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// bgt cr6,0x8290b9a4
	if (ctx.cr6.gt) goto loc_8290B9A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8290b8a8
	ctx.lr = 0x8290BAA4;
	sub_8290B8A8(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8290bb04
	if (ctx.cr6.lt) goto loc_8290BB04;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290BAC8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lfd f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfd f11,32(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfd f0,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, ctx.f0.u64);
	// stfd f13,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, ctx.f13.u64);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// stfd f11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f11.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne cr6,0x8290bac8
	if (!ctx.cr6.eq) goto loc_8290BAC8;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8290bb3c
	if (ctx.cr6.gt) goto loc_8290BB3C;
loc_8290BB04:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r9.s64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8290BB20:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290bb20
	if (!ctx.cr6.eq) goto loc_8290BB20;
loc_8290BB3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BB48"))) PPC_WEAK_FUNC(sub_8290BB48);
PPC_FUNC_IMPL(__imp__sub_8290BB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8290BB50;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfb88
	ctx.lr = 0x8290BB58;
	__savefpr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// add r10,r26,r25
	ctx.r10.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lfd f28,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// fdiv f31,f28,f2
	ctx.f31.f64 = ctx.f28.f64 / ctx.f2.f64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x8290bb9c
	if (!ctx.cr6.gt) goto loc_8290BB9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbd4
	ctx.lr = 0x8290BB98;
	__restfpr_28(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8290BB9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f31.u64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfd f30,13960(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f30.u64);
	// stfd f30,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f30.u64);
	// lfd f29,4088(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4088);
	// beq cr6,0x8290bc64
	if (ctx.cr6.eq) goto loc_8290BC64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r28,r4,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r27,r4,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r4.s64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8290BBD8:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fnmsub f0,f0,f31,f29
	ctx.f0.f64 = -(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lfd f0,8(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// bl 0x8290e718
	ctx.lr = 0x8290BC04;
	sub_8290E718(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8290e6d8
	ctx.lr = 0x8290BC2C;
	sub_8290E6D8(ctx, base);
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f13,8(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64;
	// add r3,r27,r30
	ctx.r3.u64 = ctx.r27.u64 + ctx.r30.u64;
	// fmadd f0,f0,f31,f29
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64 + ctx.f29.f64;
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// bl 0x8290e718
	ctx.lr = 0x8290BC54;
	sub_8290E718(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8290bbd8
	if (!ctx.cr6.eq) goto loc_8290BBD8;
loc_8290BC64:
	// lwz r27,620(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8290bd0c
	if (ctx.cr6.eq) goto loc_8290BD0C;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subf r28,r31,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8290BC80:
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fnmsub f0,f0,f31,f29
	ctx.f0.f64 = -(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lfd f0,8(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// bl 0x8290e718
	ctx.lr = 0x8290BCAC;
	sub_8290E718(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8290e6d8
	ctx.lr = 0x8290BCD4;
	sub_8290E6D8(ctx, base);
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// fmadd f0,f0,f31,f29
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64 + ctx.f29.f64;
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// bl 0x8290e718
	ctx.lr = 0x8290BCFC;
	sub_8290E718(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8290bc80
	if (!ctx.cr6.eq) goto loc_8290BC80;
loc_8290BD0C:
	// lwz r4,612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,628(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stfd f0,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.f0.u64);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// stw r25,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r25.u32);
	// ble cr6,0x8290bd9c
	if (!ctx.cr6.gt) goto loc_8290BD9C;
	// subf r7,r25,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r25.s64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8290bd7c
	if (ctx.cr6.eq) goto loc_8290BD7C;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// subf r9,r27,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r27.s64;
	// lfd f0,208(r6)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 208);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8290BD5C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// stfd f30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f30.u64);
	// stfdx f28,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f28.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfdx f30,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.f30.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8290bd5c
	if (!ctx.cr6.eq) goto loc_8290BD5C;
loc_8290BD7C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbd4
	ctx.lr = 0x8290BD98;
	__restfpr_28(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8290BD9C:
	// bge cr6,0x8290bdfc
	if (!ctx.cr6.lt) goto loc_8290BDFC;
	// subf r7,r26,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r26.s64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8290bdf0
	if (ctx.cr6.eq) goto loc_8290BDF0;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r24.s64;
	// lfd f0,208(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 208);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r8,r24,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r24.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8290BDD0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// stfd f30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f30.u64);
	// stfdx f28,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f28.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfdx f30,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.f30.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8290bdd0
	if (!ctx.cr6.eq) goto loc_8290BDD0;
loc_8290BDF0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8290BDFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbd4
	ctx.lr = 0x8290BE0C;
	__restfpr_28(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BE10"))) PPC_WEAK_FUNC(sub_8290BE10);
PPC_FUNC_IMPL(__imp__sub_8290BE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f0,9816(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9816);
	// li r11,2
	ctx.r11.s64 = 2;
	// fmul f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmul f0,f2,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f0.f64;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsqrt f13,f12
	ctx.f13.f64 = sqrt(ctx.f12.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f13,17456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17456);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// lfd f12,13960(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// fmsub f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8290bea0
	if (!ctx.cr6.gt) goto loc_8290BEA0;
	// fsqrt f13,f13
	ctx.f13.f64 = sqrt(ctx.f13.f64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f12,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.f12.u64);
	// fsub f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 - ctx.f0.f64;
	// stfd f12,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.f12.u64);
	// lfd f0,-26272(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26272);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fmul f11,f10,f0
	ctx.f11.f64 = ctx.f10.f64 * ctx.f0.f64;
	// stfd f11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f11.u64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.f0.u64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stfd f12,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f12.u64);
	// stfd f12,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.f12.u64);
	// blr 
	return;
loc_8290BEA0:
	// fneg f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f13,21152(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 21152);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// stfd f0,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.f0.u64);
	// fsqrts f13,f11
	ctx.f13.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfd f0,-26272(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26272);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f13,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.f13.u64);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// stfd f0,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.f0.u64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stfd f12,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f12.u64);
	// stfd f12,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.f12.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290BEF0"))) PPC_WEAK_FUNC(sub_8290BEF0);
PPC_FUNC_IMPL(__imp__sub_8290BEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290BEF8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826dfb7c
	ctx.lr = 0x8290BF00;
	__savefpr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfd f29,4080(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4080);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stfd f29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f29.u64);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// bl 0x826dfd40
	ctx.lr = 0x8290BF44;
	sub_826DFD40(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826dfd40
	ctx.lr = 0x8290BF58;
	sub_826DFD40(ctx, base);
	// fdiv f31,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64 / ctx.f26.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f30,9808(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9808);
	// fmul f0,f31,f28
	ctx.f0.f64 = ctx.f31.f64 * ctx.f28.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// bl 0x826e0ad0
	ctx.lr = 0x8290BF70;
	sub_826E0AD0(ctx, base);
	// fmul f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f27.f64;
	// fmr f25,f1
	ctx.f25.f64 = ctx.f1.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// bl 0x826e0ad0
	ctx.lr = 0x8290BF80;
	sub_826E0AD0(ctx, base);
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x8290bfb0
	if (!ctx.cr6.eq) goto loc_8290BFB0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f29,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f29.u64);
	// stfd f29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.f29.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826dfbc8
	ctx.lr = 0x8290BFAC;
	__restfpr_25(ctx, base);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290BFB0:
	// fmul f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f30.f64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmul f13,f31,f30
	ctx.f13.f64 = ctx.f31.f64 * ctx.f30.f64;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// fdiv f2,f1,f0
	ctx.f2.f64 = ctx.f1.f64 / ctx.f0.f64;
	// fdiv f1,f25,f13
	ctx.f1.f64 = ctx.f25.f64 / ctx.f13.f64;
	// bl 0x8290be10
	ctx.lr = 0x8290BFD8;
	sub_8290BE10(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// lfd f1,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r26,r31,160
	ctx.r26.s64 = ctx.r31.s64 + 160;
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x8290bb48
	ctx.lr = 0x8290C01C;
	sub_8290BB48(ctx, base);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r31,384
	ctx.r8.s64 = ctx.r31.s64 + 384;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stfd f0,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f0.u64);
	// addi r7,r31,312
	ctx.r7.s64 = ctx.r31.s64 + 312;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// bl 0x8290b978
	ctx.lr = 0x8290C050;
	sub_8290B978(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826dfbc8
	ctx.lr = 0x8290C068;
	__restfpr_25(ctx, base);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C070"))) PPC_WEAK_FUNC(sub_8290C070);
PPC_FUNC_IMPL(__imp__sub_8290C070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21172
	ctx.r11.s64 = ctx.r11.s64 + 21172;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290c0a8
	if (ctx.cr6.eq) goto loc_8290C0A8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82912478
	ctx.lr = 0x8290C0A4;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290C0A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C0C0"))) PPC_WEAK_FUNC(sub_8290C0C0);
PPC_FUNC_IMPL(__imp__sub_8290C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8290e4b8
	ctx.lr = 0x8290C0D8;
	sub_8290E4B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290c0f8
	if (ctx.cr6.eq) goto loc_8290C0F8;
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
	ctx.lr = 0x8290C0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290C0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C110"))) PPC_WEAK_FUNC(sub_8290C110);
PPC_FUNC_IMPL(__imp__sub_8290C110) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x8290e8b0
	sub_8290E8B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C128"))) PPC_WEAK_FUNC(sub_8290C128);
PPC_FUNC_IMPL(__imp__sub_8290C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290c164
	if (ctx.cr6.eq) goto loc_8290C164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_8290C164:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290c178
	if (ctx.cr6.eq) goto loc_8290C178;
	// bl 0x829123d0
	ctx.lr = 0x8290C174;
	sub_829123D0(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8290C178:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C1A0"))) PPC_WEAK_FUNC(sub_8290C1A0);
PPC_FUNC_IMPL(__imp__sub_8290C1A0) {
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
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c2f4
	if (ctx.cr6.eq) goto loc_8290C2F4;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8290fb80
	ctx.lr = 0x8290C1D4;
	sub_8290FB80(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fb88
	ctx.lr = 0x8290C1E4;
	sub_8290FB88(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fdc0
	ctx.lr = 0x8290C1F4;
	sub_8290FDC0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f6,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fc08
	ctx.lr = 0x8290C218;
	sub_8290FC08(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C22C;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C240;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C254;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C268;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C27C;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f1,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C290;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f1,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C2A4;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd70
	ctx.lr = 0x8290C2B8;
	sub_8290FD70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd98
	ctx.lr = 0x8290C2CC;
	sub_8290FD98(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fd98
	ctx.lr = 0x8290C2E0;
	sub_8290FD98(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f2,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fcd8
	ctx.lr = 0x8290C2F4;
	sub_8290FCD8(ctx, base);
loc_8290C2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C310"))) PPC_WEAK_FUNC(sub_8290C310);
PPC_FUNC_IMPL(__imp__sub_8290C310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8290c39c
	if (!ctx.cr6.eq) goto loc_8290C39C;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82631500
	ctx.lr = 0x8290C378;
	sub_82631500(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8290C39C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C3B8"))) PPC_WEAK_FUNC(sub_8290C3B8);
PPC_FUNC_IMPL(__imp__sub_8290C3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82631338
	ctx.lr = 0x8290C3F0;
	sub_82631338(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290c440
	if (ctx.cr6.eq) goto loc_8290C440;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8290c440
	if (ctx.cr6.lt) goto loc_8290C440;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8290C440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C458"))) PPC_WEAK_FUNC(sub_8290C458);
PPC_FUNC_IMPL(__imp__sub_8290C458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C494;
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
}

__attribute__((alias("__imp__sub_8290C4A8"))) PPC_WEAK_FUNC(sub_8290C4A8);
PPC_FUNC_IMPL(__imp__sub_8290C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82629338
	ctx.lr = 0x8290C4DC;
	sub_82629338(ctx, base);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8290e3e8
	ctx.lr = 0x8290C4F0;
	sub_8290E3E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C508"))) PPC_WEAK_FUNC(sub_8290C508);
PPC_FUNC_IMPL(__imp__sub_8290C508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82629338
	ctx.lr = 0x8290C54C;
	sub_82629338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290e3e8
	ctx.lr = 0x8290C558;
	sub_8290E3E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C570"))) PPC_WEAK_FUNC(sub_8290C570);
PPC_FUNC_IMPL(__imp__sub_8290C570) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C580"))) PPC_WEAK_FUNC(sub_8290C580);
PPC_FUNC_IMPL(__imp__sub_8290C580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8290C588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,104
	ctx.r29.s64 = 104;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8290C59C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290c5c0
	if (ctx.cr6.eq) goto loc_8290C5C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8290C5C0:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8290c59c
	if (!ctx.cr6.eq) goto loc_8290C59C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C5D8"))) PPC_WEAK_FUNC(sub_8290C5D8);
PPC_FUNC_IMPL(__imp__sub_8290C5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8290C5F0"))) PPC_WEAK_FUNC(sub_8290C5F0);
PPC_FUNC_IMPL(__imp__sub_8290C5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290C5F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r5,r11,21264
	ctx.r5.s64 = ctx.r11.s64 + 21264;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82912420
	ctx.lr = 0x8290C628;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290c698
	if (ctx.cr6.eq) goto loc_8290C698;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290e3f8
	ctx.lr = 0x8290C63C;
	sub_8290E3F8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r11,r11,21184
	ctx.r11.s64 = ctx.r11.s64 + 21184;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x8290e430
	ctx.lr = 0x8290C670;
	sub_8290E430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290c690
	if (!ctx.cr6.eq) goto loc_8290C690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290C690:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290C698:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21252
	ctx.r3.s64 = ctx.r11.s64 + 21252;
	// bl 0x829117c8
	ctx.lr = 0x8290C6A8;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C6B8"))) PPC_WEAK_FUNC(sub_8290C6B8);
PPC_FUNC_IMPL(__imp__sub_8290C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21184
	ctx.r11.s64 = ctx.r11.s64 + 21184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8290e420
	ctx.lr = 0x8290C6E4;
	sub_8290E420(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c700
	if (ctx.cr6.eq) goto loc_8290C700;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82912478
	ctx.lr = 0x8290C6FC;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290C700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C718"))) PPC_WEAK_FUNC(sub_8290C718);
PPC_FUNC_IMPL(__imp__sub_8290C718) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82911a28
	ctx.lr = 0x8290C738;
	sub_82911A28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bne cr6,0x8290c764
	if (!ctx.cr6.eq) goto loc_8290C764;
loc_8290C74C:
	// bl 0x8290c128
	ctx.lr = 0x8290C750;
	sub_8290C128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8290C764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290C788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8290c74c
	if (ctx.cr6.eq) goto loc_8290C74C;
	// bl 0x8290c1a0
	ctx.lr = 0x8290C79C;
	sub_8290C1A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290faa8
	ctx.lr = 0x8290C7A8;
	sub_8290FAA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C7C8"))) PPC_WEAK_FUNC(sub_8290C7C8);
PPC_FUNC_IMPL(__imp__sub_8290C7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8290C7D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r11,21296
	ctx.r5.s64 = ctx.r11.s64 + 21296;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x82912420
	ctx.lr = 0x8290C7F8;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290c878
	if (ctx.cr6.eq) goto loc_8290C878;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r10,21196
	ctx.r10.s64 = ctx.r10.s64 + 21196;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290C824:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8290c824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290C824;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290c870
	if (!ctx.cr6.eq) goto loc_8290C870;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290C870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290C878:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21284
	ctx.r3.s64 = ctx.r11.s64 + 21284;
	// bl 0x829117c8
	ctx.lr = 0x8290C888;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C898"))) PPC_WEAK_FUNC(sub_8290C898);
PPC_FUNC_IMPL(__imp__sub_8290C898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21172
	ctx.r11.s64 = ctx.r11.s64 + 21172;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290c8d0
	if (ctx.cr6.eq) goto loc_8290C8D0;
	// li r4,424
	ctx.r4.s64 = 424;
	// bl 0x82912478
	ctx.lr = 0x8290C8CC;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290C8D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C8E8"))) PPC_WEAK_FUNC(sub_8290C8E8);
PPC_FUNC_IMPL(__imp__sub_8290C8E8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x8290c5f0
	sub_8290C5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C900"))) PPC_WEAK_FUNC(sub_8290C900);
PPC_FUNC_IMPL(__imp__sub_8290C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8290c9c8
	if (ctx.cr6.gt) goto loc_8290C9C8;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// addi r12,r12,-14016
	ctx.r12.s64 = ctx.r12.s64 + -14016;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8290C958;
	case 1:
		goto loc_8290C970;
	case 2:
		goto loc_8290C988;
	case 3:
		goto loc_8290C9A0;
	case 4:
		goto loc_8290C9C8;
	case 5:
		goto loc_8290C9C0;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-13992(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13992);
	// lwz r20,-13968(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13968);
	// lwz r20,-13944(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13944);
	// lwz r20,-13920(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13920);
	// lwz r20,-13880(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13880);
	// lwz r20,-13888(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13888);
loc_8290C958:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290c9c8
	if (!ctx.cr6.eq) goto loc_8290C9C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c718
	ctx.lr = 0x8290C96C;
	sub_8290C718(ctx, base);
	// b 0x8290c9c8
	goto loc_8290C9C8;
loc_8290C970:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c9c8
	if (ctx.cr6.eq) goto loc_8290C9C8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fb28
	ctx.lr = 0x8290C984;
	sub_8290FB28(ctx, base);
	// b 0x8290c9c8
	goto loc_8290C9C8;
loc_8290C988:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c9c8
	if (ctx.cr6.eq) goto loc_8290C9C8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8290fb30
	ctx.lr = 0x8290C99C;
	sub_8290FB30(ctx, base);
	// b 0x8290c9c8
	goto loc_8290C9C8;
loc_8290C9A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c9b4
	if (ctx.cr6.eq) goto loc_8290C9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c128
	ctx.lr = 0x8290C9B4;
	sub_8290C128(ctx, base);
loc_8290C9B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c718
	ctx.lr = 0x8290C9BC;
	sub_8290C718(ctx, base);
	// b 0x8290c9c8
	goto loc_8290C9C8;
loc_8290C9C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c1a0
	ctx.lr = 0x8290C9C8;
	sub_8290C1A0(ctx, base);
loc_8290C9C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290c9f8
	if (ctx.cr6.eq) goto loc_8290C9F8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821677d0
	ctx.lr = 0x8290C9E8;
	sub_821677D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8290c9f8
	if (!ctx.cr6.eq) goto loc_8290C9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c128
	ctx.lr = 0x8290C9F8;
	sub_8290C128(ctx, base);
loc_8290C9F8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290ca30
	if (ctx.cr6.eq) goto loc_8290CA30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c310
	ctx.lr = 0x8290CA0C;
	sub_8290C310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290c3b8
	ctx.lr = 0x8290CA14;
	sub_8290C3B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828fe1f0
	ctx.lr = 0x8290CA24;
	sub_828FE1F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_8290CA30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290CA48"))) PPC_WEAK_FUNC(sub_8290CA48);
PPC_FUNC_IMPL(__imp__sub_8290CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290CA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_8290CA60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8290c900
	ctx.lr = 0x8290CAAC;
	sub_8290C900(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,104
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 104, ctx.xer);
	// blt cr6,0x8290ca60
	if (ctx.cr6.lt) goto loc_8290CA60;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CB08"))) PPC_WEAK_FUNC(sub_8290CB08);
PPC_FUNC_IMPL(__imp__sub_8290CB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8290CB10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
loc_8290CB28:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8290cbbc
	if (ctx.cr6.eq) goto loc_8290CBBC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r29,104
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 104, ctx.xer);
	// blt cr6,0x8290cb28
	if (ctx.cr6.lt) goto loc_8290CB28;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290CBBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290CBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CBE0"))) PPC_WEAK_FUNC(sub_8290CBE0);
PPC_FUNC_IMPL(__imp__sub_8290CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// lfs f10,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f1,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// fmadds f10,f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f0,f9,f0,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fnmsubs f0,f8,f4,f0
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f4.f64 - ctx.f0.f64)));
	// fnmsubs f0,f7,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f7.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// fmadds f0,f13,f0,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290CC88"))) PPC_WEAK_FUNC(sub_8290CC88);
PPC_FUNC_IMPL(__imp__sub_8290CC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290CC90;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb74
	ctx.lr = 0x8290CC98;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// addi r8,r31,1772
	ctx.r8.s64 = ctx.r31.s64 + 1772;
	// lis r10,-32046
	ctx.r10.s64 = -2100166656;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f13,1800(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r31,1612
	ctx.r11.s64 = ctx.r31.s64 + 1612;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f0,5264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// and r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 & ctx.r7.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r31,1644
	ctx.r10.s64 = ctx.r31.s64 + 1644;
	// and r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r9,r31,1676
	ctx.r9.s64 = ctx.r31.s64 + 1676;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfsx f0,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// stfsx f13,r7,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r7,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// and r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// fmadds f12,f11,f13,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r8,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r11,r31,1708
	ctx.r11.s64 = ctx.r31.s64 + 1708;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1740
	ctx.r10.s64 = ctx.r31.s64 + 1740;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r6,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r8,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// fmadds f12,f11,f13,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r9,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f31,f12,f13,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CEB0;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CEC0;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CED0;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CEE0;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,732
	ctx.r3.s64 = ctx.r31.s64 + 732;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CEF0;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CF00;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,1084
	ctx.r3.s64 = ctx.r31.s64 + 1084;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CF10;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,1260
	ctx.r3.s64 = ctx.r31.s64 + 1260;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CF20;
	sub_8290CBE0(ctx, base);
	// addi r3,r31,1436
	ctx.r3.s64 = ctx.r31.s64 + 1436;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8290cbe0
	ctx.lr = 0x8290CF30;
	sub_8290CBE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,-3820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3820);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,21336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21336);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f8,f29,f13
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f12,5944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5944);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f11,21332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21332);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmadds f6,f24,f0,f8
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f10,6580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6580);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f5,f29,f10
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// lfs f9,15240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15240);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f8,21328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21328);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmsubs f5,f30,f9,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 - ctx.f5.f64));
	// lfs f7,-2108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2108);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// fnmsubs f13,f27,f13,f5
	ctx.f13.f64 = double(float(-(ctx.f27.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// fmadds f0,f25,f0,f13
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f1,f12,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f0,f23,f12,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f25,f11,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f0,f24,f11,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f27,f10,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f0,f1,f8,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f13,f26,f9,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f0,f26,f7,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f0,f23,f8,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f0,f30,f7,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbc0
	ctx.lr = 0x8290CFE0;
	__restfpr_23(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CFE8"))) PPC_WEAK_FUNC(sub_8290CFE8);
PPC_FUNC_IMPL(__imp__sub_8290CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8290e5b8
	ctx.lr = 0x8290D000;
	sub_8290E5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290e4b8
	ctx.lr = 0x8290D008;
	sub_8290E4B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290d028
	if (ctx.cr6.eq) goto loc_8290D028;
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
	ctx.lr = 0x8290D028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D028:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D040"))) PPC_WEAK_FUNC(sub_8290D040);
PPC_FUNC_IMPL(__imp__sub_8290D040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8290D048;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
loc_8290D05C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d0dc
	if (ctx.cr6.eq) goto loc_8290D0DC;
	// addi r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 6;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82913330
	ctx.lr = 0x8290D09C;
	sub_82913330(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u32);
	// bne cr6,0x8290d0d4
	if (!ctx.cr6.eq) goto loc_8290D0D4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8290D0D4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
loc_8290D0DC:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8290d05c
	if (!ctx.cr6.eq) goto loc_8290D05C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290d17c
	if (!ctx.cr6.eq) goto loc_8290D17C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x829132a8
	ctx.lr = 0x8290D10C;
	sub_829132A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d16c
	if (ctx.cr6.eq) goto loc_8290D16C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8290D16C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82595818
	ctx.lr = 0x8290D17C;
	sub_82595818(ctx, base);
loc_8290D17C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D188"))) PPC_WEAK_FUNC(sub_8290D188);
PPC_FUNC_IMPL(__imp__sub_8290D188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D1C4;
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
}

__attribute__((alias("__imp__sub_8290D1D8"))) PPC_WEAK_FUNC(sub_8290D1D8);
PPC_FUNC_IMPL(__imp__sub_8290D1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290D1E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d218
	if (ctx.cr6.eq) goto loc_8290D218;
loc_8290D200:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290d200
	if (!ctx.cr6.eq) goto loc_8290D200;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8290d224
	if (ctx.cr6.gt) goto loc_8290D224;
loc_8290D218:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290D224:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290d25c
	if (ctx.cr6.eq) goto loc_8290D25C;
	// addi r30,r9,-24
	ctx.r30.s64 = ctx.r9.s64 + -24;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290d250
	if (ctx.cr6.eq) goto loc_8290D250;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828fe758
	ctx.lr = 0x8290D244;
	sub_828FE758(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,428
	ctx.r3.s64 = ctx.r29.s64 + 428;
	// bl 0x82909748
	ctx.lr = 0x8290D250;
	sub_82909748(ctx, base);
loc_8290D250:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290D25C:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D270"))) PPC_WEAK_FUNC(sub_8290D270);
PPC_FUNC_IMPL(__imp__sub_8290D270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290D278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x8290d298
	if (!ctx.cr6.eq) goto loc_8290D298;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8290D298:
	// addi r3,r30,428
	ctx.r3.s64 = ctx.r30.s64 + 428;
	// bl 0x828fe758
	ctx.lr = 0x8290D2A0;
	sub_828FE758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x8290d2b0
	if (!ctx.cr6.eq) goto loc_8290D2B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8290D2B0:
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x82909748
	ctx.lr = 0x8290D2B8;
	sub_82909748(ctx, base);
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826dfd40
	ctx.lr = 0x8290D2C8;
	sub_826DFD40(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D2D8"))) PPC_WEAK_FUNC(sub_8290D2D8);
PPC_FUNC_IMPL(__imp__sub_8290D2D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D2E8"))) PPC_WEAK_FUNC(sub_8290D2E8);
PPC_FUNC_IMPL(__imp__sub_8290D2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290D2F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r30,104
	ctx.r30.s64 = 104;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8290D300:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d320
	if (ctx.cr6.eq) goto loc_8290D320;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8290D320:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8290d300
	if (!ctx.cr6.eq) goto loc_8290D300;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D338"))) PPC_WEAK_FUNC(sub_8290D338);
PPC_FUNC_IMPL(__imp__sub_8290D338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,21412
	ctx.r5.s64 = ctx.r11.s64 + 21412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82912420
	ctx.lr = 0x8290D368;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290d3f0
	if (ctx.cr6.eq) goto loc_8290D3F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290e518
	ctx.lr = 0x8290D37C;
	sub_8290E518(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r10,r11,21348
	ctx.r10.s64 = ctx.r11.s64 + 21348;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8290e430
	ctx.lr = 0x8290D3A4;
	sub_8290E430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8290d3c4
	if (ctx.cr6.eq) goto loc_8290D3C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8290e540
	ctx.lr = 0x8290D3B8;
	sub_8290E540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290d3d8
	if (!ctx.cr6.eq) goto loc_8290D3D8;
loc_8290D3C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D3D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290D3D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8290D3F0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// bl 0x829117c8
	ctx.lr = 0x8290D400;
	sub_829117C8(ctx, base);
	// b 0x8290d3d4
	goto loc_8290D3D4;
}

__attribute__((alias("__imp__sub_8290D408"))) PPC_WEAK_FUNC(sub_8290D408);
PPC_FUNC_IMPL(__imp__sub_8290D408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21348
	ctx.r11.s64 = ctx.r11.s64 + 21348;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8290e420
	ctx.lr = 0x8290D434;
	sub_8290E420(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d450
	if (ctx.cr6.eq) goto loc_8290D450;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82912478
	ctx.lr = 0x8290D44C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290D450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D468"))) PPC_WEAK_FUNC(sub_8290D468);
PPC_FUNC_IMPL(__imp__sub_8290D468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,21444
	ctx.r5.s64 = ctx.r11.s64 + 21444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x82912420
	ctx.lr = 0x8290D498;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290d52c
	if (ctx.cr6.eq) goto loc_8290D52C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,21368
	ctx.r9.s64 = ctx.r11.s64 + 21368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290D4D0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290d4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290D4D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8290d514
	if (!ctx.cr6.eq) goto loc_8290D514;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290D514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8290D52C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21432
	ctx.r3.s64 = ctx.r11.s64 + 21432;
	// bl 0x829117c8
	ctx.lr = 0x8290D53C;
	sub_829117C8(ctx, base);
	// b 0x8290d510
	goto loc_8290D510;
}

__attribute__((alias("__imp__sub_8290D540"))) PPC_WEAK_FUNC(sub_8290D540);
PPC_FUNC_IMPL(__imp__sub_8290D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21172
	ctx.r11.s64 = ctx.r11.s64 + 21172;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290d578
	if (ctx.cr6.eq) goto loc_8290D578;
	// li r4,436
	ctx.r4.s64 = 436;
	// bl 0x82912478
	ctx.lr = 0x8290D574;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290D578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D590"))) PPC_WEAK_FUNC(sub_8290D590);
PPC_FUNC_IMPL(__imp__sub_8290D590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8290D598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_8290D5AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8290d338
	ctx.lr = 0x8290D5B4;
	sub_8290D338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8290d5e8
	if (ctx.cr6.eq) goto loc_8290D5E8;
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// bl 0x828fe6c0
	ctx.lr = 0x8290D5CC;
	sub_828FE6C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,104
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 104, ctx.xer);
	// blt cr6,0x8290d5ac
	if (ctx.cr6.lt) goto loc_8290D5AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8290D5E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D608"))) PPC_WEAK_FUNC(sub_8290D608);
PPC_FUNC_IMPL(__imp__sub_8290D608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x8290D610;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8290d648
	if (ctx.cr6.eq) goto loc_8290D648;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r10,21692
	ctx.r10.s64 = ctx.r10.s64 + 21692;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x829116f0
	ctx.lr = 0x8290D63C;
	sub_829116F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
loc_8290D648:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r27,r6,r11
	ctx.r27.u32 = ctx.r6.u32 / ctx.r11.u32;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8290d668
	if (ctx.cr6.lt) goto loc_8290D668;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8290D668:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290d67c
	if (ctx.cr6.lt) goto loc_8290D67C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8290D67C:
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-7796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7796);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq cr6,0x8290db34
	if (ctx.cr6.eq) goto loc_8290DB34;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r10,r11,21624
	ctx.r10.s64 = ctx.r11.s64 + 21624;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f9,21688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21688);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,23664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f8.f64 = double(temp.f32);
loc_8290D6E4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290db24
	if (ctx.cr6.eq) goto loc_8290DB24;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
loc_8290D6FC:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r11,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8290db34
	if (!ctx.cr6.eq) goto loc_8290DB34;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// xor r25,r25,r8
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r8.u64;
	// mullw r8,r26,r11
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// clrlwi r11,r25,19
	ctx.r11.u64 = ctx.r25.u32 & 0x1FFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f11,-4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r8,6,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3C;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r26,r8,10,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3C;
	// rlwinm r25,r8,14,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3C;
	// lfsx f7,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r8,18,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3C;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f10,f7,f0,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f11,f13,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f10,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r26,r8,26,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3C;
	// fmadds f10,f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsx f10,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r25,r8,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// fmadds f10,f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r8,22,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3C;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f12,f7,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f12,f6,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// rlwinm r5,r8,6,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3C;
	// rlwinm r26,r8,10,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3C;
	// rlwinm r25,r8,26,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3C;
	// rlwinm r24,r8,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// lfsx f7,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r8,14,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3C;
	// fmadds f10,f7,f0,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfsx f7,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r26,r8,18,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3C;
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r8,22,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3C;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// fmadds f11,f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f6,f12,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,44(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f6,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f12,f6,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfsx f10,r24,r10
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,56(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,60(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r5,r8,6,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3C;
	// rlwinm r26,r8,10,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3C;
	// rlwinm r25,r8,18,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3C;
	// rlwinm r24,r8,22,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3C;
	// rlwinm r23,r8,26,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3C;
	// lfsx f7,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r8,14,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3C;
	// fmadds f10,f7,f0,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// rlwinm r22,r8,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// fmadds f10,f11,f13,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,64(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfsx f7,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f6,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f11,f6,f12,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,76(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f6,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r24,r10
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f12,f7,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f11,80(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfsx f10,r23,r10
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,84(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfsx f6,r22,r10
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f11,f6,f0,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,88(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f6,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,92(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r5,r8,6,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3C;
	// rlwinm r26,r8,10,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3C;
	// rlwinm r25,r8,14,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3C;
	// rlwinm r24,r8,18,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3C;
	// rlwinm r23,r8,22,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3C;
	// lfsx f7,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r6,16
	ctx.r5.s64 = ctx.r6.s64 + 16;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f10,f7,f0,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f10,96(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfsx f7,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r26,r8,26,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3C;
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,100(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f6,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r25,r8,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// fmadds f11,f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,104(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r24,r10
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f11,f12,f6,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f11,108(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfsx f7,r23,r10
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f7,f0,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,112(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f6,f12,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,116(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f6,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f11,r25,r10
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f12,f6,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,-4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + -4, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290d6fc
	if (ctx.cr6.lt) goto loc_8290D6FC;
loc_8290DB24:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8290d6e4
	if (ctx.cr6.lt) goto loc_8290D6E4;
loc_8290DB34:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DB58"))) PPC_WEAK_FUNC(sub_8290DB58);
PPC_FUNC_IMPL(__imp__sub_8290DB58) {
	PPC_FUNC_PROLOGUE();
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826dfd40
	sub_826DFD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DB68"))) PPC_WEAK_FUNC(sub_8290DB68);
PPC_FUNC_IMPL(__imp__sub_8290DB68) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DB70"))) PPC_WEAK_FUNC(sub_8290DB70);
PPC_FUNC_IMPL(__imp__sub_8290DB70) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sthx r5,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DB90"))) PPC_WEAK_FUNC(sub_8290DB90);
PPC_FUNC_IMPL(__imp__sub_8290DB90) {
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
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-6412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6412);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x826e0668
	ctx.lr = 0x8290DBE0;
	sub_826E0668(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfd f0,4088(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4088);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,21708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,21704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8290DC68"))) PPC_WEAK_FUNC(sub_8290DC68);
PPC_FUNC_IMPL(__imp__sub_8290DC68) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x8290dc80
	if (!ctx.cr6.lt) goto loc_8290DC80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8290DC80:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r4,32768
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32768, ctx.xer);
	// beq cr6,0x8290dca8
	if (ctx.cr6.eq) goto loc_8290DCA8;
	// li r3,-2
	ctx.r3.s64 = -2;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8290DCA8:
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | ctx.r31.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r5,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r5.u8);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DD70"))) PPC_WEAK_FUNC(sub_8290DD70);
PPC_FUNC_IMPL(__imp__sub_8290DD70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// blt cr6,0x8290ddb4
	if (ctx.cr6.lt) goto loc_8290DDB4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x8290dd8c
	if (ctx.cr6.eq) goto loc_8290DD8C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8290DD8C:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8290ddb4
	if (ctx.cr6.lt) goto loc_8290DDB4;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8290de30
	if (ctx.cr6.lt) goto loc_8290DE30;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bge cr6,0x8290ddbc
	if (!ctx.cr6.lt) goto loc_8290DDBC;
loc_8290DDB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8290DDBC:
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8290de44
	if (ctx.cr6.lt) goto loc_8290DE44;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x8290de44
	if (!ctx.cr6.gt) goto loc_8290DE44;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r8,r6,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8290DE04:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sthx r7,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x8290de04
	if (!ctx.cr6.eq) goto loc_8290DE04;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8290DE30:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
loc_8290DE44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DE50"))) PPC_WEAK_FUNC(sub_8290DE50);
PPC_FUNC_IMPL(__imp__sub_8290DE50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290DE58;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// sth r3,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// blt cr6,0x8290dec0
	if (ctx.cr6.lt) goto loc_8290DEC0;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// bne cr6,0x8290df04
	if (!ctx.cr6.eq) goto loc_8290DF04;
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x8290dec0
	if (ctx.cr6.lt) goto loc_8290DEC0;
	// lbz r3,18(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// li r3,48
	ctx.r3.s64 = 48;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x8290deb8
	if (!ctx.cr6.eq) goto loc_8290DEB8;
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// li r3,60
	ctx.r3.s64 = 60;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8290deb8
	if (ctx.cr6.lt) goto loc_8290DEB8;
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290DEB8:
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8290dec8
	if (!ctx.cr6.lt) goto loc_8290DEC8;
loc_8290DEC0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290DEC8:
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8290dec0
	if (ctx.cr6.lt) goto loc_8290DEC0;
	// li r4,20
	ctx.r4.s64 = 20;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x8290dee4
	if (!ctx.cr6.eq) goto loc_8290DEE4;
	// li r4,32
	ctx.r4.s64 = 32;
loc_8290DEE4:
	// lhzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lhzx r5,r4,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// sth r5,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// beq cr6,0x8290df0c
	if (ctx.cr6.eq) goto loc_8290DF0C;
loc_8290DF04:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8290DF0C:
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// sth r5,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DF58"))) PPC_WEAK_FUNC(sub_8290DF58);
PPC_FUNC_IMPL(__imp__sub_8290DF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290DF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8290dfd8
	if (ctx.cr6.lt) goto loc_8290DFD8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8290e070
	if (!ctx.cr6.eq) goto loc_8290E070;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8290dfd8
	if (ctx.cr6.lt) goto loc_8290DFD8;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,60
	ctx.r11.s64 = 60;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8290dfd0
	if (!ctx.cr6.eq) goto loc_8290DFD0;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,72
	ctx.r11.s64 = 72;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8290dfd0
	if (ctx.cr6.lt) goto loc_8290DFD0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290DFD0:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290dfe4
	if (!ctx.cr6.lt) goto loc_8290DFE4;
loc_8290DFD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8290DFE4:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290dfd8
	if (ctx.cr6.lt) goto loc_8290DFD8;
	// li r11,20
	ctx.r11.s64 = 20;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8290e018
	if (!ctx.cr6.eq) goto loc_8290E018;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,32
	ctx.r11.s64 = 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8290e018
	if (ctx.cr6.lt) goto loc_8290E018;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290E018:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290e030
	if (ctx.cr6.eq) goto loc_8290E030;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_8290E030:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lis r9,16713
	ctx.r9.s64 = 1095303168;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ori r9,r9,20038
	ctx.r9.u64 = ctx.r9.u64 | 20038;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8290e07c
	if (ctx.cr6.eq) goto loc_8290E07C;
loc_8290E070:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8290E07C:
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x826df680
	ctx.lr = 0x8290E098;
	sub_826DF680(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E0C8"))) PPC_WEAK_FUNC(sub_8290E0C8);
PPC_FUNC_IMPL(__imp__sub_8290E0C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bge cr6,0x8290e0e4
	if (!ctx.cr6.lt) goto loc_8290E0E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8290E0E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32769
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32769, ctx.xer);
	// beq cr6,0x8290e108
	if (ctx.cr6.eq) goto loc_8290E108;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8290E108:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E130"))) PPC_WEAK_FUNC(sub_8290E130);
PPC_FUNC_IMPL(__imp__sub_8290E130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290E138;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// blt cr6,0x8290e184
	if (ctx.cr6.lt) goto loc_8290E184;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8290e184
	if (!ctx.cr6.eq) goto loc_8290E184;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8290e184
	if (ctx.cr6.lt) goto loc_8290E184;
	// lbz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_8290E184:
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 5;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290dc68
	ctx.lr = 0x8290E1B8;
	sub_8290DC68(ctx, base);
	// addi r6,r31,38
	ctx.r6.s64 = ctx.r31.s64 + 38;
	// addi r5,r31,22
	ctx.r5.s64 = ctx.r31.s64 + 22;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290dd70
	ctx.lr = 0x8290E1CC;
	sub_8290DD70(ctx, base);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r7,r31,62
	ctx.r7.s64 = ctx.r31.s64 + 62;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290de50
	ctx.lr = 0x8290E1F4;
	sub_8290DE50(ctx, base);
	// addi r8,r31,98
	ctx.r8.s64 = ctx.r31.s64 + 98;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290df58
	ctx.lr = 0x8290E210;
	sub_8290DF58(ctx, base);
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 18, ctx.xer);
	// blt cr6,0x8290e240
	if (ctx.cr6.lt) goto loc_8290E240;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8290e240
	if (!ctx.cr6.eq) goto loc_8290E240;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// blt cr6,0x8290e240
	if (ctx.cr6.lt) goto loc_8290E240;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_8290E240:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E248"))) PPC_WEAK_FUNC(sub_8290E248);
PPC_FUNC_IMPL(__imp__sub_8290E248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E258"))) PPC_WEAK_FUNC(sub_8290E258);
PPC_FUNC_IMPL(__imp__sub_8290E258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E268"))) PPC_WEAK_FUNC(sub_8290E268);
PPC_FUNC_IMPL(__imp__sub_8290E268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E278"))) PPC_WEAK_FUNC(sub_8290E278);
PPC_FUNC_IMPL(__imp__sub_8290E278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E298"))) PPC_WEAK_FUNC(sub_8290E298);
PPC_FUNC_IMPL(__imp__sub_8290E298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E2B0"))) PPC_WEAK_FUNC(sub_8290E2B0);
PPC_FUNC_IMPL(__imp__sub_8290E2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E2C0"))) PPC_WEAK_FUNC(sub_8290E2C0);
PPC_FUNC_IMPL(__imp__sub_8290E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E2D0"))) PPC_WEAK_FUNC(sub_8290E2D0);
PPC_FUNC_IMPL(__imp__sub_8290E2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E2E0"))) PPC_WEAK_FUNC(sub_8290E2E0);
PPC_FUNC_IMPL(__imp__sub_8290E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f2,64(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f3,68(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f4,72(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f5,76(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f6,80(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E318"))) PPC_WEAK_FUNC(sub_8290E318);
PPC_FUNC_IMPL(__imp__sub_8290E318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,29
	ctx.r11.s64 = ctx.r4.s64 + 29;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E330"))) PPC_WEAK_FUNC(sub_8290E330);
PPC_FUNC_IMPL(__imp__sub_8290E330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,37
	ctx.r11.s64 = ctx.r4.s64 + 37;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E348"))) PPC_WEAK_FUNC(sub_8290E348);
PPC_FUNC_IMPL(__imp__sub_8290E348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f2,96(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E360"))) PPC_WEAK_FUNC(sub_8290E360);
PPC_FUNC_IMPL(__imp__sub_8290E360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E370"))) PPC_WEAK_FUNC(sub_8290E370);
PPC_FUNC_IMPL(__imp__sub_8290E370) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,184
	ctx.r10.s64 = ctx.r10.s64 + 184;
loc_8290E384:
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
	// bne cr6,0x8290e384
	if (!ctx.cr6.eq) goto loc_8290E384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E3A0"))) PPC_WEAK_FUNC(sub_8290E3A0);
PPC_FUNC_IMPL(__imp__sub_8290E3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E3B0"))) PPC_WEAK_FUNC(sub_8290E3B0);
PPC_FUNC_IMPL(__imp__sub_8290E3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E3C0"))) PPC_WEAK_FUNC(sub_8290E3C0);
PPC_FUNC_IMPL(__imp__sub_8290E3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E3D0"))) PPC_WEAK_FUNC(sub_8290E3D0);
PPC_FUNC_IMPL(__imp__sub_8290E3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E3E8"))) PPC_WEAK_FUNC(sub_8290E3E8);
PPC_FUNC_IMPL(__imp__sub_8290E3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,312
	ctx.r5.s64 = 312;
	// b 0x826df680
	sub_826DF680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E3F8"))) PPC_WEAK_FUNC(sub_8290E3F8);
PPC_FUNC_IMPL(__imp__sub_8290E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E420"))) PPC_WEAK_FUNC(sub_8290E420);
PPC_FUNC_IMPL(__imp__sub_8290E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E430"))) PPC_WEAK_FUNC(sub_8290E430);
PPC_FUNC_IMPL(__imp__sub_8290E430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,21732
	ctx.r5.s64 = ctx.r11.s64 + 21732;
	// li r4,312
	ctx.r4.s64 = 312;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912310
	ctx.lr = 0x8290E45C;
	sub_82912310(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x8290e490
	if (!ctx.cr6.eq) goto loc_8290E490;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// bl 0x829117c8
	ctx.lr = 0x8290E478;
	sub_829117C8(ctx, base);
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
loc_8290E490:
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8290E49C;
	sub_826DFD40(ctx, base);
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

__attribute__((alias("__imp__sub_8290E4B8"))) PPC_WEAK_FUNC(sub_8290E4B8);
PPC_FUNC_IMPL(__imp__sub_8290E4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290e4e8
	if (ctx.cr6.eq) goto loc_8290E4E8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912370
	ctx.lr = 0x8290E4E0;
	sub_82912370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8290E4E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E500"))) PPC_WEAK_FUNC(sub_8290E500);
PPC_FUNC_IMPL(__imp__sub_8290E500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E510"))) PPC_WEAK_FUNC(sub_8290E510);
PPC_FUNC_IMPL(__imp__sub_8290E510) {
	PPC_FUNC_PROLOGUE();
	// li r3,24576
	ctx.r3.s64 = 24576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E518"))) PPC_WEAK_FUNC(sub_8290E518);
PPC_FUNC_IMPL(__imp__sub_8290E518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,21760
	ctx.r10.s64 = ctx.r11.s64 + 21760;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E540"))) PPC_WEAK_FUNC(sub_8290E540);
PPC_FUNC_IMPL(__imp__sub_8290E540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,21788
	ctx.r5.s64 = ctx.r11.s64 + 21788;
	// li r4,24576
	ctx.r4.s64 = 24576;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912310
	ctx.lr = 0x8290E56C;
	sub_82912310(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x8290e5a0
	if (!ctx.cr6.eq) goto loc_8290E5A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// bl 0x829117c8
	ctx.lr = 0x8290E588;
	sub_829117C8(ctx, base);
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
loc_8290E5A0:
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

__attribute__((alias("__imp__sub_8290E5B8"))) PPC_WEAK_FUNC(sub_8290E5B8);
PPC_FUNC_IMPL(__imp__sub_8290E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290e5e8
	if (ctx.cr6.eq) goto loc_8290E5E8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82912370
	ctx.lr = 0x8290E5E0;
	sub_82912370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8290E5E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E600"))) PPC_WEAK_FUNC(sub_8290E600);
PPC_FUNC_IMPL(__imp__sub_8290E600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290e638
	if (ctx.cr6.eq) goto loc_8290E638;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82912478
	ctx.lr = 0x8290E634;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290E638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E650"))) PPC_WEAK_FUNC(sub_8290E650);
PPC_FUNC_IMPL(__imp__sub_8290E650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290e688
	if (ctx.cr6.eq) goto loc_8290E688;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82912478
	ctx.lr = 0x8290E684;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290E688:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E6A0"))) PPC_WEAK_FUNC(sub_8290E6A0);
PPC_FUNC_IMPL(__imp__sub_8290E6A0) {
	PPC_FUNC_PROLOGUE();
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lfd f12,8(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfd f0,8(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E6D8"))) PPC_WEAK_FUNC(sub_8290E6D8);
PPC_FUNC_IMPL(__imp__sub_8290E6D8) {
	PPC_FUNC_PROLOGUE();
	// lfd f12,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfd f11,8(r5)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfd f0,0(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmul f10,f11,f12
	ctx.f10.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmsub f0,f13,f0,f10
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 - ctx.f10.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// fmadd f0,f12,f13,f11
	ctx.f0.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64;
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E718"))) PPC_WEAK_FUNC(sub_8290E718);
PPC_FUNC_IMPL(__imp__sub_8290E718) {
	PPC_FUNC_PROLOGUE();
	// lfd f13,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmul f10,f13,f13
	ctx.f10.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f12,8(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfd f11,0(r4)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmul f9,f12,f13
	ctx.f9.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f0,0(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmadd f10,f0,f0,f10
	ctx.f10.f64 = ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fmadd f11,f11,f0,f9
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmsub f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64;
	// lfd f0,4080(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4080);
	// fdiv f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 / ctx.f10.f64;
	// fmul f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f0.f64;
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E778"))) PPC_WEAK_FUNC(sub_8290E778);
PPC_FUNC_IMPL(__imp__sub_8290E778) {
	PPC_FUNC_PROLOGUE();
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmul f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 * ctx.f1.f64;
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// lfd f0,8(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// fmul f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 * ctx.f1.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E798"))) PPC_WEAK_FUNC(sub_8290E798);
PPC_FUNC_IMPL(__imp__sub_8290E798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x829132a8
	ctx.lr = 0x8290E7BC;
	sub_829132A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82913218
	ctx.lr = 0x8290E7C8;
	sub_82913218(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8290e7dc
	if (!ctx.cr6.lt) goto loc_8290E7DC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8290E7DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826df680
	ctx.lr = 0x8290E7EC;
	sub_826DF680(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82913228
	ctx.lr = 0x8290E7FC;
	sub_82913228(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x829132b8
	ctx.lr = 0x8290E80C;
	sub_829132B8(ctx, base);
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

__attribute__((alias("__imp__sub_8290E828"))) PPC_WEAK_FUNC(sub_8290E828);
PPC_FUNC_IMPL(__imp__sub_8290E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e858
	if (ctx.cr6.eq) goto loc_8290E858;
	// bl 0x829106e0
	ctx.lr = 0x8290E854;
	sub_829106E0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8290E858:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e86c
	if (ctx.cr6.eq) goto loc_8290E86C;
	// bl 0x829be770
	ctx.lr = 0x8290E868;
	sub_829BE770(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8290E86C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e880
	if (ctx.cr6.eq) goto loc_8290E880;
	// bl 0x829be770
	ctx.lr = 0x8290E87C;
	sub_829BE770(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8290E880:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E898;
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

__attribute__((alias("__imp__sub_8290E8B0"))) PPC_WEAK_FUNC(sub_8290E8B0);
PPC_FUNC_IMPL(__imp__sub_8290E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8290E8B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r11,21856
	ctx.r5.s64 = ctx.r11.s64 + 21856;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82912420
	ctx.lr = 0x8290E8E8;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290e950
	if (ctx.cr6.eq) goto loc_8290E950;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r11,21824
	ctx.r10.s64 = ctx.r11.s64 + 21824;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82913b68
	ctx.lr = 0x8290E920;
	sub_82913B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8290e970
	if (!ctx.cr6.eq) goto loc_8290E970;
loc_8290E92C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8290E950:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21844
	ctx.r3.s64 = ctx.r11.s64 + 21844;
	// bl 0x829117c8
	ctx.lr = 0x8290E960;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8290E970:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,576
	ctx.r4.s64 = 576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82913f10
	ctx.lr = 0x8290E984;
	sub_82913F10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x8290e92c
	if (ctx.cr6.eq) goto loc_8290E92C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r5,r11,21832
	ctx.r5.s64 = ctx.r11.s64 + 21832;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82910ac0
	ctx.lr = 0x8290E9B4;
	sub_82910AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x8290e92c
	if (ctx.cr6.eq) goto loc_8290E92C;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-6248
	ctx.r4.s64 = ctx.r11.s64 + -6248;
	// bl 0x8290fb70
	ctx.lr = 0x8290E9D0;
	sub_8290FB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E9E0"))) PPC_WEAK_FUNC(sub_8290E9E0);
PPC_FUNC_IMPL(__imp__sub_8290E9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21824
	ctx.r11.s64 = ctx.r11.s64 + 21824;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8290ea18
	if (ctx.cr6.eq) goto loc_8290EA18;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82912478
	ctx.lr = 0x8290EA14;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290EA18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EA30"))) PPC_WEAK_FUNC(sub_8290EA30);
PPC_FUNC_IMPL(__imp__sub_8290EA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8290EA38;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ecfc
	if (ctx.cr6.eq) goto loc_8290ECFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290ea60
	if (!ctx.cr6.eq) goto loc_8290EA60;
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
loc_8290EA60:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8290ecf0
	if (!ctx.cr6.eq) goto loc_8290ECF0;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290eb58
	if (!ctx.cr6.eq) goto loc_8290EB58;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x829132a8
	ctx.lr = 0x8290EA80;
	sub_829132A8(ctx, base);
	// addi r5,r31,180
	ctx.r5.s64 = ctx.r31.s64 + 180;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8290e130
	ctx.lr = 0x8290EA90;
	sub_8290E130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8290eb48
	if (ctx.cr6.eq) goto loc_8290EB48;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lbz r10,185(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8290db58
	ctx.lr = 0x8290EAE0;
	sub_8290DB58(ctx, base);
	// lbz r11,185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8290db68
	ctx.lr = 0x8290EAF0;
	sub_8290DB68(ctx, base);
	// lhz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 200);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x8290db90
	ctx.lr = 0x8290EB04;
	sub_8290DB90(ctx, base);
	// lbz r11,185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290eb48
	if (!ctx.cr6.gt) goto loc_8290EB48;
	// addi r30,r31,202
	ctx.r30.s64 = ctx.r31.s64 + 202;
loc_8290EB1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x8290db70
	ctx.lr = 0x8290EB30;
	sub_8290DB70(ctx, base);
	// lbz r11,185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8290eb1c
	if (ctx.cr6.lt) goto loc_8290EB1C;
loc_8290EB48:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x829132b8
	ctx.lr = 0x8290EB58;
	sub_829132B8(ctx, base);
loc_8290EB58:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290ecac
	if (!ctx.cr6.eq) goto loc_8290ECAC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x829132a8
	ctx.lr = 0x8290EB78;
	sub_829132A8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8290e0c8
	ctx.lr = 0x8290EB88;
	sub_8290E0C8(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290eba8
	if (ctx.cr6.eq) goto loc_8290EBA8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829132b8
	ctx.lr = 0x8290EBA0;
	sub_829132B8(ctx, base);
	// stw r25,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r25.u32);
	// b 0x8290ecac
	goto loc_8290ECAC;
loc_8290EBA8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8290ec0c
	if (!ctx.cr6.gt) goto loc_8290EC0C;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
loc_8290EBC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82913218
	ctx.lr = 0x8290EBD0;
	sub_82913218(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290ecd8
	if (ctx.cr6.eq) goto loc_8290ECD8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290ecd8
	if (ctx.cr6.eq) goto loc_8290ECD8;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm r26,r11,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8290ebc4
	if (ctx.cr6.lt) goto loc_8290EBC4;
loc_8290EC0C:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r29,r4,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8290d608
	ctx.lr = 0x8290EC3C;
	sub_8290D608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8290ec4c
	if (ctx.cr6.lt) goto loc_8290EC4C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8290EC4C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x829132b8
	ctx.lr = 0x8290EC68;
	sub_829132B8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8290ecac
	if (!ctx.cr6.gt) goto loc_8290ECAC;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_8290EC84:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82913228
	ctx.lr = 0x8290EC94;
	sub_82913228(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290ec84
	if (ctx.cr6.lt) goto loc_8290EC84;
loc_8290ECAC:
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290ecfc
	if (!ctx.cr6.eq) goto loc_8290ECFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829132a0
	ctx.lr = 0x8290ECC0;
	sub_829132A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8290ecfc
	if (!ctx.cr6.eq) goto loc_8290ECFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290ECD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x829132b8
	ctx.lr = 0x8290ECE8;
	sub_829132B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8290ECF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290ecfc
	if (!ctx.cr6.eq) goto loc_8290ECFC;
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
loc_8290ECFC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290ED08"))) PPC_WEAK_FUNC(sub_8290ED08);
PPC_FUNC_IMPL(__imp__sub_8290ED08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8290ed4c
	if (!ctx.cr6.gt) goto loc_8290ED4C;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8290ED30:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8290ed30
	if (ctx.cr6.lt) goto loc_8290ED30;
loc_8290ED4C:
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8290ED6C:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8290ed6c
	if (ctx.cr6.lt) goto loc_8290ED6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290ED90"))) PPC_WEAK_FUNC(sub_8290ED90);
PPC_FUNC_IMPL(__imp__sub_8290ED90) {
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
	// lis r30,-32046
	ctx.r30.s64 = -2100166656;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,5288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5288);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e1b38
	ctx.lr = 0x8290EDBC;
	sub_826E1B38(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r31,-32046
	ctx.r31.s64 = -2100166656;
	// lfs f1,5284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	ctx.f1.f64 = double(temp.f32);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x826e1b38
	ctx.lr = 0x8290EDD0;
	sub_826E1B38(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,5284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	ctx.f1.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f2,f13,f31,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x826e14c0
	ctx.lr = 0x8290EDF4;
	sub_826E14C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,5284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8290ee08
	if (!ctx.cr6.lt) goto loc_8290EE08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8290EE08:
	// lfs f1,5288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5288);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8290ee18
	if (ctx.cr6.gt) goto loc_8290EE18;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8290EE18:
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

__attribute__((alias("__imp__sub_8290EE38"))) PPC_WEAK_FUNC(sub_8290EE38);
PPC_FUNC_IMPL(__imp__sub_8290EE38) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,196
	ctx.r11.s64 = ctx.r10.s64 + 196;
loc_8290EE44:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290ee9c
	if (ctx.cr6.eq) goto loc_8290EE9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290ee88
	if (ctx.cr6.eq) goto loc_8290EE88;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290ee90
	if (ctx.cr6.eq) goto loc_8290EE90;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290ee98
	if (ctx.cr6.eq) goto loc_8290EE98;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x8290ee44
	if (ctx.cr6.lt) goto loc_8290EE44;
	// b 0x8290ee9c
	goto loc_8290EE9C;
loc_8290EE88:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x8290ee9c
	goto loc_8290EE9C;
loc_8290EE90:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x8290ee9c
	goto loc_8290EE9C;
loc_8290EE98:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
loc_8290EE9C:
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// bne cr6,0x8290eeac
	if (!ctx.cr6.eq) goto loc_8290EEAC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8290EEAC:
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EEC0"))) PPC_WEAK_FUNC(sub_8290EEC0);
PPC_FUNC_IMPL(__imp__sub_8290EEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8290EEC8;
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x8290eef8
	if (!ctx.cr6.eq) goto loc_8290EEF8;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8290ef5c
	if (ctx.cr6.eq) goto loc_8290EF5C;
loc_8290EEF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8290ef1c
	if (!ctx.cr6.gt) goto loc_8290EF1C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8290EF1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8290ef30
	if (!ctx.cr6.lt) goto loc_8290EF30;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8290EF30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8290ef48
	if (!ctx.cr6.gt) goto loc_8290EF48;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8290EF48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x8290ef5c
	if (!ctx.cr6.lt) goto loc_8290EF5C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8290EF5C:
	// lfs f0,1220(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x8290ef74
	if (!ctx.cr6.eq) goto loc_8290EF74;
	// lfs f0,1224(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8290efb8
	if (ctx.cr6.eq) goto loc_8290EFB8;
loc_8290EF74:
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// lfs f1,1216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82903358
	ctx.lr = 0x8290EF8C;
	sub_82903358(ctx, base);
	// addi r30,r28,180
	ctx.r30.s64 = ctx.r28.s64 + 180;
	// li r31,7
	ctx.r31.s64 = 7;
loc_8290EF94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290ed08
	ctx.lr = 0x8290EFA0;
	sub_8290ED08(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8290ef94
	if (!ctx.cr6.eq) goto loc_8290EF94;
	// stfs f30,1220(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1220, temp.u32);
	// stfs f31,1224(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1224, temp.u32);
loc_8290EFB8:
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

__attribute__((alias("__imp__sub_8290EFC8"))) PPC_WEAK_FUNC(sub_8290EFC8);
PPC_FUNC_IMPL(__imp__sub_8290EFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8290b590
	ctx.lr = 0x8290EFE0;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r10,r11,21912
	ctx.r10.s64 = ctx.r11.s64 + 21912;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r10,19312
	ctx.r7.s64 = ctx.r10.s64 + 19312;
loc_8290F000:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290F018:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290f018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290F018;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290F030:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290f030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290F030;
	// addi r10,r11,84
	ctx.r10.s64 = ctx.r11.s64 + 84;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290F048:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290f048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290F048;
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290F060:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290f060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290F060;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8290f000
	if (!ctx.cr6.lt) goto loc_8290F000;
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

__attribute__((alias("__imp__sub_8290F098"))) PPC_WEAK_FUNC(sub_8290F098);
PPC_FUNC_IMPL(__imp__sub_8290F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8290F0A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f0cc
	if (ctx.cr6.eq) goto loc_8290F0CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F0CC:
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290f358
	if (ctx.cr6.eq) goto loc_8290F358;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r29,124
	ctx.r11.s64 = ctx.r29.s64 + 124;
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
	// lfs f10,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f10.f64 = double(temp.f32);
loc_8290F0F0:
	// lbzx r10,r28,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290f344
	if (ctx.cr6.eq) goto loc_8290F344;
	// lfs f0,1220(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x8290f344
	if (ctx.cr6.eq) goto loc_8290F344;
	// lfs f0,1224(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x8290f344
	if (ctx.cr6.eq) goto loc_8290F344;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8290f12c
	if (ctx.cr6.lt) goto loc_8290F12C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8290f134
	goto loc_8290F134;
loc_8290F12C:
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8290F134:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8290f2c8
	if (ctx.cr6.lt) goto loc_8290F2C8;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290F154:
	// lfs f3,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,-36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f0,f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fnmsubs f0,f6,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fnmsubs f0,f13,f5,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,-36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// fmadds f0,f13,f8,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fnmsubs f0,f6,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fnmsubs f0,f12,f5,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmadds f11,f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f12,-36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// fmadds f0,f13,f8,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f11.f64));
	// lfs f13,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f6,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fnmsubs f0,f12,f5,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,-36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f0,f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fnmsubs f0,f6,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fnmsubs f0,f13,f5,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// bne cr6,0x8290f154
	if (!ctx.cr6.eq) goto loc_8290F154;
loc_8290F2C8:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8290f344
	if (!ctx.cr6.lt) goto loc_8290F344;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_8290F2DC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,-72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,-36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// fmadds f0,f13,f8,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fnmsubs f0,f6,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fnmsubs f0,f12,f5,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// stfs f0,-40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8290f2dc
	if (!ctx.cr6.eq) goto loc_8290F2DC;
loc_8290F344:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8290f0f0
	if (ctx.cr6.lt) goto loc_8290F0F0;
loc_8290F358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F360"))) PPC_WEAK_FUNC(sub_8290F360);
PPC_FUNC_IMPL(__imp__sub_8290F360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8290F368;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290f38c
	if (ctx.cr6.eq) goto loc_8290F38C;
	// lwz r3,76(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F38C:
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290f3c0
	if (ctx.cr6.eq) goto loc_8290F3C0;
	// addi r10,r25,40
	ctx.r10.s64 = ctx.r25.s64 + 40;
loc_8290F3A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8290f5b4
	if (ctx.cr6.eq) goto loc_8290F5B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8290f3a4
	if (ctx.cr6.lt) goto loc_8290F3A4;
loc_8290F3C0:
	// lwz r29,72(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290f5ac
	if (ctx.cr6.eq) goto loc_8290F5AC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r28,r25,40
	ctx.r28.s64 = ctx.r25.s64 + 40;
	// addi r24,r23,80
	ctx.r24.s64 = ctx.r23.s64 + 80;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8290F3E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x829132a8
	ctx.lr = 0x8290F3EC;
	sub_829132A8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8290f400
	if (!ctx.cr6.eq) goto loc_8290F400;
	// stbx r21,r24,r27
	PPC_STORE_U8(ctx.r24.u32 + ctx.r27.u32, ctx.r21.u8);
	// b 0x8290f594
	goto loc_8290F594;
loc_8290F400:
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290f414
	if (!ctx.cr6.lt) goto loc_8290F414;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_8290F414:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290f46c
	if (!ctx.cr6.eq) goto loc_8290F46C;
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8290f448
	if (ctx.cr6.gt) goto loc_8290F448;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x8290F440;
	sub_826DF680(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8290f584
	goto loc_8290F584;
loc_8290F448:
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8290F454;
	sub_826DFD40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826df680
	ctx.lr = 0x8290F464;
	sub_826DF680(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8290f584
	goto loc_8290F584;
loc_8290F46C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8290f590
	if (!ctx.cr6.eq) goto loc_8290F590;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290f484
	if (ctx.cr6.lt) goto loc_8290F484;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8290F484:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// blt cr6,0x8290f534
	if (ctx.cr6.lt) goto loc_8290F534;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290F4B0:
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lhz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8290f4b0
	if (!ctx.cr6.eq) goto loc_8290F4B0;
loc_8290F534:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8290f580
	if (!ctx.cr6.lt) goto loc_8290F580;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
loc_8290F550:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x8290f550
	if (!ctx.cr6.eq) goto loc_8290F550;
loc_8290F580:
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_8290F584:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x829132b8
	ctx.lr = 0x8290F590;
	sub_829132B8(ctx, base);
loc_8290F590:
	// stbx r22,r24,r27
	PPC_STORE_U8(ctx.r24.u32 + ctx.r27.u32, ctx.r22.u8);
loc_8290F594:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290f3e0
	if (ctx.cr6.lt) goto loc_8290F3E0;
loc_8290F5AC:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r11,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r11.u32);
loc_8290F5B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F5C0"))) PPC_WEAK_FUNC(sub_8290F5C0);
PPC_FUNC_IMPL(__imp__sub_8290F5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x8290F5C8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826dfb88
	ctx.lr = 0x8290F5D0;
	__savefpr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4480(r1)
	ea = -4480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f29,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lfs f31,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
loc_8290F618:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8290f618
	if (ctx.cr6.lt) goto loc_8290F618;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f65c
	if (ctx.cr6.eq) goto loc_8290F65C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F65C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8290f6b8
	if (!ctx.cr6.lt) goto loc_8290F6B8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82903f00
	ctx.lr = 0x8290F678;
	sub_82903F00(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290f6a4
	if (ctx.cr6.eq) goto loc_8290F6A4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8290F68C:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8290f68c
	if (ctx.cr6.lt) goto loc_8290F68C;
loc_8290F6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4480
	ctx.r1.s64 = ctx.r1.s64 + 4480;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826dfbd4
	ctx.lr = 0x8290F6B4;
	__restfpr_28(ctx, base);
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
loc_8290F6B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290f8c8
	if (ctx.cr6.eq) goto loc_8290F8C8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// subf r21,r22,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r22.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r22,80
	ctx.r24.s64 = ctx.r22.s64 + 80;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lfs f30,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r27,68
	ctx.r28.s64 = ctx.r27.s64 + 68;
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// lfs f28,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// li r20,1
	ctx.r20.s64 = 1;
loc_8290F6F4:
	// lbzx r11,r21,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290f818
	if (ctx.cr6.eq) goto loc_8290F818;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8290f734
	if (ctx.cr6.eq) goto loc_8290F734;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290f734
	if (!ctx.cr6.eq) goto loc_8290F734;
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290f728
	if (!ctx.cr6.lt) goto loc_8290F728;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8290F728:
	// rlwinm r5,r23,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8290F734;
	sub_826DFD40(ctx, base);
loc_8290F734:
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290f748
	if (!ctx.cr6.lt) goto loc_8290F748;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8290F748:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8290f760
	if (ctx.cr6.lt) goto loc_8290F760;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8290f768
	goto loc_8290F768;
loc_8290F760:
	// lwzx r11,r21,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r29.u32);
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8290F768:
	// lbzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// lfs f31,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8290f798
	if (ctx.cr6.eq) goto loc_8290F798;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbx r25,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r25.u8);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x8290f7a0
	goto loc_8290F7A0;
loc_8290F798:
	// lfs f13,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_8290F7A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8290f808
	if (ctx.cr6.eq) goto loc_8290F808;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8290F7B8:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8290f7e4
	if (ctx.cr6.lt) goto loc_8290F7E4;
loc_8290F7C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8290f7e4
	if (!ctx.cr6.lt) goto loc_8290F7E4;
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8290f7c0
	if (!ctx.cr6.lt) goto loc_8290F7C0;
loc_8290F7E4:
	// fsubs f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmadds f12,f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8290f7b8
	if (!ctx.cr6.eq) goto loc_8290F7B8;
loc_8290F808:
	// stfs f13,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + -32, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stb r20,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r20.u8);
	// b 0x8290f8b0
	goto loc_8290F8B0;
loc_8290F818:
	// stfs f28,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + -32, temp.u32);
	// stfs f28,0(r28)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290f830
	if (ctx.cr6.eq) goto loc_8290F830;
	// stbx r25,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r25.u8);
loc_8290F830:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290f864
	if (!ctx.cr6.eq) goto loc_8290F864;
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8290f850
	if (!ctx.cr6.lt) goto loc_8290F850;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8290F850:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8290F864;
	sub_826DFD40(ctx, base);
loc_8290F864:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
loc_8290F8B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8290f6f4
	if (ctx.cr6.lt) goto loc_8290F6F4;
loc_8290F8C8:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f31,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r19,68(r22)
	PPC_STORE_U32(ctx.r22.u32 + 68, ctx.r19.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290f8fc
	if (ctx.cr6.eq) goto loc_8290F8FC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8290F8E4:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8290f8e4
	if (ctx.cr6.lt) goto loc_8290F8E4;
loc_8290F8FC:
	// addi r1,r1,4480
	ctx.r1.s64 = ctx.r1.s64 + 4480;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826dfbd4
	ctx.lr = 0x8290F908;
	__restfpr_28(ctx, base);
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F910"))) PPC_WEAK_FUNC(sub_8290F910);
PPC_FUNC_IMPL(__imp__sub_8290F910) {
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
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290f95c
	if (ctx.cr6.lt) goto loc_8290F95C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f99c
	if (ctx.cr6.eq) goto loc_8290F99C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8290F95C:
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r9.u32);
	// stb r11,80(r4)
	PPC_STORE_U8(ctx.r4.u32 + 80, ctx.r11.u8);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_8290F99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290F9B0"))) PPC_WEAK_FUNC(sub_8290F9B0);
PPC_FUNC_IMPL(__imp__sub_8290F9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8290F9D0"))) PPC_WEAK_FUNC(sub_8290F9D0);
PPC_FUNC_IMPL(__imp__sub_8290F9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290F9D8"))) PPC_WEAK_FUNC(sub_8290F9D8);
PPC_FUNC_IMPL(__imp__sub_8290F9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8290b5c0
	ctx.lr = 0x8290FA04;
	sub_8290B5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290fa20
	if (ctx.cr6.eq) goto loc_8290FA20;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82912478
	ctx.lr = 0x8290FA1C;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290FA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FA38"))) PPC_WEAK_FUNC(sub_8290FA38);
PPC_FUNC_IMPL(__imp__sub_8290FA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290fa6c
	if (ctx.cr6.eq) goto loc_8290FA6C;
	// lwz r5,72(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r4,64(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290FA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290FA6C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8290ea30
	ctx.lr = 0x8290FA74;
	sub_8290EA30(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82234d70
	ctx.lr = 0x8290FA7C;
	sub_82234D70(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8290fa94
	if (!ctx.cr6.eq) goto loc_8290FA94;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8290FA94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FAA8"))) PPC_WEAK_FUNC(sub_8290FAA8);
PPC_FUNC_IMPL(__imp__sub_8290FAA8) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8290fadc
	if (ctx.cr6.eq) goto loc_8290FADC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8290faf0
	if (!ctx.cr6.eq) goto loc_8290FAF0;
loc_8290FADC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stb r10,61(r11)
	PPC_STORE_U8(ctx.r11.u32 + 61, ctx.r10.u8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_8290FAF0:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82911610
	ctx.lr = 0x8290FAF8;
	sub_82911610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FB28"))) PPC_WEAK_FUNC(sub_8290FB28);
PPC_FUNC_IMPL(__imp__sub_8290FB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82911660
	sub_82911660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FB30"))) PPC_WEAK_FUNC(sub_8290FB30);
PPC_FUNC_IMPL(__imp__sub_8290FB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82910c48
	ctx.lr = 0x8290FB50;
	sub_82910C48(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82911660
	ctx.lr = 0x8290FB58;
	sub_82911660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FB70"))) PPC_WEAK_FUNC(sub_8290FB70);
PPC_FUNC_IMPL(__imp__sub_8290FB70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FB80"))) PPC_WEAK_FUNC(sub_8290FB80);
PPC_FUNC_IMPL(__imp__sub_8290FB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82910c50
	sub_82910C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FB88"))) PPC_WEAK_FUNC(sub_8290FB88);
PPC_FUNC_IMPL(__imp__sub_8290FB88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,21956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21956);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290fbbc
	if (ctx.cr6.lt) goto loc_8290FBBC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,21952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8290fbc0
	if (!ctx.cr6.gt) goto loc_8290FBC0;
loc_8290FBBC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8290FBC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,30088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f1,4088(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4088);
	// bl 0x826e14c0
	ctx.lr = 0x8290FBD8;
	sub_826E14C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FC08"))) PPC_WEAK_FUNC(sub_8290FC08);
PPC_FUNC_IMPL(__imp__sub_8290FC08) {
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
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// fmuls f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f11,f9
	ctx.f11.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f11,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82910c28
	ctx.lr = 0x8290FCC4;
	sub_82910C28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FCD8"))) PPC_WEAK_FUNC(sub_8290FCD8);
PPC_FUNC_IMPL(__imp__sub_8290FCD8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x8290ed90
	ctx.lr = 0x8290FD04;
	sub_8290ED90(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8290ed90
	ctx.lr = 0x8290FD10;
	sub_8290ED90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8290fd40
	if (!ctx.cr6.eq) goto loc_8290FD40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bne cr6,0x8290fd40
	if (!ctx.cr6.eq) goto loc_8290FD40;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8290fd44
	goto loc_8290FD44;
loc_8290FD40:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_8290FD44:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x8290eec0
	ctx.lr = 0x8290FD4C;
	sub_8290EEC0(ctx, base);
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

__attribute__((alias("__imp__sub_8290FD70"))) PPC_WEAK_FUNC(sub_8290FD70);
PPC_FUNC_IMPL(__imp__sub_8290FD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FD98"))) PPC_WEAK_FUNC(sub_8290FD98);
PPC_FUNC_IMPL(__imp__sub_8290FD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,154
	ctx.r11.s64 = ctx.r11.s64 + 154;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FDC0"))) PPC_WEAK_FUNC(sub_8290FDC0);
PPC_FUNC_IMPL(__imp__sub_8290FDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FDD0"))) PPC_WEAK_FUNC(sub_8290FDD0);
PPC_FUNC_IMPL(__imp__sub_8290FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,14088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r11,21960
	ctx.r9.s64 = ctx.r11.s64 + 21960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,22184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22184);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f13,152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r31,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r31.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8290FE90:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8290fe90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290FE90;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FEA8"))) PPC_WEAK_FUNC(sub_8290FEA8);
PPC_FUNC_IMPL(__imp__sub_8290FEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8290FEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8290fee4
	if (ctx.cr6.eq) goto loc_8290FEE4;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x8290fee4
	if (ctx.cr6.gt) goto loc_8290FEE4;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
loc_8290FEE4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ff10
	if (ctx.cr6.eq) goto loc_8290FF10;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290ff10
	if (ctx.cr6.eq) goto loc_8290FF10;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290ff10
	if (ctx.cr6.eq) goto loc_8290FF10;
	// bl 0x8290b808
	ctx.lr = 0x8290FF0C;
	sub_8290B808(ctx, base);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
loc_8290FF10:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ff3c
	if (ctx.cr6.eq) goto loc_8290FF3C;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290ff3c
	if (ctx.cr6.eq) goto loc_8290FF3C;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290ff3c
	if (ctx.cr6.eq) goto loc_8290FF3C;
	// bl 0x8290b808
	ctx.lr = 0x8290FF38;
	sub_8290B808(ctx, base);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
loc_8290FF3C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ff68
	if (ctx.cr6.eq) goto loc_8290FF68;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290ff68
	if (ctx.cr6.eq) goto loc_8290FF68;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290ff68
	if (ctx.cr6.eq) goto loc_8290FF68;
	// bl 0x8290b808
	ctx.lr = 0x8290FF64;
	sub_8290B808(ctx, base);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
loc_8290FF68:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ff94
	if (ctx.cr6.eq) goto loc_8290FF94;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290ff94
	if (ctx.cr6.eq) goto loc_8290FF94;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290ff94
	if (ctx.cr6.eq) goto loc_8290FF94;
	// bl 0x8290b808
	ctx.lr = 0x8290FF90;
	sub_8290B808(ctx, base);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
loc_8290FF94:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ffc0
	if (ctx.cr6.eq) goto loc_8290FFC0;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290ffc0
	if (ctx.cr6.eq) goto loc_8290FFC0;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8290ffc0
	if (ctx.cr6.eq) goto loc_8290FFC0;
	// bl 0x8290b808
	ctx.lr = 0x8290FFBC;
	sub_8290B808(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
loc_8290FFC0:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ffe4
	if (ctx.cr6.eq) goto loc_8290FFE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290FFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_8290FFE4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910008
	if (ctx.cr6.eq) goto loc_82910008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
loc_82910008:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8291002c
	if (ctx.cr6.eq) goto loc_8291002C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
loc_8291002C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910050
	if (ctx.cr6.eq) goto loc_82910050;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8291004C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
loc_82910050:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910064
	if (ctx.cr6.eq) goto loc_82910064;
	// bl 0x82910c08
	ctx.lr = 0x82910060;
	sub_82910C08(ctx, base);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
loc_82910064:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910088
	if (ctx.cr6.eq) goto loc_82910088;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_82910088:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829100a0
	if (ctx.cr6.eq) goto loc_829100A0;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x82912478
	ctx.lr = 0x8291009C;
	sub_82912478(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_829100A0:
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// li r30,8
	ctx.r30.s64 = 8;
loc_829100A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829100bc
	if (ctx.cr6.eq) goto loc_829100BC;
	// bl 0x829be770
	ctx.lr = 0x829100B8;
	sub_829BE770(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_829100BC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x829100a8
	if (!ctx.cr6.eq) goto loc_829100A8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829100D8"))) PPC_WEAK_FUNC(sub_829100D8);
PPC_FUNC_IMPL(__imp__sub_829100D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r31,1216
	ctx.r11.s64 = ctx.r31.s64 + 1216;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r9,19312
	ctx.r9.s64 = ctx.r9.s64 + 19312;
loc_82910104:
	// addi r11,r11,-148
	ctx.r11.s64 = ctx.r11.s64 + -148;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge cr6,0x82910104
	if (!ctx.cr6.lt) goto loc_82910104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290b5c0
	ctx.lr = 0x82910120;
	sub_8290B5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8291013c
	if (ctx.cr6.eq) goto loc_8291013C;
	// li r4,1228
	ctx.r4.s64 = 1228;
	// bl 0x82912478
	ctx.lr = 0x82910138;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8291013C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910158"))) PPC_WEAK_FUNC(sub_82910158);
PPC_FUNC_IMPL(__imp__sub_82910158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82910160;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r5,r11,22000
	ctx.r5.s64 = ctx.r11.s64 + 22000;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82912420
	ctx.lr = 0x82910194;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8291020c
	if (ctx.cr6.eq) goto loc_8291020C;
	// bl 0x8290b590
	ctx.lr = 0x829101A4;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,21920
	ctx.r11.s64 = ctx.r11.s64 + 21920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// beq cr6,0x829101fc
	if (ctx.cr6.eq) goto loc_829101FC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829101E0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x829101e0
	if (!ctx.cr6.eq) goto loc_829101E0;
loc_829101FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8291020C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21988
	ctx.r3.s64 = ctx.r11.s64 + 21988;
	// bl 0x829117c8
	ctx.lr = 0x8291021C;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910230"))) PPC_WEAK_FUNC(sub_82910230);
PPC_FUNC_IMPL(__imp__sub_82910230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8290b5c0
	ctx.lr = 0x82910250;
	sub_8290B5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8291026c
	if (ctx.cr6.eq) goto loc_8291026C;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82912478
	ctx.lr = 0x82910268;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8291026C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910288"))) PPC_WEAK_FUNC(sub_82910288);
PPC_FUNC_IMPL(__imp__sub_82910288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82910290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,22020
	ctx.r5.s64 = ctx.r11.s64 + 22020;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82912420
	ctx.lr = 0x829102B4;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82910324
	if (ctx.cr6.eq) goto loc_82910324;
	// bl 0x8290b590
	ctx.lr = 0x829102C4;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r11,21928
	ctx.r11.s64 = ctx.r11.s64 + 21928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,3544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_829102FC:
	// stfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x829102fc
	if (ctx.cr6.lt) goto loc_829102FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82910324:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// bl 0x829117c8
	ctx.lr = 0x82910334;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910340"))) PPC_WEAK_FUNC(sub_82910340);
PPC_FUNC_IMPL(__imp__sub_82910340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82910348;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb80
	ctx.lr = 0x82910350;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x829103a0
	if (!ctx.cr6.eq) goto loc_829103A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910554
	if (ctx.cr6.eq) goto loc_82910554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbcc
	ctx.lr = 0x8291039C;
	__restfpr_26(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_829103A0:
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lfs f27,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,72(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// fmuls f26,f0,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829103d4
	if (ctx.cr6.eq) goto loc_829103D4;
	// addi r11,r28,80
	ctx.r11.s64 = ctx.r28.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_829103C8:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x829103c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829103C8;
loc_829103D4:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82910400
	if (ctx.cr6.eq) goto loc_82910400;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_82910400:
	// lbz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82910410
	if (!ctx.cr6.eq) goto loc_82910410;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82910410:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82910554
	if (ctx.cr6.eq) goto loc_82910554;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f29,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,21756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21756);
	ctx.f28.f64 = double(temp.f32);
loc_82910430:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// ble cr6,0x82910440
	if (!ctx.cr6.gt) goto loc_82910440;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82910444
	goto loc_82910444;
loc_82910440:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82910444:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82910564
	if (!ctx.cr6.gt) goto loc_82910564;
	// lbz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82910464
	if (!ctx.cr6.eq) goto loc_82910464;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82910464
	if (ctx.cr6.eq) goto loc_82910464;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_82910464:
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f11,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x829104b8
	if (!ctx.cr6.lt) goto loc_829104B8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_829104B8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829104dc
	if (ctx.cr6.eq) goto loc_829104DC;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f13,f0,f12,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
loc_829104DC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829104ec
	if (!ctx.cr6.eq) goto loc_829104EC;
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
loc_829104EC:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// ble cr6,0x8291050c
	if (!ctx.cr6.gt) goto loc_8291050C;
	// li r31,128
	ctx.r31.s64 = 128;
loc_82910508:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_8291050C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8290f5c0
	ctx.lr = 0x82910524;
	sub_8290F5C0(ctx, base);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x8291054c
	if (!ctx.cr6.lt) goto loc_8291054C;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_8291054C:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82910430
	if (ctx.cr6.lt) goto loc_82910430;
loc_82910554:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbcc
	ctx.lr = 0x82910560;
	__restfpr_26(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82910564:
	// subf r7,r30,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r30.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x82910508
	goto loc_82910508;
}

__attribute__((alias("__imp__sub_82910578"))) PPC_WEAK_FUNC(sub_82910578);
PPC_FUNC_IMPL(__imp__sub_82910578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8290b5c0
	ctx.lr = 0x82910598;
	sub_8290B5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829105b4
	if (ctx.cr6.eq) goto loc_829105B4;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x82912478
	ctx.lr = 0x829105B0;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829105B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829105D0"))) PPC_WEAK_FUNC(sub_829105D0);
PPC_FUNC_IMPL(__imp__sub_829105D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x829105D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r11,22044
	ctx.r5.s64 = ctx.r11.s64 + 22044;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82912420
	ctx.lr = 0x829105FC;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8291063c
	if (ctx.cr6.eq) goto loc_8291063C;
	// bl 0x8290b590
	ctx.lr = 0x8291060C;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,21936
	ctx.r11.s64 = ctx.r11.s64 + 21936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8291063C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// bl 0x829117c8
	ctx.lr = 0x8291064C;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910658"))) PPC_WEAK_FUNC(sub_82910658);
PPC_FUNC_IMPL(__imp__sub_82910658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82910660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r5,r11,22068
	ctx.r5.s64 = ctx.r11.s64 + 22068;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82912420
	ctx.lr = 0x8291068C;
	sub_82912420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829106c4
	if (ctx.cr6.eq) goto loc_829106C4;
	// bl 0x8290b590
	ctx.lr = 0x8291069C;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_829106C4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// bl 0x829117c8
	ctx.lr = 0x829106D4;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829106E0"))) PPC_WEAK_FUNC(sub_829106E0);
PPC_FUNC_IMPL(__imp__sub_829106E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8290fea8
	ctx.lr = 0x829106F8;
	sub_8290FEA8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82910718
	if (ctx.cr6.eq) goto loc_82910718;
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
	ctx.lr = 0x82910718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910730"))) PPC_WEAK_FUNC(sub_82910730);
PPC_FUNC_IMPL(__imp__sub_82910730) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8290fa38
	sub_8290FA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291073C"))) PPC_WEAK_FUNC(sub_8291073C);
PPC_FUNC_IMPL(__imp__sub_8291073C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910740"))) PPC_WEAK_FUNC(sub_82910740);
PPC_FUNC_IMPL(__imp__sub_82910740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21960
	ctx.r11.s64 = ctx.r11.s64 + 21960;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82910778
	if (ctx.cr6.eq) goto loc_82910778;
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x82912478
	ctx.lr = 0x82910774;
	sub_82912478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82910778:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910790"))) PPC_WEAK_FUNC(sub_82910790);
PPC_FUNC_IMPL(__imp__sub_82910790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82910798;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_829107B8:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82913f10
	ctx.lr = 0x829107CC;
	sub_82913F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x829107b8
	if (ctx.cr6.lt) goto loc_829107B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,21900
	ctx.r5.s64 = ctx.r11.s64 + 21900;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x82912420
	ctx.lr = 0x82910800;
	sub_82912420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82910838
	if (!ctx.cr6.eq) goto loc_82910838;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21888
	ctx.r3.s64 = ctx.r11.s64 + 21888;
	// bl 0x829117c8
	ctx.lr = 0x8291081C;
	sub_829117C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82910840
	goto loc_82910840;
loc_82910824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82910828:
	// bl 0x8290fea8
	ctx.lr = 0x8291082C;
	sub_8290FEA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82910838:
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
loc_82910840:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r4,r10,22148
	ctx.r4.s64 = ctx.r10.s64 + 22148;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82910158
	ctx.lr = 0x829108D4;
	sub_82910158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r10,1840
	ctx.r9.s64 = ctx.r10.s64 + 1840;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,22136
	ctx.r4.s64 = ctx.r10.s64 + 22136;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// bl 0x82911510
	ctx.lr = 0x82910904;
	sub_82911510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82910828
	if (ctx.cr6.eq) goto loc_82910828;
	// lfs f6,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8290fc08
	ctx.lr = 0x82910930;
	sub_8290FC08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,21976
	ctx.r5.s64 = ctx.r11.s64 + 21976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1228
	ctx.r3.s64 = 1228;
	// bl 0x82912420
	ctx.lr = 0x82910948;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8291095c
	if (ctx.cr6.eq) goto loc_8291095C;
	// bl 0x8290efc8
	ctx.lr = 0x82910954;
	sub_8290EFC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82910974
	if (!ctx.cr6.eq) goto loc_82910974;
loc_8291095C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,21964
	ctx.r3.s64 = ctx.r11.s64 + 21964;
	// bl 0x829117c8
	ctx.lr = 0x8291096C;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82910990
	goto loc_82910990;
loc_82910974:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22120
	ctx.r11.s64 = ctx.r11.s64 + 22120;
	// lfs f0,14092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1216, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82910990:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8290eec0
	ctx.lr = 0x829109AC;
	sub_8290EEC0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,22104
	ctx.r4.s64 = ctx.r11.s64 + 22104;
	// bl 0x82910288
	ctx.lr = 0x829109BC;
	sub_82910288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,22092
	ctx.r4.s64 = ctx.r10.s64 + 22092;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x829105d0
	ctx.lr = 0x829109EC;
	sub_829105D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r4,r11,22076
	ctx.r4.s64 = ctx.r11.s64 + 22076;
	// bl 0x82910658
	ctx.lr = 0x82910A10;
	sub_82910658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8290b748
	ctx.lr = 0x82910A28;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8290b748
	ctx.lr = 0x82910A40;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x8290b748
	ctx.lr = 0x82910A58;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x8290b748
	ctx.lr = 0x82910A70;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8290b748
	ctx.lr = 0x82910A88;
	sub_8290B748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8290ee38
	ctx.lr = 0x82910AA4;
	sub_8290EE38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// beq cr6,0x82910824
	if (ctx.cr6.eq) goto loc_82910824;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910AC0"))) PPC_WEAK_FUNC(sub_82910AC0);
PPC_FUNC_IMPL(__imp__sub_82910AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82910AC8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r5,r11,22172
	ctx.r5.s64 = ctx.r11.s64 + 22172;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82912420
	ctx.lr = 0x82910B00;
	sub_82912420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910b2c
	if (ctx.cr6.eq) goto loc_82910B2C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290fdd0
	ctx.lr = 0x82910B20;
	sub_8290FDD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82910b4c
	if (!ctx.cr6.eq) goto loc_82910B4C;
loc_82910B2C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// bl 0x829117c8
	ctx.lr = 0x82910B3C;
	sub_829117C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82910B4C:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910790
	ctx.lr = 0x82910B6C;
	sub_82910790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82910b98
	if (!ctx.cr6.eq) goto loc_82910B98;
	// bl 0x8290fea8
	ctx.lr = 0x82910B7C;
	sub_8290FEA8(ctx, base);
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
	ctx.lr = 0x82910B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82910B98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910BA8"))) PPC_WEAK_FUNC(sub_82910BA8);
PPC_FUNC_IMPL(__imp__sub_82910BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82910bb8
	if (ctx.cr6.eq) goto loc_82910BB8;
loc_82910BB4:
	// b 0x82910bb4
	goto loc_82910BB4;
loc_82910BB8:
	// li r8,8
	ctx.r8.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
loc_82910BE0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82910be0
	if (ctx.cr6.lt) goto loc_82910BE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910C08"))) PPC_WEAK_FUNC(sub_82910C08);
PPC_FUNC_IMPL(__imp__sub_82910C08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82910C24"))) PPC_WEAK_FUNC(sub_82910C24);
PPC_FUNC_IMPL(__imp__sub_82910C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910C28"))) PPC_WEAK_FUNC(sub_82910C28);
PPC_FUNC_IMPL(__imp__sub_82910C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// stw r5,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r5.u32);
	// stw r6,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r6.u32);
	// stw r7,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r7.u32);
	// stw r8,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910C48"))) PPC_WEAK_FUNC(sub_82910C48);
PPC_FUNC_IMPL(__imp__sub_82910C48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910C50"))) PPC_WEAK_FUNC(sub_82910C50);
PPC_FUNC_IMPL(__imp__sub_82910C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910C58"))) PPC_WEAK_FUNC(sub_82910C58);
PPC_FUNC_IMPL(__imp__sub_82910C58) {
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
	// bl 0x8290b590
	ctx.lr = 0x82910C78;
	sub_8290B590(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lfs f0,13888(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13888);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,13888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13888);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32046
	ctx.r10.s64 = -2100166656;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lfs f0,5312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5312);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32046
	ctx.r10.s64 = -2100166656;
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f0,5308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5308);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910CF8"))) PPC_WEAK_FUNC(sub_82910CF8);
PPC_FUNC_IMPL(__imp__sub_82910CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addi r8,r3,104
	ctx.r8.s64 = ctx.r3.s64 + 104;
	// lwz r7,240(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lfs f0,22188(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r5,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,244(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,244(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82910d68
	if (!ctx.cr6.eq) goto loc_82910D68;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r9,r9,22184
	ctx.r9.s64 = ctx.r9.s64 + 22184;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82910d8c
	goto loc_82910D8C;
loc_82910D68:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r9,r9,22184
	ctx.r9.s64 = ctx.r9.s64 + 22184;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82910D8C:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f0,22188(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,248(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lfs f13,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82910e34
	if (ctx.cr6.eq) goto loc_82910E34;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82910E34:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f0,22188(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f11,f12,f13
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f13,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910E90"))) PPC_WEAK_FUNC(sub_82910E90);
PPC_FUNC_IMPL(__imp__sub_82910E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82910ec8
	if (ctx.cr6.eq) goto loc_82910EC8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82910EC8:
	// li r10,6
	ctx.r10.s64 = 6;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,22188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stw r8,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910F08"))) PPC_WEAK_FUNC(sub_82910F08);
PPC_FUNC_IMPL(__imp__sub_82910F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82910F10;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,264(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f0,22184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82910f78
	if (!ctx.cr6.eq) goto loc_82910F78;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911180
	if (ctx.cr6.eq) goto loc_82911180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,28(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82910F78:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,22188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82910fe4
	if (!ctx.cr6.eq) goto loc_82910FE4;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82910fac
	if (ctx.cr6.eq) goto loc_82910FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82910FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82910FAC:
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82911180
	if (ctx.cr6.eq) goto loc_82911180;
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82910FC4:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82910fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82910FC4;
	// stfs f30,28(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82910FE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82910ba8
	ctx.lr = 0x82910FF0;
	sub_82910BA8(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82911014
	if (ctx.cr6.eq) goto loc_82911014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82911014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82911014:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// beq cr6,0x82911154
	if (ctx.cr6.eq) goto loc_82911154;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,80
	ctx.r31.s64 = ctx.r30.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82911044:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82911058
	if (!ctx.cr6.lt) goto loc_82911058;
	// lwzx r4,r28,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
loc_82911058:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82911070
	if (ctx.cr6.lt) goto loc_82911070;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x82911078
	goto loc_82911078;
loc_82911070:
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82911078:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8291113c
	if (!ctx.cr6.eq) goto loc_8291113C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8291113c
	if (ctx.cr6.eq) goto loc_8291113C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8291113c
	if (ctx.cr6.eq) goto loc_8291113C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82911100
	if (ctx.cr6.lt) goto loc_82911100;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r8,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_829110BC:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f0,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x829110bc
	if (!ctx.cr6.eq) goto loc_829110BC;
loc_82911100:
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82911134
	if (!ctx.cr6.lt) goto loc_82911134;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_82911118:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82911118
	if (!ctx.cr6.eq) goto loc_82911118;
loc_82911134:
	// stb r25,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// b 0x82911140
	goto loc_82911140;
loc_8291113C:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_82911140:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82911044
	if (ctx.cr6.lt) goto loc_82911044;
loc_82911154:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82911180
	if (ctx.cr6.eq) goto loc_82911180;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82911168:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82911168
	if (ctx.cr6.lt) goto loc_82911168;
loc_82911180:
	// stfs f30,28(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

