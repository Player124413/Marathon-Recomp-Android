#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82209208"))) PPC_WEAK_FUNC(sub_82209208);
PPC_FUNC_IMPL(__imp__sub_82209208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r9,-2
	ctx.r9.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x82209258
	if (ctx.cr6.eq) goto loc_82209258;
	// lfs f13,540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8220925c
	goto loc_8220925C;
loc_82209258:
	// lfs f13,388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
loc_8220925C:
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209278"))) PPC_WEAK_FUNC(sub_82209278);
PPC_FUNC_IMPL(__imp__sub_82209278) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stb r11,227(r8)
	PPC_STORE_U8(ctx.r8.u32 + 227, ctx.r11.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822092A0"))) PPC_WEAK_FUNC(sub_822092A0);
PPC_FUNC_IMPL(__imp__sub_822092A0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,-2
	ctx.r9.s64 = -2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,224(r10)
	PPC_STORE_U8(ctx.r10.u32 + 224, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,225(r10)
	PPC_STORE_U8(ctx.r10.u32 + 225, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209334
	if (ctx.cr6.eq) goto loc_82209334;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lfs f0,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220931C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,3544
	ctx.r10.s64 = ctx.r11.s64 + 3544;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82209368
	if (!ctx.cr6.gt) goto loc_82209368;
	// b 0x8220935c
	goto loc_8220935C;
loc_82209334:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,3544
	ctx.r10.s64 = ctx.r10.s64 + 3544;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8220935C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_82209368:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209388"))) PPC_WEAK_FUNC(sub_82209388);
PPC_FUNC_IMPL(__imp__sub_82209388) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,-7
	ctx.r10.s64 = ctx.r10.s64 + -7;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x82209490
	if (ctx.cr6.gt) goto loc_82209490;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-27712
	ctx.r12.s64 = ctx.r12.s64 + -27712;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82209430;
	case 1:
		goto loc_82209490;
	case 2:
		goto loc_82209454;
	case 3:
		goto loc_82209490;
	case 4:
		goto loc_82209490;
	case 5:
		goto loc_82209490;
	case 6:
		goto loc_82209490;
	case 7:
		goto loc_82209490;
	case 8:
		goto loc_822093E8;
	case 9:
		goto loc_8220940C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-27600(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27600);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27564(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27564);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27504(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27504);
	// lwz r17,-27672(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27672);
	// lwz r17,-27636(0)
	ctx.r17.u64 = PPC_LOAD_U32(-27636);
loc_822093E8:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209490
	if (ctx.cr6.eq) goto loc_82209490;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// b 0x82209490
	goto loc_82209490;
loc_8220940C:
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209490
	if (ctx.cr6.eq) goto loc_82209490;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// b 0x82209490
	goto loc_82209490;
loc_82209430:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209490
	if (ctx.cr6.eq) goto loc_82209490;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// b 0x82209490
	goto loc_82209490;
loc_82209454:
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82209490
	if (ctx.cr6.eq) goto loc_82209490;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,15
	ctx.r9.s64 = 15;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_82209490:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822094e0
	if (ctx.cr6.eq) goto loc_822094E0;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x822094c8
	if (!ctx.cr6.eq) goto loc_822094C8;
	// li r4,3
	ctx.r4.s64 = 3;
loc_822094C8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822094D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822094E0:
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

__attribute__((alias("__imp__sub_822094F8"))) PPC_WEAK_FUNC(sub_822094F8);
PPC_FUNC_IMPL(__imp__sub_822094F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 226, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82209538
	if (!ctx.cr6.eq) goto loc_82209538;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,17
	ctx.r7.s64 = 17;
	// b 0x82209544
	goto loc_82209544;
loc_82209538:
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,19
	ctx.r8.s64 = 19;
	// li r7,20
	ctx.r7.s64 = 20;
loc_82209544:
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-2
	ctx.r9.s64 = -2;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209598"))) PPC_WEAK_FUNC(sub_82209598);
PPC_FUNC_IMPL(__imp__sub_82209598) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,226(r10)
	PPC_STORE_U8(ctx.r10.u32 + 226, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822095B8"))) PPC_WEAK_FUNC(sub_822095B8);
PPC_FUNC_IMPL(__imp__sub_822095B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r9.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209620"))) PPC_WEAK_FUNC(sub_82209620);
PPC_FUNC_IMPL(__imp__sub_82209620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r9,-2
	ctx.r9.s64 = -2;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r8,237(r11)
	PPC_STORE_U8(ctx.r11.u32 + 237, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209660"))) PPC_WEAK_FUNC(sub_82209660);
PPC_FUNC_IMPL(__imp__sub_82209660) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82209688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82209698
	if (ctx.cr6.eq) goto loc_82209698;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x822096a4
	if (!ctx.cr6.eq) goto loc_822096A4;
loc_82209698:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
loc_822096A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,237(r10)
	PPC_STORE_U8(ctx.r10.u32 + 237, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822096E8"))) PPC_WEAK_FUNC(sub_822096E8);
PPC_FUNC_IMPL(__imp__sub_822096E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209730"))) PPC_WEAK_FUNC(sub_82209730);
PPC_FUNC_IMPL(__imp__sub_82209730) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,244(r10)
	PPC_STORE_U8(ctx.r10.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209748"))) PPC_WEAK_FUNC(sub_82209748);
PPC_FUNC_IMPL(__imp__sub_82209748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,86
	ctx.r9.s64 = 86;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209788"))) PPC_WEAK_FUNC(sub_82209788);
PPC_FUNC_IMPL(__imp__sub_82209788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,-2
	ctx.r8.s64 = -2;
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 250, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822097E0"))) PPC_WEAK_FUNC(sub_822097E0);
PPC_FUNC_IMPL(__imp__sub_822097E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,234(r10)
	PPC_STORE_U8(ctx.r10.u32 + 234, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,250(r10)
	PPC_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209808"))) PPC_WEAK_FUNC(sub_82209808);
PPC_FUNC_IMPL(__imp__sub_82209808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,-2
	ctx.r9.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,231(r8)
	PPC_STORE_U8(ctx.r8.u32 + 231, ctx.r11.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209848"))) PPC_WEAK_FUNC(sub_82209848);
PPC_FUNC_IMPL(__imp__sub_82209848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209858"))) PPC_WEAK_FUNC(sub_82209858);
PPC_FUNC_IMPL(__imp__sub_82209858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f10,f10,f1,f9
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f1.f64 - ctx.f9.f64)));
	// lfs f12,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmsubs f13,f11,f1,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f13.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,8156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822098ec
	if (!ctx.cr6.gt) goto loc_822098EC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26060);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x822098f0
	if (!ctx.cr6.lt) goto loc_822098F0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822098ec
	if (!ctx.cr6.gt) goto loc_822098EC;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
loc_822098EC:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_822098F0:
	// fadds f1,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822098F8"))) PPC_WEAK_FUNC(sub_822098F8);
PPC_FUNC_IMPL(__imp__sub_822098F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,85
	ctx.r10.s64 = 85;
	// li r9,-2
	ctx.r9.s64 = -2;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r8,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209930"))) PPC_WEAK_FUNC(sub_82209930);
PPC_FUNC_IMPL(__imp__sub_82209930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209980"))) PPC_WEAK_FUNC(sub_82209980);
PPC_FUNC_IMPL(__imp__sub_82209980) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,228(r10)
	PPC_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822099A0"))) PPC_WEAK_FUNC(sub_822099A0);
PPC_FUNC_IMPL(__imp__sub_822099A0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82209a10
	if (ctx.cr6.eq) goto loc_82209A10;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x822099f4
	if (!ctx.cr6.eq) goto loc_822099F4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_822099F4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822099FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82209a10
	if (ctx.cr6.eq) goto loc_82209A10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82209b2c
	goto loc_82209B2C;
loc_82209A10:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82209b28
	if (ctx.cr6.gt) goto loc_82209B28;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-26048
	ctx.r12.s64 = ctx.r12.s64 + -26048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82209A50;
	case 1:
		goto loc_82209A90;
	case 2:
		goto loc_82209AD4;
	case 3:
		goto loc_82209B14;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26032(0)
	ctx.r17.u64 = PPC_LOAD_U32(-26032);
	// lwz r17,-25968(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25968);
	// lwz r17,-25900(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25900);
	// lwz r17,-25836(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25836);
loc_82209A50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,22004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82209b28
	if (!ctx.cr6.gt) goto loc_82209B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82209b28
	goto loc_82209B28;
loc_82209A90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209acc
	if (ctx.cr6.eq) goto loc_82209ACC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// b 0x82209b28
	goto loc_82209B28;
loc_82209ACC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82209b1c
	goto loc_82209B1C;
loc_82209AD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,22004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82209b28
	if (!ctx.cr6.gt) goto loc_82209B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82209b28
	goto loc_82209B28;
loc_82209B14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
loc_82209B1C:
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_82209B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209B2C:
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

__attribute__((alias("__imp__sub_82209B48"))) PPC_WEAK_FUNC(sub_82209B48);
PPC_FUNC_IMPL(__imp__sub_82209B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,231(r10)
	PPC_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,245(r10)
	PPC_STORE_U8(ctx.r10.u32 + 245, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,247(r10)
	PPC_STORE_U8(ctx.r10.u32 + 247, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209B80"))) PPC_WEAK_FUNC(sub_82209B80);
PPC_FUNC_IMPL(__imp__sub_82209B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,85
	ctx.r10.s64 = 85;
	// li r9,-2
	ctx.r9.s64 = -2;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r8,250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 250, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209BC0"))) PPC_WEAK_FUNC(sub_82209BC0);
PPC_FUNC_IMPL(__imp__sub_82209BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,233(r9)
	PPC_STORE_U8(ctx.r9.u32 + 233, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r9)
	PPC_STORE_U8(ctx.r9.u32 + 234, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209BE8"))) PPC_WEAK_FUNC(sub_82209BE8);
PPC_FUNC_IMPL(__imp__sub_82209BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,25
	ctx.r8.s64 = 25;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C58"))) PPC_WEAK_FUNC(sub_82209C58);
PPC_FUNC_IMPL(__imp__sub_82209C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,76
	ctx.r8.s64 = 76;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209CC8"))) PPC_WEAK_FUNC(sub_82209CC8);
PPC_FUNC_IMPL(__imp__sub_82209CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,75
	ctx.r8.s64 = 75;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209D38"))) PPC_WEAK_FUNC(sub_82209D38);
PPC_FUNC_IMPL(__imp__sub_82209D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,238(r9)
	PPC_STORE_U8(ctx.r9.u32 + 238, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,231(r9)
	PPC_STORE_U8(ctx.r9.u32 + 231, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,233(r9)
	PPC_STORE_U8(ctx.r9.u32 + 233, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r9)
	PPC_STORE_U8(ctx.r9.u32 + 234, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209D70"))) PPC_WEAK_FUNC(sub_82209D70);
PPC_FUNC_IMPL(__imp__sub_82209D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,87
	ctx.r9.s64 = 87;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209DC0"))) PPC_WEAK_FUNC(sub_82209DC0);
PPC_FUNC_IMPL(__imp__sub_82209DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,231(r9)
	PPC_STORE_U8(ctx.r9.u32 + 231, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,242(r9)
	PPC_STORE_U8(ctx.r9.u32 + 242, ctx.r11.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,243(r9)
	PPC_STORE_U8(ctx.r9.u32 + 243, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,227(r10)
	PPC_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209DF0"))) PPC_WEAK_FUNC(sub_82209DF0);
PPC_FUNC_IMPL(__imp__sub_82209DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,88
	ctx.r9.s64 = 88;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209E40"))) PPC_WEAK_FUNC(sub_82209E40);
PPC_FUNC_IMPL(__imp__sub_82209E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,93
	ctx.r9.s64 = 93;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209E90"))) PPC_WEAK_FUNC(sub_82209E90);
PPC_FUNC_IMPL(__imp__sub_82209E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,98
	ctx.r9.s64 = 98;
	// li r8,-2
	ctx.r8.s64 = -2;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209EE0"))) PPC_WEAK_FUNC(sub_82209EE0);
PPC_FUNC_IMPL(__imp__sub_82209EE0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-31112
	ctx.r4.s64 = ctx.r11.s64 + -31112;
	// bl 0x8221dce8
	ctx.lr = 0x82209F00;
	sub_8221DCE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r10,r11,-26088
	ctx.r10.s64 = ctx.r11.s64 + -26088;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r9,r11,-25944
	ctx.r9.s64 = ctx.r11.s64 + -25944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// addi r8,r11,-25952
	ctx.r8.s64 = ctx.r11.s64 + -25952;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r10,r10,-4608
	ctx.r10.s64 = ctx.r10.s64 + -4608;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r7,r11,-25964
	ctx.r7.s64 = ctx.r11.s64 + -25964;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r6,r11,-26020
	ctx.r6.s64 = ctx.r11.s64 + -26020;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r5,r11,-26052
	ctx.r5.s64 = ctx.r11.s64 + -26052;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209FB8"))) PPC_WEAK_FUNC(sub_82209FB8);
PPC_FUNC_IMPL(__imp__sub_82209FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82209ff4
	if (ctx.cr6.lt) goto loc_82209FF4;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82209FF4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A000"))) PPC_WEAK_FUNC(sub_8220A000);
PPC_FUNC_IMPL(__imp__sub_8220A000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8220A008;
	__savegprlr_25(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a04c
	if (!ctx.cr6.gt) goto loc_8220A04C;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a044
	if (ctx.cr6.lt) goto loc_8220A044;
	// addi r11,r1,-76
	ctx.r11.s64 = ctx.r1.s64 + -76;
loc_8220A044:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
loc_8220A04C:
	// ld r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 200);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x8220a070
	if (!ctx.cr6.eq) goto loc_8220A070;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A070:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r7,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r7.u32);
	// stw r7,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// std r7,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r7.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// stw r7,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r7.u32);
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
	// beq cr6,0x8220a09c
	if (ctx.cr6.eq) goto loc_8220A09C;
	// stb r6,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r6.u8);
loc_8220A09C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r11,r11,-25928
	ctx.r11.s64 = ctx.r11.s64 + -25928;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8220A0AC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,216(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq cr6,0x8220a0d0
	if (ctx.cr6.eq) goto loc_8220A0D0;
	// stb r6,273(r10)
	PPC_STORE_U8(ctx.r10.u32 + 273, ctx.r6.u8);
	// b 0x8220a0d4
	goto loc_8220A0D4;
loc_8220A0D0:
	// stb r7,273(r10)
	PPC_STORE_U8(ctx.r10.u32 + 273, ctx.r7.u8);
loc_8220A0D4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220a0ac
	if (!ctx.cr6.eq) goto loc_8220A0AC;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a0f8
	if (ctx.cr6.eq) goto loc_8220A0F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
loc_8220A0F8:
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a128
	if (!ctx.cr6.gt) goto loc_8220A128;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-76
	ctx.r11.s64 = ctx.r1.s64 + -76;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a120
	if (ctx.cr6.lt) goto loc_8220A120;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
loc_8220A120:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
loc_8220A128:
	// lfs f13,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a158
	if (!ctx.cr6.gt) goto loc_8220A158;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-76
	ctx.r11.s64 = ctx.r1.s64 + -76;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a150
	if (ctx.cr6.lt) goto loc_8220A150;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
loc_8220A150:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
loc_8220A158:
	// lfs f13,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a188
	if (!ctx.cr6.gt) goto loc_8220A188;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-76
	ctx.r11.s64 = ctx.r1.s64 + -76;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a180
	if (ctx.cr6.lt) goto loc_8220A180;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
loc_8220A180:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
loc_8220A188:
	// lbz r11,226(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 226);
	// lbz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r7,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// bne cr6,0x8220a1f8
	if (!ctx.cr6.eq) goto loc_8220A1F8;
	// lbz r11,229(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 229);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220a1f8
	if (!ctx.cr6.eq) goto loc_8220A1F8;
	// lbz r11,258(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220a1f8
	if (!ctx.cr6.eq) goto loc_8220A1F8;
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220a1f8
	if (ctx.cr6.gt) goto loc_8220A1F8;
	// lfs f13,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a1fc
	if (!ctx.cr6.gt) goto loc_8220A1FC;
loc_8220A1F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8220A1FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,239(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 239);
	// lbz r5,238(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 238);
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r4,237(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 237);
	// lbz r31,236(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 236);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r30,234(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 234);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lbz r29,233(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 233);
	// lbz r28,231(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 231);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r27,230(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 230);
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// lbz r26,227(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 227);
	// rlwimi r11,r9,0,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r4.s64;
	// rlwimi r11,r9,0,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r31.s64;
	// rlwimi r11,r9,0,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r30.s64;
	// rlwimi r11,r9,0,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r29.s64;
	// rlwimi r11,r9,0,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r28.s64;
	// rlwimi r11,r9,0,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r27.s64;
	// rlwimi r11,r9,0,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r26.s64;
	// rlwimi r11,r9,0,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r11,r9,0,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// lbz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// andi. r11,r11,7932
	ctx.r11.u64 = ctx.r11.u64 & 7932;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bgt cr6,0x8220a2cc
	if (ctx.cr6.gt) goto loc_8220A2CC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A2CC:
	// lbz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// lbz r5,241(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 241);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// beq cr6,0x8220a300
	if (ctx.cr6.eq) goto loc_8220A300;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x8220a304
	goto loc_8220A304;
loc_8220A300:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A304:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,242(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 242);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a320
	if (!ctx.cr6.eq) goto loc_8220A320;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A320:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,243(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 243);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a33c
	if (!ctx.cr6.eq) goto loc_8220A33C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A33C:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a358
	if (!ctx.cr6.eq) goto loc_8220A358;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A358:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a374
	if (!ctx.cr6.eq) goto loc_8220A374;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A374:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,253(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a390
	if (!ctx.cr6.eq) goto loc_8220A390;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A390:
	// lbz r9,254(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 254);
	// lbz r8,255(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 255);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a3c0
	if (!ctx.cr6.eq) goto loc_8220A3C0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A3C0:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,258(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a3dc
	if (!ctx.cr6.eq) goto loc_8220A3DC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A3DC:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,263(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 263);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a3f8
	if (!ctx.cr6.eq) goto loc_8220A3F8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A3F8:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a414
	if (!ctx.cr6.eq) goto loc_8220A414;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A414:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,225(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8220a430
	if (!ctx.cr6.eq) goto loc_8220A430;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A430:
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// bgt cr6,0x8220a44c
	if (ctx.cr6.gt) goto loc_8220A44C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A44C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// bgt cr6,0x8220a474
	if (ctx.cr6.gt) goto loc_8220A474;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A474:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,266(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 266);
	// lbz r8,262(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 262);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lbz r6,251(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 251);
	// lbz r5,259(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 259);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r4,257(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 257);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lbz r31,256(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lbz r30,250(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 250);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r29,249(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 249);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// lbz r28,247(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 247);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r27,246(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 246);
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r26,245(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 245);
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// lbz r25,232(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// rlwimi r9,r10,0,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// lbz r8,265(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r6,248(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// rlwimi r9,r10,0,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// rlwimi r9,r11,0,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// rlwimi r9,r11,0,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// rlwimi r9,r11,0,24,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// rlwimi r9,r11,0,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// rlwimi r9,r11,0,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r27.s64;
	// rlwimi r9,r11,0,27,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r26.s64;
	// rlwimi r9,r11,0,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r25.s64;
	// rlwimi r9,r11,0,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// lbz r11,261(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 261);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// rlwimi r9,r10,0,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r6.s64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// andi. r9,r9,28158
	ctx.r9.u64 = ctx.r9.u64 & 28158;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// beq cr6,0x8220a590
	if (ctx.cr6.eq) goto loc_8220A590;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x8220a594
	goto loc_8220A594;
loc_8220A590:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A594:
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r11,271(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// bne cr6,0x8220a5b0
	if (!ctx.cr6.eq) goto loc_8220A5B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A5B0:
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// bne cr6,0x8220a5cc
	if (!ctx.cr6.eq) goto loc_8220A5CC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8220A5CC:
	// lbz r9,267(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 267);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// lfs f13,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lwz r8,156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwimi r9,r11,0,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// andi. r11,r9,10
	ctx.r11.u64 = ctx.r9.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// bne cr6,0x8220a614
	if (!ctx.cr6.eq) goto loc_8220A614;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8220A614:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r7,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r7.u8);
	// stb r7,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r7.u8);
	// stb r7,261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 261, ctx.r7.u8);
	// stb r7,271(r3)
	PPC_STORE_U8(ctx.r3.u32 + 271, ctx.r7.u8);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A630"))) PPC_WEAK_FUNC(sub_8220A630);
PPC_FUNC_IMPL(__imp__sub_8220A630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f3,44(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// stfs f4,52(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 52, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a674
	if (!ctx.cr6.gt) goto loc_8220A674;
	// lfs f12,340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a66c
	if (ctx.cr6.lt) goto loc_8220A66C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220A66C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
loc_8220A674:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8220a698
	if (ctx.cr6.gt) goto loc_8220A698;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,44
	ctx.r11.s64 = ctx.r1.s64 + 44;
	// fmadds f0,f1,f2,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// b 0x8220a6d0
	goto loc_8220A6D0;
loc_8220A698:
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8220a6e4
	if (!ctx.cr6.eq) goto loc_8220A6E4;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// beq cr6,0x8220a6c4
	if (ctx.cr6.eq) goto loc_8220A6C4;
	// lfs f0,532(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8220a6c8
	goto loc_8220A6C8;
loc_8220A6C4:
	// lfs f0,336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
loc_8220A6C8:
	// fnmsubs f0,f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
loc_8220A6D0:
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// blt cr6,0x8220a6dc
	if (ctx.cr6.lt) goto loc_8220A6DC;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220A6DC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_8220A6E4:
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A708"))) PPC_WEAK_FUNC(sub_8220A708);
PPC_FUNC_IMPL(__imp__sub_8220A708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220a724
	if (ctx.cr6.gt) goto loc_8220A724;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220A724:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f4,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a740
	if (ctx.cr6.eq) goto loc_8220A740;
	// lfs f3,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_8220A740:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 200);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220a764
	if (ctx.cr6.eq) goto loc_8220A764;
	// lfs f3,556(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_8220A764:
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lfs f3,360(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a780
	if (ctx.cr6.eq) goto loc_8220A780;
	// lfs f2,536(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_8220A780:
	// lfs f2,356(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A788"))) PPC_WEAK_FUNC(sub_8220A788);
PPC_FUNC_IMPL(__imp__sub_8220A788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220a7a4
	if (ctx.cr6.gt) goto loc_8220A7A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220A7A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f4,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a7c0
	if (ctx.cr6.eq) goto loc_8220A7C0;
	// lfs f3,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_8220A7C0:
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a7dc
	if (ctx.cr6.eq) goto loc_8220A7DC;
	// lfs f3,360(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,536(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
loc_8220A7DC:
	// lfs f3,556(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8220a630
	sub_8220A630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A7E8"))) PPC_WEAK_FUNC(sub_8220A7E8);
PPC_FUNC_IMPL(__imp__sub_8220A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a824
	if (!ctx.cr6.gt) goto loc_8220A824;
	// fnmsubs f13,f1,f2,f13
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f2.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a818
	if (ctx.cr6.lt) goto loc_8220A818;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220A818:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
loc_8220A824:
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fnmsubs f13,f1,f2,f13
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f2.f64 - ctx.f13.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a84c
	if (ctx.cr6.lt) goto loc_8220A84C;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_8220A84C:
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

__attribute__((alias("__imp__sub_8220A858"))) PPC_WEAK_FUNC(sub_8220A858);
PPC_FUNC_IMPL(__imp__sub_8220A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220a898
	if (!ctx.cr6.gt) goto loc_8220A898;
	// lfs f12,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a88c
	if (ctx.cr6.lt) goto loc_8220A88C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220A88C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
loc_8220A898:
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f12,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a8c4
	if (ctx.cr6.lt) goto loc_8220A8C4;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_8220A8C4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A8D0"))) PPC_WEAK_FUNC(sub_8220A8D0);
PPC_FUNC_IMPL(__imp__sub_8220A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220a8ec
	if (ctx.cr6.gt) goto loc_8220A8EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220A8EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a904
	if (ctx.cr6.eq) goto loc_8220A904;
	// stfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_8220A904:
	// lfs f13,376(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f1,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220a92c
	if (ctx.cr6.lt) goto loc_8220A92C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220A92C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A938"))) PPC_WEAK_FUNC(sub_8220A938);
PPC_FUNC_IMPL(__imp__sub_8220A938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8220A940;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-25536
	ctx.r31.s64 = ctx.r11.s64 + -25536;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r27,196(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r28,200(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// lwz r26,220(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
loc_8220A964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220a998
	if (!ctx.cr6.eq) goto loc_8220A998;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aa6c
	if (!ctx.cr6.eq) goto loc_8220AA6C;
loc_8220A998:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bne cr6,0x8220a964
	if (!ctx.cr6.eq) goto loc_8220A964;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-25760
	ctx.r31.s64 = ctx.r11.s64 + -25760;
loc_8220A9B4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8220a9e8
	if (!ctx.cr6.eq) goto loc_8220A9E8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aa6c
	if (!ctx.cr6.eq) goto loc_8220AA6C;
loc_8220A9E8:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,224
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 224, ctx.xer);
	// bne cr6,0x8220a9b4
	if (!ctx.cr6.eq) goto loc_8220A9B4;
	// rlwinm r31,r28,0,8,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x8220aaac
	if (ctx.cr6.eq) goto loc_8220AAAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aa44
	if (ctx.cr6.eq) goto loc_8220AA44;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aa6c
	if (!ctx.cr6.eq) goto loc_8220AA6C;
loc_8220AA44:
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x8220aaac
	if (ctx.cr6.eq) goto loc_8220AAAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220aa78
	if (!ctx.cr6.gt) goto loc_8220AA78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8220aa7c
	goto loc_8220AA7C;
loc_8220AA6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8220AA78:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220AA7C:
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aaac
	if (ctx.cr6.eq) goto loc_8220AAAC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aa6c
	if (!ctx.cr6.eq) goto loc_8220AA6C;
loc_8220AAAC:
	// rlwinm r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aaec
	if (ctx.cr6.eq) goto loc_8220AAEC;
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aaec
	if (!ctx.cr6.eq) goto loc_8220AAEC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220aaf0
	if (!ctx.cr6.eq) goto loc_8220AAF0;
loc_8220AAEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220AAF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AAF8"))) PPC_WEAK_FUNC(sub_8220AAF8);
PPC_FUNC_IMPL(__imp__sub_8220AAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8220AB00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,196(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r27,200(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x8220a938
	ctx.lr = 0x8220AB18;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ab30
	if (ctx.cr6.eq) goto loc_8220AB30;
loc_8220AB24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8220AB30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-25504
	ctx.r31.s64 = ctx.r11.s64 + -25504;
loc_8220AB3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220ab70
	if (!ctx.cr6.eq) goto loc_8220AB70;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ab24
	if (!ctx.cr6.eq) goto loc_8220AB24;
loc_8220AB70:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bne cr6,0x8220ab3c
	if (!ctx.cr6.eq) goto loc_8220AB3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-25512
	ctx.r31.s64 = ctx.r11.s64 + -25512;
loc_8220AB8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8220abc0
	if (!ctx.cr6.eq) goto loc_8220ABC0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ABB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ab24
	if (!ctx.cr6.eq) goto loc_8220AB24;
loc_8220ABC0:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bne cr6,0x8220ab8c
	if (!ctx.cr6.eq) goto loc_8220AB8C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ac0c
	if (!ctx.cr6.eq) goto loc_8220AC0C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ABFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ac10
	if (!ctx.cr6.eq) goto loc_8220AC10;
loc_8220AC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220AC10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AC18"))) PPC_WEAK_FUNC(sub_8220AC18);
PPC_FUNC_IMPL(__imp__sub_8220AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8220AC20;
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f30,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8220ac50
	if (!ctx.cr6.gt) goto loc_8220AC50;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8220ac54
	goto loc_8220AC54;
loc_8220AC50:
	// lfs f31,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
loc_8220AC54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,196(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x8220aaf8
	ctx.lr = 0x8220AC64;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ad90
	if (!ctx.cr6.eq) goto loc_8220AD90;
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aca0
	if (ctx.cr6.eq) goto loc_8220ACA0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ad90
	if (!ctx.cr6.eq) goto loc_8220AD90;
loc_8220ACA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8220acb8
	if (ctx.cr6.gt) goto loc_8220ACB8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220ACB8:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ad08
	if (ctx.cr6.eq) goto loc_8220AD08;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220acf4
	if (!ctx.cr6.eq) goto loc_8220ACF4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ACF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220acfc
	goto loc_8220ACFC;
loc_8220ACF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r30.u8);
loc_8220ACFC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ad90
	if (!ctx.cr6.eq) goto loc_8220AD90;
loc_8220AD08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ad5c
	if (ctx.cr6.eq) goto loc_8220AD5C;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ad48
	if (!ctx.cr6.eq) goto loc_8220AD48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220ad50
	goto loc_8220AD50;
loc_8220AD48:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r30.u8);
loc_8220AD50:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ad90
	if (!ctx.cr6.eq) goto loc_8220AD90;
loc_8220AD5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8220ada4
	if (ctx.cr6.lt) goto loc_8220ADA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ae10
	if (ctx.cr6.eq) goto loc_8220AE10;
loc_8220AD90:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8220ADA4:
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8220ae10
	if (ctx.cr6.gt) goto loc_8220AE10;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8220adf4
	if (ctx.cr6.eq) goto loc_8220ADF4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ADD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ae10
	if (ctx.cr6.eq) goto loc_8220AE10;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8220ADF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ae14
	if (!ctx.cr6.eq) goto loc_8220AE14;
loc_8220AE10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220AE14:
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

__attribute__((alias("__imp__sub_8220AE28"))) PPC_WEAK_FUNC(sub_8220AE28);
PPC_FUNC_IMPL(__imp__sub_8220AE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8220AE30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220ae5c
	if (ctx.cr6.gt) goto loc_8220AE5C;
	// lwz r28,84(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220AE5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,196(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,-2
	ctx.r9.s64 = -2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// bne cr6,0x8220ae98
	if (!ctx.cr6.eq) goto loc_8220AE98;
	// li r10,5
	ctx.r10.s64 = 5;
loc_8220AE98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220AEA4;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220afc4
	if (!ctx.cr6.eq) goto loc_8220AFC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220aec8
	if (ctx.cr6.gt) goto loc_8220AEC8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220AEC8:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220af18
	if (ctx.cr6.eq) goto loc_8220AF18;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220af04
	if (!ctx.cr6.eq) goto loc_8220AF04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220af0c
	goto loc_8220AF0C;
loc_8220AF04:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r30.u8);
loc_8220AF0C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220afc4
	if (!ctx.cr6.eq) goto loc_8220AFC4;
loc_8220AF18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220af6c
	if (ctx.cr6.eq) goto loc_8220AF6C;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220af58
	if (!ctx.cr6.eq) goto loc_8220AF58;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220af60
	goto loc_8220AF60;
loc_8220AF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r30.u8);
loc_8220AF60:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220afc4
	if (!ctx.cr6.eq) goto loc_8220AFC4;
loc_8220AF6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8220affc
	if (ctx.cr6.gt) goto loc_8220AFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8220afd4
	if (ctx.cr6.eq) goto loc_8220AFD4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220affc
	if (ctx.cr6.eq) goto loc_8220AFFC;
loc_8220AFC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8220AFD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220affc
	if (ctx.cr6.eq) goto loc_8220AFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8220AFFC:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b03c
	if (ctx.cr6.eq) goto loc_8220B03C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b03c
	if (!ctx.cr6.gt) goto loc_8220B03C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220afc4
	if (!ctx.cr6.eq) goto loc_8220AFC4;
loc_8220B03C:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b070
	if (ctx.cr6.eq) goto loc_8220B070;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b074
	if (!ctx.cr6.eq) goto loc_8220B074;
loc_8220B070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B080"))) PPC_WEAK_FUNC(sub_8220B080);
PPC_FUNC_IMPL(__imp__sub_8220B080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8220a708
	sub_8220A708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B088"))) PPC_WEAK_FUNC(sub_8220B088);
PPC_FUNC_IMPL(__imp__sub_8220B088) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b0c4
	if (!ctx.cr6.gt) goto loc_8220B0C4;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220b0c8
	goto loc_8220B0C8;
loc_8220B0C4:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220B0C8:
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b0dc
	if (!ctx.cr6.gt) goto loc_8220B0DC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220b0e0
	goto loc_8220B0E0;
loc_8220B0DC:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220B0E0:
	// lfs f13,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b0f4
	if (!ctx.cr6.gt) goto loc_8220B0F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_8220B0F4:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b124
	if (ctx.cr6.eq) goto loc_8220B124;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220b11c
	if (ctx.cr6.lt) goto loc_8220B11C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220B11C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8220B124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220b238
	if (ctx.cr6.eq) goto loc_8220B238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220B160;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b230
	if (!ctx.cr6.eq) goto loc_8220B230;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220b1a0
	if (ctx.cr6.lt) goto loc_8220B1A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b230
	if (!ctx.cr6.eq) goto loc_8220B230;
loc_8220B1A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220b1d4
	if (ctx.cr6.lt) goto loc_8220B1D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b230
	if (!ctx.cr6.eq) goto loc_8220B230;
loc_8220B1D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b20c
	if (ctx.cr6.eq) goto loc_8220B20C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b230
	if (!ctx.cr6.eq) goto loc_8220B230;
loc_8220B20C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b2b0
	if (ctx.cr6.eq) goto loc_8220B2B0;
loc_8220B230:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220b2b4
	goto loc_8220B2B4;
loc_8220B238:
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b298
	if (ctx.cr6.eq) goto loc_8220B298;
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b264
	if (!ctx.cr6.gt) goto loc_8220B264;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8220b268
	goto loc_8220B268;
loc_8220B264:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220B268:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b298
	if (ctx.cr6.eq) goto loc_8220B298;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b230
	if (!ctx.cr6.eq) goto loc_8220B230;
loc_8220B298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220B2A0;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b2b4
	if (!ctx.cr6.eq) goto loc_8220B2B4;
loc_8220B2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B2B4:
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

__attribute__((alias("__imp__sub_8220B2D0"))) PPC_WEAK_FUNC(sub_8220B2D0);
PPC_FUNC_IMPL(__imp__sub_8220B2D0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r7,196(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// blt cr6,0x8220b338
	if (ctx.cr6.lt) goto loc_8220B338;
	// beq cr6,0x8220b32c
	if (ctx.cr6.eq) goto loc_8220B32C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8220b3c0
	if (!ctx.cr6.lt) goto loc_8220B3C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220b31c
	if (ctx.cr6.gt) goto loc_8220B31C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
loc_8220B31C:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b32c
	if (!ctx.cr6.eq) goto loc_8220B32C;
	// bl 0x8220a858
	ctx.lr = 0x8220B32C;
	sub_8220A858(ctx, base);
loc_8220B32C:
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8220b364
	goto loc_8220B364;
loc_8220B338:
	// rlwinm r8,r7,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220b364
	if (ctx.cr6.eq) goto loc_8220B364;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r9,246(r8)
	PPC_STORE_U8(ctx.r8.u32 + 246, ctx.r9.u8);
loc_8220B364:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220b394
	if (ctx.cr6.gt) goto loc_8220B394;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// stw r5,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r5.u32);
	// stw r11,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r11.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r9,246(r8)
	PPC_STORE_U8(ctx.r8.u32 + 246, ctx.r9.u8);
loc_8220B394:
	// rlwinm r8,r7,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220b3c0
	if (ctx.cr6.eq) goto loc_8220B3C0;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// stw r6,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r6.u32);
	// stw r11,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220B3C0:
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// bl 0x8220b088
	ctx.lr = 0x8220B3D4;
	sub_8220B088(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B3E8"))) PPC_WEAK_FUNC(sub_8220B3E8);
PPC_FUNC_IMPL(__imp__sub_8220B3E8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,-15
	ctx.r10.s64 = ctx.r10.s64 + -15;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8220b46c
	if (ctx.cr6.gt) goto loc_8220B46C;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-19404
	ctx.r12.s64 = ctx.r12.s64 + -19404;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8220B4FC;
	case 1:
		goto loc_8220B51C;
	case 2:
		goto loc_8220B528;
	case 3:
		goto loc_8220B44C;
	case 4:
		goto loc_8220B498;
	case 5:
		goto loc_8220B4AC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-19204(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19204);
	// lwz r17,-19172(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19172);
	// lwz r17,-19160(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19160);
	// lwz r17,-19380(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19380);
	// lwz r17,-19304(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19304);
	// lwz r17,-19284(0)
	ctx.r17.u64 = PPC_LOAD_U32(-19284);
loc_8220B44C:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b46c
	if (ctx.cr6.eq) goto loc_8220B46C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_8220B460:
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_8220B46C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8220B474;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220B498:
	// lfs f13,408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b46c
	if (!ctx.cr6.gt) goto loc_8220B46C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x8220b460
	goto loc_8220B460;
loc_8220B4AC:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b46c
	if (ctx.cr6.eq) goto loc_8220B46C;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220b4e0
	if (!ctx.cr6.eq) goto loc_8220B4E0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220B4E0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B4E8;
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
loc_8220B4FC:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b51c
	if (ctx.cr6.eq) goto loc_8220B51C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_8220B51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822095b8
	ctx.lr = 0x8220B524;
	sub_822095B8(ctx, base);
	// b 0x8220b46c
	goto loc_8220B46C;
loc_8220B528:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b46c
	if (ctx.cr6.eq) goto loc_8220B46C;
	// lfs f13,408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b46c
	if (!ctx.cr6.gt) goto loc_8220B46C;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220b568
	if (!ctx.cr6.eq) goto loc_8220B568;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220B568:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b46c
	if (ctx.cr6.eq) goto loc_8220B46C;
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

__attribute__((alias("__imp__sub_8220B598"))) PPC_WEAK_FUNC(sub_8220B598);
PPC_FUNC_IMPL(__imp__sub_8220B598) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220b5d8
	if (ctx.cr6.gt) goto loc_8220B5D8;
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220B5D8:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// li r9,-2
	ctx.r9.s64 = -2;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b608
	if (ctx.cr6.eq) goto loc_8220B608;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_8220B608:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b670
	if (!ctx.cr6.gt) goto loc_8220B670;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,424
	ctx.r10.s64 = ctx.r11.s64 + 424;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b650
	if (!ctx.cr6.gt) goto loc_8220B650;
	// lfs f13,444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220b648
	if (ctx.cr6.lt) goto loc_8220B648;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8220B648:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8220B650:
	// rlwinm r11,r8,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b744
	if (ctx.cr6.eq) goto loc_8220B744;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x8220b744
	goto loc_8220B744;
loc_8220B670:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220b6f0
	if (ctx.cr6.gt) goto loc_8220B6F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,424
	ctx.r10.s64 = ctx.r11.s64 + 424;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b6b8
	if (!ctx.cr6.gt) goto loc_8220B6B8;
	// lfs f13,444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220b6b0
	if (ctx.cr6.lt) goto loc_8220B6B0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8220B6B0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8220B6B8:
	// rlwinm r11,r8,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b744
	if (ctx.cr6.eq) goto loc_8220B744;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// lfs f0,436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// b 0x8220b744
	goto loc_8220B744;
loc_8220B6F0:
	// rlwinm r11,r8,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b708
	if (ctx.cr6.eq) goto loc_8220B708;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8220B708:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220b744
	if (!ctx.cr6.gt) goto loc_8220B744;
	// lfs f13,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220b73c
	if (ctx.cr6.lt) goto loc_8220B73C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8220B73C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8220B744:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8220b75c
	if (!ctx.cr6.lt) goto loc_8220B75C;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8220B75C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8220b780
	if (!ctx.cr6.lt) goto loc_8220B780;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_8220B780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8220B788;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b79c
	if (ctx.cr6.eq) goto loc_8220B79C;
loc_8220B794:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220b854
	goto loc_8220B854;
loc_8220B79C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b7e4
	if (!ctx.cr6.eq) goto loc_8220B7E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220b7d0
	if (!ctx.cr6.eq) goto loc_8220B7D0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220B7D0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b794
	if (!ctx.cr6.eq) goto loc_8220B794;
loc_8220B7E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220b7fc
	if (ctx.cr6.gt) goto loc_8220B7FC;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220B7FC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b850
	if (ctx.cr6.eq) goto loc_8220B850;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220b834
	if (!ctx.cr6.eq) goto loc_8220B834;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220b840
	goto loc_8220B840;
loc_8220B834:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
loc_8220B840:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b854
	if (!ctx.cr6.eq) goto loc_8220B854;
loc_8220B850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B854:
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

__attribute__((alias("__imp__sub_8220B870"))) PPC_WEAK_FUNC(sub_8220B870);
PPC_FUNC_IMPL(__imp__sub_8220B870) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r30,196(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// blt cr6,0x8220b8dc
	if (ctx.cr6.lt) goto loc_8220B8DC;
	// bne cr6,0x8220b938
	if (!ctx.cr6.eq) goto loc_8220B938;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b938
	if (ctx.cr6.eq) goto loc_8220B938;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b938
	if (ctx.cr6.eq) goto loc_8220B938;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220b970
	goto loc_8220B970;
loc_8220B8DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220b8f8
	if (ctx.cr6.gt) goto loc_8220B8F8;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_8220B8F8:
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220b91c
	if (ctx.cr6.eq) goto loc_8220B91C;
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8220B91C:
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220b938
	if (ctx.cr6.eq) goto loc_8220B938;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8220B938:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b96c
	if (!ctx.cr6.eq) goto loc_8220B96C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220b970
	if (!ctx.cr6.eq) goto loc_8220B970;
loc_8220B96C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B988"))) PPC_WEAK_FUNC(sub_8220B988);
PPC_FUNC_IMPL(__imp__sub_8220B988) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220b9c0
	if (!ctx.cr6.gt) goto loc_8220B9C0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220b9c4
	goto loc_8220B9C4;
loc_8220B9C0:
	// lfs f0,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220B9C4:
	// lfs f13,348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220b9d8
	if (!ctx.cr6.gt) goto loc_8220B9D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
loc_8220B9D8:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ba08
	if (ctx.cr6.eq) goto loc_8220BA08;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220ba00
	if (ctx.cr6.lt) goto loc_8220BA00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220BA00:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220BA08:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220ba28
	if (ctx.cr6.lt) goto loc_8220BA28;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220BA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220BA38;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ba4c
	if (ctx.cr6.eq) goto loc_8220BA4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bad8
	goto loc_8220BAD8;
loc_8220BA4C:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8220ba88
	if (!ctx.cr6.lt) goto loc_8220BA88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220ba80
	if (!ctx.cr6.eq) goto loc_8220BA80;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220BA80:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220BA88:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8220bad4
	if (!ctx.cr6.eq) goto loc_8220BAD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220babc
	if (!ctx.cr6.eq) goto loc_8220BABC;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220BABC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bad8
	if (!ctx.cr6.eq) goto loc_8220BAD8;
loc_8220BAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BAD8:
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

__attribute__((alias("__imp__sub_8220BAF0"))) PPC_WEAK_FUNC(sub_8220BAF0);
PPC_FUNC_IMPL(__imp__sub_8220BAF0) {
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
	// li r10,-2
	ctx.r10.s64 = -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// bne cr6,0x8220bb44
	if (!ctx.cr6.eq) goto loc_8220BB44;
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220bb44
	if (ctx.cr6.eq) goto loc_8220BB44;
	// li r7,29
	ctx.r7.s64 = 29;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
loc_8220BB44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r7.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220bb94
	if (ctx.cr6.lt) goto loc_8220BB94;
	// bne cr6,0x8220bbcc
	if (!ctx.cr6.eq) goto loc_8220BBCC;
	// rlwinm r11,r9,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bbcc
	if (ctx.cr6.eq) goto loc_8220BBCC;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r6,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r6.u8);
	// b 0x8220bbcc
	goto loc_8220BBCC;
loc_8220BB94:
	// rlwinm r10,r9,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220bbb0
	if (ctx.cr6.eq) goto loc_8220BBB0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r11,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r11.u8);
loc_8220BBB0:
	// rlwinm r10,r9,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220bbcc
	if (ctx.cr6.eq) goto loc_8220BBCC;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,246(r9)
	PPC_STORE_U8(ctx.r9.u32 + 246, ctx.r11.u8);
loc_8220BBCC:
	// rlwinm r11,r8,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220bc08
	if (ctx.cr6.eq) goto loc_8220BC08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bc38
	goto loc_8220BC38;
loc_8220BC08:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220b088
	ctx.lr = 0x8220BC10;
	sub_8220B088(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220bc34
	if (!ctx.cr6.eq) goto loc_8220BC34;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220BC34;
	sub_8220A8D0(ctx, base);
loc_8220BC34:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8220BC38:
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

__attribute__((alias("__imp__sub_8220BC50"))) PPC_WEAK_FUNC(sub_8220BC50);
PPC_FUNC_IMPL(__imp__sub_8220BC50) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220bcb4
	if (ctx.cr6.eq) goto loc_8220BCB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220BC9C:
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
loc_8220BCB4:
	// bl 0x8220ae28
	ctx.lr = 0x8220BCB8;
	sub_8220AE28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bc9c
	if (!ctx.cr6.eq) goto loc_8220BC9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220bd04
	if (!ctx.cr6.gt) goto loc_8220BD04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bd08
	if (!ctx.cr6.eq) goto loc_8220BD08;
loc_8220BD04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BD08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BD20"))) PPC_WEAK_FUNC(sub_8220BD20);
PPC_FUNC_IMPL(__imp__sub_8220BD20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220bd5c
	if (!ctx.cr6.gt) goto loc_8220BD5C;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220bd60
	goto loc_8220BD60;
loc_8220BD5C:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220BD60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82209858
	ctx.lr = 0x8220BD70;
	sub_82209858(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bd98
	if (!ctx.cr6.eq) goto loc_8220BD98;
	// rlwinm r11,r9,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8220bddc
	if (!ctx.cr6.eq) goto loc_8220BDDC;
loc_8220BD98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220bdc0
	if (!ctx.cr6.eq) goto loc_8220BDC0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220BDC0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bddc
	if (ctx.cr6.eq) goto loc_8220BDDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220be08
	goto loc_8220BE08;
loc_8220BDDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8220bdfc
	if (!ctx.cr6.gt) goto loc_8220BDFC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x8220be00
	goto loc_8220BE00;
loc_8220BDFC:
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8220BE00:
	// stfs f31,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BE08:
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

__attribute__((alias("__imp__sub_8220BE28"))) PPC_WEAK_FUNC(sub_8220BE28);
PPC_FUNC_IMPL(__imp__sub_8220BE28) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220be68
	if (ctx.cr6.lt) goto loc_8220BE68;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220BE68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220BE78;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220be8c
	if (ctx.cr6.eq) goto loc_8220BE8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bedc
	goto loc_8220BEDC;
loc_8220BE8C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8220bed8
	if (!ctx.cr6.eq) goto loc_8220BED8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220bec0
	if (!ctx.cr6.eq) goto loc_8220BEC0;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220BEC0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bedc
	if (!ctx.cr6.eq) goto loc_8220BEDC;
loc_8220BED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BEDC:
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

__attribute__((alias("__imp__sub_8220BEF8"))) PPC_WEAK_FUNC(sub_8220BEF8);
PPC_FUNC_IMPL(__imp__sub_8220BEF8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220bf30
	if (!ctx.cr6.gt) goto loc_8220BF30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8220bf34
	goto loc_8220BF34;
loc_8220BF30:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220BF34:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bf64
	if (ctx.cr6.eq) goto loc_8220BF64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220BF64:
	// rlwinm r11,r9,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8220bfc4
	if (!ctx.cr6.eq) goto loc_8220BFC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220bf98
	if (!ctx.cr6.eq) goto loc_8220BF98;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220BF98:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bfc4
	if (ctx.cr6.eq) goto loc_8220BFC4;
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
loc_8220BFC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220BFCC;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BFF0"))) PPC_WEAK_FUNC(sub_8220BFF0);
PPC_FUNC_IMPL(__imp__sub_8220BFF0) {
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
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8220c0d0
	if (ctx.cr6.eq) goto loc_8220C0D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,101
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 101, ctx.xer);
	// bne cr6,0x8220c05c
	if (!ctx.cr6.eq) goto loc_8220C05C;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220c05c
	if (ctx.cr6.eq) goto loc_8220C05C;
	// li r9,102
	ctx.r9.s64 = 102;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_8220C05C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220c078
	if (ctx.cr6.eq) goto loc_8220C078;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220c108
	if (ctx.cr6.eq) goto loc_8220C108;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220c0c8
	if (!ctx.cr6.eq) goto loc_8220C0C8;
loc_8220C078:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r9,103
	ctx.r9.s64 = 103;
	// stb r8,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r8,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8220C0C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8220C0D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220c240
	if (ctx.cr6.eq) goto loc_8220C240;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220c180
	if (ctx.cr6.eq) goto loc_8220C180;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220c300
	if (!ctx.cr6.eq) goto loc_8220C300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220C0F0:
	// bl 0x8220aaf8
	ctx.lr = 0x8220C0F4;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c300
	if (ctx.cr6.eq) goto loc_8220C300;
loc_8220C100:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c304
	goto loc_8220C304;
loc_8220C108:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,101
	ctx.r7.s64 = 101;
	// li r6,13
	ctx.r6.s64 = 13;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r8,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,23736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23736);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// b 0x8220c0c8
	goto loc_8220C0C8;
loc_8220C180:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220c19c
	if (!ctx.cr6.gt) goto loc_8220C19C;
	// li r9,12
	ctx.r9.s64 = 12;
	// b 0x8220c1ac
	goto loc_8220C1AC;
loc_8220C19C:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220c1bc
	if (!ctx.cr6.gt) goto loc_8220C1BC;
	// li r9,14
	ctx.r9.s64 = 14;
loc_8220C1AC:
	// stb r8,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_8220C1BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220c1d4
	if (ctx.cr6.eq) goto loc_8220C1D4;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
loc_8220C1D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220C1DC;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c100
	if (!ctx.cr6.eq) goto loc_8220C100;
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220c300
	if (ctx.cr6.eq) goto loc_8220C300;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c214
	if (ctx.cr6.eq) goto loc_8220C214;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8220c300
	goto loc_8220C300;
loc_8220C214:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c300
	if (ctx.cr6.eq) goto loc_8220C300;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c304
	goto loc_8220C304;
loc_8220C240:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220c260
	if (ctx.cr6.lt) goto loc_8220C260;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220C260:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8220c2ac
	if (!ctx.cr6.eq) goto loc_8220C2AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220c298
	if (!ctx.cr6.eq) goto loc_8220C298;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220C298:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c100
	if (!ctx.cr6.eq) goto loc_8220C100;
loc_8220C2AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220c2c4
	if (ctx.cr6.gt) goto loc_8220C2C4;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_8220C2C4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c2d8
	if (ctx.cr6.eq) goto loc_8220C2D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8220C2D8:
	// lwz r11,196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c0f0
	if (!ctx.cr6.eq) goto loc_8220C0F0;
	// bl 0x8220a938
	ctx.lr = 0x8220C2F0;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c304
	if (!ctx.cr6.eq) goto loc_8220C304;
loc_8220C300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C304:
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

__attribute__((alias("__imp__sub_8220C320"))) PPC_WEAK_FUNC(sub_8220C320);
PPC_FUNC_IMPL(__imp__sub_8220C320) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220c35c
	if (!ctx.cr6.gt) goto loc_8220C35C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x8220c360
	goto loc_8220C360;
loc_8220C35C:
	// lfs f31,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
loc_8220C360:
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220c374
	if (ctx.cr6.gt) goto loc_8220C374;
	// lwz r30,84(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220C374:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220c394
	if (ctx.cr6.lt) goto loc_8220C394;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220C394:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8220c3c8
	if (!ctx.cr6.eq) goto loc_8220C3C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c464
	if (!ctx.cr6.eq) goto loc_8220C464;
loc_8220C3C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8220C3D0;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c464
	if (!ctx.cr6.eq) goto loc_8220C464;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c430
	if (ctx.cr6.eq) goto loc_8220C430;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c418
	if (!ctx.cr6.eq) goto loc_8220C418;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220c424
	goto loc_8220C424;
loc_8220C418:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
loc_8220C424:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c464
	if (!ctx.cr6.eq) goto loc_8220C464;
loc_8220C430:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8220c46c
	if (ctx.cr6.lt) goto loc_8220C46C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c4a0
	if (ctx.cr6.eq) goto loc_8220C4A0;
loc_8220C464:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c4a4
	goto loc_8220C4A4;
loc_8220C46C:
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8220c4a0
	if (!ctx.cr6.gt) goto loc_8220C4A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c4a4
	if (!ctx.cr6.eq) goto loc_8220C4A4;
loc_8220C4A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C4A4:
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

__attribute__((alias("__imp__sub_8220C4C0"))) PPC_WEAK_FUNC(sub_8220C4C0);
PPC_FUNC_IMPL(__imp__sub_8220C4C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// b 0x8220b088
	sub_8220B088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C4D8"))) PPC_WEAK_FUNC(sub_8220C4D8);
PPC_FUNC_IMPL(__imp__sub_8220C4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// b 0x8220b2d0
	sub_8220B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C4F0"))) PPC_WEAK_FUNC(sub_8220C4F0);
PPC_FUNC_IMPL(__imp__sub_8220C4F0) {
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
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// beq cr6,0x8220c590
	if (ctx.cr6.eq) goto loc_8220C590;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220c538
	if (ctx.cr6.gt) goto loc_8220C538;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220C538:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c590
	if (ctx.cr6.eq) goto loc_8220C590;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c570
	if (!ctx.cr6.eq) goto loc_8220C570;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220c57c
	goto loc_8220C57C;
loc_8220C570:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
loc_8220C57C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c590
	if (ctx.cr6.eq) goto loc_8220C590;
loc_8220C588:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c5f0
	goto loc_8220C5F0;
loc_8220C590:
	// rlwinm r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8220c5d8
	if (!ctx.cr6.eq) goto loc_8220C5D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220c5c4
	if (!ctx.cr6.eq) goto loc_8220C5C4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220C5C4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c588
	if (!ctx.cr6.eq) goto loc_8220C588;
loc_8220C5D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220C5E0;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8220C5F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C608"))) PPC_WEAK_FUNC(sub_8220C608);
PPC_FUNC_IMPL(__imp__sub_8220C608) {
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
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// beq cr6,0x8220c6a8
	if (ctx.cr6.eq) goto loc_8220C6A8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220c650
	if (ctx.cr6.gt) goto loc_8220C650;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220C650:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c6a8
	if (ctx.cr6.eq) goto loc_8220C6A8;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c688
	if (!ctx.cr6.eq) goto loc_8220C688;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220c694
	goto loc_8220C694;
loc_8220C688:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
loc_8220C694:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c6a8
	if (ctx.cr6.eq) goto loc_8220C6A8;
loc_8220C6A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c710
	goto loc_8220C710;
loc_8220C6A8:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8220c6f8
	if (!ctx.cr6.eq) goto loc_8220C6F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220c6e4
	if (!ctx.cr6.eq) goto loc_8220C6E4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220C6E4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c6a0
	if (!ctx.cr6.eq) goto loc_8220C6A0;
loc_8220C6F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220C700;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8220C710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C728"))) PPC_WEAK_FUNC(sub_8220C728);
PPC_FUNC_IMPL(__imp__sub_8220C728) {
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
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// beq cr6,0x8220c7c8
	if (ctx.cr6.eq) goto loc_8220C7C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220c770
	if (ctx.cr6.gt) goto loc_8220C770;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220C770:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c7c8
	if (ctx.cr6.eq) goto loc_8220C7C8;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c7a8
	if (!ctx.cr6.eq) goto loc_8220C7A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220c7b4
	goto loc_8220C7B4;
loc_8220C7A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
loc_8220C7B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c7c8
	if (ctx.cr6.eq) goto loc_8220C7C8;
loc_8220C7C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c830
	goto loc_8220C830;
loc_8220C7C8:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8220c818
	if (!ctx.cr6.eq) goto loc_8220C818;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8220c804
	if (!ctx.cr6.eq) goto loc_8220C804;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220C804:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c7c0
	if (!ctx.cr6.eq) goto loc_8220C7C0;
loc_8220C818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a938
	ctx.lr = 0x8220C820;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8220C830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C848"))) PPC_WEAK_FUNC(sub_8220C848);
PPC_FUNC_IMPL(__imp__sub_8220C848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,336(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220c888
	if (!ctx.cr6.gt) goto loc_8220C888;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220c87c
	if (ctx.cr6.lt) goto loc_8220C87C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220C87C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
loc_8220C888:
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220c8b0
	if (ctx.cr6.lt) goto loc_8220C8B0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_8220C8B0:
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

__attribute__((alias("__imp__sub_8220C8C0"))) PPC_WEAK_FUNC(sub_8220C8C0);
PPC_FUNC_IMPL(__imp__sub_8220C8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220c900
	if (!ctx.cr6.gt) goto loc_8220C900;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220c8f4
	if (ctx.cr6.lt) goto loc_8220C8F4;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8220C8F4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
loc_8220C900:
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220c928
	if (ctx.cr6.lt) goto loc_8220C928;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_8220C928:
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

__attribute__((alias("__imp__sub_8220C938"))) PPC_WEAK_FUNC(sub_8220C938);
PPC_FUNC_IMPL(__imp__sub_8220C938) {
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
	// bl 0x826dfb88
	ctx.lr = 0x8220C94C;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220c978
	if (ctx.cr6.gt) goto loc_8220C978;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220C978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ca30
	if (!ctx.cr6.eq) goto loc_8220CA30;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220c994
	if (!ctx.cr6.gt) goto loc_8220C994;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220c998
	goto loc_8220C998;
loc_8220C994:
	// lfs f30,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220C998:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,392
	ctx.r11.s64 = ctx.r31.s64 + 392;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8220ca10
	if (ctx.cr6.gt) goto loc_8220CA10;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8220c9fc
	if (ctx.cr6.gt) goto loc_8220C9FC;
	// lfs f0,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8220c9f4
	if (ctx.cr6.lt) goto loc_8220C9F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8220C9F4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8220ca2c
	goto loc_8220CA2C;
loc_8220C9FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a7e8
	ctx.lr = 0x8220CA0C;
	sub_8220A7E8(ctx, base);
	// b 0x8220ca30
	goto loc_8220CA30;
loc_8220CA10:
	// lfs f0,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8220ca24
	if (ctx.cr6.gt) goto loc_8220CA24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-26060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26060);
	ctx.f0.f64 = double(temp.f32);
loc_8220CA24:
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8220CA2C:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_8220CA30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfbd4
	ctx.lr = 0x8220CA3C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CA50"))) PPC_WEAK_FUNC(sub_8220CA50);
PPC_FUNC_IMPL(__imp__sub_8220CA50) {
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
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cad0
	if (ctx.cr6.eq) goto loc_8220CAD0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cad0
	if (ctx.cr6.eq) goto loc_8220CAD0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f0,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220cad0
	if (ctx.cr6.lt) goto loc_8220CAD0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
loc_8220CAD0:
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

__attribute__((alias("__imp__sub_8220CAE8"))) PPC_WEAK_FUNC(sub_8220CAE8);
PPC_FUNC_IMPL(__imp__sub_8220CAE8) {
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
	// lwz r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220cb48
	if (ctx.cr6.eq) goto loc_8220CB48;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cb48
	if (ctx.cr6.eq) goto loc_8220CB48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82656758
	ctx.lr = 0x8220CB18;
	sub_82656758(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220cb48
	if (ctx.cr6.eq) goto loc_8220CB48;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cb3c
	if (ctx.cr6.eq) goto loc_8220CB3C;
	// bl 0x82533d90
	ctx.lr = 0x8220CB38;
	sub_82533D90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220CB3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220cb48
	if (ctx.cr6.eq) goto loc_8220CB48;
	// bl 0x82581e38
	ctx.lr = 0x8220CB48;
	sub_82581E38(ctx, base);
loc_8220CB48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CB58"))) PPC_WEAK_FUNC(sub_8220CB58);
PPC_FUNC_IMPL(__imp__sub_8220CB58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cb90
	if (!ctx.cr6.eq) goto loc_8220CB90;
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
loc_8220CB90:
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8220CBB8"))) PPC_WEAK_FUNC(sub_8220CBB8);
PPC_FUNC_IMPL(__imp__sub_8220CBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CBC0"))) PPC_WEAK_FUNC(sub_8220CBC0);
PPC_FUNC_IMPL(__imp__sub_8220CBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8220cbdc
	if (ctx.cr6.eq) goto loc_8220CBDC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 229, ctx.r9.u8);
loc_8220CBDC:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220cbf4
	if (ctx.cr6.eq) goto loc_8220CBF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
loc_8220CBF4:
	// rlwinm r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220cc0c
	if (ctx.cr6.eq) goto loc_8220CC0C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
loc_8220CC0C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,243(r10)
	PPC_STORE_U8(ctx.r10.u32 + 243, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,241(r10)
	PPC_STORE_U8(ctx.r10.u32 + 241, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8220ca50
	sub_8220CA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220CC28"))) PPC_WEAK_FUNC(sub_8220CC28);
PPC_FUNC_IMPL(__imp__sub_8220CC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8220CC30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,196(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r28,200(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220cc84
	if (ctx.cr6.eq) goto loc_8220CC84;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,225(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 225);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cc84
	if (!ctx.cr6.eq) goto loc_8220CC84;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
loc_8220CC84:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,269(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 269);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ccd4
	if (ctx.cr6.eq) goto loc_8220CCD4;
	// lwz r3,296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CCA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220ccd4
	if (!ctx.cr6.eq) goto loc_8220CCD4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CCC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
loc_8220CCD4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cd24
	if (!ctx.cr6.eq) goto loc_8220CD24;
	// lbz r10,229(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 229);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cd24
	if (!ctx.cr6.eq) goto loc_8220CD24;
	// lbz r10,258(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 258);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cd24
	if (!ctx.cr6.eq) goto loc_8220CD24;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220cd24
	if (ctx.cr6.gt) goto loc_8220CD24;
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220cd28
	if (!ctx.cr6.gt) goto loc_8220CD28;
loc_8220CD24:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8220CD28:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cef4
	if (!ctx.cr6.eq) goto loc_8220CEF4;
	// rlwinm r10,r31,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cd4c
	if (!ctx.cr6.eq) goto loc_8220CD4C;
	// clrldi r10,r28,63
	ctx.r10.u64 = ctx.r28.u64 & 0x1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8220ce24
	if (ctx.cr6.eq) goto loc_8220CE24;
loc_8220CD4C:
	// lbz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ce20
	if (!ctx.cr6.eq) goto loc_8220CE20;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cdf8
	if (ctx.cr6.eq) goto loc_8220CDF8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cdf8
	if (ctx.cr6.eq) goto loc_8220CDF8;
	// lwz r3,296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8220cdf8
	if (!ctx.cr6.gt) goto loc_8220CDF8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220cdc8
	if (ctx.cr6.lt) goto loc_8220CDC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220CDC8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
	// b 0x8220ce24
	goto loc_8220CE24;
loc_8220CDF8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
	// b 0x8220ce24
	goto loc_8220CE24;
loc_8220CE20:
	// stb r29,260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 260, ctx.r29.u8);
loc_8220CE24:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220cef4
	if (ctx.cr6.eq) goto loc_8220CEF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cef0
	if (!ctx.cr6.eq) goto loc_8220CEF0;
	// lbz r10,270(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 270);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cef4
	if (!ctx.cr6.eq) goto loc_8220CEF4;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cec8
	if (ctx.cr6.eq) goto loc_8220CEC8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cec8
	if (ctx.cr6.eq) goto loc_8220CEC8;
	// lwz r3,296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8220cec8
	if (!ctx.cr6.gt) goto loc_8220CEC8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// addi r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 + 452;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220cebc
	if (ctx.cr6.lt) goto loc_8220CEBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220CEBC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8220cef4
	goto loc_8220CEF4;
loc_8220CEC8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
	// b 0x8220cef4
	goto loc_8220CEF4;
loc_8220CEF0:
	// stb r29,260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 260, ctx.r29.u8);
loc_8220CEF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-25496
	ctx.r11.s64 = ctx.r11.s64 + -25496;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_8220CF00:
	// ld r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220cf34
	if (ctx.cr6.eq) goto loc_8220CF34;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
loc_8220CF34:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,80
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 80, ctx.xer);
	// bne cr6,0x8220cf00
	if (!ctx.cr6.eq) goto loc_8220CF00;
	// rlwinm r11,r28,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220cf78
	if (ctx.cr6.eq) goto loc_8220CF78;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cf78
	if (!ctx.cr6.eq) goto loc_8220CF78;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220CF78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220CF80"))) PPC_WEAK_FUNC(sub_8220CF80);
PPC_FUNC_IMPL(__imp__sub_8220CF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8220CF88;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfb88
	ctx.lr = 0x8220CF90;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220cfbc
	if (!ctx.cr6.gt) goto loc_8220CFBC;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x8220cfc0
	goto loc_8220CFC0;
loc_8220CFBC:
	// lfs f28,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
loc_8220CFC0:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c848
	ctx.lr = 0x8220CFC8;
	sub_8220C848(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,-2
	ctx.r30.s64 = -2;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8220d02c
	if (!ctx.cr6.eq) goto loc_8220D02C;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x8220d02c
	if (ctx.cr6.eq) goto loc_8220D02C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
loc_8220D02C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8220d060
	if (ctx.cr6.lt) goto loc_8220D060;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8220d118
	if (!ctx.cr6.lt) goto loc_8220D118;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d060
	if (ctx.cr6.eq) goto loc_8220D060;
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
loc_8220D060:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8220d118
	if (!ctx.cr6.eq) goto loc_8220D118;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220d0f4
	if (ctx.cr6.lt) goto loc_8220D0F4;
	// beq cr6,0x8220d0cc
	if (ctx.cr6.eq) goto loc_8220D0CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8220d118
	if (!ctx.cr6.lt) goto loc_8220D118;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,22004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220d118
	if (!ctx.cr6.gt) goto loc_8220D118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// b 0x8220d114
	goto loc_8220D114;
loc_8220D0CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,22004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220d118
	if (!ctx.cr6.gt) goto loc_8220D118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8220d114
	goto loc_8220D114;
loc_8220D0F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,22004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220d118
	if (!ctx.cr6.gt) goto loc_8220D118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8220D114:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8220D118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8220D120;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d264
	if (!ctx.cr6.eq) goto loc_8220D264;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8220d144
	if (ctx.cr6.gt) goto loc_8220D144;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8220D144:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d190
	if (ctx.cr6.eq) goto loc_8220D190;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d17c
	if (!ctx.cr6.eq) goto loc_8220D17C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220d184
	goto loc_8220D184;
loc_8220D17C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r29.u8);
loc_8220D184:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d264
	if (!ctx.cr6.eq) goto loc_8220D264;
loc_8220D190:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d1e4
	if (ctx.cr6.eq) goto loc_8220D1E4;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d1d0
	if (!ctx.cr6.eq) goto loc_8220D1D0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220d1d8
	goto loc_8220D1D8;
loc_8220D1D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r29.u8);
loc_8220D1D8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d264
	if (!ctx.cr6.eq) goto loc_8220D264;
loc_8220D1E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8220d230
	if (!ctx.cr6.lt) goto loc_8220D230;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d264
	if (!ctx.cr6.eq) goto loc_8220D264;
loc_8220D230:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x8220d278
	if (ctx.cr6.lt) goto loc_8220D278;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d2ac
	if (ctx.cr6.eq) goto loc_8220D2AC;
loc_8220D264:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbd4
	ctx.lr = 0x8220D274;
	__restfpr_28(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8220D278:
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x8220d2ac
	if (!ctx.cr6.gt) goto loc_8220D2AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d2b0
	if (!ctx.cr6.eq) goto loc_8220D2B0;
loc_8220D2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220D2B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbd4
	ctx.lr = 0x8220D2BC;
	__restfpr_28(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D2C0"))) PPC_WEAK_FUNC(sub_8220D2C0);
PPC_FUNC_IMPL(__imp__sub_8220D2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f2,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8220c938
	sub_8220C938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D2D0"))) PPC_WEAK_FUNC(sub_8220D2D0);
PPC_FUNC_IMPL(__imp__sub_8220D2D0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,196(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x8220c8c0
	ctx.lr = 0x8220D2F4;
	sub_8220C8C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8220d3b0
	if (!ctx.cr6.eq) goto loc_8220D3B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d388
	if (ctx.cr6.eq) goto loc_8220D388;
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8220d368
	if (ctx.cr6.eq) goto loc_8220D368;
	// li r4,7
	ctx.r4.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3b0
	if (ctx.cr6.eq) goto loc_8220D3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d3c8
	goto loc_8220D3C8;
loc_8220D368:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3b0
	if (ctx.cr6.eq) goto loc_8220D3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d3c8
	goto loc_8220D3C8;
loc_8220D388:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3b0
	if (ctx.cr6.eq) goto loc_8220D3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d3c8
	goto loc_8220D3C8;
loc_8220D3B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aaf8
	ctx.lr = 0x8220D3B8;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8220D3C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D3E0"))) PPC_WEAK_FUNC(sub_8220D3E0);
PPC_FUNC_IMPL(__imp__sub_8220D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8220cae8
	sub_8220CAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D450"))) PPC_WEAK_FUNC(sub_8220D450);
PPC_FUNC_IMPL(__imp__sub_8220D450) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d4a0
	if (!ctx.cr6.gt) goto loc_8220D4A0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220d4a4
	goto loc_8220D4A4;
loc_8220D4A0:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220D4A4:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d4c4
	if (ctx.cr6.eq) goto loc_8220D4C4;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d4c8
	if (!ctx.cr6.gt) goto loc_8220D4C8;
loc_8220D4C4:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8220D4C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220d50c
	if (ctx.cr6.lt) goto loc_8220D50C;
	// bne cr6,0x8220d564
	if (!ctx.cr6.eq) goto loc_8220D564;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d564
	if (ctx.cr6.eq) goto loc_8220D564;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// b 0x8220d55c
	goto loc_8220D55C;
loc_8220D50C:
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d538
	if (ctx.cr6.eq) goto loc_8220D538;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r9.u8);
loc_8220D538:
	// rlwinm r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d564
	if (ctx.cr6.eq) goto loc_8220D564;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8220D55C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220D564:
	// rlwinm r11,r7,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220d5a0
	if (ctx.cr6.eq) goto loc_8220D5A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220D598:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d750
	goto loc_8220D750;
loc_8220D5A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d5b8
	if (!ctx.cr6.gt) goto loc_8220D5B8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220d5bc
	goto loc_8220D5BC;
loc_8220D5B8:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220D5BC:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220d5cc
	if (!ctx.cr6.gt) goto loc_8220D5CC;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
loc_8220D5CC:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d5fc
	if (ctx.cr6.eq) goto loc_8220D5FC;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220d5f4
	if (ctx.cr6.lt) goto loc_8220D5F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220D5F4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220D5FC:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c938
	ctx.lr = 0x8220D608;
	sub_8220C938(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220d700
	if (!ctx.cr6.eq) goto loc_8220D700;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220D628;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d598
	if (!ctx.cr6.eq) goto loc_8220D598;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220d668
	if (ctx.cr6.lt) goto loc_8220D668;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d598
	if (!ctx.cr6.eq) goto loc_8220D598;
loc_8220D668:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220d69c
	if (ctx.cr6.lt) goto loc_8220D69C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d598
	if (!ctx.cr6.eq) goto loc_8220D598;
loc_8220D69C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d6d4
	if (ctx.cr6.eq) goto loc_8220D6D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d598
	if (!ctx.cr6.eq) goto loc_8220D598;
loc_8220D6D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d710
	if (ctx.cr6.eq) goto loc_8220D710;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d750
	goto loc_8220D750;
loc_8220D700:
	// bl 0x8220a938
	ctx.lr = 0x8220D704;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d598
	if (!ctx.cr6.eq) goto loc_8220D598;
loc_8220D710:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220d724
	if (ctx.cr6.eq) goto loc_8220D724;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220D724;
	sub_8220A8D0(ctx, base);
loc_8220D724:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220d744
	if (ctx.cr6.lt) goto loc_8220D744;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220D744:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8220D750:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220D778"))) PPC_WEAK_FUNC(sub_8220D778);
PPC_FUNC_IMPL(__imp__sub_8220D778) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d7c8
	if (!ctx.cr6.gt) goto loc_8220D7C8;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220d7cc
	goto loc_8220D7CC;
loc_8220D7C8:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220D7CC:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d7ec
	if (ctx.cr6.eq) goto loc_8220D7EC;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d7f0
	if (!ctx.cr6.gt) goto loc_8220D7F0;
loc_8220D7EC:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8220D7F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220d834
	if (ctx.cr6.lt) goto loc_8220D834;
	// bne cr6,0x8220d88c
	if (!ctx.cr6.eq) goto loc_8220D88C;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d88c
	if (ctx.cr6.eq) goto loc_8220D88C;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// b 0x8220d884
	goto loc_8220D884;
loc_8220D834:
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d860
	if (ctx.cr6.eq) goto loc_8220D860;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r9.u8);
loc_8220D860:
	// rlwinm r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d88c
	if (ctx.cr6.eq) goto loc_8220D88C;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8220D884:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220D88C:
	// rlwinm r11,r7,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220d8c8
	if (ctx.cr6.eq) goto loc_8220D8C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220D8C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220da78
	goto loc_8220DA78;
loc_8220D8C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220d8e0
	if (!ctx.cr6.gt) goto loc_8220D8E0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220d8e4
	goto loc_8220D8E4;
loc_8220D8E0:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220D8E4:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220d8f4
	if (!ctx.cr6.gt) goto loc_8220D8F4;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
loc_8220D8F4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d924
	if (ctx.cr6.eq) goto loc_8220D924;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220d91c
	if (ctx.cr6.lt) goto loc_8220D91C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220D91C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220D924:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c938
	ctx.lr = 0x8220D930;
	sub_8220C938(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220da28
	if (!ctx.cr6.eq) goto loc_8220DA28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220D950;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!ctx.cr6.eq) goto loc_8220D8C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220d990
	if (ctx.cr6.lt) goto loc_8220D990;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!ctx.cr6.eq) goto loc_8220D8C0;
loc_8220D990:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220d9c4
	if (ctx.cr6.lt) goto loc_8220D9C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!ctx.cr6.eq) goto loc_8220D8C0;
loc_8220D9C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d9fc
	if (ctx.cr6.eq) goto loc_8220D9FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!ctx.cr6.eq) goto loc_8220D8C0;
loc_8220D9FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220da38
	if (ctx.cr6.eq) goto loc_8220DA38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220da78
	goto loc_8220DA78;
loc_8220DA28:
	// bl 0x8220a938
	ctx.lr = 0x8220DA2C;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!ctx.cr6.eq) goto loc_8220D8C0;
loc_8220DA38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220da4c
	if (ctx.cr6.eq) goto loc_8220DA4C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220DA4C;
	sub_8220A8D0(ctx, base);
loc_8220DA4C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220da6c
	if (ctx.cr6.lt) goto loc_8220DA6C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220DA6C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8220DA78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220DAA0"))) PPC_WEAK_FUNC(sub_8220DAA0);
PPC_FUNC_IMPL(__imp__sub_8220DAA0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220daf0
	if (!ctx.cr6.gt) goto loc_8220DAF0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220daf4
	goto loc_8220DAF4;
loc_8220DAF0:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220DAF4:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220db14
	if (ctx.cr6.eq) goto loc_8220DB14;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220db18
	if (!ctx.cr6.gt) goto loc_8220DB18;
loc_8220DB14:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8220DB18:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220db5c
	if (ctx.cr6.lt) goto loc_8220DB5C;
	// bne cr6,0x8220dbb4
	if (!ctx.cr6.eq) goto loc_8220DBB4;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dbb4
	if (ctx.cr6.eq) goto loc_8220DBB4;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// b 0x8220dbac
	goto loc_8220DBAC;
loc_8220DB5C:
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220db88
	if (ctx.cr6.eq) goto loc_8220DB88;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r9.u8);
loc_8220DB88:
	// rlwinm r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dbb4
	if (ctx.cr6.eq) goto loc_8220DBB4;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8220DBAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220DBB4:
	// rlwinm r11,r7,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220dbf0
	if (ctx.cr6.eq) goto loc_8220DBF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220DBE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220dda0
	goto loc_8220DDA0;
loc_8220DBF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220dc08
	if (!ctx.cr6.gt) goto loc_8220DC08;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220dc0c
	goto loc_8220DC0C;
loc_8220DC08:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220DC0C:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220dc1c
	if (!ctx.cr6.gt) goto loc_8220DC1C;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
loc_8220DC1C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dc4c
	if (ctx.cr6.eq) goto loc_8220DC4C;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220dc44
	if (ctx.cr6.lt) goto loc_8220DC44;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220DC44:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220DC4C:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c938
	ctx.lr = 0x8220DC58;
	sub_8220C938(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220dd50
	if (!ctx.cr6.eq) goto loc_8220DD50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220DC78;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dbe8
	if (!ctx.cr6.eq) goto loc_8220DBE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220dcb8
	if (ctx.cr6.lt) goto loc_8220DCB8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dbe8
	if (!ctx.cr6.eq) goto loc_8220DBE8;
loc_8220DCB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220dcec
	if (ctx.cr6.lt) goto loc_8220DCEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dbe8
	if (!ctx.cr6.eq) goto loc_8220DBE8;
loc_8220DCEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dd24
	if (ctx.cr6.eq) goto loc_8220DD24;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dbe8
	if (!ctx.cr6.eq) goto loc_8220DBE8;
loc_8220DD24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dd60
	if (ctx.cr6.eq) goto loc_8220DD60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220dda0
	goto loc_8220DDA0;
loc_8220DD50:
	// bl 0x8220a938
	ctx.lr = 0x8220DD54;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dbe8
	if (!ctx.cr6.eq) goto loc_8220DBE8;
loc_8220DD60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220dd74
	if (ctx.cr6.eq) goto loc_8220DD74;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220DD74;
	sub_8220A8D0(ctx, base);
loc_8220DD74:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220dd94
	if (ctx.cr6.lt) goto loc_8220DD94;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220DD94:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8220DDA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220DDC8"))) PPC_WEAK_FUNC(sub_8220DDC8);
PPC_FUNC_IMPL(__imp__sub_8220DDC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220de18
	if (!ctx.cr6.gt) goto loc_8220DE18;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220de1c
	goto loc_8220DE1C;
loc_8220DE18:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220DE1C:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220de3c
	if (ctx.cr6.eq) goto loc_8220DE3C;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220de40
	if (!ctx.cr6.gt) goto loc_8220DE40;
loc_8220DE3C:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8220DE40:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220de84
	if (ctx.cr6.lt) goto loc_8220DE84;
	// bne cr6,0x8220dedc
	if (!ctx.cr6.eq) goto loc_8220DEDC;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dedc
	if (ctx.cr6.eq) goto loc_8220DEDC;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// b 0x8220ded4
	goto loc_8220DED4;
loc_8220DE84:
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220deb0
	if (ctx.cr6.eq) goto loc_8220DEB0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r9.u8);
loc_8220DEB0:
	// rlwinm r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dedc
	if (ctx.cr6.eq) goto loc_8220DEDC;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8220DED4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220DEDC:
	// rlwinm r11,r7,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220df18
	if (ctx.cr6.eq) goto loc_8220DF18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220DF10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220e0c8
	goto loc_8220E0C8;
loc_8220DF18:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220df30
	if (!ctx.cr6.gt) goto loc_8220DF30;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220df34
	goto loc_8220DF34;
loc_8220DF30:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220DF34:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220df44
	if (!ctx.cr6.gt) goto loc_8220DF44;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
loc_8220DF44:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220df74
	if (ctx.cr6.eq) goto loc_8220DF74;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220df6c
	if (ctx.cr6.lt) goto loc_8220DF6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220DF6C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220DF74:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c938
	ctx.lr = 0x8220DF80;
	sub_8220C938(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220e078
	if (!ctx.cr6.eq) goto loc_8220E078;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220DFA0;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df10
	if (!ctx.cr6.eq) goto loc_8220DF10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220dfe0
	if (ctx.cr6.lt) goto loc_8220DFE0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df10
	if (!ctx.cr6.eq) goto loc_8220DF10;
loc_8220DFE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220e014
	if (ctx.cr6.lt) goto loc_8220E014;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df10
	if (!ctx.cr6.eq) goto loc_8220DF10;
loc_8220E014:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e04c
	if (ctx.cr6.eq) goto loc_8220E04C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df10
	if (!ctx.cr6.eq) goto loc_8220DF10;
loc_8220E04C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e088
	if (ctx.cr6.eq) goto loc_8220E088;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220e0c8
	goto loc_8220E0C8;
loc_8220E078:
	// bl 0x8220a938
	ctx.lr = 0x8220E07C;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df10
	if (!ctx.cr6.eq) goto loc_8220DF10;
loc_8220E088:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220e09c
	if (ctx.cr6.eq) goto loc_8220E09C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220E09C;
	sub_8220A8D0(ctx, base);
loc_8220E09C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220e0bc
	if (ctx.cr6.lt) goto loc_8220E0BC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220E0BC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8220E0C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220E0F0"))) PPC_WEAK_FUNC(sub_8220E0F0);
PPC_FUNC_IMPL(__imp__sub_8220E0F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220e140
	if (!ctx.cr6.gt) goto loc_8220E140;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8220e144
	goto loc_8220E144;
loc_8220E140:
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
loc_8220E144:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e164
	if (ctx.cr6.eq) goto loc_8220E164;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220e168
	if (!ctx.cr6.gt) goto loc_8220E168;
loc_8220E164:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8220E168:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220e1ac
	if (ctx.cr6.lt) goto loc_8220E1AC;
	// bne cr6,0x8220e204
	if (!ctx.cr6.eq) goto loc_8220E204;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e204
	if (ctx.cr6.eq) goto loc_8220E204;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// b 0x8220e1fc
	goto loc_8220E1FC;
loc_8220E1AC:
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e1d8
	if (ctx.cr6.eq) goto loc_8220E1D8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r10)
	PPC_STORE_U8(ctx.r10.u32 + 246, ctx.r9.u8);
loc_8220E1D8:
	// rlwinm r10,r8,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e204
	if (ctx.cr6.eq) goto loc_8220E204;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r6.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8220E1FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r9,246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 246, ctx.r9.u8);
loc_8220E204:
	// rlwinm r11,r7,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8220e240
	if (ctx.cr6.eq) goto loc_8220E240;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220E238:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220e3f0
	goto loc_8220E3F0;
loc_8220E240:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8220e258
	if (!ctx.cr6.gt) goto loc_8220E258;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8220e25c
	goto loc_8220E25C;
loc_8220E258:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8220E25C:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8220e26c
	if (!ctx.cr6.gt) goto loc_8220E26C;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
loc_8220E26C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e29c
	if (ctx.cr6.eq) goto loc_8220E29C;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220e294
	if (ctx.cr6.lt) goto loc_8220E294;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220E294:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8220E29C:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220c938
	ctx.lr = 0x8220E2A8;
	sub_8220C938(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220e3a0
	if (!ctx.cr6.eq) goto loc_8220E3A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// bl 0x8220aaf8
	ctx.lr = 0x8220E2C8;
	sub_8220AAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e238
	if (!ctx.cr6.eq) goto loc_8220E238;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220e308
	if (ctx.cr6.lt) goto loc_8220E308;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e238
	if (!ctx.cr6.eq) goto loc_8220E238;
loc_8220E308:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8220e33c
	if (ctx.cr6.lt) goto loc_8220E33C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e238
	if (!ctx.cr6.eq) goto loc_8220E238;
loc_8220E33C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e374
	if (ctx.cr6.eq) goto loc_8220E374;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e238
	if (!ctx.cr6.eq) goto loc_8220E238;
loc_8220E374:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e3b0
	if (ctx.cr6.eq) goto loc_8220E3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220e3f0
	goto loc_8220E3F0;
loc_8220E3A0:
	// bl 0x8220a938
	ctx.lr = 0x8220E3A4;
	sub_8220A938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e238
	if (!ctx.cr6.eq) goto loc_8220E238;
loc_8220E3B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220e3c4
	if (ctx.cr6.eq) goto loc_8220E3C4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8220a8d0
	ctx.lr = 0x8220E3C4;
	sub_8220A8D0(ctx, base);
loc_8220E3C4:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8220e3e4
	if (ctx.cr6.lt) goto loc_8220E3E4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220E3E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8220E3F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220E418"))) PPC_WEAK_FUNC(sub_8220E418);
PPC_FUNC_IMPL(__imp__sub_8220E418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,2592
	ctx.r6.s64 = ctx.r11.s64 + 2592;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8220E454;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8220e46c
	if (ctx.cr6.eq) goto loc_8220E46C;
	// bl 0x82160140
	ctx.lr = 0x8220E46C;
	sub_82160140(ctx, base);
loc_8220E46C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e490
	if (!ctx.cr6.eq) goto loc_8220E490;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e488
	if (ctx.cr6.eq) goto loc_8220E488;
	// bl 0x821601b8
	ctx.lr = 0x8220E488;
	sub_821601B8(ctx, base);
loc_8220E488:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8220E490:
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

__attribute__((alias("__imp__sub_8220E4B0"))) PPC_WEAK_FUNC(sub_8220E4B0);
PPC_FUNC_IMPL(__imp__sub_8220E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8220E4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82209ee0
	ctx.lr = 0x8220E4C4;
	sub_82209EE0(ctx, base);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221eda8
	ctx.lr = 0x8220E4D0;
	sub_8221EDA8(ctx, base);
	// addi r29,r31,148
	ctx.r29.s64 = ctx.r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221edb8
	ctx.lr = 0x8220E4DC;
	sub_8221EDB8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-25280
	ctx.r11.s64 = ctx.r11.s64 + -25280;
	// addi r10,r10,-25288
	ctx.r10.s64 = ctx.r10.s64 + -25288;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14088(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-25300
	ctx.r9.s64 = ctx.r9.s64 + -25300;
	// addi r8,r8,-25356
	ctx.r8.s64 = ctx.r8.s64 + -25356;
	// addi r7,r7,-25388
	ctx.r7.s64 = ctx.r7.s64 + -25388;
	// addi r6,r6,-25400
	ctx.r6.s64 = ctx.r6.s64 + -25400;
	// addi r5,r5,-25412
	ctx.r5.s64 = ctx.r5.s64 + -25412;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stb r11,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r11.u8);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stb r11,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r11.u8);
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
	// stb r11,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r11.u8);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// stb r11,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r11.u8);
	// stb r11,234(r31)
	PPC_STORE_U8(ctx.r31.u32 + 234, ctx.r11.u8);
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// stb r11,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r11.u8);
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// stb r11,239(r31)
	PPC_STORE_U8(ctx.r31.u32 + 239, ctx.r11.u8);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// stb r11,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r11.u8);
	// stb r11,242(r31)
	PPC_STORE_U8(ctx.r31.u32 + 242, ctx.r11.u8);
	// stb r11,243(r31)
	PPC_STORE_U8(ctx.r31.u32 + 243, ctx.r11.u8);
	// stb r11,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r11.u8);
	// stb r11,245(r31)
	PPC_STORE_U8(ctx.r31.u32 + 245, ctx.r11.u8);
	// stb r11,246(r31)
	PPC_STORE_U8(ctx.r31.u32 + 246, ctx.r11.u8);
	// stb r11,247(r31)
	PPC_STORE_U8(ctx.r31.u32 + 247, ctx.r11.u8);
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
	// stb r11,249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 249, ctx.r11.u8);
	// stb r11,250(r31)
	PPC_STORE_U8(ctx.r31.u32 + 250, ctx.r11.u8);
	// stb r11,251(r31)
	PPC_STORE_U8(ctx.r31.u32 + 251, ctx.r11.u8);
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// stb r11,253(r31)
	PPC_STORE_U8(ctx.r31.u32 + 253, ctx.r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,254(r31)
	PPC_STORE_U8(ctx.r31.u32 + 254, ctx.r11.u8);
	// stb r11,255(r31)
	PPC_STORE_U8(ctx.r31.u32 + 255, ctx.r11.u8);
	// stb r11,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r11.u8);
	// stb r11,257(r31)
	PPC_STORE_U8(ctx.r31.u32 + 257, ctx.r11.u8);
	// stb r11,258(r31)
	PPC_STORE_U8(ctx.r31.u32 + 258, ctx.r11.u8);
	// stb r10,263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 263, ctx.r10.u8);
	// addi r10,r31,273
	ctx.r10.s64 = ctx.r31.s64 + 273;
	// stb r11,259(r31)
	PPC_STORE_U8(ctx.r31.u32 + 259, ctx.r11.u8);
	// stb r11,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r11.u8);
	// stb r11,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r11.u8);
	// stb r11,262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 262, ctx.r11.u8);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// stb r11,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r11.u8);
	// stb r11,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r11.u8);
	// stb r11,267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 267, ctx.r11.u8);
	// stb r11,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r11.u8);
	// stb r11,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r11.u8);
	// stb r11,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r11.u8);
	// stb r11,271(r31)
	PPC_STORE_U8(ctx.r31.u32 + 271, ctx.r11.u8);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f0,428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f0,444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f0,504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8220E75C:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8220e75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220E75C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E778"))) PPC_WEAK_FUNC(sub_8220E778);
PPC_FUNC_IMPL(__imp__sub_8220E778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8220E780;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x8220E798;
	sub_825D2BC0(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,10656
	ctx.r29.s64 = ctx.r11.s64 + 10656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825d2aa8
	ctx.lr = 0x8220E7B0;
	sub_825D2AA8(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8220e7cc
	if (ctx.cr6.eq) goto loc_8220E7CC;
	// bl 0x82160140
	ctx.lr = 0x8220E7CC;
	sub_82160140(ctx, base);
loc_8220E7CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f1cf8
	ctx.lr = 0x8220E7D4;
	sub_821F1CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e834
	if (ctx.cr6.eq) goto loc_8220E834;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8220e8d0
	if (!ctx.cr6.gt) goto loc_8220E8D0;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// b 0x8220e8b4
	goto loc_8220E8B4;
loc_8220E834:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8220e850
	if (ctx.cr6.eq) goto loc_8220E850;
	// bl 0x82160140
	ctx.lr = 0x8220E850;
	sub_82160140(ctx, base);
loc_8220E850:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f1cf8
	ctx.lr = 0x8220E858;
	sub_821F1CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e8d0
	if (ctx.cr6.eq) goto loc_8220E8D0;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8220e8d0
	if (!ctx.cr6.gt) goto loc_8220E8D0;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_8220E8B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8220E8D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d2bc0
	ctx.lr = 0x8220E8DC;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825d2aa8
	ctx.lr = 0x8220E8EC;
	sub_825D2AA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d21e0
	ctx.lr = 0x8220E8F8;
	sub_825D21E0(ctx, base);
	// stfs f1,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E908"))) PPC_WEAK_FUNC(sub_8220E908);
PPC_FUNC_IMPL(__imp__sub_8220E908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8221ddb0
	ctx.lr = 0x8220E928;
	sub_8221DDB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-25260
	ctx.r11.s64 = ctx.r11.s64 + -25260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,30036
	ctx.r6.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x8220E96C;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8220e984
	if (ctx.cr6.eq) goto loc_8220E984;
	// bl 0x821601b8
	ctx.lr = 0x8220E984;
	sub_821601B8(ctx, base);
loc_8220E984:
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

__attribute__((alias("__imp__sub_8220E9A0"))) PPC_WEAK_FUNC(sub_8220E9A0);
PPC_FUNC_IMPL(__imp__sub_8220E9A0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220E9B8;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-25212
	ctx.r11.s64 = ctx.r11.s64 + -25212;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220E9F8"))) PPC_WEAK_FUNC(sub_8220E9F8);
PPC_FUNC_IMPL(__imp__sub_8220E9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220EA10;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25164
	ctx.r11.s64 = ctx.r11.s64 + -25164;
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

__attribute__((alias("__imp__sub_8220EA38"))) PPC_WEAK_FUNC(sub_8220EA38);
PPC_FUNC_IMPL(__imp__sub_8220EA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220EA50;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25116
	ctx.r11.s64 = ctx.r11.s64 + -25116;
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

__attribute__((alias("__imp__sub_8220EA78"))) PPC_WEAK_FUNC(sub_8220EA78);
PPC_FUNC_IMPL(__imp__sub_8220EA78) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EA90;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-25064
	ctx.r11.s64 = ctx.r11.s64 + -25064;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EAC8"))) PPC_WEAK_FUNC(sub_8220EAC8);
PPC_FUNC_IMPL(__imp__sub_8220EAC8) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EAE0;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-25012
	ctx.r11.s64 = ctx.r11.s64 + -25012;
	// li r8,14
	ctx.r8.s64 = 14;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
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
}

__attribute__((alias("__imp__sub_8220EB38"))) PPC_WEAK_FUNC(sub_8220EB38);
PPC_FUNC_IMPL(__imp__sub_8220EB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220EB50;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24960
	ctx.r11.s64 = ctx.r11.s64 + -24960;
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

__attribute__((alias("__imp__sub_8220EB78"))) PPC_WEAK_FUNC(sub_8220EB78);
PPC_FUNC_IMPL(__imp__sub_8220EB78) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EB90;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8220EBC0"))) PPC_WEAK_FUNC(sub_8220EBC0);
PPC_FUNC_IMPL(__imp__sub_8220EBC0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EBD8;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-24864
	ctx.r10.s64 = ctx.r11.s64 + -24864;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EC18"))) PPC_WEAK_FUNC(sub_8220EC18);
PPC_FUNC_IMPL(__imp__sub_8220EC18) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EC30;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-24816
	ctx.r11.s64 = ctx.r11.s64 + -24816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EC68"))) PPC_WEAK_FUNC(sub_8220EC68);
PPC_FUNC_IMPL(__imp__sub_8220EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220EC80;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24768
	ctx.r11.s64 = ctx.r11.s64 + -24768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8220ECB0"))) PPC_WEAK_FUNC(sub_8220ECB0);
PPC_FUNC_IMPL(__imp__sub_8220ECB0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220ECC8;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-24720
	ctx.r11.s64 = ctx.r11.s64 + -24720;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f13,484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r8,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r8.u8);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220ED10"))) PPC_WEAK_FUNC(sub_8220ED10);
PPC_FUNC_IMPL(__imp__sub_8220ED10) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220ED28;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24672
	ctx.r11.s64 = ctx.r11.s64 + -24672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220ED68"))) PPC_WEAK_FUNC(sub_8220ED68);
PPC_FUNC_IMPL(__imp__sub_8220ED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220ED80;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24620
	ctx.r11.s64 = ctx.r11.s64 + -24620;
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

__attribute__((alias("__imp__sub_8220EDA8"))) PPC_WEAK_FUNC(sub_8220EDA8);
PPC_FUNC_IMPL(__imp__sub_8220EDA8) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EDC0;
	sub_8220E908(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-24568
	ctx.r10.s64 = ctx.r10.s64 + -24568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f13,464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EE20"))) PPC_WEAK_FUNC(sub_8220EE20);
PPC_FUNC_IMPL(__imp__sub_8220EE20) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EE38;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24520
	ctx.r11.s64 = ctx.r11.s64 + -24520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EE68"))) PPC_WEAK_FUNC(sub_8220EE68);
PPC_FUNC_IMPL(__imp__sub_8220EE68) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EE80;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-24472
	ctx.r11.s64 = ctx.r11.s64 + -24472;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EEB8"))) PPC_WEAK_FUNC(sub_8220EEB8);
PPC_FUNC_IMPL(__imp__sub_8220EEB8) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EED0;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24424
	ctx.r11.s64 = ctx.r11.s64 + -24424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EF28"))) PPC_WEAK_FUNC(sub_8220EF28);
PPC_FUNC_IMPL(__imp__sub_8220EF28) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EF40;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24376
	ctx.r11.s64 = ctx.r11.s64 + -24376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EF70"))) PPC_WEAK_FUNC(sub_8220EF70);
PPC_FUNC_IMPL(__imp__sub_8220EF70) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EF88;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-24328
	ctx.r11.s64 = ctx.r11.s64 + -24328;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EFC0"))) PPC_WEAK_FUNC(sub_8220EFC0);
PPC_FUNC_IMPL(__imp__sub_8220EFC0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220EFD8;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24276
	ctx.r11.s64 = ctx.r11.s64 + -24276;
	// li r8,13
	ctx.r8.s64 = 13;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F030"))) PPC_WEAK_FUNC(sub_8220F030);
PPC_FUNC_IMPL(__imp__sub_8220F030) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220F048;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24224
	ctx.r11.s64 = ctx.r11.s64 + -24224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F090"))) PPC_WEAK_FUNC(sub_8220F090);
PPC_FUNC_IMPL(__imp__sub_8220F090) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220F0A8;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24176
	ctx.r11.s64 = ctx.r11.s64 + -24176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F0F0"))) PPC_WEAK_FUNC(sub_8220F0F0);
PPC_FUNC_IMPL(__imp__sub_8220F0F0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220F108;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24128
	ctx.r11.s64 = ctx.r11.s64 + -24128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F150"))) PPC_WEAK_FUNC(sub_8220F150);
PPC_FUNC_IMPL(__imp__sub_8220F150) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220F168;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24080
	ctx.r11.s64 = ctx.r11.s64 + -24080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F1B0"))) PPC_WEAK_FUNC(sub_8220F1B0);
PPC_FUNC_IMPL(__imp__sub_8220F1B0) {
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
	// bl 0x8220e908
	ctx.lr = 0x8220F1C8;
	sub_8220E908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f13,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F210"))) PPC_WEAK_FUNC(sub_8220F210);
PPC_FUNC_IMPL(__imp__sub_8220F210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220F228;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23984
	ctx.r11.s64 = ctx.r11.s64 + -23984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220F258"))) PPC_WEAK_FUNC(sub_8220F258);
PPC_FUNC_IMPL(__imp__sub_8220F258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220F270;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23936
	ctx.r11.s64 = ctx.r11.s64 + -23936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220F2A0"))) PPC_WEAK_FUNC(sub_8220F2A0);
PPC_FUNC_IMPL(__imp__sub_8220F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220F2B8;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23888
	ctx.r11.s64 = ctx.r11.s64 + -23888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220F2E8"))) PPC_WEAK_FUNC(sub_8220F2E8);
PPC_FUNC_IMPL(__imp__sub_8220F2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220e908
	ctx.lr = 0x8220F300;
	sub_8220E908(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23840
	ctx.r11.s64 = ctx.r11.s64 + -23840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220F330"))) PPC_WEAK_FUNC(sub_8220F330);
PPC_FUNC_IMPL(__imp__sub_8220F330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8220F338;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// beq cr6,0x8220f5c0
	if (ctx.cr6.eq) goto loc_8220F5C0;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f5c0
	if (ctx.cr6.eq) goto loc_8220F5C0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8220f378
	if (ctx.cr6.lt) goto loc_8220F378;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8220f37c
	goto loc_8220F37C;
loc_8220F378:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8220F37C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220f5c0
	if (ctx.cr6.eq) goto loc_8220F5C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32296
	ctx.r10.s64 = ctx.r11.s64 + -32296;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8220F390:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8220f3b4
	if (ctx.cr6.eq) goto loc_8220F3B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220f390
	if (ctx.cr6.eq) goto loc_8220F390;
loc_8220F3B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220f3f4
	if (!ctx.cr6.eq) goto loc_8220F3F4;
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
	// bl 0x821eee30
	ctx.lr = 0x8220F3D8;
	sub_821EEE30(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r28,268
	ctx.r3.s64 = ctx.r28.s64 + 268;
	// bl 0x8221f3c8
	ctx.lr = 0x8220F3E4;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f3f4
	if (ctx.cr6.eq) goto loc_8220F3F4;
	// bl 0x821601b8
	ctx.lr = 0x8220F3F4;
	sub_821601B8(ctx, base);
loc_8220F3F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32084
	ctx.r10.s64 = ctx.r11.s64 + 32084;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8220F400:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8220f424
	if (ctx.cr6.eq) goto loc_8220F424;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220f400
	if (ctx.cr6.eq) goto loc_8220F400;
loc_8220F424:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220f460
	if (!ctx.cr6.eq) goto loc_8220F460;
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
	// bl 0x8220e418
	ctx.lr = 0x8220F444;
	sub_8220E418(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,260
	ctx.r3.s64 = ctx.r28.s64 + 260;
	// bl 0x8221f3c8
	ctx.lr = 0x8220F450;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f460
	if (ctx.cr6.eq) goto loc_8220F460;
	// bl 0x821601b8
	ctx.lr = 0x8220F460;
	sub_821601B8(ctx, base);
loc_8220F460:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31120
	ctx.r10.s64 = ctx.r11.s64 + -31120;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8220F46C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8220f490
	if (ctx.cr6.eq) goto loc_8220F490;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220f46c
	if (ctx.cr6.eq) goto loc_8220F46C;
loc_8220F490:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220f4cc
	if (!ctx.cr6.eq) goto loc_8220F4CC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821c0328
	ctx.lr = 0x8220F4B0;
	sub_821C0328(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r28,276
	ctx.r3.s64 = ctx.r28.s64 + 276;
	// bl 0x8221f3c8
	ctx.lr = 0x8220F4BC;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f4cc
	if (ctx.cr6.eq) goto loc_8220F4CC;
	// bl 0x821601b8
	ctx.lr = 0x8220F4CC;
	sub_821601B8(ctx, base);
loc_8220F4CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31140
	ctx.r10.s64 = ctx.r11.s64 + -31140;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8220F4D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8220f4fc
	if (ctx.cr6.eq) goto loc_8220F4FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220f4d8
	if (ctx.cr6.eq) goto loc_8220F4D8;
loc_8220F4FC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220f538
	if (!ctx.cr6.eq) goto loc_8220F538;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821c0328
	ctx.lr = 0x8220F51C;
	sub_821C0328(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r28,284
	ctx.r3.s64 = ctx.r28.s64 + 284;
	// bl 0x8221f3c8
	ctx.lr = 0x8220F528;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f538
	if (ctx.cr6.eq) goto loc_8220F538;
	// bl 0x821601b8
	ctx.lr = 0x8220F538;
	sub_821601B8(ctx, base);
loc_8220F538:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32764
	ctx.r10.s64 = ctx.r11.s64 + -32764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8220F544:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8220f568
	if (ctx.cr6.eq) goto loc_8220F568;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220f544
	if (ctx.cr6.eq) goto loc_8220F544;
loc_8220F568:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220f5c0
	if (!ctx.cr6.eq) goto loc_8220F5C0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821ebcc0
	ctx.lr = 0x8220F588;
	sub_821EBCC0(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f5b0
	if (ctx.cr6.eq) goto loc_8220F5B0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f5b0
	if (ctx.cr6.eq) goto loc_8220F5B0;
	// addi r4,r10,60
	ctx.r4.s64 = ctx.r10.s64 + 60;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// bl 0x823032b8
	ctx.lr = 0x8220F5B0;
	sub_823032B8(ctx, base);
loc_8220F5B0:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f5c0
	if (ctx.cr6.eq) goto loc_8220F5C0;
	// bl 0x821601b8
	ctx.lr = 0x8220F5C0;
	sub_821601B8(ctx, base);
loc_8220F5C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220F5C8"))) PPC_WEAK_FUNC(sub_8220F5C8);
PPC_FUNC_IMPL(__imp__sub_8220F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8220F5D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-32296
	ctx.r4.s64 = ctx.r11.s64 + -32296;
	// stw r29,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r28,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r28.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stb r29,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F608;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220F620;
	sub_821EA350(ctx, base);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stfs f1,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f638
	if (ctx.cr6.lt) goto loc_8220F638;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x82186190
	ctx.lr = 0x8220F638;
	sub_82186190(ctx, base);
loc_8220F638:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r28.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r29,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r29.u32);
	// addi r4,r11,-22880
	ctx.r4.s64 = ctx.r11.s64 + -22880;
	// stb r29,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r29.u8);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r28,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r28.u32);
	// stw r29,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r29.u32);
	// stb r29,788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 788, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F664;
	sub_82161E08(ctx, base);
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F674;
	sub_821EA350(ctx, base);
	// lwz r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// stfs f1,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f68c
	if (ctx.cr6.lt) goto loc_8220F68C;
	// lwz r3,788(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// bl 0x82186190
	ctx.lr = 0x8220F68C;
	sub_82186190(ctx, base);
loc_8220F68C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r28.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r29,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r29.u32);
	// addi r4,r11,-22900
	ctx.r4.s64 = ctx.r11.s64 + -22900;
	// stb r29,788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 788, ctx.r29.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F6B8;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F6C8;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f6e0
	if (ctx.cr6.lt) goto loc_8220F6E0;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x8220F6E0;
	sub_82186190(ctx, base);
loc_8220F6E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r4,r11,-22916
	ctx.r4.s64 = ctx.r11.s64 + -22916;
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r29.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r28,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r28.u32);
	// stw r29,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r29.u32);
	// stb r29,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F70C;
	sub_82161E08(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F71C;
	sub_821EA350(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// stfs f1,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f734
	if (ctx.cr6.lt) goto loc_8220F734;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82186190
	ctx.lr = 0x8220F734;
	sub_82186190(ctx, base);
loc_8220F734:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r29.u32);
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// stb r29,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r29.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stb r29,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F760;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F770;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f788
	if (ctx.cr6.lt) goto loc_8220F788;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x8220F788;
	sub_82186190(ctx, base);
loc_8220F788:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// stb r29,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r29.u8);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r28,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r28.u32);
	// stw r29,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r29.u32);
	// stb r29,756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 756, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F7B4;
	sub_82161E08(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F7C4;
	sub_821EA350(ctx, base);
	// lwz r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// stfs f1,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f7dc
	if (ctx.cr6.lt) goto loc_8220F7DC;
	// lwz r3,756(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x82186190
	ctx.lr = 0x8220F7DC;
	sub_82186190(ctx, base);
loc_8220F7DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r28.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r29,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r29.u32);
	// addi r4,r11,-22964
	ctx.r4.s64 = ctx.r11.s64 + -22964;
	// stb r29,756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 756, ctx.r29.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r28,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r28.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stb r29,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F808;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F818;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f830
	if (ctx.cr6.lt) goto loc_8220F830;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x8220F830;
	sub_82186190(ctx, base);
loc_8220F830:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r28.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// stb r29,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r29.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r28,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r28.u32);
	// stw r29,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r29.u32);
	// stb r29,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F85C;
	sub_82161E08(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F86C;
	sub_821EA350(ctx, base);
	// lwz r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// stfs f1,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f884
	if (ctx.cr6.lt) goto loc_8220F884;
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// bl 0x82186190
	ctx.lr = 0x8220F884;
	sub_82186190(ctx, base);
loc_8220F884:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r28.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r29,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r29.u32);
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// stb r29,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r29.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// stw r29,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// stb r29,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F8B0;
	sub_82161E08(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F8C0;
	sub_821EA350(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// stfs f1,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f8d8
	if (ctx.cr6.lt) goto loc_8220F8D8;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x8220F8D8;
	sub_82186190(ctx, base);
loc_8220F8D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r29,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// addi r4,r11,-23016
	ctx.r4.s64 = ctx.r11.s64 + -23016;
	// stb r29,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r29.u8);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r28,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r28.u32);
	// stw r29,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r29.u32);
	// stb r29,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F904;
	sub_82161E08(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F914;
	sub_821EA350(ctx, base);
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stfs f1,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f92c
	if (ctx.cr6.lt) goto loc_8220F92C;
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// bl 0x82186190
	ctx.lr = 0x8220F92C;
	sub_82186190(ctx, base);
loc_8220F92C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r28.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r29,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r29.u32);
	// addi r4,r11,-23032
	ctx.r4.s64 = ctx.r11.s64 + -23032;
	// stb r29,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, ctx.r29.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r28,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r28.u32);
	// stw r29,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r29.u32);
	// stb r29,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F958;
	sub_82161E08(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F968;
	sub_821EA350(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stfs f1,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f980
	if (ctx.cr6.lt) goto loc_8220F980;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82186190
	ctx.lr = 0x8220F980;
	sub_82186190(ctx, base);
loc_8220F980:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r29.u32);
	// addi r4,r11,-23048
	ctx.r4.s64 = ctx.r11.s64 + -23048;
	// stb r29,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stb r29,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220F9AC;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220F9BC;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220f9d4
	if (ctx.cr6.lt) goto loc_8220F9D4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8220F9D4;
	sub_82186190(ctx, base);
loc_8220F9D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r11,-23068
	ctx.r4.s64 = ctx.r11.s64 + -23068;
	// stb r29,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stb r29,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FA00;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FA10;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fa28
	if (ctx.cr6.lt) goto loc_8220FA28;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8220FA28;
	sub_82186190(ctx, base);
loc_8220FA28:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r11,-23088
	ctx.r4.s64 = ctx.r11.s64 + -23088;
	// stb r29,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r29.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stb r29,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FA54;
	sub_82161E08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FA64;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fa7c
	if (ctx.cr6.lt) goto loc_8220FA7C;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x8220FA7C;
	sub_82186190(ctx, base);
loc_8220FA7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r4,r11,-23104
	ctx.r4.s64 = ctx.r11.s64 + -23104;
	// stb r29,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r29.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r28,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stb r29,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FAA8;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FAB8;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fad0
	if (ctx.cr6.lt) goto loc_8220FAD0;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x8220FAD0;
	sub_82186190(ctx, base);
loc_8220FAD0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r4,r11,-23116
	ctx.r4.s64 = ctx.r11.s64 + -23116;
	// stb r29,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r29.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r28,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r28.u32);
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stb r29,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FAFC;
	sub_82161E08(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FB0C;
	sub_821EA350(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stfs f1,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fb24
	if (ctx.cr6.lt) goto loc_8220FB24;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x8220FB24;
	sub_82186190(ctx, base);
loc_8220FB24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r28.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r4,r11,-23128
	ctx.r4.s64 = ctx.r11.s64 + -23128;
	// stb r29,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r29.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r28,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r28.u32);
	// stw r29,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r29.u32);
	// stb r29,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FB50;
	sub_82161E08(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FB60;
	sub_821EA350(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stfs f1,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fb78
	if (ctx.cr6.lt) goto loc_8220FB78;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82186190
	ctx.lr = 0x8220FB78;
	sub_82186190(ctx, base);
loc_8220FB78:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r28.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r29,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r29.u32);
	// addi r4,r11,-23148
	ctx.r4.s64 = ctx.r11.s64 + -23148;
	// stb r29,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r29.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r28,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r28.u32);
	// stw r29,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r29.u32);
	// stb r29,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FBA4;
	sub_82161E08(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FBB4;
	sub_821EA350(ctx, base);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fbcc
	if (ctx.cr6.lt) goto loc_8220FBCC;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82186190
	ctx.lr = 0x8220FBCC;
	sub_82186190(ctx, base);
loc_8220FBCC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r28.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r29,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r29.u32);
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// stb r29,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r29.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r28,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r28.u32);
	// stw r29,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r29.u32);
	// stb r29,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FBF8;
	sub_82161E08(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FC08;
	sub_821EA350(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// stfs f1,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fc20
	if (ctx.cr6.lt) goto loc_8220FC20;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82186190
	ctx.lr = 0x8220FC20;
	sub_82186190(ctx, base);
loc_8220FC20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r28.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r29,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r29.u32);
	// addi r4,r11,-23188
	ctx.r4.s64 = ctx.r11.s64 + -23188;
	// stb r29,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r29.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r28,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r28.u32);
	// stw r29,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r29.u32);
	// stb r29,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FC4C;
	sub_82161E08(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FC5C;
	sub_821EA350(ctx, base);
	// lwz r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stfs f1,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fc74
	if (ctx.cr6.lt) goto loc_8220FC74;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82186190
	ctx.lr = 0x8220FC74;
	sub_82186190(ctx, base);
loc_8220FC74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r28.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r29,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r29.u32);
	// addi r4,r11,-23204
	ctx.r4.s64 = ctx.r11.s64 + -23204;
	// stb r29,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r29.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stw r28,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r28.u32);
	// stw r29,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r29.u32);
	// stb r29,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FCA0;
	sub_82161E08(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FCB0;
	sub_821EA350(ctx, base);
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// stfs f1,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fcc8
	if (ctx.cr6.lt) goto loc_8220FCC8;
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// bl 0x82186190
	ctx.lr = 0x8220FCC8;
	sub_82186190(ctx, base);
loc_8220FCC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r28.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r29,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r29.u32);
	// addi r4,r11,-23220
	ctx.r4.s64 = ctx.r11.s64 + -23220;
	// stb r29,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r29.u8);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r28,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r28.u32);
	// stw r29,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r29.u32);
	// stb r29,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x8220FCF4;
	sub_82161E08(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ea350
	ctx.lr = 0x8220FD04;
	sub_821EA350(ctx, base);
	// lwz r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// stfs f1,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fd1c
	if (ctx.cr6.lt) goto loc_8220FD1C;
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// bl 0x82186190
	ctx.lr = 0x8220FD1C;
	sub_82186190(ctx, base);
loc_8220FD1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r29.u32);
	// addi r4,r11,-23240
	ctx.r4.s64 = ctx.r11.s64 + -23240;
	// stb r29,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r29.u8);
	// bl 0x821620e8
	ctx.lr = 0x8220FD38;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FD48;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FD54;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23260
	ctx.r4.s64 = ctx.r11.s64 + -23260;
	// bl 0x821620e8
	ctx.lr = 0x8220FD64;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FD74;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FD80;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23272
	ctx.r4.s64 = ctx.r11.s64 + -23272;
	// bl 0x821620e8
	ctx.lr = 0x8220FD90;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FDA0;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FDAC;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23292
	ctx.r4.s64 = ctx.r11.s64 + -23292;
	// bl 0x821620e8
	ctx.lr = 0x8220FDBC;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FDCC;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FDD8;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23308
	ctx.r4.s64 = ctx.r11.s64 + -23308;
	// bl 0x821620e8
	ctx.lr = 0x8220FDE8;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FDF8;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FE04;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23332
	ctx.r4.s64 = ctx.r11.s64 + -23332;
	// bl 0x821620e8
	ctx.lr = 0x8220FE14;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FE24;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FE30;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23352
	ctx.r4.s64 = ctx.r11.s64 + -23352;
	// bl 0x821620e8
	ctx.lr = 0x8220FE40;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FE50;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FE5C;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-23372
	ctx.r4.s64 = ctx.r11.s64 + -23372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821620e8
	ctx.lr = 0x8220FE6C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FE7C;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FE88;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23396
	ctx.r4.s64 = ctx.r11.s64 + -23396;
	// bl 0x821620e8
	ctx.lr = 0x8220FE98;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FEA8;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FEB4;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23416
	ctx.r4.s64 = ctx.r11.s64 + -23416;
	// bl 0x821620e8
	ctx.lr = 0x8220FEC4;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FED4;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FEE0;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23432
	ctx.r4.s64 = ctx.r11.s64 + -23432;
	// bl 0x821620e8
	ctx.lr = 0x8220FEF0;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FF00;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FF0C;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23444
	ctx.r4.s64 = ctx.r11.s64 + -23444;
	// bl 0x821620e8
	ctx.lr = 0x8220FF1C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FF2C;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FF38;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23456
	ctx.r4.s64 = ctx.r11.s64 + -23456;
	// bl 0x821620e8
	ctx.lr = 0x8220FF48;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FF58;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FF64;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23468
	ctx.r4.s64 = ctx.r11.s64 + -23468;
	// bl 0x821620e8
	ctx.lr = 0x8220FF74;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FF84;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FF90;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23488
	ctx.r4.s64 = ctx.r11.s64 + -23488;
	// bl 0x821620e8
	ctx.lr = 0x8220FFA0;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FFB0;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,444(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FFBC;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23504
	ctx.r4.s64 = ctx.r11.s64 + -23504;
	// bl 0x821620e8
	ctx.lr = 0x8220FFCC;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8220FFDC;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8220FFE8;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
	// bl 0x821620e8
	ctx.lr = 0x8220FFF8;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210008;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,452(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210014;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23544
	ctx.r4.s64 = ctx.r11.s64 + -23544;
	// bl 0x821620e8
	ctx.lr = 0x82210024;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210034;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210040;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23572
	ctx.r4.s64 = ctx.r11.s64 + -23572;
	// bl 0x821620e8
	ctx.lr = 0x82210050;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210060;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8221006C;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23588
	ctx.r4.s64 = ctx.r11.s64 + -23588;
	// bl 0x821620e8
	ctx.lr = 0x8221007C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221008C;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210098;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23604
	ctx.r4.s64 = ctx.r11.s64 + -23604;
	// bl 0x821620e8
	ctx.lr = 0x822100A8;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822100B8;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822100C4;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23620
	ctx.r4.s64 = ctx.r11.s64 + -23620;
	// bl 0x821620e8
	ctx.lr = 0x822100D4;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822100E4;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822100F0;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23640
	ctx.r4.s64 = ctx.r11.s64 + -23640;
	// bl 0x821620e8
	ctx.lr = 0x82210100;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210110;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8221011C;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23660
	ctx.r4.s64 = ctx.r11.s64 + -23660;
	// bl 0x821620e8
	ctx.lr = 0x8221012C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221013C;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210148;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23680
	ctx.r4.s64 = ctx.r11.s64 + -23680;
	// bl 0x821620e8
	ctx.lr = 0x82210158;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210168;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210174;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23696
	ctx.r4.s64 = ctx.r11.s64 + -23696;
	// bl 0x821620e8
	ctx.lr = 0x82210184;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210194;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822101A0;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23712
	ctx.r4.s64 = ctx.r11.s64 + -23712;
	// bl 0x821620e8
	ctx.lr = 0x822101B0;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822101C0;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822101CC;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23720
	ctx.r4.s64 = ctx.r11.s64 + -23720;
	// bl 0x821620e8
	ctx.lr = 0x822101DC;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822101EC;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822101F8;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23740
	ctx.r4.s64 = ctx.r11.s64 + -23740;
	// bl 0x821620e8
	ctx.lr = 0x82210208;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210218;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210224;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-23756
	ctx.r4.s64 = ctx.r11.s64 + -23756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821620e8
	ctx.lr = 0x82210234;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210244;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x82210250;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23776
	ctx.r4.s64 = ctx.r11.s64 + -23776;
	// bl 0x821620e8
	ctx.lr = 0x82210260;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82210270;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x8221027C;
	sub_825FC7B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x821620e8
	ctx.lr = 0x8221028C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x8221029C;
	sub_821EA350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// bl 0x825fc7b8
	ctx.lr = 0x822102A8;
	sub_825FC7B8(ctx, base);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822102B8"))) PPC_WEAK_FUNC(sub_822102B8);
PPC_FUNC_IMPL(__imp__sub_822102B8) {
	PPC_FUNC_PROLOGUE();
	// std r4,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102C0"))) PPC_WEAK_FUNC(sub_822102C0);
PPC_FUNC_IMPL(__imp__sub_822102C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102C8"))) PPC_WEAK_FUNC(sub_822102C8);
PPC_FUNC_IMPL(__imp__sub_822102C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102D0"))) PPC_WEAK_FUNC(sub_822102D0);
PPC_FUNC_IMPL(__imp__sub_822102D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102D8"))) PPC_WEAK_FUNC(sub_822102D8);
PPC_FUNC_IMPL(__imp__sub_822102D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102F8"))) PPC_WEAK_FUNC(sub_822102F8);
PPC_FUNC_IMPL(__imp__sub_822102F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82210318;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82210358
	if (!ctx.cr6.lt) goto loc_82210358;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82210358:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

extern bool MidairControlForMachSpeed();

__attribute__((alias("__imp__sub_82210370"))) PPC_WEAK_FUNC(sub_82210370);
PPC_FUNC_IMPL(__imp__sub_82210370) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	if (MidairControlForMachSpeed()) {
		goto loc_82210388;
	}
	else {
	}
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
loc_82210388:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

extern bool MidairControlForMachSpeed();

__attribute__((alias("__imp__sub_82210390"))) PPC_WEAK_FUNC(sub_82210390);
PPC_FUNC_IMPL(__imp__sub_82210390) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r31)
	if (MidairControlForMachSpeed()) {
		goto loc_822103BC;
	}
	else {
	}
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
loc_822103BC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x822103C4;
	sub_82208F48(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f13,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x82208f48
	ctx.lr = 0x822103E4;
	sub_82208F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822103F8"))) PPC_WEAK_FUNC(sub_822103F8);
PPC_FUNC_IMPL(__imp__sub_822103F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,196(r10)
	PPC_STORE_U8(ctx.r10.u32 + 196, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210410"))) PPC_WEAK_FUNC(sub_82210410);
PPC_FUNC_IMPL(__imp__sub_82210410) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,195(r10)
	PPC_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,194(r10)
	PPC_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x8221045C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210488"))) PPC_WEAK_FUNC(sub_82210488);
PPC_FUNC_IMPL(__imp__sub_82210488) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,195(r10)
	PPC_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,194(r10)
	PPC_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,195(r10)
	PPC_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822104C0"))) PPC_WEAK_FUNC(sub_822104C0);
PPC_FUNC_IMPL(__imp__sub_822104C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822104F8"))) PPC_WEAK_FUNC(sub_822104F8);
PPC_FUNC_IMPL(__imp__sub_822104F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210510"))) PPC_WEAK_FUNC(sub_82210510);
PPC_FUNC_IMPL(__imp__sub_82210510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f13,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,201(r11)
	PPC_STORE_U8(ctx.r11.u32 + 201, ctx.r10.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210548"))) PPC_WEAK_FUNC(sub_82210548);
PPC_FUNC_IMPL(__imp__sub_82210548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,201(r11)
	PPC_STORE_U8(ctx.r11.u32 + 201, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210558"))) PPC_WEAK_FUNC(sub_82210558);
PPC_FUNC_IMPL(__imp__sub_82210558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,199(r10)
	PPC_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,199(r10)
	PPC_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,204(r10)
	PPC_STORE_U8(ctx.r10.u32 + 204, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,205(r10)
	PPC_STORE_U8(ctx.r10.u32 + 205, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,206(r10)
	PPC_STORE_U8(ctx.r10.u32 + 206, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,211(r10)
	PPC_STORE_U8(ctx.r10.u32 + 211, ctx.r11.u8);
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822105C0"))) PPC_WEAK_FUNC(sub_822105C0);
PPC_FUNC_IMPL(__imp__sub_822105C0) {
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
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822106cc
	if (ctx.cr6.eq) goto loc_822106CC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8221066c
	if (ctx.cr6.eq) goto loc_8221066C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8221060c
	if (ctx.cr6.eq) goto loc_8221060C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x822106c8
	if (!ctx.cr6.eq) goto loc_822106C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// b 0x82210680
	goto loc_82210680;
loc_8221060C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208fd0
	ctx.lr = 0x82210614;
	sub_82208FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221065C;
	sub_82208F48(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82210668;
	sub_82208F48(ctx, base);
	// b 0x822106c8
	goto loc_822106C8;
loc_8221066C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82210680:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r10,193(r9)
	PPC_STORE_U8(ctx.r9.u32 + 193, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,205(r10)
	PPC_STORE_U8(ctx.r10.u32 + 205, ctx.r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x822106A8;
	sub_82208F48(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_822106C8:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_822106CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822106E8"))) PPC_WEAK_FUNC(sub_822106E8);
PPC_FUNC_IMPL(__imp__sub_822106E8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,202(r10)
	PPC_STORE_U8(ctx.r10.u32 + 202, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,210(r10)
	PPC_STORE_U8(ctx.r10.u32 + 210, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,199(r10)
	PPC_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x8221072C;
	sub_82208F48(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210760"))) PPC_WEAK_FUNC(sub_82210760);
PPC_FUNC_IMPL(__imp__sub_82210760) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,202(r10)
	PPC_STORE_U8(ctx.r10.u32 + 202, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,210(r10)
	PPC_STORE_U8(ctx.r10.u32 + 210, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,199(r10)
	PPC_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210788"))) PPC_WEAK_FUNC(sub_82210788);
PPC_FUNC_IMPL(__imp__sub_82210788) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// bne cr6,0x822107bc
	if (!ctx.cr6.eq) goto loc_822107BC;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822107bc
	if (ctx.cr6.eq) goto loc_822107BC;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82208f48
	ctx.lr = 0x822107BC;
	sub_82208F48(ctx, base);
loc_822107BC:
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

__attribute__((alias("__imp__sub_822107D0"))) PPC_WEAK_FUNC(sub_822107D0);
PPC_FUNC_IMPL(__imp__sub_822107D0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 193, ctx.r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82210808;
	sub_82208F48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x82208fd0
	ctx.lr = 0x82210828;
	sub_82208FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,17
	ctx.r4.s64 = 17;
	// stb r30,199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 199, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,203(r11)
	PPC_STORE_U8(ctx.r11.u32 + 203, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x8221084C;
	sub_82208F48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210868"))) PPC_WEAK_FUNC(sub_82210868);
PPC_FUNC_IMPL(__imp__sub_82210868) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,203(r10)
	PPC_STORE_U8(ctx.r10.u32 + 203, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,206(r10)
	PPC_STORE_U8(ctx.r10.u32 + 206, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,199(r10)
	PPC_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210898"))) PPC_WEAK_FUNC(sub_82210898);
PPC_FUNC_IMPL(__imp__sub_82210898) {
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
	// bl 0x82209fb8
	ctx.lr = 0x822108B8;
	sub_82209FB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// std r9,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r9.u64);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// ble cr6,0x82210904
	if (!ctx.cr6.gt) goto loc_82210904;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822108fc
	if (ctx.cr6.lt) goto loc_822108FC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_822108FC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
loc_82210904:
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82210934
	if (!ctx.cr6.gt) goto loc_82210934;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8221092c
	if (ctx.cr6.lt) goto loc_8221092C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221092C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
loc_82210934:
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82210964
	if (!ctx.cr6.gt) goto loc_82210964;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8221095c
	if (ctx.cr6.lt) goto loc_8221095C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221095C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_82210964:
	// li r11,128
	ctx.r11.s64 = 128;
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bgt cr6,0x8221098c
	if (ctx.cr6.gt) goto loc_8221098C;
	// lbz r11,193(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 193);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq cr6,0x82210990
	if (ctx.cr6.eq) goto loc_82210990;
loc_8221098C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82210990:
	// lbz r10,197(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lbz r7,199(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 199);
	// lbz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r5,195(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 195);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// lbz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// rlwimi r10,r8,0,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r6.s64;
	// rlwimi r10,r8,0,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// rlwimi r10,r8,0,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r7,r5,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// andi. r10,r10,1122
	ctx.r10.u64 = ctx.r10.u64 & 1122;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bne cr6,0x82210a14
	if (!ctx.cr6.eq) goto loc_82210A14;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82210A14:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,201(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x82210a30
	if (!ctx.cr6.eq) goto loc_82210A30;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82210A30:
	// lbz r8,210(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 210);
	// lbz r7,211(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 211);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r8,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x82210a60
	if (!ctx.cr6.eq) goto loc_82210A60;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82210A60:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,194(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x82210a7c
	if (!ctx.cr6.eq) goto loc_82210A7C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82210A7C:
	// lbz r8,207(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,206(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 206);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// lbz r7,205(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// lbz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r5,198(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 198);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lbz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r7.s64;
	// rlwimi r8,r11,0,27,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r6.s64;
	// rlwimi r8,r11,0,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwimi r8,r11,0,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// andi. r10,r8,54
	ctx.r10.u64 = ctx.r8.u64 & 54;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// bne cr6,0x82210b08
	if (!ctx.cr6.eq) goto loc_82210B08;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210b08
	if (!ctx.cr6.eq) goto loc_82210B08;
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82210b0c
	if (!ctx.cr6.gt) goto loc_82210B0C;
loc_82210B08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82210B0C:
	// lbz r9,209(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 209);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82210B50"))) PPC_WEAK_FUNC(sub_82210B50);
PPC_FUNC_IMPL(__imp__sub_82210B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82210b8c
	if (!ctx.cr6.gt) goto loc_82210B8C;
	// lfs f12,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82210b84
	if (ctx.cr6.lt) goto loc_82210B84;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82210B84:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
loc_82210B8C:
	// lfs f13,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82210bb8
	if (ctx.cr6.gt) goto loc_82210BB8;
	// lfs f0,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// b 0x82210bdc
	goto loc_82210BDC;
loc_82210BB8:
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82210bf0
	if (!ctx.cr6.eq) goto loc_82210BF0;
	// lfs f0,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,236
	ctx.r11.s64 = ctx.r3.s64 + 236;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f1,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
loc_82210BDC:
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// blt cr6,0x82210be8
	if (ctx.cr6.lt) goto loc_82210BE8;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82210BE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_82210BF0:
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210C18"))) PPC_WEAK_FUNC(sub_82210C18);
PPC_FUNC_IMPL(__imp__sub_82210C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82210c58
	if (!ctx.cr6.gt) goto loc_82210C58;
	// lfs f12,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82210c4c
	if (ctx.cr6.lt) goto loc_82210C4C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82210C4C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
loc_82210C58:
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f12,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// fnmsubs f13,f12,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82210c84
	if (ctx.cr6.lt) goto loc_82210C84;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82210C84:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210C90"))) PPC_WEAK_FUNC(sub_82210C90);
PPC_FUNC_IMPL(__imp__sub_82210C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82210cac
	if (ctx.cr6.gt) goto loc_82210CAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82210CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210cc4
	if (ctx.cr6.eq) goto loc_82210CC4;
	// stfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_82210CC4:
	// lfs f13,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f1,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82210ce8
	if (ctx.cr6.lt) goto loc_82210CE8;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82210CE8:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f1,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82210d14
	if (ctx.cr6.lt) goto loc_82210D14;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82210D14:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210D20"))) PPC_WEAK_FUNC(sub_82210D20);
PPC_FUNC_IMPL(__imp__sub_82210D20) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 199, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,211(r11)
	PPC_STORE_U8(ctx.r11.u32 + 211, ctx.r30.u8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82210de0
	if (ctx.cr6.eq) goto loc_82210DE0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r30,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r30.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,205(r10)
	PPC_STORE_U8(ctx.r10.u32 + 205, ctx.r11.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82210DC4;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82210DE0:
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

__attribute__((alias("__imp__sub_82210E00"))) PPC_WEAK_FUNC(sub_82210E00);
PPC_FUNC_IMPL(__imp__sub_82210E00) {
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
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210eac
	if (ctx.cr6.eq) goto loc_82210EAC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210eac
	if (ctx.cr6.eq) goto loc_82210EAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210e98
	if (ctx.cr6.eq) goto loc_82210E98;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82210E98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82210EAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210EC0"))) PPC_WEAK_FUNC(sub_82210EC0);
PPC_FUNC_IMPL(__imp__sub_82210EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lbz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 196);
	// lbz r11,194(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 194);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210fbc
	if (!ctx.cr6.eq) goto loc_82210FBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82210f94
	if (ctx.cr6.eq) goto loc_82210F94;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82210f94
	if (ctx.cr6.eq) goto loc_82210F94;
	// lwz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ble cr6,0x82210f64
	if (!ctx.cr6.gt) goto loc_82210F64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210fbc
	if (ctx.cr6.eq) goto loc_82210FBC;
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
loc_82210F64:
	// li r4,5
	ctx.r4.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210fbc
	if (ctx.cr6.eq) goto loc_82210FBC;
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
loc_82210F94:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82210fc0
	if (!ctx.cr6.eq) goto loc_82210FC0;
loc_82210FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210FC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210FD8"))) PPC_WEAK_FUNC(sub_82210FD8);
PPC_FUNC_IMPL(__imp__sub_82210FD8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,196(r10)
	PPC_STORE_U8(ctx.r10.u32 + 196, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,198(r10)
	PPC_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211038
	if (ctx.cr6.eq) goto loc_82211038;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211038
	if (ctx.cr6.eq) goto loc_82211038;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82211038:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f13,236(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x82208f48
	ctx.lr = 0x82211060;
	sub_82208F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211078"))) PPC_WEAK_FUNC(sub_82211078);
PPC_FUNC_IMPL(__imp__sub_82211078) {
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
	// bl 0x82209ee0
	ctx.lr = 0x82211094;
	sub_82209EE0(ctx, base);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221eda8
	ctx.lr = 0x822110A0;
	sub_8221EDA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-22744
	ctx.r11.s64 = ctx.r11.s64 + -22744;
	// addi r10,r10,-22752
	ctx.r10.s64 = ctx.r10.s64 + -22752;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-22820
	ctx.r9.s64 = ctx.r9.s64 + -22820;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// addi r8,r8,-22808
	ctx.r8.s64 = ctx.r8.s64 + -22808;
	// addi r7,r7,-22852
	ctx.r7.s64 = ctx.r7.s64 + -22852;
	// addi r6,r6,-22864
	ctx.r6.s64 = ctx.r6.s64 + -22864;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
	// stb r11,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r11.u8);
	// stb r11,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r11.u8);
	// stb r11,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r11.u8);
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// stb r11,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r11.u8);
	// stb r11,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r11.u8);
	// stb r11,199(r31)
	PPC_STORE_U8(ctx.r31.u32 + 199, ctx.r11.u8);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stb r11,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// stb r11,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r11.u8);
	// stb r11,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r11.u8);
	// stb r11,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r11.u8);
	// stb r11,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r11.u8);
	// stb r11,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r11.u8);
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// stb r10,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r10.u8);
	// stb r11,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r11.u8);
	// stb r11,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r11.u8);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822111D8"))) PPC_WEAK_FUNC(sub_822111D8);
PPC_FUNC_IMPL(__imp__sub_822111D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x822111f0
	sub_822111F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822111E0"))) PPC_WEAK_FUNC(sub_822111E0);
PPC_FUNC_IMPL(__imp__sub_822111E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x822111f0
	sub_822111F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822111E8"))) PPC_WEAK_FUNC(sub_822111E8);
PPC_FUNC_IMPL(__imp__sub_822111E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x822111f0
	sub_822111F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822111F0"))) PPC_WEAK_FUNC(sub_822111F0);
PPC_FUNC_IMPL(__imp__sub_822111F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221121c
	if (ctx.cr6.eq) goto loc_8221121C;
	// bl 0x821601b8
	ctx.lr = 0x8221121C;
	sub_821601B8(ctx, base);
loc_8221121C:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221122c
	if (ctx.cr6.eq) goto loc_8221122C;
	// bl 0x821601b8
	ctx.lr = 0x8221122C;
	sub_821601B8(ctx, base);
loc_8221122C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bne cr6,0x8221123c
	if (!ctx.cr6.eq) goto loc_8221123C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221123C:
	// bl 0x8221eda8
	ctx.lr = 0x82211240;
	sub_8221EDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221db40
	ctx.lr = 0x82211248;
	sub_8221DB40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211260
	if (ctx.cr6.eq) goto loc_82211260;
	// bl 0x82186190
	ctx.lr = 0x8221125C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82211260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211278"))) PPC_WEAK_FUNC(sub_82211278);
PPC_FUNC_IMPL(__imp__sub_82211278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8221ddb0
	ctx.lr = 0x82211298;
	sub_8221DDB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-22728
	ctx.r11.s64 = ctx.r11.s64 + -22728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822112BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,10672
	ctx.r6.s64 = ctx.r11.s64 + 10672;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29796
	ctx.r5.s64 = ctx.r11.s64 + 29796;
	// bl 0x826df418
	ctx.lr = 0x822112DC;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822112f4
	if (ctx.cr6.eq) goto loc_822112F4;
	// bl 0x821601b8
	ctx.lr = 0x822112F4;
	sub_821601B8(ctx, base);
loc_822112F4:
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

__attribute__((alias("__imp__sub_82211310"))) PPC_WEAK_FUNC(sub_82211310);
PPC_FUNC_IMPL(__imp__sub_82211310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82211318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,176(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// lwz r29,172(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221135c
	if (ctx.cr6.eq) goto loc_8221135C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822113bc
	if (!ctx.cr6.eq) goto loc_822113BC;
loc_8221135C:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221139c
	if (ctx.cr6.eq) goto loc_8221139C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,194(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 194);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221139c
	if (!ctx.cr6.eq) goto loc_8221139C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822113bc
	if (!ctx.cr6.eq) goto loc_822113BC;
loc_8221139C:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822113b4
	if (!ctx.cr6.eq) goto loc_822113B4;
	// clrldi r11,r30,63
	ctx.r11.u64 = ctx.r30.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822113bc
	if (ctx.cr6.eq) goto loc_822113BC;
loc_822113B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210ec0
	ctx.lr = 0x822113BC;
	sub_82210EC0(ctx, base);
loc_822113BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822113C8"))) PPC_WEAK_FUNC(sub_822113C8);
PPC_FUNC_IMPL(__imp__sub_822113C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822113D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,176(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// lwz r29,172(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82211420
	if (ctx.cr6.eq) goto loc_82211420;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211420
	if (ctx.cr6.eq) goto loc_82211420;
loc_82211414:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82211420:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82211450
	if (ctx.cr6.eq) goto loc_82211450;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211414
	if (!ctx.cr6.eq) goto loc_82211414;
loc_82211450:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82211480
	if (ctx.cr6.eq) goto loc_82211480;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211414
	if (!ctx.cr6.eq) goto loc_82211414;
loc_82211480:
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822114b0
	if (ctx.cr6.eq) goto loc_822114B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822114A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211414
	if (!ctx.cr6.eq) goto loc_82211414;
loc_822114B0:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211518
	if (ctx.cr6.eq) goto loc_82211518;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822114f0
	if (!ctx.cr6.eq) goto loc_822114F0;
	// lbz r10,202(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 202);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822114f0
	if (!ctx.cr6.eq) goto loc_822114F0;
	// lfs f13,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822114f4
	if (!ctx.cr6.gt) goto loc_822114F4;
loc_822114F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822114F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211518
	if (!ctx.cr6.eq) goto loc_82211518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210ec0
	ctx.lr = 0x82211508;
	sub_82210EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221151c
	if (!ctx.cr6.eq) goto loc_8221151C;
loc_82211518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221151C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211528"))) PPC_WEAK_FUNC(sub_82211528);
PPC_FUNC_IMPL(__imp__sub_82211528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x822113c8
	ctx.lr = 0x82211540;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211564
	if (ctx.cr6.eq) goto loc_82211564;
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
loc_82211564:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822115a0
	if (!ctx.cr6.eq) goto loc_822115A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822115a4
	if (!ctx.cr6.eq) goto loc_822115A4;
loc_822115A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822115A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822115B8"))) PPC_WEAK_FUNC(sub_822115B8);
PPC_FUNC_IMPL(__imp__sub_822115B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x822115D0;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22680
	ctx.r11.s64 = ctx.r11.s64 + -22680;
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

extern void RemapLightDash(PPCRegister& r3, PPCRegister& r11);

__attribute__((alias("__imp__sub_822115F8"))) PPC_WEAK_FUNC(sub_822115F8);
PPC_FUNC_IMPL(__imp__sub_822115F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,176(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// bl 0x82210b50
	ctx.lr = 0x8221161C;
	sub_82210B50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211634
	if (!ctx.cr6.eq) goto loc_82211634;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82211634:
	// bl 0x82208f48
	ctx.lr = 0x82211638;
	sub_82208F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211528
	ctx.lr = 0x82211640;
	sub_82211528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211654
	if (ctx.cr6.eq) goto loc_82211654;
loc_8221164C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822116d8
	goto loc_822116D8;
loc_82211654:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221165C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	RemapLightDash(ctx.r3, ctx.r11);
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211698
	if (ctx.cr6.eq) goto loc_82211698;
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82211698
	if (ctx.cr6.eq) goto loc_82211698;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221168C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221164c
	if (!ctx.cr6.eq) goto loc_8221164C;
loc_82211698:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x822116A0;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822116d4
	if (ctx.cr6.eq) goto loc_822116D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822116C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822116d8
	if (!ctx.cr6.eq) goto loc_822116D8;
loc_822116D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822116D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822116F0"))) PPC_WEAK_FUNC(sub_822116F0);
PPC_FUNC_IMPL(__imp__sub_822116F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82211708;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22632
	ctx.r11.s64 = ctx.r11.s64 + -22632;
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

__attribute__((alias("__imp__sub_82211730"))) PPC_WEAK_FUNC(sub_82211730);
PPC_FUNC_IMPL(__imp__sub_82211730) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82211774
	if (!ctx.cr6.lt) goto loc_82211774;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82211774
	if (!ctx.cr6.gt) goto loc_82211774;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82211774:
	// lfs f0,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82211788
	if (!ctx.cr6.lt) goto loc_82211788;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82211788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822113c8
	ctx.lr = 0x82211790;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822117a4
	if (ctx.cr6.eq) goto loc_822117A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822117f0
	goto loc_822117F0;
loc_822117A4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822117ec
	if (ctx.cr6.eq) goto loc_822117EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822117DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822117f0
	if (!ctx.cr6.eq) goto loc_822117F0;
loc_822117EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822117F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211808"))) PPC_WEAK_FUNC(sub_82211808);
PPC_FUNC_IMPL(__imp__sub_82211808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82211820;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
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

__attribute__((alias("__imp__sub_82211848"))) PPC_WEAK_FUNC(sub_82211848);
PPC_FUNC_IMPL(__imp__sub_82211848) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x822113c8
	ctx.lr = 0x8221186C;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211880
	if (ctx.cr6.eq) goto loc_82211880;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822118cc
	goto loc_822118CC;
loc_82211880:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822118c8
	if (ctx.cr6.eq) goto loc_822118C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822118B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822118cc
	if (!ctx.cr6.eq) goto loc_822118CC;
loc_822118C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822118CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822118E8"))) PPC_WEAK_FUNC(sub_822118E8);
PPC_FUNC_IMPL(__imp__sub_822118E8) {
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
	// bl 0x82211278
	ctx.lr = 0x82211900;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211938"))) PPC_WEAK_FUNC(sub_82211938);
PPC_FUNC_IMPL(__imp__sub_82211938) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,172(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x82208f60
	ctx.lr = 0x82211964;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221199c
	if (ctx.cr6.eq) goto loc_8221199C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221199c
	if (ctx.cr6.eq) goto loc_8221199C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82211a54
	goto loc_82211A54;
loc_8221199C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822119d8
	if (ctx.cr6.lt) goto loc_822119D8;
	// beq cr6,0x822119f8
	if (ctx.cr6.eq) goto loc_822119F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82211a3c
	if (!ctx.cr6.lt) goto loc_82211A3C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x822119BC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822119f8
	if (!ctx.cr6.eq) goto loc_822119F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82210c18
	ctx.lr = 0x822119D4;
	sub_82210C18(ctx, base);
	// b 0x822119f8
	goto loc_822119F8;
loc_822119D8:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822119f8
	if (ctx.cr6.eq) goto loc_822119F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x822119F8;
	sub_82208F48(ctx, base);
loc_822119F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82211a1c
	if (ctx.cr6.gt) goto loc_82211A1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x82211A1C;
	sub_82208F48(ctx, base);
loc_82211A1C:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211a3c
	if (ctx.cr6.eq) goto loc_82211A3C;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x82211A3C;
	sub_82208F48(ctx, base);
loc_82211A3C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82211730
	ctx.lr = 0x82211A54;
	sub_82211730(ctx, base);
loc_82211A54:
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

__attribute__((alias("__imp__sub_82211A70"))) PPC_WEAK_FUNC(sub_82211A70);
PPC_FUNC_IMPL(__imp__sub_82211A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x822113c8
	ctx.lr = 0x82211A88;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211aac
	if (ctx.cr6.eq) goto loc_82211AAC;
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
loc_82211AAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211ae8
	if (ctx.cr6.eq) goto loc_82211AE8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211aec
	if (!ctx.cr6.eq) goto loc_82211AEC;
loc_82211AE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82211AEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211B00"))) PPC_WEAK_FUNC(sub_82211B00);
PPC_FUNC_IMPL(__imp__sub_82211B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82211B18;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22488
	ctx.r11.s64 = ctx.r11.s64 + -22488;
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

__attribute__((alias("__imp__sub_82211B40"))) PPC_WEAK_FUNC(sub_82211B40);
PPC_FUNC_IMPL(__imp__sub_82211B40) {
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
	// bl 0x82211278
	ctx.lr = 0x82211B58;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-22440
	ctx.r11.s64 = ctx.r11.s64 + -22440;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211B90"))) PPC_WEAK_FUNC(sub_82211B90);
PPC_FUNC_IMPL(__imp__sub_82211B90) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82211bdc
	if (!ctx.cr6.lt) goto loc_82211BDC;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82211bdc
	if (!ctx.cr6.gt) goto loc_82211BDC;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82211BDC:
	// lfs f0,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82211bf0
	if (!ctx.cr6.lt) goto loc_82211BF0;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82211BF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82211c18
	if (!ctx.cr6.eq) goto loc_82211C18;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211c18
	if (ctx.cr6.eq) goto loc_82211C18;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82208f48
	ctx.lr = 0x82211C18;
	sub_82208F48(ctx, base);
loc_82211C18:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211c58
	if (ctx.cr6.eq) goto loc_82211C58;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82211c58
	if (ctx.cr6.eq) goto loc_82211C58;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82211C58;
	sub_82208F48(ctx, base);
loc_82211C58:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82211cdc
	if (ctx.cr6.gt) goto loc_82211CDC;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,7292
	ctx.r12.s64 = ctx.r12.s64 + 7292;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82211C90;
	case 1:
		goto loc_82211CA4;
	case 2:
		goto loc_82211D1C;
	case 3:
		goto loc_82211CDC;
	case 4:
		goto loc_82211D40;
	default:
		__builtin_unreachable();
	}
	// lwz r17,7312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7312);
	// lwz r17,7332(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7332);
	// lwz r17,7452(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7452);
	// lwz r17,7388(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7388);
	// lwz r17,7488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7488);
loc_82211C90:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211ca4
	if (ctx.cr6.eq) goto loc_82211CA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82211CA4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82211cc0
	if (ctx.cr6.gt) goto loc_82211CC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82211CC0:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211cdc
	if (ctx.cr6.eq) goto loc_82211CDC;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x82211CDC;
	sub_82208F48(ctx, base);
loc_82211CDC:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x822113c8
	ctx.lr = 0x82211CF0;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82211D00:
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
loc_82211D1C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82211D24;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211ca4
	if (!ctx.cr6.eq) goto loc_82211CA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82210c18
	ctx.lr = 0x82211D3C;
	sub_82210C18(ctx, base);
	// b 0x82211ca4
	goto loc_82211CA4;
loc_82211D40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211cdc
	if (ctx.cr6.eq) goto loc_82211CDC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211cdc
	if (ctx.cr6.eq) goto loc_82211CDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82211d00
	goto loc_82211D00;
}

__attribute__((alias("__imp__sub_82211D80"))) PPC_WEAK_FUNC(sub_82211D80);
PPC_FUNC_IMPL(__imp__sub_82211D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82211D98;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22392
	ctx.r11.s64 = ctx.r11.s64 + -22392;
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

__attribute__((alias("__imp__sub_82211DC0"))) PPC_WEAK_FUNC(sub_82211DC0);
PPC_FUNC_IMPL(__imp__sub_82211DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x822113c8
	ctx.lr = 0x82211DE4;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211df8
	if (ctx.cr6.eq) goto loc_82211DF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82211e48
	goto loc_82211E48;
loc_82211DF8:
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211e44
	if (!ctx.cr6.eq) goto loc_82211E44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x82211e2c
	if (!ctx.cr6.eq) goto loc_82211E2C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82211E2C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211e48
	if (!ctx.cr6.eq) goto loc_82211E48;
loc_82211E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82211E48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211E60"))) PPC_WEAK_FUNC(sub_82211E60);
PPC_FUNC_IMPL(__imp__sub_82211E60) {
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
	// bl 0x82211278
	ctx.lr = 0x82211E78;
	sub_82211278(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-22340
	ctx.r11.s64 = ctx.r11.s64 + -22340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// lfs f12,-22348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22348);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211EE0"))) PPC_WEAK_FUNC(sub_82211EE0);
PPC_FUNC_IMPL(__imp__sub_82211EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82211EE8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82211f24
	if (!ctx.cr6.eq) goto loc_82211F24;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211f24
	if (ctx.cr6.eq) goto loc_82211F24;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82208f48
	ctx.lr = 0x82211F24;
	sub_82208F48(ctx, base);
loc_82211F24:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221209c
	if (ctx.cr6.eq) goto loc_8221209C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82211fa4
	if (ctx.cr6.eq) goto loc_82211FA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82212208
	if (!ctx.cr6.eq) goto loc_82212208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211528
	ctx.lr = 0x82211F48;
	sub_82211528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822121e0
	if (!ctx.cr6.eq) goto loc_822121E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212208
	if (ctx.cr6.eq) goto loc_82212208;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x82211f8c
	if (!ctx.cr6.eq) goto loc_82211F8C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82211F8C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82211FA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82211fc4
	if (!ctx.cr6.gt) goto loc_82211FC4;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82211fd4
	goto loc_82211FD4;
loc_82211FC4:
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82211fe0
	if (!ctx.cr6.gt) goto loc_82211FE0;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82211FD4:
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82211FE0;
	sub_82208F48(ctx, base);
loc_82211FE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r30,176(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82212000
	if (ctx.cr6.eq) goto loc_82212000;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822105c0
	ctx.lr = 0x82212000;
	sub_822105C0(ctx, base);
loc_82212000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822113c8
	ctx.lr = 0x82212008;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822121e0
	if (!ctx.cr6.eq) goto loc_822121E0;
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82212208
	if (ctx.cr6.eq) goto loc_82212208;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82212080
	if (ctx.cr6.eq) goto loc_82212080;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// stb r29,193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 193, ctx.r29.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82212058;
	sub_82208F48(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82212080:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8221209C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x822120A4;
	sub_82208F60(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x822120cc
	if (ctx.cr6.lt) goto loc_822120CC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_822120CC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82212100
	if (!ctx.cr6.eq) goto loc_82212100;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822120F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822121e0
	if (!ctx.cr6.eq) goto loc_822121E0;
loc_82212100:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82212120
	if (ctx.cr6.lt) goto loc_82212120;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82212120:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x82208f60
	ctx.lr = 0x82212130;
	sub_82208F60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822121b8
	if (ctx.cr6.eq) goto loc_822121B8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822121b8
	if (!ctx.cr6.eq) goto loc_822121B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822121b8
	if (ctx.cr6.eq) goto loc_822121B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208fd0
	ctx.lr = 0x8221215C;
	sub_82208FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x82208f48
	ctx.lr = 0x822121A4;
	sub_82208F48(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x822121B0;
	sub_82208F48(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822121B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822121f4
	if (ctx.cr6.eq) goto loc_822121F4;
	// bl 0x82211528
	ctx.lr = 0x822121D4;
	sub_82211528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212208
	if (ctx.cr6.eq) goto loc_82212208;
loc_822121E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_822121F4:
	// bl 0x822113c8
	ctx.lr = 0x822121F8;
	sub_822113C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221220c
	if (!ctx.cr6.eq) goto loc_8221220C;
loc_82212208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221220C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212220"))) PPC_WEAK_FUNC(sub_82212220);
PPC_FUNC_IMPL(__imp__sub_82212220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82212238;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22292
	ctx.r11.s64 = ctx.r11.s64 + -22292;
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

__attribute__((alias("__imp__sub_82212260"))) PPC_WEAK_FUNC(sub_82212260);
PPC_FUNC_IMPL(__imp__sub_82212260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82212278;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22244
	ctx.r11.s64 = ctx.r11.s64 + -22244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822122A8"))) PPC_WEAK_FUNC(sub_822122A8);
PPC_FUNC_IMPL(__imp__sub_822122A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822122B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x822122C8;
	sub_82208F60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// ld r28,176(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// stb r10,199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221231c
	if (ctx.cr6.lt) goto loc_8221231C;
	// bne cr6,0x8221236c
	if (!ctx.cr6.eq) goto loc_8221236C;
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221236c
	if (ctx.cr6.eq) goto loc_8221236C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221230C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// b 0x8221236c
	goto loc_8221236C;
loc_8221231C:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212344
	if (ctx.cr6.eq) goto loc_82212344;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221233C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_82212344:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221236c
	if (ctx.cr6.eq) goto loc_8221236C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x82212364;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_8221236C:
	// rlwinm r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822123b0
	if (ctx.cr6.eq) goto loc_822123B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221238C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822123A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_822123B0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82211730
	ctx.lr = 0x822123B8;
	sub_82211730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822123dc
	if (!ctx.cr6.eq) goto loc_822123DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82210c90
	ctx.lr = 0x822123DC;
	sub_82210C90(ctx, base);
loc_822123DC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822123F0"))) PPC_WEAK_FUNC(sub_822123F0);
PPC_FUNC_IMPL(__imp__sub_822123F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82212408;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22196
	ctx.r11.s64 = ctx.r11.s64 + -22196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82212438"))) PPC_WEAK_FUNC(sub_82212438);
PPC_FUNC_IMPL(__imp__sub_82212438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82212440;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x82212458;
	sub_82208F60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// ld r28,176(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// stb r10,199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822124ac
	if (ctx.cr6.lt) goto loc_822124AC;
	// bne cr6,0x822124fc
	if (!ctx.cr6.eq) goto loc_822124FC;
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822124fc
	if (ctx.cr6.eq) goto loc_822124FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221249C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// b 0x822124fc
	goto loc_822124FC;
loc_822124AC:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822124d4
	if (ctx.cr6.eq) goto loc_822124D4;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82208f48
	ctx.lr = 0x822124CC;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_822124D4:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822124fc
	if (ctx.cr6.eq) goto loc_822124FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x822124F4;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_822124FC:
	// rlwinm r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82212540
	if (ctx.cr6.eq) goto loc_82212540;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82212540:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82211730
	ctx.lr = 0x82212548;
	sub_82211730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221256c
	if (!ctx.cr6.eq) goto loc_8221256C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82210c90
	ctx.lr = 0x8221256C;
	sub_82210C90(ctx, base);
loc_8221256C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212580"))) PPC_WEAK_FUNC(sub_82212580);
PPC_FUNC_IMPL(__imp__sub_82212580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82211278
	ctx.lr = 0x82212598;
	sub_82211278(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22148
	ctx.r11.s64 = ctx.r11.s64 + -22148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822125C8"))) PPC_WEAK_FUNC(sub_822125C8);
PPC_FUNC_IMPL(__imp__sub_822125C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822125D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x822125E8;
	sub_82208F60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// ld r28,176(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// stb r10,199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221263c
	if (ctx.cr6.lt) goto loc_8221263C;
	// bne cr6,0x8221268c
	if (!ctx.cr6.eq) goto loc_8221268C;
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221268c
	if (ctx.cr6.eq) goto loc_8221268C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221262C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// b 0x8221268c
	goto loc_8221268C;
loc_8221263C:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212664
	if (ctx.cr6.eq) goto loc_82212664;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82208f48
	ctx.lr = 0x8221265C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_82212664:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221268c
	if (ctx.cr6.eq) goto loc_8221268C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82208f48
	ctx.lr = 0x82212684;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r29.u8);
loc_8221268C:
	// rlwinm r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822126d0
	if (ctx.cr6.eq) goto loc_822126D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822126AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822126C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_822126D0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82211730
	ctx.lr = 0x822126D8;
	sub_82211730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822126fc
	if (!ctx.cr6.eq) goto loc_822126FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82210c90
	ctx.lr = 0x822126FC;
	sub_82210C90(ctx, base);
loc_822126FC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212710"))) PPC_WEAK_FUNC(sub_82212710);
PPC_FUNC_IMPL(__imp__sub_82212710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82212718;
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
	// beq cr6,0x82212840
	if (ctx.cr6.eq) goto loc_82212840;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212840
	if (ctx.cr6.eq) goto loc_82212840;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82212758
	if (ctx.cr6.lt) goto loc_82212758;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221275c
	goto loc_8221275C;
loc_82212758:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8221275C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82212840
	if (ctx.cr6.eq) goto loc_82212840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32084
	ctx.r10.s64 = ctx.r11.s64 + 32084;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82212770:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82212794
	if (ctx.cr6.eq) goto loc_82212794;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82212770
	if (ctx.cr6.eq) goto loc_82212770;
loc_82212794:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822127d4
	if (!ctx.cr6.eq) goto loc_822127D4;
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
	// bl 0x8220e418
	ctx.lr = 0x822127B8;
	sub_8220E418(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// bl 0x8221f3c8
	ctx.lr = 0x822127C4;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822127d4
	if (ctx.cr6.eq) goto loc_822127D4;
	// bl 0x821601b8
	ctx.lr = 0x822127D4;
	sub_821601B8(ctx, base);
loc_822127D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31120
	ctx.r10.s64 = ctx.r11.s64 + -31120;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822127E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82212804
	if (ctx.cr6.eq) goto loc_82212804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822127e0
	if (ctx.cr6.eq) goto loc_822127E0;
loc_82212804:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82212840
	if (!ctx.cr6.eq) goto loc_82212840;
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
	// bl 0x821c0328
	ctx.lr = 0x82212824;
	sub_821C0328(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,184
	ctx.r3.s64 = ctx.r28.s64 + 184;
	// bl 0x8221f3c8
	ctx.lr = 0x82212830;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212840
	if (ctx.cr6.eq) goto loc_82212840;
	// bl 0x821601b8
	ctx.lr = 0x82212840;
	sub_821601B8(ctx, base);
loc_82212840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212848"))) PPC_WEAK_FUNC(sub_82212848);
PPC_FUNC_IMPL(__imp__sub_82212848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82212850;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
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
	// addi r4,r11,-22916
	ctx.r4.s64 = ctx.r11.s64 + -22916;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212888;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822128A0;
	sub_821EA350(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stfs f1,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 196, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822128b8
	if (ctx.cr6.lt) goto loc_822128B8;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x822128B8;
	sub_82186190(ctx, base);
loc_822128B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r4,r11,-22964
	ctx.r4.s64 = ctx.r11.s64 + -22964;
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822128E4;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822128F4;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221290c
	if (ctx.cr6.lt) goto loc_8221290C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8221290C;
	sub_82186190(ctx, base);
loc_8221290C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212938;
	sub_82161E08(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212948;
	sub_821EA350(ctx, base);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stfs f1,204(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 204, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212960
	if (ctx.cr6.lt) goto loc_82212960;
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x82186190
	ctx.lr = 0x82212960;
	sub_82186190(ctx, base);
loc_82212960:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221298C;
	sub_82161E08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221299C;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,208(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 208, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822129b4
	if (ctx.cr6.lt) goto loc_822129B4;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x822129B4;
	sub_82186190(ctx, base);
loc_822129B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r11,-22880
	ctx.r4.s64 = ctx.r11.s64 + -22880;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822129E0;
	sub_82161E08(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822129F0;
	sub_821EA350(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stfs f1,212(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 212, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212a08
	if (ctx.cr6.lt) goto loc_82212A08;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82186190
	ctx.lr = 0x82212A08;
	sub_82186190(ctx, base);
loc_82212A08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r4,r11,-22900
	ctx.r4.s64 = ctx.r11.s64 + -22900;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212A34;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212A44;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212a5c
	if (ctx.cr6.lt) goto loc_82212A5C;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x82212A5C;
	sub_82186190(ctx, base);
loc_82212A5C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r4,r11,-23128
	ctx.r4.s64 = ctx.r11.s64 + -23128;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212A88;
	sub_82161E08(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212A98;
	sub_821EA350(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// stfs f1,228(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 228, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212ab0
	if (ctx.cr6.lt) goto loc_82212AB0;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82186190
	ctx.lr = 0x82212AB0;
	sub_82186190(ctx, base);
loc_82212AB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// addi r4,r11,-23116
	ctx.r4.s64 = ctx.r11.s64 + -23116;
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212ADC;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212AEC;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,224(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212b04
	if (ctx.cr6.lt) goto loc_82212B04;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82212B04;
	sub_82186190(ctx, base);
loc_82212B04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-23104
	ctx.r4.s64 = ctx.r11.s64 + -23104;
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
	ctx.lr = 0x82212B30;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212B40;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,236(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 236, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212b58
	if (ctx.cr6.lt) goto loc_82212B58;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82212B58;
	sub_82186190(ctx, base);
loc_82212B58:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-23032
	ctx.r4.s64 = ctx.r11.s64 + -23032;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212B84;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212B94;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,240(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 240, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212bac
	if (ctx.cr6.lt) goto loc_82212BAC;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x82212BAC;
	sub_82186190(ctx, base);
loc_82212BAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r11,-23048
	ctx.r4.s64 = ctx.r11.s64 + -23048;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212BD8;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212BE8;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,232(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 232, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212c00
	if (ctx.cr6.lt) goto loc_82212C00;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x82212C00;
	sub_82186190(ctx, base);
loc_82212C00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r11,-23372
	ctx.r4.s64 = ctx.r11.s64 + -23372;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212C2C;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212C3C;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,244(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 244, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212c54
	if (ctx.cr6.lt) goto loc_82212C54;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x82212C54;
	sub_82186190(ctx, base);
loc_82212C54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r4,r11,-30704
	ctx.r4.s64 = ctx.r11.s64 + -30704;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212C80;
	sub_82161E08(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212C90;
	sub_821EA350(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// stfs f1,248(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 248, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212ca8
	if (ctx.cr6.lt) goto loc_82212CA8;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82186190
	ctx.lr = 0x82212CA8;
	sub_82186190(ctx, base);
loc_82212CA8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212CD4;
	sub_82161E08(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212CE4;
	sub_821EA350(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stfs f1,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212cfc
	if (ctx.cr6.lt) goto loc_82212CFC;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82186190
	ctx.lr = 0x82212CFC;
	sub_82186190(ctx, base);
loc_82212CFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// addi r4,r11,-23148
	ctx.r4.s64 = ctx.r11.s64 + -23148;
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212D28;
	sub_82161E08(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212D38;
	sub_821EA350(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// stfs f1,220(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 220, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212d50
	if (ctx.cr6.lt) goto loc_82212D50;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82186190
	ctx.lr = 0x82212D50;
	sub_82186190(ctx, base);
loc_82212D50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// addi r4,r11,-22104
	ctx.r4.s64 = ctx.r11.s64 + -22104;
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82212D7C;
	sub_82161E08(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82212D8C;
	sub_821EA350(ctx, base);
	// lwz r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// stfs f1,256(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 256, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212da4
	if (ctx.cr6.lt) goto loc_82212DA4;
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// bl 0x82186190
	ctx.lr = 0x82212DA4;
	sub_82186190(ctx, base);
loc_82212DA4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212DB0"))) PPC_WEAK_FUNC(sub_82212DB0);
PPC_FUNC_IMPL(__imp__sub_82212DB0) {
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
	// bl 0x8220a000
	ctx.lr = 0x82212DC8;
	sub_8220A000(ctx, base);
	// lbz r11,562(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 562);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// bne cr6,0x82212de0
	if (!ctx.cr6.eq) goto loc_82212DE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82212DE0:
	// lbz r10,563(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 563);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bne cr6,0x82212e00
	if (!ctx.cr6.eq) goto loc_82212E00;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82212E00:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 560);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r8,561(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 561);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lbz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 564);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stb r9,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r9.u8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// stb r9,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r9.u8);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212E68"))) PPC_WEAK_FUNC(sub_82212E68);
PPC_FUNC_IMPL(__imp__sub_82212E68) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x82212E80;
	sub_8220E4B0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-21948
	ctx.r11.s64 = ctx.r11.s64 + -21948;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21956
	ctx.r10.s64 = ctx.r10.s64 + -21956;
	// addi r9,r9,-22056
	ctx.r9.s64 = ctx.r9.s64 + -22056;
	// addi r8,r8,-22012
	ctx.r8.s64 = ctx.r8.s64 + -22012;
	// addi r7,r7,-22044
	ctx.r7.s64 = ctx.r7.s64 + -22044;
	// addi r6,r6,-22068
	ctx.r6.s64 = ctx.r6.s64 + -22068;
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// addi r5,r5,-22080
	ctx.r5.s64 = ctx.r5.s64 + -22080;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,561(r31)
	PPC_STORE_U8(ctx.r31.u32 + 561, ctx.r11.u8);
	// stb r11,562(r31)
	PPC_STORE_U8(ctx.r31.u32 + 562, ctx.r11.u8);
	// stb r11,563(r31)
	PPC_STORE_U8(ctx.r31.u32 + 563, ctx.r11.u8);
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212F10"))) PPC_WEAK_FUNC(sub_82212F10);
PPC_FUNC_IMPL(__imp__sub_82212F10) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x82212F30;
	sub_8220F5C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// li r11,15
	ctx.r11.s64 = 15;
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
	ctx.lr = 0x82212F58;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x82212F6C;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82212f84
	if (ctx.cr6.lt) goto loc_82212F84;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82212F84;
	sub_82186190(ctx, base);
loc_82212F84:
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

__attribute__((alias("__imp__sub_82212FA0"))) PPC_WEAK_FUNC(sub_82212FA0);
PPC_FUNC_IMPL(__imp__sub_82212FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,568(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,592(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// stb r11,580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 580, ctx.r11.u8);
	// stb r10,582(r3)
	PPC_STORE_U8(ctx.r3.u32 + 582, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212FD0"))) PPC_WEAK_FUNC(sub_82212FD0);
PPC_FUNC_IMPL(__imp__sub_82212FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82212ff0
	if (!ctx.cr6.eq) goto loc_82212FF0;
	// lfs f0,572(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,596(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 596, temp.u32);
loc_82212FF0:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,581(r3)
	PPC_STORE_U8(ctx.r3.u32 + 581, ctx.r10.u8);
	// stw r11,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213008"))) PPC_WEAK_FUNC(sub_82213008);
PPC_FUNC_IMPL(__imp__sub_82213008) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,583(r3)
	PPC_STORE_U8(ctx.r3.u32 + 583, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213018"))) PPC_WEAK_FUNC(sub_82213018);
PPC_FUNC_IMPL(__imp__sub_82213018) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82208f60
	ctx.lr = 0x8221303C;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82213060
	if (ctx.cr6.eq) goto loc_82213060;
	// lfs f13,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// b 0x82213064
	goto loc_82213064;
loc_82213060:
	// stfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
loc_82213064:
	// lfs f13,592(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82213084
	if (ctx.cr6.lt) goto loc_82213084;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82213084:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f13,592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// lfs f13,596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822130ac
	if (ctx.cr6.lt) goto loc_822130AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822130AC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822130c4
	if (!ctx.cr6.eq) goto loc_822130C4;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_822130C4:
	// lbz r11,582(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 582);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822130f0
	if (ctx.cr6.eq) goto loc_822130F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f60
	ctx.lr = 0x822130DC;
	sub_82208F60(ctx, base);
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213108
	if (!ctx.cr6.eq) goto loc_82213108;
	// stb r30,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r30.u8);
	// b 0x82213108
	goto loc_82213108;
loc_822130F0:
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82213108
	if (ctx.cr6.gt) goto loc_82213108;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r11.u8);
loc_82213108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220a000
	ctx.lr = 0x82213114;
	sub_8220A000(ctx, base);
	// lbz r10,583(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 583);
	// lbz r8,581(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 581);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lbz r9,582(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 582);
	// lbz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 580);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// rlwimi r10,r8,0,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// subfe r8,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// andi. r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// bne cr6,0x82213178
	if (!ctx.cr6.eq) goto loc_82213178;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82213178:
	// lbz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bne cr6,0x82213198
	if (!ctx.cr6.eq) goto loc_82213198;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82213198:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,585(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 585);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822131B4:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,586(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x822131d0
	if (!ctx.cr6.eq) goto loc_822131D0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822131D0:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bne cr6,0x822131e8
	if (!ctx.cr6.eq) goto loc_822131E8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822131E8:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r30,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r30.u8);
	// stb r30,581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 581, ctx.r30.u8);
	// stb r30,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r30.u8);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82213218"))) PPC_WEAK_FUNC(sub_82213218);
PPC_FUNC_IMPL(__imp__sub_82213218) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,560(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213248
	if (ctx.cr6.eq) goto loc_82213248;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213248
	if (ctx.cr6.eq) goto loc_82213248;
	// lbz r11,582(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 582);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213248
	if (ctx.cr6.eq) goto loc_82213248;
	// b 0x82246cd0
	sub_82246CD0(ctx, base);
	return;
loc_82213248:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213250"))) PPC_WEAK_FUNC(sub_82213250);
PPC_FUNC_IMPL(__imp__sub_82213250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,11392
	ctx.r6.s64 = ctx.r11.s64 + 11392;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221328C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x822132a4
	if (ctx.cr6.eq) goto loc_822132A4;
	// bl 0x82160140
	ctx.lr = 0x822132A4;
	sub_82160140(ctx, base);
loc_822132A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822132c8
	if (!ctx.cr6.eq) goto loc_822132C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822132c0
	if (ctx.cr6.eq) goto loc_822132C0;
	// bl 0x821601b8
	ctx.lr = 0x822132C0;
	sub_821601B8(ctx, base);
loc_822132C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822132C8:
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

__attribute__((alias("__imp__sub_822132E8"))) PPC_WEAK_FUNC(sub_822132E8);
PPC_FUNC_IMPL(__imp__sub_822132E8) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x82213300;
	sub_8220E4B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-21796
	ctx.r11.s64 = ctx.r11.s64 + -21796;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-21904
	ctx.r10.s64 = ctx.r10.s64 + -21904;
	// addi r9,r9,-21808
	ctx.r9.s64 = ctx.r9.s64 + -21808;
	// addi r8,r8,-21864
	ctx.r8.s64 = ctx.r8.s64 + -21864;
	// addi r7,r7,-21896
	ctx.r7.s64 = ctx.r7.s64 + -21896;
	// addi r6,r6,-21916
	ctx.r6.s64 = ctx.r6.s64 + -21916;
	// addi r5,r5,-21928
	ctx.r5.s64 = ctx.r5.s64 + -21928;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stb r11,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r11.u8);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stb r11,581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 581, ctx.r11.u8);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stb r11,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r11.u8);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stb r11,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r11.u8);
	// stb r11,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r11.u8);
	// stb r11,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r11.u8);
	// stb r11,586(r31)
	PPC_STORE_U8(ctx.r31.u32 + 586, ctx.r11.u8);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stb r11,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822133B8"))) PPC_WEAK_FUNC(sub_822133B8);
PPC_FUNC_IMPL(__imp__sub_822133B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x822133d8
	sub_822133D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822133C0"))) PPC_WEAK_FUNC(sub_822133C0);
PPC_FUNC_IMPL(__imp__sub_822133C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-148
	ctx.r3.s64 = ctx.r3.s64 + -148;
	// b 0x822133d8
	sub_822133D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822133C8"))) PPC_WEAK_FUNC(sub_822133C8);
PPC_FUNC_IMPL(__imp__sub_822133C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x822133d8
	sub_822133D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822133D0"))) PPC_WEAK_FUNC(sub_822133D0);
PPC_FUNC_IMPL(__imp__sub_822133D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x822133d8
	sub_822133D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822133D8"))) PPC_WEAK_FUNC(sub_822133D8);
PPC_FUNC_IMPL(__imp__sub_822133D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213404
	if (ctx.cr6.eq) goto loc_82213404;
	// bl 0x821601b8
	ctx.lr = 0x82213404;
	sub_821601B8(ctx, base);
loc_82213404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206e70
	ctx.lr = 0x8221340C;
	sub_82206E70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213424
	if (ctx.cr6.eq) goto loc_82213424;
	// bl 0x82186190
	ctx.lr = 0x82213420;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213440"))) PPC_WEAK_FUNC(sub_82213440);
PPC_FUNC_IMPL(__imp__sub_82213440) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8220f330
	ctx.lr = 0x82213460;
	sub_8220F330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8221347c
	if (ctx.cr6.lt) goto loc_8221347C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82213480
	goto loc_82213480;
loc_8221347C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82213480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822134f4
	if (ctx.cr6.eq) goto loc_822134F4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-21780
	ctx.r10.s64 = ctx.r10.s64 + -21780;
loc_82213490:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822134b4
	if (ctx.cr6.eq) goto loc_822134B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82213490
	if (ctx.cr6.eq) goto loc_82213490;
loc_822134B4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822134f4
	if (!ctx.cr6.eq) goto loc_822134F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82213250
	ctx.lr = 0x822134D8;
	sub_82213250(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,524
	ctx.r3.s64 = ctx.r30.s64 + 524;
	// bl 0x8221f3c8
	ctx.lr = 0x822134E4;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822134f4
	if (ctx.cr6.eq) goto loc_822134F4;
	// bl 0x821601b8
	ctx.lr = 0x822134F4;
	sub_821601B8(ctx, base);
loc_822134F4:
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

__attribute__((alias("__imp__sub_82213510"))) PPC_WEAK_FUNC(sub_82213510);
PPC_FUNC_IMPL(__imp__sub_82213510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82213518;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x82213528;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-21728
	ctx.r4.s64 = ctx.r11.s64 + -21728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82213550;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x82213564;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,536(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 536, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221357c
	if (ctx.cr6.lt) goto loc_8221357C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8221357C;
	sub_82186190(ctx, base);
loc_8221357C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-21748
	ctx.r4.s64 = ctx.r11.s64 + -21748;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822135A8;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x822135BC;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,540(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 540, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822135d4
	if (ctx.cr6.lt) goto loc_822135D4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x822135D4;
	sub_82186190(ctx, base);
loc_822135D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-21764
	ctx.r4.s64 = ctx.r11.s64 + -21764;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82213600;
	sub_82161E08(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea408
	ctx.lr = 0x82213610;
	sub_821EA408(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r3,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r3.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82213628
	if (ctx.cr6.lt) goto loc_82213628;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82213628;
	sub_82186190(ctx, base);
loc_82213628:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213630"))) PPC_WEAK_FUNC(sub_82213630);
PPC_FUNC_IMPL(__imp__sub_82213630) {
	PPC_FUNC_PROLOGUE();
	// b 0x82219820
	sub_82219820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213638"))) PPC_WEAK_FUNC(sub_82213638);
PPC_FUNC_IMPL(__imp__sub_82213638) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213658
	if (ctx.cr6.eq) goto loc_82213658;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213658
	if (ctx.cr6.eq) goto loc_82213658;
	// b 0x8223d888
	sub_8223D888(ctx, base);
	return;
loc_82213658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213660"))) PPC_WEAK_FUNC(sub_82213660);
PPC_FUNC_IMPL(__imp__sub_82213660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,11436
	ctx.r6.s64 = ctx.r11.s64 + 11436;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,30176
	ctx.r5.s64 = ctx.r11.s64 + 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8221369C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x822136b4
	if (ctx.cr6.eq) goto loc_822136B4;
	// bl 0x82160140
	ctx.lr = 0x822136B4;
	sub_82160140(ctx, base);
loc_822136B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822136d8
	if (!ctx.cr6.eq) goto loc_822136D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822136d0
	if (ctx.cr6.eq) goto loc_822136D0;
	// bl 0x821601b8
	ctx.lr = 0x822136D0;
	sub_821601B8(ctx, base);
loc_822136D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822136D8:
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

__attribute__((alias("__imp__sub_822136F8"))) PPC_WEAK_FUNC(sub_822136F8);
PPC_FUNC_IMPL(__imp__sub_822136F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82213700;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213768
	if (ctx.cr6.eq) goto loc_82213768;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213754
	if (ctx.cr6.eq) goto loc_82213754;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213754
	if (ctx.cr6.eq) goto loc_82213754;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223d888
	ctx.lr = 0x82213750;
	sub_8223D888(ctx, base);
	// b 0x82213758
	goto loc_82213758;
loc_82213754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213758:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213768
	if (ctx.cr6.eq) goto loc_82213768;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82213768:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221377c
	if (!ctx.cr6.eq) goto loc_8221377C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8221377C:
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213800
	if (ctx.cr6.eq) goto loc_82213800;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213800
	if (ctx.cr6.eq) goto loc_82213800;
	// lbz r10,691(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 691);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,688(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 688);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x822137d4
	if (ctx.cr6.eq) goto loc_822137D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r29,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r29.u8);
	// beq cr6,0x822137d0
	if (ctx.cr6.eq) goto loc_822137D0;
	// bl 0x8223da00
	ctx.lr = 0x822137CC;
	sub_8223DA00(ctx, base);
	// b 0x822137d4
	goto loc_822137D4;
loc_822137D0:
	// bl 0x8223da28
	ctx.lr = 0x822137D4;
	sub_8223DA28(ctx, base);
loc_822137D4:
	// lbz r10,689(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 689);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213800
	if (ctx.cr6.eq) goto loc_82213800;
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,689(r31)
	PPC_STORE_U8(ctx.r31.u32 + 689, ctx.r30.u8);
	// beq cr6,0x822137fc
	if (ctx.cr6.eq) goto loc_822137FC;
	// bl 0x8223d8e0
	ctx.lr = 0x822137F8;
	sub_8223D8E0(ctx, base);
	// b 0x82213800
	goto loc_82213800;
loc_822137FC:
	// bl 0x8223d900
	ctx.lr = 0x82213800;
	sub_8223D900(ctx, base);
loc_82213800:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r11.u8);
	// bl 0x82219530
	ctx.lr = 0x82213814;
	sub_82219530(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r7,r11,0,28,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// andi. r11,r7,520
	ctx.r11.u64 = ctx.r7.u64 & 520;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213860"))) PPC_WEAK_FUNC(sub_82213860);
PPC_FUNC_IMPL(__imp__sub_82213860) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82219460
	ctx.lr = 0x82213880;
	sub_82219460(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221392c
	if (ctx.cr6.eq) goto loc_8221392C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221392c
	if (ctx.cr6.eq) goto loc_8221392C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822138b4
	if (ctx.cr6.lt) goto loc_822138B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822138b8
	goto loc_822138B8;
loc_822138B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822138B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221392c
	if (ctx.cr6.eq) goto loc_8221392C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_822138C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822138ec
	if (ctx.cr6.eq) goto loc_822138EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822138c8
	if (ctx.cr6.eq) goto loc_822138C8;
loc_822138EC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8221392c
	if (!ctx.cr6.eq) goto loc_8221392C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82213660
	ctx.lr = 0x82213910;
	sub_82213660(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,656
	ctx.r3.s64 = ctx.r30.s64 + 656;
	// bl 0x8221f3c8
	ctx.lr = 0x8221391C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221392c
	if (ctx.cr6.eq) goto loc_8221392C;
	// bl 0x821601b8
	ctx.lr = 0x8221392C;
	sub_821601B8(ctx, base);
loc_8221392C:
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

__attribute__((alias("__imp__sub_82213948"))) PPC_WEAK_FUNC(sub_82213948);
PPC_FUNC_IMPL(__imp__sub_82213948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82219320
	ctx.lr = 0x82213960;
	sub_82219320(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-21576
	ctx.r11.s64 = ctx.r11.s64 + -21576;
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
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21584
	ctx.r10.s64 = ctx.r10.s64 + -21584;
	// addi r9,r9,-21596
	ctx.r9.s64 = ctx.r9.s64 + -21596;
	// addi r8,r8,-21652
	ctx.r8.s64 = ctx.r8.s64 + -21652;
	// addi r7,r7,-21684
	ctx.r7.s64 = ctx.r7.s64 + -21684;
	// addi r6,r6,-21696
	ctx.r6.s64 = ctx.r6.s64 + -21696;
	// stb r11,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r11.u8);
	// addi r5,r5,-21708
	ctx.r5.s64 = ctx.r5.s64 + -21708;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,689(r31)
	PPC_STORE_U8(ctx.r31.u32 + 689, ctx.r11.u8);
	// stb r11,690(r31)
	PPC_STORE_U8(ctx.r31.u32 + 690, ctx.r11.u8);
	// stb r11,691(r31)
	PPC_STORE_U8(ctx.r31.u32 + 691, ctx.r11.u8);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822139E8"))) PPC_WEAK_FUNC(sub_822139E8);
PPC_FUNC_IMPL(__imp__sub_822139E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x82213a08
	sub_82213A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822139F0"))) PPC_WEAK_FUNC(sub_822139F0);
PPC_FUNC_IMPL(__imp__sub_822139F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-148
	ctx.r3.s64 = ctx.r3.s64 + -148;
	// b 0x82213a08
	sub_82213A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822139F8"))) PPC_WEAK_FUNC(sub_822139F8);
PPC_FUNC_IMPL(__imp__sub_822139F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82213a08
	sub_82213A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213A00"))) PPC_WEAK_FUNC(sub_82213A00);
PPC_FUNC_IMPL(__imp__sub_82213A00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82213a08
	sub_82213A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213A08"))) PPC_WEAK_FUNC(sub_82213A08);
PPC_FUNC_IMPL(__imp__sub_82213A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213a34
	if (ctx.cr6.eq) goto loc_82213A34;
	// bl 0x821601b8
	ctx.lr = 0x82213A34;
	sub_821601B8(ctx, base);
loc_82213A34:
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213a44
	if (ctx.cr6.eq) goto loc_82213A44;
	// bl 0x821601b8
	ctx.lr = 0x82213A44;
	sub_821601B8(ctx, base);
loc_82213A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206e70
	ctx.lr = 0x82213A4C;
	sub_82206E70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213a64
	if (ctx.cr6.eq) goto loc_82213A64;
	// bl 0x82186190
	ctx.lr = 0x82213A60;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213A80"))) PPC_WEAK_FUNC(sub_82213A80);
PPC_FUNC_IMPL(__imp__sub_82213A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,560(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82213a9c
	if (ctx.cr6.gt) goto loc_82213A9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82213A9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213AA8"))) PPC_WEAK_FUNC(sub_82213AA8);
PPC_FUNC_IMPL(__imp__sub_82213AA8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82213af4
	if (!ctx.cr6.gt) goto loc_82213AF4;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82213aec
	if (ctx.cr6.lt) goto loc_82213AEC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82213AEC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
loc_82213AF4:
	// ld r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// rlwinm r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82213b0c
	if (ctx.cr6.eq) goto loc_82213B0C;
	// lfs f0,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
loc_82213B0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a000
	ctx.lr = 0x82213B14;
	sub_8220A000(ctx, base);
	// lbz r11,567(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 567);
	// lbz r9,568(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lbz r8,566(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 566);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,565(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 565);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r6,564(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 564);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
	// rlwimi r10,r9,0,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stb r11,565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 565, ctx.r11.u8);
	// stb r11,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r11.u8);
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// rlwimi r10,r9,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwimi r10,r11,0,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82213BA0"))) PPC_WEAK_FUNC(sub_82213BA0);
PPC_FUNC_IMPL(__imp__sub_82213BA0) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x82213BB8;
	sub_8220E4B0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-21420
	ctx.r11.s64 = ctx.r11.s64 + -21420;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21428
	ctx.r10.s64 = ctx.r10.s64 + -21428;
	// addi r9,r9,-21528
	ctx.r9.s64 = ctx.r9.s64 + -21528;
	// addi r8,r8,-21484
	ctx.r8.s64 = ctx.r8.s64 + -21484;
	// addi r7,r7,-21516
	ctx.r7.s64 = ctx.r7.s64 + -21516;
	// addi r6,r6,-21540
	ctx.r6.s64 = ctx.r6.s64 + -21540;
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
	// addi r5,r5,-21552
	ctx.r5.s64 = ctx.r5.s64 + -21552;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stb r11,565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 565, ctx.r11.u8);
	// stb r11,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r11.u8);
	// stb r11,567(r31)
	PPC_STORE_U8(ctx.r31.u32 + 567, ctx.r11.u8);
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C50"))) PPC_WEAK_FUNC(sub_82213C50);
PPC_FUNC_IMPL(__imp__sub_82213C50) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x82213C70;
	sub_8220F5C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-21404
	ctx.r4.s64 = ctx.r11.s64 + -21404;
	// li r11,15
	ctx.r11.s64 = 15;
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
	ctx.lr = 0x82213C98;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x82213CAC;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82213cc4
	if (ctx.cr6.lt) goto loc_82213CC4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82213CC4;
	sub_82186190(ctx, base);
loc_82213CC4:
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

__attribute__((alias("__imp__sub_82213CE0"))) PPC_WEAK_FUNC(sub_82213CE0);
PPC_FUNC_IMPL(__imp__sub_82213CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8220e778
	sub_8220E778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213CE8"))) PPC_WEAK_FUNC(sub_82213CE8);
PPC_FUNC_IMPL(__imp__sub_82213CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213D00"))) PPC_WEAK_FUNC(sub_82213D00);
PPC_FUNC_IMPL(__imp__sub_82213D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213d2c
	if (ctx.cr6.eq) goto loc_82213D2C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213d2c
	if (ctx.cr6.eq) goto loc_82213D2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82213D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213D38"))) PPC_WEAK_FUNC(sub_82213D38);
PPC_FUNC_IMPL(__imp__sub_82213D38) {
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
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213e08
	if (ctx.cr6.eq) goto loc_82213E08;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213e08
	if (ctx.cr6.eq) goto loc_82213E08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82213dd4
	if (!ctx.cr6.eq) goto loc_82213DD4;
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82213dc8
	if (ctx.cr6.eq) goto loc_82213DC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82213DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213e08
	if (ctx.cr6.eq) goto loc_82213E08;
loc_82213DD4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82213e2c
	if (ctx.cr6.lt) goto loc_82213E2C;
	// beq cr6,0x82213e24
	if (ctx.cr6.eq) goto loc_82213E24;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82213e08
	if (!ctx.cr6.lt) goto loc_82213E08;
	// li r4,15
	ctx.r4.s64 = 15;
loc_82213DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209058
	ctx.lr = 0x82213DF4;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213e08
	if (ctx.cr6.eq) goto loc_82213E08;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8223e648
	ctx.lr = 0x82213E08;
	sub_8223E648(ctx, base);
loc_82213E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82213E24:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82213dec
	goto loc_82213DEC;
loc_82213E2C:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209058
	ctx.lr = 0x82213E38;
	sub_82209058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213e08
	if (ctx.cr6.eq) goto loc_82213E08;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8223e648
	ctx.lr = 0x82213E4C;
	sub_8223E648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82213e0c
	goto loc_82213E0C;
}

__attribute__((alias("__imp__sub_82213E58"))) PPC_WEAK_FUNC(sub_82213E58);
PPC_FUNC_IMPL(__imp__sub_82213E58) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213eac
	if (ctx.cr6.eq) goto loc_82213EAC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213eac
	if (ctx.cr6.eq) goto loc_82213EAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82213eb0
	goto loc_82213EB0;
loc_82213EAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82213EB0:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r11.u8);
	// bl 0x8220a000
	ctx.lr = 0x82213ECC;
	sub_8220A000(ctx, base);
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// bne cr6,0x82213ee0
	if (!ctx.cr6.eq) goto loc_82213EE0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82213EE0:
	// lbz r10,609(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 609);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bne cr6,0x82213f00
	if (!ctx.cr6.eq) goto loc_82213F00;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82213F00:
	// lbz r9,615(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 615);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r8,614(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 614);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lbz r7,612(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 612);
	// lbz r6,610(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 610);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r5,607(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 607);
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r30,607(r31)
	PPC_STORE_U8(ctx.r31.u32 + 607, ctx.r30.u8);
	// subfic r8,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r7.s64;
	// lbz r7,613(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 613);
	// rlwimi r10,r9,0,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r30,613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 613, ctx.r30.u8);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r8,605(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 605);
	// subfic r9,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r6.s64;
	// lbz r6,611(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 611);
	// rlwimi r10,r11,0,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r30,605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 605, ctx.r30.u8);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r9,606(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 606);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stb r30,606(r31)
	PPC_STORE_U8(ctx.r31.u32 + 606, ctx.r30.u8);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// stb r30,611(r31)
	PPC_STORE_U8(ctx.r31.u32 + 611, ctx.r30.u8);
	// rlwimi r10,r11,0,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// rlwimi r10,r9,0,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// subfic r7,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r6.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,426
	ctx.r10.u64 = ctx.r10.u64 & 426;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r7,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// beq cr6,0x82213fdc
	if (ctx.cr6.eq) goto loc_82213FDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
loc_82213FDC:
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

__attribute__((alias("__imp__sub_82213FF8"))) PPC_WEAK_FUNC(sub_82213FF8);
PPC_FUNC_IMPL(__imp__sub_82213FF8) {
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
	// bl 0x8220e4b0
	ctx.lr = 0x82214010;
	sub_8220E4B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-21252
	ctx.r11.s64 = ctx.r11.s64 + -21252;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r10,r10,-21328
	ctx.r10.s64 = ctx.r10.s64 + -21328;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r9,r9,-21264
	ctx.r9.s64 = ctx.r9.s64 + -21264;
	// addi r8,r8,-21320
	ctx.r8.s64 = ctx.r8.s64 + -21320;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r7,r7,-21360
	ctx.r7.s64 = ctx.r7.s64 + -21360;
	// addi r6,r6,-21372
	ctx.r6.s64 = ctx.r6.s64 + -21372;
	// addi r5,r5,-21384
	ctx.r5.s64 = ctx.r5.s64 + -21384;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stb r11,605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 605, ctx.r11.u8);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stb r11,606(r31)
	PPC_STORE_U8(ctx.r31.u32 + 606, ctx.r11.u8);
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stb r11,607(r31)
	PPC_STORE_U8(ctx.r31.u32 + 607, ctx.r11.u8);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stb r11,609(r31)
	PPC_STORE_U8(ctx.r31.u32 + 609, ctx.r11.u8);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stb r11,610(r31)
	PPC_STORE_U8(ctx.r31.u32 + 610, ctx.r11.u8);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stb r11,611(r31)
	PPC_STORE_U8(ctx.r31.u32 + 611, ctx.r11.u8);
	// stb r11,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r11.u8);
	// stb r11,613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 613, ctx.r11.u8);
	// stb r11,614(r31)
	PPC_STORE_U8(ctx.r31.u32 + 614, ctx.r11.u8);
	// stb r11,615(r31)
	PPC_STORE_U8(ctx.r31.u32 + 615, ctx.r11.u8);
	// stb r11,616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 616, ctx.r11.u8);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822140F0"))) PPC_WEAK_FUNC(sub_822140F0);
PPC_FUNC_IMPL(__imp__sub_822140F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-148
	ctx.r3.s64 = ctx.r3.s64 + -148;
	// b 0x82214100
	sub_82214100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822140F8"))) PPC_WEAK_FUNC(sub_822140F8);
PPC_FUNC_IMPL(__imp__sub_822140F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-144
	ctx.r3.s64 = ctx.r3.s64 + -144;
	// b 0x82214100
	sub_82214100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214100"))) PPC_WEAK_FUNC(sub_82214100);
PPC_FUNC_IMPL(__imp__sub_82214100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221412c
	if (ctx.cr6.eq) goto loc_8221412C;
	// bl 0x821601b8
	ctx.lr = 0x8221412C;
	sub_821601B8(ctx, base);
loc_8221412C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206e70
	ctx.lr = 0x82214134;
	sub_82206E70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221414c
	if (ctx.cr6.eq) goto loc_8221414C;
	// bl 0x82186190
	ctx.lr = 0x82214148;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221414C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214168"))) PPC_WEAK_FUNC(sub_82214168);
PPC_FUNC_IMPL(__imp__sub_82214168) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8220f330
	ctx.lr = 0x82214188;
	sub_8220F330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822141a4
	if (ctx.cr6.lt) goto loc_822141A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822141a8
	goto loc_822141A8;
loc_822141A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822141A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221421c
	if (ctx.cr6.eq) goto loc_8221421C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_822141B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822141dc
	if (ctx.cr6.eq) goto loc_822141DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822141b8
	if (ctx.cr6.eq) goto loc_822141B8;
loc_822141DC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8221421c
	if (!ctx.cr6.eq) goto loc_8221421C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f4fa8
	ctx.lr = 0x82214200;
	sub_821F4FA8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,528
	ctx.r3.s64 = ctx.r30.s64 + 528;
	// bl 0x8221f3c8
	ctx.lr = 0x8221420C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221421c
	if (ctx.cr6.eq) goto loc_8221421C;
	// bl 0x821601b8
	ctx.lr = 0x8221421C;
	sub_821601B8(ctx, base);
loc_8221421C:
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

__attribute__((alias("__imp__sub_82214238"))) PPC_WEAK_FUNC(sub_82214238);
PPC_FUNC_IMPL(__imp__sub_82214238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82214240;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8220f5c8
	ctx.lr = 0x82214254;
	sub_8220F5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-21112
	ctx.r4.s64 = ctx.r11.s64 + -21112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221427C;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82214294;
	sub_821EA350(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f1,540(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 540, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822142ac
	if (ctx.cr6.lt) goto loc_822142AC;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x822142AC;
	sub_82186190(ctx, base);
loc_822142AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822142D8;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822142E8;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,544(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 544, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82214300
	if (ctx.cr6.lt) goto loc_82214300;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82214300;
	sub_82186190(ctx, base);
loc_82214300:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,-30704
	ctx.r4.s64 = ctx.r11.s64 + -30704;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221432C;
	sub_82161E08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221433C;
	sub_821EA350(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f1,548(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 548, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82214354
	if (ctx.cr6.lt) goto loc_82214354;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x82214354;
	sub_82186190(ctx, base);
loc_82214354:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r4,r11,-21144
	ctx.r4.s64 = ctx.r11.s64 + -21144;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82214380;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82214390;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,552(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 552, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822143a8
	if (ctx.cr6.lt) goto loc_822143A8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822143A8;
	sub_82186190(ctx, base);
loc_822143A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-21176
	ctx.r4.s64 = ctx.r11.s64 + -21176;
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
	ctx.lr = 0x822143D4;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822143E4;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 556, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822143fc
	if (ctx.cr6.lt) goto loc_822143FC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x822143FC;
	sub_82186190(ctx, base);
loc_822143FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-21208
	ctx.r4.s64 = ctx.r11.s64 + -21208;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82214428;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x82214438;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,560(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 560, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82214450
	if (ctx.cr6.lt) goto loc_82214450;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x82214450;
	sub_82186190(ctx, base);
loc_82214450:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r11,-21236
	ctx.r4.s64 = ctx.r11.s64 + -21236;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8221447C;
	sub_82161E08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8221448C;
	sub_821EA350(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f1,564(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 564, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822144a4
	if (ctx.cr6.lt) goto loc_822144A4;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x822144A4;
	sub_82186190(ctx, base);
loc_822144A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r11,-22104
	ctx.r4.s64 = ctx.r11.s64 + -22104;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822144D0;
	sub_82161E08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x822144E0;
	sub_821EA350(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f1,568(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 568, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822144f8
	if (ctx.cr6.lt) goto loc_822144F8;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x822144F8;
	sub_82186190(ctx, base);
loc_822144F8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214508"))) PPC_WEAK_FUNC(sub_82214508);
PPC_FUNC_IMPL(__imp__sub_82214508) {
	PPC_FUNC_PROLOGUE();
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214510"))) PPC_WEAK_FUNC(sub_82214510);
PPC_FUNC_IMPL(__imp__sub_82214510) {
	PPC_FUNC_PROLOGUE();
	// std r4,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214518"))) PPC_WEAK_FUNC(sub_82214518);
PPC_FUNC_IMPL(__imp__sub_82214518) {
	PPC_FUNC_PROLOGUE();
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214520"))) PPC_WEAK_FUNC(sub_82214520);
PPC_FUNC_IMPL(__imp__sub_82214520) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214528"))) PPC_WEAK_FUNC(sub_82214528);
PPC_FUNC_IMPL(__imp__sub_82214528) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214550
	if (ctx.cr6.eq) goto loc_82214550;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82214564
	goto loc_82214564;
loc_82214550:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214564
	if (!ctx.cr6.eq) goto loc_82214564;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82214564:
	// bl 0x82208f48
	ctx.lr = 0x82214568;
	sub_82208F48(ctx, base);
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

__attribute__((alias("__imp__sub_82214580"))) PPC_WEAK_FUNC(sub_82214580);
PPC_FUNC_IMPL(__imp__sub_82214580) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214598"))) PPC_WEAK_FUNC(sub_82214598);
PPC_FUNC_IMPL(__imp__sub_82214598) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

extern bool MidairControlForSnowboards();

__attribute__((alias("__imp__sub_822145A8"))) PPC_WEAK_FUNC(sub_822145A8);
PPC_FUNC_IMPL(__imp__sub_822145A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,190(r10)
	if (MidairControlForSnowboards()) {
		goto loc_822145BC;
	}
	else {
	}
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
loc_822145BC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r11,189(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822145d8
	if (ctx.cr6.eq) goto loc_822145D8;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
loc_822145D8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822145E0"))) PPC_WEAK_FUNC(sub_822145E0);
PPC_FUNC_IMPL(__imp__sub_822145E0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82214628
	if (!ctx.cr6.lt) goto loc_82214628;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82214628
	if (!ctx.cr6.gt) goto loc_82214628;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_82214628:
	// lfs f0,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221463c
	if (!ctx.cr6.lt) goto loc_8221463C;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8221463C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82214688
	if (ctx.cr6.eq) goto loc_82214688;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214688
	if (ctx.cr6.eq) goto loc_82214688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822146cc
	goto loc_822146CC;
loc_82214688:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822146c8
	if (ctx.cr6.eq) goto loc_822146C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822146B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822146cc
	if (!ctx.cr6.eq) goto loc_822146CC;
loc_822146C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822146CC:
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

extern bool MidairControlForSnowboards();

__attribute__((alias("__imp__sub_822146E8"))) PPC_WEAK_FUNC(sub_822146E8);
PPC_FUNC_IMPL(__imp__sub_822146E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,190(r10)
	if (MidairControlForSnowboards()) {
		goto loc_82214714;
	}
	else {
	}
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
loc_82214714:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,189(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221472c
	if (!ctx.cr6.eq) goto loc_8221472C;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8221472C:
	// bl 0x82208f48
	ctx.lr = 0x82214730;
	sub_82208F48(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,189(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214748
	if (!ctx.cr6.eq) goto loc_82214748;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82214748:
	// bl 0x82208f48
	ctx.lr = 0x8221474C;
	sub_82208F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214760"))) PPC_WEAK_FUNC(sub_82214760);
PPC_FUNC_IMPL(__imp__sub_82214760) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214778"))) PPC_WEAK_FUNC(sub_82214778);
PPC_FUNC_IMPL(__imp__sub_82214778) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f60
	ctx.lr = 0x8221479C;
	sub_82208F60(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// blt cr6,0x822147e0
	if (ctx.cr6.lt) goto loc_822147E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82214820
	if (!ctx.cr6.lt) goto loc_82214820;
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214820
	if (ctx.cr6.eq) goto loc_82214820;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r11,189(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214818
	if (ctx.cr6.eq) goto loc_82214818;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8221481c
	goto loc_8221481C;
loc_822147E0:
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822147f4
	if (ctx.cr6.eq) goto loc_822147F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822147F4:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214820
	if (ctx.cr6.eq) goto loc_82214820;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r11,189(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221481c
	if (!ctx.cr6.eq) goto loc_8221481C;
loc_82214818:
	// li r4,4
	ctx.r4.s64 = 4;
loc_8221481C:
	// bl 0x82208f48
	ctx.lr = 0x82214820;
	sub_82208F48(ctx, base);
loc_82214820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822145e0
	ctx.lr = 0x8221482C;
	sub_822145E0(ctx, base);
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

extern bool MidairControlForSnowboards();

extern bool MidairControlForSnowboards();

__attribute__((alias("__imp__sub_82214848"))) PPC_WEAK_FUNC(sub_82214848);
PPC_FUNC_IMPL(__imp__sub_82214848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,189(r11)
	if (MidairControlForSnowboards()) {
		goto loc_82214870;
	}
	else {
	}
	PPC_STORE_U8(ctx.r11.u32 + 189, ctx.r30.u8);
loc_82214870:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 188, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,190(r11)
	if (MidairControlForSnowboards()) {
		goto loc_82214880;
	}
	else {
	}
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r30.u8);
loc_82214880:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,189(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214898
	if (!ctx.cr6.eq) goto loc_82214898;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82214898:
	// bl 0x82208f48
	ctx.lr = 0x8221489C;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 195, ctx.r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208fd0
	ctx.lr = 0x822148AC;
	sub_82208FD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822148C8"))) PPC_WEAK_FUNC(sub_822148C8);
PPC_FUNC_IMPL(__imp__sub_822148C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,189(r10)
	PPC_STORE_U8(ctx.r10.u32 + 189, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,195(r10)
	PPC_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822148F0"))) PPC_WEAK_FUNC(sub_822148F0);
PPC_FUNC_IMPL(__imp__sub_822148F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,191(r10)
	PPC_STORE_U8(ctx.r10.u32 + 191, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214918"))) PPC_WEAK_FUNC(sub_82214918);
PPC_FUNC_IMPL(__imp__sub_82214918) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,191(r10)
	PPC_STORE_U8(ctx.r10.u32 + 191, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214938"))) PPC_WEAK_FUNC(sub_82214938);
PPC_FUNC_IMPL(__imp__sub_82214938) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82214958;
	sub_82208F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r9,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214998"))) PPC_WEAK_FUNC(sub_82214998);
PPC_FUNC_IMPL(__imp__sub_82214998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822149A8"))) PPC_WEAK_FUNC(sub_822149A8);
PPC_FUNC_IMPL(__imp__sub_822149A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822149B8"))) PPC_WEAK_FUNC(sub_822149B8);
PPC_FUNC_IMPL(__imp__sub_822149B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822149C8"))) PPC_WEAK_FUNC(sub_822149C8);
PPC_FUNC_IMPL(__imp__sub_822149C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,194(r10)
	PPC_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822149E8"))) PPC_WEAK_FUNC(sub_822149E8);
PPC_FUNC_IMPL(__imp__sub_822149E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,194(r10)
	PPC_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r11,190(r10)
	PPC_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214A00"))) PPC_WEAK_FUNC(sub_82214A00);
PPC_FUNC_IMPL(__imp__sub_82214A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82208f48
	sub_82208F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214A10"))) PPC_WEAK_FUNC(sub_82214A10);
PPC_FUNC_IMPL(__imp__sub_82214A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82214A30;
	sub_82208F48(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82208f48
	ctx.lr = 0x82214A3C;
	sub_82208F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214A50"))) PPC_WEAK_FUNC(sub_82214A50);
PPC_FUNC_IMPL(__imp__sub_82214A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214ab4
	if (ctx.cr6.eq) goto loc_82214AB4;
loc_82214A78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214ac0
	if (ctx.cr6.eq) goto loc_82214AC0;
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
loc_82214AB4:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214a78
	if (!ctx.cr6.eq) goto loc_82214A78;
loc_82214AC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214afc
	if (ctx.cr6.eq) goto loc_82214AFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214b00
	if (!ctx.cr6.eq) goto loc_82214B00;
loc_82214AFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82214B00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214B18"))) PPC_WEAK_FUNC(sub_82214B18);
PPC_FUNC_IMPL(__imp__sub_82214B18) {
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
	// bl 0x82209fb8
	ctx.lr = 0x82214B38;
	sub_82209FB8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82214b90
	if (!ctx.cr6.gt) goto loc_82214B90;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82214b88
	if (ctx.cr6.lt) goto loc_82214B88;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_82214B88:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
loc_82214B90:
	// lbz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lbz r10,189(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x82214bb8
	if (ctx.cr6.eq) goto loc_82214BB8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
loc_82214BB8:
	// lbz r8,194(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// li r7,64
	ctx.r7.s64 = 64;
	// lbz r6,190(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 190);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// lbz r5,193(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 193);
	// lbz r4,191(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 191);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// rlwimi r8,r6,0,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe r6,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// rlwimi r8,r6,0,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// andi. r8,r8,1034
	ctx.r8.u64 = ctx.r8.u64 & 1034;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82214C38"))) PPC_WEAK_FUNC(sub_82214C38);
PPC_FUNC_IMPL(__imp__sub_82214C38) {
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
	// bl 0x82208f60
	ctx.lr = 0x82214C58;
	sub_82208F60(ctx, base);
	// rlwinm r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214c80
	if (ctx.cr6.eq) goto loc_82214C80;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f31,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// b 0x82214cd8
	goto loc_82214CD8;
loc_82214C80:
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214c9c
	if (ctx.cr6.eq) goto loc_82214C9C;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f31,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// b 0x82214cd8
	goto loc_82214CD8;
loc_82214C9C:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214cb8
	if (ctx.cr6.eq) goto loc_82214CB8;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f31,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// b 0x82214cd8
	goto loc_82214CD8;
loc_82214CB8:
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214cdc
	if (ctx.cr6.eq) goto loc_82214CDC;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
loc_82214CD8:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82214CDC:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,216
	ctx.r9.s64 = ctx.r31.s64 + 216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82214cf8
	if (ctx.cr6.lt) goto loc_82214CF8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82214CF8:
	// addi r10,r31,212
	ctx.r10.s64 = ctx.r31.s64 + 212;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82214d18
	if (ctx.cr6.lt) goto loc_82214D18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82214D18:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82214D40"))) PPC_WEAK_FUNC(sub_82214D40);
PPC_FUNC_IMPL(__imp__sub_82214D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82214d5c
	if (ctx.cr6.gt) goto loc_82214D5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214D5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214d74
	if (ctx.cr6.eq) goto loc_82214D74;
	// stfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_82214D74:
	// lfs f13,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f1,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82214d98
	if (ctx.cr6.lt) goto loc_82214D98;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82214D98:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f1,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82214dc4
	if (ctx.cr6.lt) goto loc_82214DC4;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82214DC4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DD0"))) PPC_WEAK_FUNC(sub_82214DD0);
PPC_FUNC_IMPL(__imp__sub_82214DD0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82214e50
	if (ctx.cr6.lt) goto loc_82214E50;
	// addi r9,r11,236
	ctx.r9.s64 = ctx.r11.s64 + 236;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82214e04
	if (!ctx.cr6.lt) goto loc_82214E04;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_82214E04:
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x82214e60
	goto loc_82214E60;
loc_82214E50:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82214E60:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214E68;
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

__attribute__((alias("__imp__sub_82214E78"))) PPC_WEAK_FUNC(sub_82214E78);
PPC_FUNC_IMPL(__imp__sub_82214E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82214E80;
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,164(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x82214E9C;
	sub_82208F60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82214c38
	ctx.lr = 0x82214EAC;
	sub_82214C38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214edc
	if (ctx.cr6.eq) goto loc_82214EDC;
loc_82214ECC:
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
loc_82214EDC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214f0c
	if (!ctx.cr6.eq) goto loc_82214F0C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214ecc
	if (!ctx.cr6.eq) goto loc_82214ECC;
loc_82214F0C:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214f3c
	if (ctx.cr6.eq) goto loc_82214F3C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214ecc
	if (!ctx.cr6.eq) goto loc_82214ECC;
loc_82214F3C:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214f6c
	if (ctx.cr6.eq) goto loc_82214F6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214ecc
	if (!ctx.cr6.eq) goto loc_82214ECC;
loc_82214F6C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214f9c
	if (ctx.cr6.eq) goto loc_82214F9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214ecc
	if (!ctx.cr6.eq) goto loc_82214ECC;
loc_82214F9C:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214fd0
	if (ctx.cr6.eq) goto loc_82214FD0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214fd4
	if (!ctx.cr6.eq) goto loc_82214FD4;
loc_82214FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82214FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214FE0"))) PPC_WEAK_FUNC(sub_82214FE0);
PPC_FUNC_IMPL(__imp__sub_82214FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82214FE8;
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82208f60
	ctx.lr = 0x82215004;
	sub_82208F60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82214c38
	ctx.lr = 0x82215014;
	sub_82214C38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215054
	if (!ctx.cr6.eq) goto loc_82215054;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215054
	if (ctx.cr6.eq) goto loc_82215054;
loc_82215044:
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
loc_82215054:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215084
	if (ctx.cr6.eq) goto loc_82215084;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215044
	if (!ctx.cr6.eq) goto loc_82215044;
loc_82215084:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822150b8
	if (!ctx.cr6.eq) goto loc_822150B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822150A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822150bc
	if (!ctx.cr6.eq) goto loc_822150BC;
loc_822150B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822150BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

