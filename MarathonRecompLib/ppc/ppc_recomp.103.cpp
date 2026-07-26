#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8272FF88"))) PPC_WEAK_FUNC(sub_8272FF88);
PPC_FUNC_IMPL(__imp__sub_8272FF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82538dd0
	ctx.lr = 0x8272FFB0;
	sub_82538DD0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8272ffc0
	if (ctx.cr6.eq) goto loc_8272FFC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8272FFC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8272ffd0
	if (ctx.cr6.eq) goto loc_8272FFD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8272FFD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8272FFE8"))) PPC_WEAK_FUNC(sub_8272FFE8);
PPC_FUNC_IMPL(__imp__sub_8272FFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x8272FFF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r22,404(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r27,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r27.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r25,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r25.u32);
	// bne cr6,0x8273003c
	if (!ctx.cr6.eq) goto loc_8273003C;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// addi r22,r1,144
	ctx.r22.s64 = ctx.r1.s64 + 144;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
loc_8273003C:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,20(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r26,r10,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bne cr6,0x82730084
	if (!ctx.cr6.eq) goto loc_82730084;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
loc_82730084:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// lwz r31,412(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r10,r5,31
	ctx.r10.s64 = ctx.r5.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r10,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x827300e0
	if (!ctx.cr6.eq) goto loc_827300E0;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82537e70
	ctx.lr = 0x827300CC;
	sub_82537E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82730968
	ctx.lr = 0x827300DC;
	sub_82730968(ctx, base);
	// b 0x827300e4
	goto loc_827300E4;
loc_827300E0:
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
loc_827300E4:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r23,r9,r10
	ctx.r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r23,6
	ctx.r30.s64 = ctx.r23.s64 + 6;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r14,r11,r8
	ctx.r14.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r15,r11,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82730144
	if (ctx.cr6.gt) goto loc_82730144;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82730144:
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82730458
	if (ctx.cr6.eq) goto loc_82730458;
	// rlwinm r11,r28,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8273016C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r17,r11,30,2,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mullw r10,r10,r17
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r17.s32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82730438
	if (ctx.cr6.eq) goto loc_82730438;
	// slw r20,r11,r30
	ctx.r20.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_827301A0:
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// add r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 + ctx.r9.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r11,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// slw r8,r8,r23
	ctx.r8.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r23.u8 & 0x3F));
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r27,r11,2,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r25,r11,4,27,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r26,r4,r7
	ctx.r26.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + ctx.r19.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r6,r6,r17
	ctx.r6.u64 = ctx.r6.u64 + ctx.r17.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// slw r11,r9,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r8,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r9,1,3,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FFFFFFE;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x82730290;
	sub_826DF680(ctx, base);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x82730360
	if (!ctx.cr6.lt) goto loc_82730360;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r23
	ctx.r17.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
loc_827302A4:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// slw r10,r10,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r23.u8 & 0x3F));
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r8,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x8273034C;
	sub_826DF680(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x827302a4
	if (ctx.cr6.lt) goto loc_827302A4;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82730360:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82730418
	if (!ctx.cr6.lt) goto loc_82730418;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r5,r9,r23
	ctx.r5.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r23.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// slw r10,r10,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r23.u8 & 0x3F));
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r8,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x82730418;
	sub_826DF680(ctx, base);
loc_82730418:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827301a0
	if (ctx.cr6.lt) goto loc_827301A0;
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r25,396(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r27,380(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_82730438:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x8273016c
	if (ctx.cr6.lt) goto loc_8273016C;
loc_82730458:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8273046c
	if (!ctx.cr6.eq) goto loc_8273046C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82537f08
	ctx.lr = 0x8273046C;
	sub_82537F08(ctx, base);
loc_8273046C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82730478"))) PPC_WEAK_FUNC(sub_82730478);
PPC_FUNC_IMPL(__imp__sub_82730478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82730480;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r24,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// bne cr6,0x827304cc
	if (!ctx.cr6.eq) goto loc_827304CC;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_827304CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r29,r7,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r25,r7,r5
	ctx.r25.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// bne cr6,0x82730514
	if (!ctx.cr6.eq) goto loc_82730514;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
loc_82730514:
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lwz r31,412(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r27,r9,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x82730570
	if (!ctx.cr6.eq) goto loc_82730570;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82537e70
	ctx.lr = 0x8273055C;
	sub_82537E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82730968
	ctx.lr = 0x8273056C;
	sub_82730968(ctx, base);
	// b 0x82730574
	goto loc_82730574;
loc_82730570:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
loc_82730574:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r22,6
	ctx.r30.s64 = ctx.r22.s64 + 6;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r14,r11,r8
	ctx.r14.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r15,r11,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x827305d4
	if (ctx.cr6.gt) goto loc_827305D4;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_827305D4:
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mullw r11,r10,r24
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827308e8
	if (ctx.cr6.eq) goto loc_827308E8;
	// rlwinm r11,r27,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_827305FC:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r17,r11,30,2,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mullw r10,r10,r17
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r17.s32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x827308c8
	if (ctx.cr6.eq) goto loc_827308C8;
	// slw r20,r11,r30
	ctx.r20.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_82730630:
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r27,r9,r7
	ctx.r27.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r11,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// slw r8,r8,r22
	ctx.r8.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r22.u8 & 0x3F));
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r26,r11,2,27,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r24,r11,4,27,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r25,r4,r7
	ctx.r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r6,r6,r17
	ctx.r6.u64 = ctx.r6.u64 + ctx.r17.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// slw r11,r9,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r8,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r9,1,3,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FFFFFFE;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x82730720;
	sub_826DF680(ctx, base);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x827307f0
	if (!ctx.cr6.lt) goto loc_827307F0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r22
	ctx.r17.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
loc_82730734:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// slw r10,r10,r22
	ctx.r10.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r22.u8 & 0x3F));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r8,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x827307DC;
	sub_826DF680(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x82730734
	if (ctx.cr6.lt) goto loc_82730734;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_827307F0:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827308a8
	if (!ctx.cr6.lt) goto loc_827308A8;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r5,r9,r22
	ctx.r5.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r22.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// slw r10,r10,r22
	ctx.r10.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r22.u8 & 0x3F));
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r8,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x827308A8;
	sub_826DF680(ctx, base);
loc_827308A8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82730630
	if (ctx.cr6.lt) goto loc_82730630;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r26,372(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_827308C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x827305fc
	if (ctx.cr6.lt) goto loc_827305FC;
loc_827308E8:
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x827308fc
	if (!ctx.cr6.eq) goto loc_827308FC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82537f08
	ctx.lr = 0x827308FC;
	sub_82537F08(ctx, base);
loc_827308FC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82730908"))) PPC_WEAK_FUNC(sub_82730908);
PPC_FUNC_IMPL(__imp__sub_82730908) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8272ffe8
	ctx.lr = 0x82730928;
	sub_8272FFE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82730938"))) PPC_WEAK_FUNC(sub_82730938);
PPC_FUNC_IMPL(__imp__sub_82730938) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82730478
	ctx.lr = 0x82730958;
	sub_82730478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82730968"))) PPC_WEAK_FUNC(sub_82730968);
PPC_FUNC_IMPL(__imp__sub_82730968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82730970;
	__savegprlr_29(ctx, base);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x827309a0
	goto loc_827309A0;
loc_82730980:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x827309b0
	if (ctx.cr6.lt) goto loc_827309B0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
loc_827309A0:
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// bne 0x82730980
	if (!ctx.cr0.eq) goto loc_82730980;
loc_827309B0:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827309e8
	if (ctx.cr0.eq) goto loc_827309E8;
loc_827309B8:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x827309e8
	if (ctx.cr6.lt) goto loc_827309E8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827309b8
	if (!ctx.cr0.eq) goto loc_827309B8;
loc_827309E8:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82730a64
	if (ctx.cr0.eq) goto loc_82730A64;
loc_827309F0:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82730a64
	if (ctx.cr6.lt) goto loc_82730A64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827309f0
	if (!ctx.cr0.eq) goto loc_827309F0;
	// b 0x82730a64
	goto loc_82730A64;
loc_82730A24:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x82730b90
	if (ctx.cr6.lt) goto loc_82730B90;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,-128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,-124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// addi r5,r8,-16
	ctx.r5.s64 = ctx.r8.s64 + -16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
loc_82730A64:
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x82730a24
	if (!ctx.cr6.lt) goto loc_82730A24;
	// b 0x82730b90
	goto loc_82730B90;
loc_82730A78:
	// li r11,15
	ctx.r11.s64 = 15;
	// dcbzl r11,r10
	memset(base + ((ctx.r11.u32 + ctx.r10.u32) & ~127), 0, 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// lwz r11,-124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
loc_82730A90:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lvrx v13,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r5,16
	ctx.r5.s64 = 16;
	// vor v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r31,16
	ctx.r31.s64 = 16;
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	ctx.r30.s64 = 16;
	// lvrx v12,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// vor v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvrx v12,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v12,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// vor v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lwz r11,-128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvrx v0,r11,r4
	ea = ctx.r11.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r31
	ea = ctx.r11.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r30
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,-120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,-124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// addi r5,r8,-64
	ctx.r5.s64 = ctx.r8.s64 + -64;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// stw r9,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r9.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// blt cr6,0x82730a90
	if (ctx.cr6.lt) goto loc_82730A90;
loc_82730B90:
	// cmplwi cr6,r5,143
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 143, ctx.xer);
	// bge cr6,0x82730a78
	if (!ctx.cr6.lt) goto loc_82730A78;
	// b 0x82730bd4
	goto loc_82730BD4;
loc_82730B9C:
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// lwz r11,-124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
loc_82730BD4:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x82730b9c
	if (!ctx.cr6.lt) goto loc_82730B9C;
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82730c08
	if (ctx.cr0.eq) goto loc_82730C08;
loc_82730BE4:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82730c08
	if (ctx.cr6.lt) goto loc_82730C08;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82730be4
	if (!ctx.cr0.eq) goto loc_82730BE4;
loc_82730C08:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82730c34
	if (ctx.cr0.eq) goto loc_82730C34;
loc_82730C10:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82730c34
	if (ctx.cr6.lt) goto loc_82730C34;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82730c10
	if (!ctx.cr0.eq) goto loc_82730C10;
loc_82730C34:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82730c60
	if (ctx.cr0.eq) goto loc_82730C60;
loc_82730C3C:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82730c60
	if (ctx.cr6.lt) goto loc_82730C60;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82730c3c
	if (!ctx.cr0.eq) goto loc_82730C3C;
loc_82730C60:
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82730C68"))) PPC_WEAK_FUNC(sub_82730C68);
PPC_FUNC_IMPL(__imp__sub_82730C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82730C70;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82730cb0
	if (!ctx.cr6.eq) goto loc_82730CB0;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
loc_82730CB0:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,12(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// subf r17,r10,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r26,r11,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bne cr6,0x82730ce4
	if (!ctx.cr6.eq) goto loc_82730CE4;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// addi r20,r1,104
	ctx.r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
loc_82730CE4:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// cmplw cr6,r28,r18
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r27,r11,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82730d2c
	if (!ctx.cr6.eq) goto loc_82730D2C;
	// addi r11,r5,31
	ctx.r11.s64 = ctx.r5.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82537e70
	ctx.lr = 0x82730D18;
	sub_82537E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82730968
	ctx.lr = 0x82730D28;
	sub_82730968(ctx, base);
	// b 0x82730d30
	goto loc_82730D30;
loc_82730D2C:
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
loc_82730D30:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r29,6
	ctx.r30.s64 = ctx.r29.s64 + 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r15,r11,r8
	ctx.r15.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r16,r11,r10
	ctx.r16.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r15,r17
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r17.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bgt cr6,0x82730d90
	if (ctx.cr6.gt) goto loc_82730D90;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82730D90:
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8273101c
	if (ctx.cr6.eq) goto loc_8273101C;
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82730DA8:
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// add r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 + ctx.r9.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mullw r28,r9,r7
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r27,r11,2,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// slw r7,r8,r29
	ctx.r7.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r24,r11,28,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// rlwinm r26,r11,4,27,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r25,r6,r4
	ctx.r25.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// slw r23,r9,r30
	ctx.r23.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r22,r9,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r4,r7,r19
	ctx.r4.u64 = ctx.r7.u64 + ctx.r19.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// slw r11,r8,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x82730E84;
	sub_826DF680(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82730f54
	if (!ctx.cr6.lt) goto loc_82730F54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	ctx.r17.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_82730E98:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x82730F40;
	sub_826DF680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x82730e98
	if (ctx.cr6.lt) goto loc_82730E98;
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82730F54:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82731008
	if (!ctx.cr6.lt) goto loc_82731008;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r9,r31,r17
	ctx.r9.s64 = ctx.r17.s64 - ctx.r31.s64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r5,r9,r29
	ctx.r5.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x826df680
	ctx.lr = 0x82731008;
	sub_826DF680(ctx, base);
loc_82731008:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82730da8
	if (ctx.cr6.lt) goto loc_82730DA8;
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_8273101C:
	// cmplw cr6,r28,r18
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82731030
	if (!ctx.cr6.eq) goto loc_82731030;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82537f08
	ctx.lr = 0x82731030;
	sub_82537F08(ctx, base);
loc_82731030:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731038"))) PPC_WEAK_FUNC(sub_82731038);
PPC_FUNC_IMPL(__imp__sub_82731038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82731040;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82731080
	if (!ctx.cr6.eq) goto loc_82731080;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
loc_82731080:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r17,r10,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r25,r11,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bne cr6,0x827310b4
	if (!ctx.cr6.eq) goto loc_827310B4;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// addi r20,r1,104
	ctx.r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
loc_827310B4:
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r26,r11,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x827310fc
	if (!ctx.cr6.eq) goto loc_827310FC;
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82537e70
	ctx.lr = 0x827310E8;
	sub_82537E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82730968
	ctx.lr = 0x827310F8;
	sub_82730968(ctx, base);
	// b 0x82731100
	goto loc_82731100;
loc_827310FC:
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
loc_82731100:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r29,6
	ctx.r30.s64 = ctx.r29.s64 + 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r15,r11,r8
	ctx.r15.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r16,r11,r10
	ctx.r16.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r15,r17
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r17.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bgt cr6,0x82731160
	if (ctx.cr6.gt) goto loc_82731160;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82731160:
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827313ec
	if (ctx.cr6.eq) goto loc_827313EC;
	// rlwinm r11,r26,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82731178:
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + ctx.r14.u64;
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mullw r27,r9,r7
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r26,r11,2,27,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// slw r7,r8,r29
	ctx.r7.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r23,r11,28,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// rlwinm r25,r11,4,27,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r24,r6,r4
	ctx.r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// slw r22,r9,r30
	ctx.r22.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r21,r9,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r7,r18
	ctx.r3.u64 = ctx.r7.u64 + ctx.r18.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// slw r11,r8,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x82731254;
	sub_826DF680(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82731324
	if (!ctx.cr6.lt) goto loc_82731324;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	ctx.r17.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_82731268:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x82731310;
	sub_826DF680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x82731268
	if (ctx.cr6.lt) goto loc_82731268;
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82731324:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x827313d8
	if (!ctx.cr6.lt) goto loc_827313D8;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r9,r31,r17
	ctx.r9.s64 = ctx.r17.s64 - ctx.r31.s64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r5,r9,r29
	ctx.r5.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x826df680
	ctx.lr = 0x827313D8;
	sub_826DF680(ctx, base);
loc_827313D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82731178
	if (ctx.cr6.lt) goto loc_82731178;
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_827313EC:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82731400
	if (!ctx.cr6.eq) goto loc_82731400;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82537f08
	ctx.lr = 0x82731400;
	sub_82537F08(ctx, base);
loc_82731400:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731408"))) PPC_WEAK_FUNC(sub_82731408);
PPC_FUNC_IMPL(__imp__sub_82731408) {
	PPC_FUNC_PROLOGUE();
	// b 0x82730c68
	sub_82730C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731410"))) PPC_WEAK_FUNC(sub_82731410);
PPC_FUNC_IMPL(__imp__sub_82731410) {
	PPC_FUNC_PROLOGUE();
	// b 0x82731038
	sub_82731038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731418"))) PPC_WEAK_FUNC(sub_82731418);
PPC_FUNC_IMPL(__imp__sub_82731418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwimi r10,r11,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8253a678
	ctx.lr = 0x8273144C;
	sub_8253A678(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82731468
	if (!ctx.cr6.gt) goto loc_82731468;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwimi r10,r11,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82731468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731480"))) PPC_WEAK_FUNC(sub_82731480);
PPC_FUNC_IMPL(__imp__sub_82731480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82731488;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827314a8
	if (!ctx.cr6.eq) goto loc_827314A8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwbrx r11,0,r3
	PPC_STORE_U32(ctx.r3.u32, __builtin_bswap32(ctx.r11.u32));
	// b 0x827315d0
	goto loc_827315D0;
loc_827314A8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827314c4
	if (!ctx.cr6.eq) goto loc_827314C4;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sthbrx r11,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x827315d0
	goto loc_827315D0;
loc_827314C4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827314f4
	if (!ctx.cr6.eq) goto loc_827314F4;
	// lwbrx r10,0,r4
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sthbrx r10,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r10.u16));
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sthbrx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, __builtin_bswap16(ctx.r10.u16));
	// b 0x827315d0
	goto loc_827315D0;
loc_827314F4:
	// clrlwi. r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// beq 0x827315c4
	if (ctx.cr0.eq) goto loc_827315C4;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x827315c4
	if (ctx.cr6.eq) goto loc_827315C4;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// beq cr6,0x82731564
	if (ctx.cr6.eq) goto loc_82731564;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827315d0
	if (ctx.cr6.eq) goto loc_827315D0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// neg r27,r31
	ctx.r27.s64 = -ctx.r31.s64;
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82731540:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x82731550;
	sub_826DF680(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x82731540
	if (!ctx.cr0.eq) goto loc_82731540;
	// b 0x827315d0
	goto loc_827315D0;
loc_82731564:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm. r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827315d0
	if (ctx.cr0.eq) goto loc_827315D0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r5,r31
	ctx.r5.s64 = -ctx.r31.s64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82731580:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827315b0
	if (ctx.cr6.eq) goto loc_827315B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82731594:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbx r4,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82731594
	if (!ctx.cr0.eq) goto loc_82731594;
loc_827315B0:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bne 0x82731580
	if (!ctx.cr0.eq) goto loc_82731580;
	// b 0x827315d0
	goto loc_827315D0;
loc_827315C4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827315d0
	if (ctx.cr6.eq) goto loc_827315D0;
	// bl 0x826df680
	ctx.lr = 0x827315D0;
	sub_826DF680(ctx, base);
loc_827315D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827315D8"))) PPC_WEAK_FUNC(sub_827315D8);
PPC_FUNC_IMPL(__imp__sub_827315D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x827315E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// ori r11,r11,515
	ctx.r11.u64 = ctx.r11.u64 | 515;
	// rlwinm r31,r24,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,1029
	ctx.r11.s64 = 67436544;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r11,r11,1543
	ctx.r11.u64 = ctx.r11.u64 | 1543;
	// stw r25,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r25.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,2057
	ctx.r11.s64 = 134807552;
	// ori r11,r11,2571
	ctx.r11.u64 = ctx.r11.u64 | 2571;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,3085
	ctx.r11.s64 = 202178560;
	// ori r11,r11,3599
	ctx.r11.u64 = ctx.r11.u64 | 3599;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82731670
	if (ctx.cr0.eq) goto loc_82731670;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82731654:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82731480
	ctx.lr = 0x82731664;
	sub_82731480(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bne 0x82731654
	if (!ctx.cr0.eq) goto loc_82731654;
loc_82731670:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r23,r10,r11
	ctx.r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// bge cr6,0x827316b4
	if (!ctx.cr6.lt) goto loc_827316B4;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r10,-128
	ctx.r10.s64 = -128;
	// neg r29,r25
	ctx.r29.s64 = -ctx.r25.s64;
	// li r27,16
	ctx.r27.s64 = 16;
	// b 0x827316c4
	goto loc_827316C4;
loc_827316B4:
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_827316C4:
	// slw r31,r26,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_827316E8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x827316e8
	if (!ctx.cr0.eq) goto loc_827316E8;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// b 0x82731734
	goto loc_82731734;
loc_82731708:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273173c
	if (ctx.cr6.eq) goto loc_8273173C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82731480
	ctx.lr = 0x82731720;
	sub_82731480(ctx, base);
	// subf r31,r23,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r23.s64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82731734:
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731708
	if (!ctx.cr0.eq) goto loc_82731708;
loc_8273173C:
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// clrlwi. r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827317c0
	if (ctx.cr0.eq) goto loc_827317C0;
loc_82731760:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x827317b4
	if (ctx.cr6.lt) goto loc_827317B4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v0,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// clrlwi. r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r8,-16
	ctx.r31.s64 = ctx.r8.s64 + -16;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne 0x82731760
	if (!ctx.cr0.eq) goto loc_82731760;
loc_827317B4:
	// lwz r25,300(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_827317C0:
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x82731894
	if (ctx.cr6.lt) goto loc_82731894;
loc_827317C8:
	// dcbz r0,r11
	memset(base + ((ctx.r11.u32) & ~31), 0, 32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r10,r11
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r31,r10,-128
	ctx.r31.s64 = ctx.r10.s64 + -128;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lvx128 v13,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lvx128 v11,r6,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v12,v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v11,v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v10,v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v13,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v12,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stvx128 v11,r6,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stvx128 v10,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lvx128 v10,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lvx128 v13,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r6,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v11,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v12,v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v11,v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vperm v0,v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v13,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stvx128 v12,r6,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x827317c8
	if (!ctx.cr6.lt) goto loc_827317C8;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82731894:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x827318f0
	if (ctx.cr6.lt) goto loc_827318F0;
loc_8273189C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v0,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bge cr6,0x8273189c
	if (!ctx.cr6.lt) goto loc_8273189C;
	// lwz r25,300(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827318F0:
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r11,r29,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273192c
	if (ctx.cr6.eq) goto loc_8273192C;
loc_82731908:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82731480
	ctx.lr = 0x82731918;
	sub_82731480(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// subf. r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bne 0x82731908
	if (!ctx.cr0.eq) goto loc_82731908;
loc_8273192C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731938"))) PPC_WEAK_FUNC(sub_82731938);
PPC_FUNC_IMPL(__imp__sub_82731938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x82731940;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// ori r11,r11,515
	ctx.r11.u64 = ctx.r11.u64 | 515;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r30,r21,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF;
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,1029
	ctx.r11.s64 = 67436544;
	// stw r21,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r21.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// ori r11,r11,1543
	ctx.r11.u64 = ctx.r11.u64 | 1543;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,2057
	ctx.r11.s64 = 134807552;
	// ori r11,r11,2571
	ctx.r11.u64 = ctx.r11.u64 | 2571;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,3085
	ctx.r11.s64 = 202178560;
	// ori r11,r11,3599
	ctx.r11.u64 = ctx.r11.u64 | 3599;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827319cc
	if (ctx.cr0.eq) goto loc_827319CC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_827319B0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82731480
	ctx.lr = 0x827319C0;
	sub_82731480(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bne 0x827319b0
	if (!ctx.cr0.eq) goto loc_827319B0;
loc_827319CC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r30,r27,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bge cr6,0x82731a08
	if (!ctx.cr6.lt) goto loc_82731A08;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
loc_82731A08:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82731A14:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82731a14
	if (ctx.cr6.lt) goto loc_82731A14;
	// add r11,r31,r22
	ctx.r11.u64 = ctx.r31.u64 + ctx.r22.u64;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82731a70
	if (ctx.cr0.eq) goto loc_82731A70;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// b 0x82731a70
	goto loc_82731A70;
loc_82731A48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82731a78
	if (ctx.cr6.eq) goto loc_82731A78;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82731480
	ctx.lr = 0x82731A60;
	sub_82731480(ctx, base);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82731A70:
	// clrlwi. r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731a48
	if (!ctx.cr0.eq) goto loc_82731A48;
loc_82731A78:
	// clrlwi. r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x82731ac4
	if (ctx.cr0.eq) goto loc_82731AC4;
loc_82731A88:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82731abc
	if (ctx.cr6.lt) goto loc_82731ABC;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r30,r10,-16
	ctx.r30.s64 = ctx.r10.s64 + -16;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// clrlwi. r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731a88
	if (!ctx.cr0.eq) goto loc_82731A88;
loc_82731ABC:
	// lwz r22,276(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r21,268(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
loc_82731AC4:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x82731bb8
	if (!ctx.cr6.gt) goto loc_82731BB8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r30,-129
	ctx.r9.s64 = ctx.r30.s64 + -129;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// subf r29,r10,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r28,r10,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r27,r10,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r26,r10,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r25,r10,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// subf r24,r10,r8
	ctx.r24.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r23,r10,r8
	ctx.r23.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
loc_82731B18:
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r31
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// vperm v10,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r6,r26,r11
	ctx.r6.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r5,r25,r11
	ctx.r5.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r24,r11
	ctx.r4.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v12,v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v11,v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r3,r23,r11
	ctx.r3.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stvx v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v12,v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v11,v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v10,v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82731b18
	if (!ctx.cr0.eq) goto loc_82731B18;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82731BB8:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82731bf4
	if (ctx.cr6.lt) goto loc_82731BF4;
loc_82731BC0:
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bge cr6,0x82731bc0
	if (!ctx.cr6.lt) goto loc_82731BC0;
	// lwz r22,276(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r21,268(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
loc_82731BF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82731c1c
	if (ctx.cr6.eq) goto loc_82731C1C;
loc_82731BFC:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82731480
	ctx.lr = 0x82731C0C;
	sub_82731480(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// subf. r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82731bfc
	if (!ctx.cr0.eq) goto loc_82731BFC;
loc_82731C1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731C28"))) PPC_WEAK_FUNC(sub_82731C28);
PPC_FUNC_IMPL(__imp__sub_82731C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82731C30;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r25,r23,16,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// neg r24,r6
	ctx.r24.s64 = -ctx.r6.s64;
	// blt cr6,0x82731c58
	if (ctx.cr6.lt) goto loc_82731C58;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_82731C58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82731dac
	if (ctx.cr6.eq) goto loc_82731DAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82731c70
	if (!ctx.cr6.eq) goto loc_82731C70;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82731dac
	if (ctx.cr6.eq) goto loc_82731DAC;
loc_82731C70:
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82731c90
	if (ctx.cr0.eq) goto loc_82731C90;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82731ca4
	goto loc_82731CA4;
loc_82731C90:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// neg r26,r6
	ctx.r26.s64 = -ctx.r6.s64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82731CA4:
	// bl 0x82537710
	ctx.lr = 0x82731CA8;
	sub_82537710(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82731cbc
	if (ctx.cr0.eq) goto loc_82731CBC;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x82731cc0
	if (ctx.cr0.eq) goto loc_82731CC0;
loc_82731CBC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82731CC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82537710
	ctx.lr = 0x82731CC8;
	sub_82537710(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82731cdc
	if (ctx.cr0.eq) goto loc_82731CDC;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82731ce0
	if (ctx.cr0.eq) goto loc_82731CE0;
loc_82731CDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82731CE0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82731d84
	if (ctx.cr6.eq) goto loc_82731D84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82731d84
	if (ctx.cr6.eq) goto loc_82731D84;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// bgt cr6,0x82731d84
	if (ctx.cr6.gt) goto loc_82731D84;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82731d84
	if (ctx.cr6.eq) goto loc_82731D84;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731d84
	if (!ctx.cr0.eq) goto loc_82731D84;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82731d84
	if (!ctx.cr6.eq) goto loc_82731D84;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82731d84
	if (!ctx.cr0.eq) goto loc_82731D84;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731d84
	if (!ctx.cr0.eq) goto loc_82731D84;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82731d48
	if (!ctx.cr6.eq) goto loc_82731D48;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82731938
	ctx.lr = 0x82731D44;
	sub_82731938(ctx, base);
	// b 0x82731dac
	goto loc_82731DAC;
loc_82731D48:
	// subf. r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82731d54
	if (!ctx.cr0.lt) goto loc_82731D54;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82731D54:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82731d84
	if (ctx.cr6.lt) goto loc_82731D84;
	// xor r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82731d84
	if (!ctx.cr0.eq) goto loc_82731D84;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827315d8
	ctx.lr = 0x82731D80;
	sub_827315D8(ctx, base);
	// b 0x82731dac
	goto loc_82731DAC;
loc_82731D84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82731dac
	if (ctx.cr6.eq) goto loc_82731DAC;
loc_82731D8C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82731480
	ctx.lr = 0x82731D9C;
	sub_82731480(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// bne 0x82731d8c
	if (!ctx.cr0.eq) goto loc_82731D8C;
loc_82731DAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731DB8"))) PPC_WEAK_FUNC(sub_82731DB8);
PPC_FUNC_IMPL(__imp__sub_82731DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de898
	ctx.lr = 0x82731DC0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// clrlwi r31,r28,26
	ctx.r31.u64 = ctx.r28.u32 & 0x3F;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// addi r11,r11,-17936
	ctx.r11.s64 = ctx.r11.s64 + -17936;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// rlwinm. r8,r28,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82731e28
	if (ctx.cr0.eq) goto loc_82731E28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82538f78
	ctx.lr = 0x82731E20;
	sub_82538F78(ctx, base);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82731E28:
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,49
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 49, ctx.xer);
	// bgt cr6,0x82731e70
	if (ctx.cr6.gt) goto loc_82731E70;
	// beq cr6,0x82731e90
	if (ctx.cr6.eq) goto loc_82731E90;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82731ea4
	if (ctx.cr6.lt) goto loc_82731EA4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// ble cr6,0x82731e60
	if (!ctx.cr6.gt) goto loc_82731E60;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x82731ea4
	if (!ctx.cr6.gt) goto loc_82731EA4;
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// ble cr6,0x82731e90
	if (!ctx.cr6.gt) goto loc_82731E90;
	// b 0x82731ea4
	goto loc_82731EA4;
loc_82731E60:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82731ea4
	goto loc_82731EA4;
loc_82731E70:
	// cmplwi cr6,r31,51
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 51, ctx.xer);
	// blt cr6,0x82731ea4
	if (ctx.cr6.lt) goto loc_82731EA4;
	// cmplwi cr6,r31,53
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 53, ctx.xer);
	// ble cr6,0x82731e90
	if (!ctx.cr6.gt) goto loc_82731E90;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 57, ctx.xer);
	// ble cr6,0x82731ea4
	if (!ctx.cr6.gt) goto loc_82731EA4;
	// cmplwi cr6,r31,61
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 61, ctx.xer);
	// bgt cr6,0x82731ea4
	if (ctx.cr6.gt) goto loc_82731EA4;
loc_82731E90:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r19,r11,30,2,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r20,r8,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_82731EA4:
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82731eec
	if (ctx.cr6.lt) goto loc_82731EEC;
	// beq cr6,0x82731ee0
	if (ctx.cr6.eq) goto loc_82731EE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82731ed8
	if (ctx.cr6.lt) goto loc_82731ED8;
	// beq cr6,0x82731ecc
	if (ctx.cr6.eq) goto loc_82731ECC;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82731ef0
	goto loc_82731EF0;
loc_82731ECC:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// b 0x82731ef0
	goto loc_82731EF0;
loc_82731ED8:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// b 0x82731ee4
	goto loc_82731EE4;
loc_82731EE0:
	// lis r23,2
	ctx.r23.s64 = 131072;
loc_82731EE4:
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// b 0x82731ef0
	goto loc_82731EF0;
loc_82731EEC:
	// rlwinm r23,r30,13,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFFF0000;
loc_82731EF0:
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r24,r23,16,16,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r30,0
	// divwu r7,r11,r30
	ctx.r7.u32 = ctx.r11.u32 / ctx.r30.u32;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,35
	ctx.xer.ca = ctx.r11.u32 <= 35;
	ctx.r11.s64 = 35 - ctx.r11.s64;
	// and. r6,r8,r21
	ctx.r6.u64 = ctx.r8.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srw r22,r30,r11
	ctx.r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// bne 0x82731fc4
	if (!ctx.cr0.eq) goto loc_82731FC4;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82731fc4
	if (!ctx.cr6.eq) goto loc_82731FC4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x82731fc4
	if (!ctx.cr6.gt) goto loc_82731FC4;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x82731fc4
	if (!ctx.cr6.gt) goto loc_82731FC4;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82731f78
	if (!ctx.cr6.gt) goto loc_82731F78;
	// and. r10,r8,r17
	ctx.r10.u64 = ctx.r8.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82731f78
	if (!ctx.cr0.eq) goto loc_82731F78;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82731f78
	if (!ctx.cr6.eq) goto loc_82731F78;
	// mullw r10,r22,r7
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82731c28
	ctx.lr = 0x82731F74;
	sub_82731C28(ctx, base);
	// b 0x82732030
	goto loc_82732030;
loc_82731F78:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732030
	if (ctx.cr6.eq) goto loc_82732030;
	// mullw r11,r22,r7
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// mullw r28,r11,r20
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
loc_82731F90:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82731c28
	ctx.lr = 0x82731FA8;
	sub_82731C28(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 + ctx.r17.u64;
	// add r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 + ctx.r16.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82731f90
	if (ctx.cr6.lt) goto loc_82731F90;
	// b 0x82732030
	goto loc_82732030;
loc_82731FC4:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732030
	if (ctx.cr6.eq) goto loc_82732030;
loc_82731FD8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82732018
	if (ctx.cr6.eq) goto loc_82732018;
	// mullw r28,r22,r19
	ctx.r28.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82731FF0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82731c28
	ctx.lr = 0x82732008;
	sub_82731C28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// bne 0x82731ff0
	if (!ctx.cr0.eq) goto loc_82731FF0;
loc_82732018:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r27,r27,r17
	ctx.r27.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r26,r26,r16
	ctx.r26.u64 = ctx.r26.u64 + ctx.r16.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82731fd8
	if (ctx.cr6.lt) goto loc_82731FD8;
loc_82732030:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de8e8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82732038"))) PPC_WEAK_FUNC(sub_82732038);
PPC_FUNC_IMPL(__imp__sub_82732038) {
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
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82731db8
	ctx.lr = 0x82732064;
	sub_82731DB8(ctx, base);
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

__attribute__((alias("__imp__sub_82732078"))) PPC_WEAK_FUNC(sub_82732078);
PPC_FUNC_IMPL(__imp__sub_82732078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r10,r10,25160
	ctx.r10.s64 = ctx.r10.s64 + 25160;
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// stw r10,-1404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1404, ctx.r10.u32);
	// addi r10,r9,25408
	ctx.r10.s64 = ctx.r9.s64 + 25408;
	// lwz r11,-1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1404);
	// stw r10,-1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1400, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827320B4;
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

__attribute__((alias("__imp__sub_827320C8"))) PPC_WEAK_FUNC(sub_827320C8);
PPC_FUNC_IMPL(__imp__sub_827320C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r10,r10,25408
	ctx.r10.s64 = ctx.r10.s64 + 25408;
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// stw r10,-1400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1400, ctx.r10.u32);
	// addi r10,r9,25160
	ctx.r10.s64 = ctx.r9.s64 + 25160;
	// lwz r11,-1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1400);
	// stw r10,-1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1404, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82732104;
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

__attribute__((alias("__imp__sub_82732118"))) PPC_WEAK_FUNC(sub_82732118);
PPC_FUNC_IMPL(__imp__sub_82732118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// rlwinm r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82732148
	if (ctx.cr6.eq) goto loc_82732148;
	// rlwinm r11,r3,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// rlwinm r9,r3,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_82732148:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82732150:
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82732150
	if (!ctx.cr6.eq) goto loc_82732150;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stfs f1,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732188"))) PPC_WEAK_FUNC(sub_82732188);
PPC_FUNC_IMPL(__imp__sub_82732188) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x827321ec
	if (!ctx.cr6.gt) goto loc_827321EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x82733448
	ctx.lr = 0x827321D8;
	sub_82733448(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82733420
	ctx.lr = 0x827321E4;
	sub_82733420(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
loc_827321EC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0370
	ctx.lr = 0x827321F4;
	sub_826E0370(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82732220"))) PPC_WEAK_FUNC(sub_82732220);
PPC_FUNC_IMPL(__imp__sub_82732220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// fdivs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82732284
	if (ctx.cr6.lt) goto loc_82732284;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_82732240:
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827322cc
	if (ctx.cr6.gt) goto loc_827322CC;
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827322b8
	if (ctx.cr6.gt) goto loc_827322B8;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827322c0
	if (ctx.cr6.gt) goto loc_827322C0;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827322c8
	if (ctx.cr6.gt) goto loc_827322C8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r8,-3
	ctx.r9.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82732240
	if (ctx.cr6.lt) goto loc_82732240;
loc_82732284:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8273230c
	if (!ctx.cr6.lt) goto loc_8273230C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82732298:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827322cc
	if (ctx.cr6.gt) goto loc_827322CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82732298
	if (ctx.cr6.lt) goto loc_82732298;
	// b 0x827322cc
	goto loc_827322CC;
loc_827322B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x827322cc
	goto loc_827322CC;
loc_827322C0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x827322cc
	goto loc_827322CC;
loc_827322C8:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_827322CC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8273230c
	if (!ctx.cr6.lt) goto loc_8273230C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f1,f13,f0,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// blr 
	return;
loc_8273230C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732320"))) PPC_WEAK_FUNC(sub_82732320);
PPC_FUNC_IMPL(__imp__sub_82732320) {
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
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,2
	ctx.r31.s64 = 2;
	// lfs f6,6448(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6448);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f8.f64 = double(temp.f32);
	// beq cr6,0x8273239c
	if (ctx.cr6.eq) goto loc_8273239C;
	// lwz r3,72(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lfs f2,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82732374
	if (ctx.cr6.eq) goto loc_82732374;
	// bl 0x82732220
	ctx.lr = 0x82732370;
	sub_82732220(ctx, base);
	// b 0x82732398
	goto loc_82732398;
loc_82732374:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82732220
	ctx.lr = 0x82732398;
	sub_82732220(ctx, base);
loc_82732398:
	// stfs f1,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
loc_8273239C:
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827323ec
	if (ctx.cr6.eq) goto loc_827323EC;
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lfs f2,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827323c4
	if (ctx.cr6.eq) goto loc_827323C4;
	// bl 0x82732220
	ctx.lr = 0x827323C0;
	sub_82732220(ctx, base);
	// b 0x827323e8
	goto loc_827323E8;
loc_827323C4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82732220
	ctx.lr = 0x827323E8;
	sub_82732220(ctx, base);
loc_827323E8:
	// stfs f1,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
loc_827323EC:
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273243c
	if (ctx.cr6.eq) goto loc_8273243C;
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lfs f2,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82732414
	if (ctx.cr6.eq) goto loc_82732414;
	// bl 0x82732220
	ctx.lr = 0x82732410;
	sub_82732220(ctx, base);
	// b 0x82732438
	goto loc_82732438;
loc_82732414:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82732220
	ctx.lr = 0x82732438;
	sub_82732220(ctx, base);
loc_82732438:
	// stfs f1,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
loc_8273243C:
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732598
	if (ctx.cr6.eq) goto loc_82732598;
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lfs f2,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82732464
	if (ctx.cr6.eq) goto loc_82732464;
	// bl 0x82732220
	ctx.lr = 0x82732460;
	sub_82732220(ctx, base);
	// b 0x82732488
	goto loc_82732488;
loc_82732464:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82732220
	ctx.lr = 0x82732488;
	sub_82732220(ctx, base);
loc_82732488:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827324b4
	if (!ctx.cr6.eq) goto loc_827324B4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
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
loc_827324B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f5,-6412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6412);
	ctx.f5.f64 = double(temp.f32);
	// beq cr6,0x827324f8
	if (ctx.cr6.eq) goto loc_827324F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827324CC:
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// beq cr6,0x827324f8
	if (ctx.cr6.eq) goto loc_827324F8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stfsx f6,r11,r10
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827324cc
	if (ctx.cr6.lt) goto loc_827324CC;
loc_827324F8:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82732598
	if (!ctx.cr6.lt) goto loc_82732598;
	// lwz r3,68(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// lfs f2,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82732520
	if (ctx.cr6.eq) goto loc_82732520;
	// bl 0x82732220
	ctx.lr = 0x8273251C;
	sub_82732220(ctx, base);
	// b 0x82732544
	goto loc_82732544;
loc_82732520:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82732220
	ctx.lr = 0x82732544;
	sub_82732220(ctx, base);
loc_82732544:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82732598
	if (!ctx.cr6.lt) goto loc_82732598;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82732564:
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bne cr6,0x82732580
	if (!ctx.cr6.eq) goto loc_82732580;
	// stfsx f1,r11,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82732584
	goto loc_82732584;
loc_82732580:
	// stfsx f6,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82732584:
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82732564
	if (ctx.cr6.lt) goto loc_82732564;
loc_82732598:
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

__attribute__((alias("__imp__sub_827325B0"))) PPC_WEAK_FUNC(sub_827325B0);
PPC_FUNC_IMPL(__imp__sub_827325B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827325B8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82732634
	if (!ctx.cr6.eq) goto loc_82732634;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82732604
	if (ctx.cr6.eq) goto loc_82732604;
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82732608
	goto loc_82732608;
loc_82732604:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82732608:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273261c
	if (ctx.cr6.eq) goto loc_8273261C;
	// lfs f12,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82732620
	goto loc_82732620;
loc_8273261C:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_82732620:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732824
	if (ctx.cr6.eq) goto loc_82732824;
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82732828
	goto loc_82732828;
loc_82732634:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-6412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x827327e0
	if (ctx.cr6.eq) goto loc_827327E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x827327e0
	if (!ctx.cr6.gt) goto loc_827327E0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// bl 0x82733448
	ctx.lr = 0x8273266C;
	sub_82733448(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82733420
	ctx.lr = 0x82732678;
	sub_82733420(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x826e0668
	ctx.lr = 0x8273269C;
	sub_826E0668(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// blt cr6,0x827326f8
	if (ctx.cr6.lt) goto loc_827326F8;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827326c0
	if (ctx.cr6.eq) goto loc_827326C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// b 0x827326c4
	goto loc_827326C4;
loc_827326C0:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_827326C4:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827326dc
	if (ctx.cr6.eq) goto loc_827326DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// b 0x827326e0
	goto loc_827326E0;
loc_827326DC:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_827326E0:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732824
	if (ctx.cr6.eq) goto loc_82732824;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82732828
	goto loc_82732828;
loc_827326F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x826e0668
	ctx.lr = 0x82732708;
	sub_826E0668(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82732764
	if (ctx.cr6.gt) goto loc_82732764;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273272c
	if (ctx.cr6.eq) goto loc_8273272C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82732730
	goto loc_82732730;
loc_8273272C:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82732730:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732748
	if (ctx.cr6.eq) goto loc_82732748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8273274c
	goto loc_8273274C;
loc_82732748:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_8273274C:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732824
	if (ctx.cr6.eq) goto loc_82732824;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82732828
	goto loc_82732828;
loc_82732764:
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x82732790
	if (ctx.cr6.eq) goto loc_82732790;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82732794
	goto loc_82732794;
loc_82732790:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82732794:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827327b8
	if (ctx.cr6.eq) goto loc_827327B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x827327bc
	goto loc_827327BC;
loc_827327B8:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_827327BC:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732824
	if (ctx.cr6.eq) goto loc_82732824;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f0,f10,f0,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82732828
	goto loc_82732828;
loc_827327E0:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827327f4
	if (ctx.cr6.eq) goto loc_827327F4;
	// lfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// b 0x827327f8
	goto loc_827327F8;
loc_827327F4:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_827327F8:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273280c
	if (ctx.cr6.eq) goto loc_8273280C;
	// lfs f12,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82732810
	goto loc_82732810;
loc_8273280C:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_82732810:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732824
	if (ctx.cr6.eq) goto loc_82732824;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82732828
	goto loc_82732828;
loc_82732824:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_82732828:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82732840
	if (ctx.cr6.eq) goto loc_82732840;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82732840:
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82732858
	if (ctx.cr6.eq) goto loc_82732858;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
loc_82732858:
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82732870
	if (ctx.cr6.eq) goto loc_82732870;
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,20(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
loc_82732870:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732884
	if (ctx.cr6.eq) goto loc_82732884;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
loc_82732884:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82732898"))) PPC_WEAK_FUNC(sub_82732898);
PPC_FUNC_IMPL(__imp__sub_82732898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x827328A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lfs f13,9792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82732970
	if (!ctx.cr6.gt) goto loc_82732970;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82733448
	ctx.lr = 0x827328F0;
	sub_82733448(ctx, base);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82733420
	ctx.lr = 0x827328FC;
	sub_82733420(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// fdivs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82733420
	ctx.lr = 0x82732910;
	sub_82733420(ctx, base);
	// lfs f12,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82732938
	if (!ctx.cr6.gt) goto loc_82732938;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82732948
	goto loc_82732948;
loc_82732938:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82732948
	if (!ctx.cr6.lt) goto loc_82732948;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_82732948:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8273295c
	if (ctx.cr6.gt) goto loc_8273295C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82732960
	if (!ctx.cr6.lt) goto loc_82732960;
loc_8273295C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82732960:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_82732970:
	// stfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82732988"))) PPC_WEAK_FUNC(sub_82732988);
PPC_FUNC_IMPL(__imp__sub_82732988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82732990;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfd f0,9864(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9864);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// lfd f7,-13064(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -13064);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lfd f0,9856(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9856);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lfd f13,9848(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9848);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lfd f12,9840(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9840);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// stfd f12,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f12.u64);
	// lfd f11,9832(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9832);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f11.u64);
	// stfd f11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f11.u64);
	// lfd f10,13960(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// stfd f10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// beq cr6,0x82732a40
	if (ctx.cr6.eq) goto loc_82732A40;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// beq cr6,0x82732a34
	if (ctx.cr6.eq) goto loc_82732A34;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82732a48
	if (!ctx.cr6.eq) goto loc_82732A48;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r7,5
	ctx.r7.s64 = 5;
	// b 0x82732a48
	goto loc_82732A48;
loc_82732A34:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x82732a48
	goto loc_82732A48;
loc_82732A40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82732A48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfd f13,17464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17464);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f8,9824(r8)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 9824);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lfd f11,9816(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9816);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfd f9,9808(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9808);
	// lfd f12,17456(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17456);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x82732c04
	if (ctx.cr6.lt) goto loc_82732C04;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
loc_82732A90:
	// lfd f0,-16(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82732aa8
	if (!ctx.cr6.gt) goto loc_82732AA8;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// b 0x82732ab4
	goto loc_82732AB4;
loc_82732AA8:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82732ab4
	if (!ctx.cr6.lt) goto loc_82732AB4;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
loc_82732AB4:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82732ad0
	if (ctx.cr6.gt) goto loc_82732AD0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82732ad0
	if (!ctx.cr6.gt) goto loc_82732AD0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82732ae8
	goto loc_82732AE8;
loc_82732AD0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82732ae8
	if (ctx.cr6.lt) goto loc_82732AE8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82732ae8
	if (!ctx.cr6.lt) goto loc_82732AE8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82732AE8:
	// lfd f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82732b00
	if (!ctx.cr6.gt) goto loc_82732B00;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// b 0x82732b0c
	goto loc_82732B0C;
loc_82732B00:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82732b0c
	if (!ctx.cr6.lt) goto loc_82732B0C;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
loc_82732B0C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82732b28
	if (ctx.cr6.gt) goto loc_82732B28;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82732b28
	if (!ctx.cr6.gt) goto loc_82732B28;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82732b40
	goto loc_82732B40;
loc_82732B28:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82732b40
	if (ctx.cr6.lt) goto loc_82732B40;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82732b40
	if (!ctx.cr6.lt) goto loc_82732B40;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82732B40:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82732b58
	if (!ctx.cr6.gt) goto loc_82732B58;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// b 0x82732b64
	goto loc_82732B64;
loc_82732B58:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82732b64
	if (!ctx.cr6.lt) goto loc_82732B64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
loc_82732B64:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82732b80
	if (ctx.cr6.gt) goto loc_82732B80;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82732b80
	if (!ctx.cr6.gt) goto loc_82732B80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82732b98
	goto loc_82732B98;
loc_82732B80:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82732b98
	if (ctx.cr6.lt) goto loc_82732B98;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82732b98
	if (!ctx.cr6.lt) goto loc_82732B98;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82732B98:
	// lfd f0,8(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82732bb0
	if (!ctx.cr6.gt) goto loc_82732BB0;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// b 0x82732bbc
	goto loc_82732BBC;
loc_82732BB0:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82732bbc
	if (!ctx.cr6.lt) goto loc_82732BBC;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
loc_82732BBC:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82732bd8
	if (ctx.cr6.gt) goto loc_82732BD8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82732bd8
	if (!ctx.cr6.gt) goto loc_82732BD8;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82732bf0
	goto loc_82732BF0;
loc_82732BD8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82732bf0
	if (ctx.cr6.lt) goto loc_82732BF0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82732bf0
	if (!ctx.cr6.lt) goto loc_82732BF0;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82732BF0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82732a90
	if (ctx.cr6.lt) goto loc_82732A90;
loc_82732C04:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82732c7c
	if (!ctx.cr6.lt) goto loc_82732C7C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82732C14:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82732c2c
	if (!ctx.cr6.gt) goto loc_82732C2C;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// b 0x82732c38
	goto loc_82732C38;
loc_82732C2C:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82732c38
	if (!ctx.cr6.lt) goto loc_82732C38;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
loc_82732C38:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82732c54
	if (ctx.cr6.gt) goto loc_82732C54;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82732c54
	if (!ctx.cr6.gt) goto loc_82732C54;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82732c6c
	goto loc_82732C6C;
loc_82732C54:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82732c6c
	if (ctx.cr6.lt) goto loc_82732C6C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82732c6c
	if (!ctx.cr6.lt) goto loc_82732C6C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82732C6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82732c14
	if (ctx.cr6.lt) goto loc_82732C14;
loc_82732C7C:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82732c88
	if (!ctx.cr6.lt) goto loc_82732C88;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82732C88:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82732c94
	if (!ctx.cr6.lt) goto loc_82732C94;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82732C94:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82732ca4
	if (ctx.cr6.eq) goto loc_82732CA4;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82732cac
	if (!ctx.cr6.eq) goto loc_82732CAC;
loc_82732CA4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82732CAC:
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// beq cr6,0x82732cd0
	if (ctx.cr6.eq) goto loc_82732CD0;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82732ce8
	if (!ctx.cr6.eq) goto loc_82732CE8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x82732cc8
	if (!ctx.cr6.gt) goto loc_82732CC8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82732CC8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// b 0x82732ce0
	goto loc_82732CE0;
loc_82732CD0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x82732cdc
	if (!ctx.cr6.gt) goto loc_82732CDC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82732CDC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
loc_82732CE0:
	// ble cr6,0x82732ce8
	if (!ctx.cr6.gt) goto loc_82732CE8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82732CE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82732d34
	if (!ctx.cr6.gt) goto loc_82732D34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82732D0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82732d0c
	if (ctx.cr6.lt) goto loc_82732D0C;
loc_82732D34:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f0,9800(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9800);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82732d68
	if (!ctx.cr6.lt) goto loc_82732D68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82732D68:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82732d94
	if (!ctx.cr6.lt) goto loc_82732D94;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82732D94:
	// fmul f0,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f7.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x826e0ad0
	ctx.lr = 0x82732DA4;
	sub_826E0AD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82732DF8"))) PPC_WEAK_FUNC(sub_82732DF8);
PPC_FUNC_IMPL(__imp__sub_82732DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82732E00;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826dfb74
	ctx.lr = 0x82732E08;
	__savefpr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82733480
	ctx.lr = 0x82732E44;
	sub_82733480(ctx, base);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82733480
	ctx.lr = 0x82732E54;
	sub_82733480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f25.f64 = double(temp.f32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fmr f28,f25
	ctx.f28.f64 = ctx.f25.f64;
	// ble cr6,0x82732e90
	if (!ctx.cr6.gt) goto loc_82732E90;
	// lfs f0,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_82732E90:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273315c
	if (ctx.cr6.eq) goto loc_8273315C;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f24,9872(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9872);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,9792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9792);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,14088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f27.f64 = double(temp.f32);
	// lfs f23,-6412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6412);
	ctx.f23.f64 = double(temp.f32);
loc_82732EC0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82732fa4
	if (!ctx.cr6.gt) goto loc_82732FA4;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lfsx f1,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f23
	ctx.cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// beq cr6,0x82732fa4
	if (ctx.cr6.eq) goto loc_82732FA4;
	// bl 0x826e0668
	ctx.lr = 0x82732EDC;
	sub_826E0668(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lfsx f1,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0590
	ctx.lr = 0x82732EF0;
	sub_826E0590(ctx, base);
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f12,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lfs f11,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f5,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f4,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f1,f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f2,f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f3,f3,f0,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmadds f11,f3,f30,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f10,f2,f29,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f13,f1,f28,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f11,f7,f28,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f0,f0,f30,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f13,f12,f30,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x82732fbc
	goto loc_82732FBC;
loc_82732FA4:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82732FBC:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82733040
	if (!ctx.cr6.gt) goto loc_82733040;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bne cr6,0x82733040
	if (!ctx.cr6.eq) goto loc_82733040;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfsx f0,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82733018
	if (!ctx.cr6.gt) goto loc_82733018;
loc_82732FF0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f25,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82732ff0
	if (ctx.cr6.lt) goto loc_82732FF0;
loc_82733018:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733148
	if (ctx.cr6.eq) goto loc_82733148;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82733148
	goto loc_82733148;
loc_82733040:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r26,24
	ctx.r4.s64 = ctx.r26.s64 + 24;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82733448
	ctx.lr = 0x82733050;
	sub_82733448(ctx, base);
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f0,f8,f0,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f1,f12,f9,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f2,f7,f12,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bgt cr6,0x82733130
	if (ctx.cr6.gt) goto loc_82733130;
	// fcmpu cr6,f2,f26
	ctx.cr6.compare(ctx.f2.f64, ctx.f26.f64);
	// bgt cr6,0x82733130
	if (ctx.cr6.gt) goto loc_82733130;
	// fcmpu cr6,f1,f24
	ctx.cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// blt cr6,0x82733130
	if (ctx.cr6.lt) goto loc_82733130;
	// fcmpu cr6,f2,f24
	ctx.cr6.compare(ctx.f2.f64, ctx.f24.f64);
	// blt cr6,0x82733130
	if (ctx.cr6.lt) goto loc_82733130;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x827330c4
	if (ctx.cr6.eq) goto loc_827330C4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_827330C4:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfsx f0,r29,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x82733148
	if (ctx.cr6.eq) goto loc_82733148;
loc_827330F0:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82733118
	if (ctx.cr6.eq) goto loc_82733118;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// b 0x8273311c
	goto loc_8273311C;
loc_82733118:
	// stfsx f25,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
loc_8273311C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827330f0
	if (ctx.cr6.lt) goto loc_827330F0;
	// b 0x82733148
	goto loc_82733148;
loc_82733130:
	// bl 0x826e0460
	ctx.lr = 0x82733134;
	sub_826E0460(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82732988
	ctx.lr = 0x82733148;
	sub_82732988(ctx, base);
loc_82733148:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82732ec0
	if (ctx.cr6.lt) goto loc_82732EC0;
loc_8273315C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826dfbc0
	ctx.lr = 0x82733168;
	__restfpr_23(ctx, base);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82733170"))) PPC_WEAK_FUNC(sub_82733170);
PPC_FUNC_IMPL(__imp__sub_82733170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82733178;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82733480
	ctx.lr = 0x827331B8;
	sub_82733480(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82733480
	ctx.lr = 0x827331C8;
	sub_82733480(ctx, base);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82733448
	ctx.lr = 0x827331F4;
	sub_82733448(ctx, base);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f0,f8,f0,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f31,f12,f9,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f2,f7,f12,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,9792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82733274
	if (ctx.cr6.gt) goto loc_82733274;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82733274
	if (ctx.cr6.gt) goto loc_82733274;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,9872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9872);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82733274
	if (ctx.cr6.lt) goto loc_82733274;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82733274
	if (ctx.cr6.lt) goto loc_82733274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x827332cc
	goto loc_827332CC;
loc_82733274:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0460
	ctx.lr = 0x8273327C;
	sub_826E0460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x827332b8
	if (!ctx.cr6.gt) goto loc_827332B8;
	// bl 0x826e0590
	ctx.lr = 0x82733294;
	sub_826E0590(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_827332B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x826e0590
	ctx.lr = 0x827332C8;
	sub_826E0590(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_827332CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827332E8"))) PPC_WEAK_FUNC(sub_827332E8);
PPC_FUNC_IMPL(__imp__sub_827332E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x827332F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82733448
	ctx.lr = 0x82733318;
	sub_82733448(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82733400
	ctx.lr = 0x82733320;
	sub_82733400(ctx, base);
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	// stfs f1,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733344
	if (ctx.cr6.eq) goto loc_82733344;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82732188
	ctx.lr = 0x82733344;
	sub_82732188(ctx, base);
loc_82733344:
	// andi. r11,r27,29
	ctx.r11.u64 = ctx.r27.u64 & 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333b4
	if (ctx.cr6.eq) goto loc_827333B4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82732320
	ctx.lr = 0x82733364;
	sub_82732320(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82733394
	if (!ctx.cr6.eq) goto loc_82733394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733394
	if (ctx.cr6.eq) goto loc_82733394;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827325b0
	ctx.lr = 0x82733394;
	sub_827325B0(ctx, base);
loc_82733394:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333b4
	if (ctx.cr6.eq) goto loc_827333B4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82732df8
	ctx.lr = 0x827333B4;
	sub_82732DF8(ctx, base);
loc_827333B4:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333d4
	if (ctx.cr6.eq) goto loc_827333D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82733170
	ctx.lr = 0x827333D4;
	sub_82733170(ctx, base);
loc_827333D4:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333f4
	if (ctx.cr6.eq) goto loc_827333F4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82732898
	ctx.lr = 0x827333F4;
	sub_82732898(ctx, base);
loc_827333F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82733400"))) PPC_WEAK_FUNC(sub_82733400);
PPC_FUNC_IMPL(__imp__sub_82733400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmul f13,f13,f13
	ctx.f13.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadd f0,f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fmadd f0,f12,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733420"))) PPC_WEAK_FUNC(sub_82733420);
PPC_FUNC_IMPL(__imp__sub_82733420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f1,f11,f10,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733448"))) PPC_WEAK_FUNC(sub_82733448);
PPC_FUNC_IMPL(__imp__sub_82733448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733480"))) PPC_WEAK_FUNC(sub_82733480);
PPC_FUNC_IMPL(__imp__sub_82733480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827334D8"))) PPC_WEAK_FUNC(sub_827334D8);
PPC_FUNC_IMPL(__imp__sub_827334D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827334E8"))) PPC_WEAK_FUNC(sub_827334E8);
PPC_FUNC_IMPL(__imp__sub_827334E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827334F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273352C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827335ec
	if (ctx.cr6.lt) goto loc_827335EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733568
	if (ctx.cr6.eq) goto loc_82733568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82733568:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827335ec
	if (ctx.cr6.lt) goto loc_827335EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273359c
	if (ctx.cr6.eq) goto loc_8273359C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8273359C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827335ec
	if (ctx.cr6.lt) goto loc_827335EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827335ec
	if (ctx.cr6.eq) goto loc_827335EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82581080
	ctx.lr = 0x827335B8;
	sub_82581080(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82581078
	ctx.lr = 0x827335C8;
	sub_82581078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822219e0
	ctx.lr = 0x827335D8;
	sub_822219E0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82734d38
	ctx.lr = 0x827335E4;
	sub_82734D38(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827335EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733608
	if (ctx.cr6.eq) goto loc_82733608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82733608:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733624
	if (ctx.cr6.eq) goto loc_82733624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82733630"))) PPC_WEAK_FUNC(sub_82733630);
PPC_FUNC_IMPL(__imp__sub_82733630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82733640"))) PPC_WEAK_FUNC(sub_82733640);
PPC_FUNC_IMPL(__imp__sub_82733640) {
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
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82733694
	if (ctx.cr6.lt) goto loc_82733694;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82733688
	if (!ctx.cr6.eq) goto loc_82733688;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82733688:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82733694:
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

__attribute__((alias("__imp__sub_827336A8"))) PPC_WEAK_FUNC(sub_827336A8);
PPC_FUNC_IMPL(__imp__sub_827336A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x827336B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,296
	ctx.r3.s64 = 296;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82739038
	ctx.lr = 0x827336D8;
	sub_82739038(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827336ec
	if (ctx.cr6.eq) goto loc_827336EC;
	// bl 0x82739048
	ctx.lr = 0x827336E4;
	sub_82739048(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x827336f0
	goto loc_827336F0;
loc_827336EC:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_827336F0:
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x827382b0
	ctx.lr = 0x827336F8;
	sub_827382B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273370c
	if (ctx.cr6.eq) goto loc_8273370C;
	// bl 0x82738a20
	ctx.lr = 0x82733704;
	sub_82738A20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82733710
	goto loc_82733710;
loc_8273370C:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_82733710:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82733740
	if (ctx.cr6.eq) goto loc_82733740;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82733744
	if (!ctx.cr6.eq) goto loc_82733744;
loc_82733740:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82733744:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827337a8
	if (ctx.cr6.eq) goto loc_827337A8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827337a8
	if (ctx.cr6.lt) goto loc_827337A8;
	// li r3,680
	ctx.r3.s64 = 680;
	// bl 0x82736fc0
	ctx.lr = 0x8273375C;
	sub_82736FC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733770
	if (ctx.cr6.eq) goto loc_82733770;
	// bl 0x827381b0
	ctx.lr = 0x82733768;
	sub_827381B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82733774
	goto loc_82733774;
loc_82733770:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82733774:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82734f50
	ctx.lr = 0x8273377C;
	sub_82734F50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733790
	if (ctx.cr6.eq) goto loc_82733790;
	// bl 0x827351a0
	ctx.lr = 0x82733788;
	sub_827351A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82733794
	goto loc_82733794;
loc_82733790:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_82733794:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827337a4
	if (ctx.cr6.eq) goto loc_827337A4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x827337a8
	if (!ctx.cr6.eq) goto loc_827337A8;
loc_827337A4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827337A8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8273380c
	if (ctx.cr6.eq) goto loc_8273380C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273380c
	if (ctx.cr6.lt) goto loc_8273380C;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x82736270
	ctx.lr = 0x827337C0;
	sub_82736270(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827337d4
	if (ctx.cr6.eq) goto loc_827337D4;
	// bl 0x82736eb0
	ctx.lr = 0x827337CC;
	sub_82736EB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x827337d8
	goto loc_827337D8;
loc_827337D4:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_827337D8:
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x82735860
	ctx.lr = 0x827337E0;
	sub_82735860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827337f4
	if (ctx.cr6.eq) goto loc_827337F4;
	// bl 0x827359d0
	ctx.lr = 0x827337EC;
	sub_827359D0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x827337f8
	goto loc_827337F8;
loc_827337F4:
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
loc_827337F8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82733808
	if (ctx.cr6.eq) goto loc_82733808;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x8273380c
	if (!ctx.cr6.eq) goto loc_8273380C;
loc_82733808:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8273380C:
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8273386c
	if (ctx.cr6.eq) goto loc_8273386C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273386c
	if (ctx.cr6.lt) goto loc_8273386C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8273386C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827338c8
	if (ctx.cr6.eq) goto loc_827338C8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827338c8
	if (ctx.cr6.lt) goto loc_827338C8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827338C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827338C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82733908
	if (ctx.cr6.eq) goto loc_82733908;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733908
	if (ctx.cr6.lt) goto loc_82733908;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82735210
	ctx.lr = 0x82733904;
	sub_82735210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733908:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82733928
	if (ctx.cr6.eq) goto loc_82733928;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827339d0
	if (ctx.cr6.lt) goto loc_827339D0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82734c50
	ctx.lr = 0x82733924;
	sub_82734C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733928:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827339d0
	if (ctx.cr6.lt) goto loc_827339D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273395C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827339d0
	if (ctx.cr6.lt) goto loc_827339D0;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827339CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827339D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827339fc
	if (ctx.cr6.eq) goto loc_827339FC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827339fc
	if (ctx.cr6.lt) goto loc_827339FC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827339F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827339FC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82733a28
	if (ctx.cr6.eq) goto loc_82733A28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733a28
	if (ctx.cr6.lt) goto loc_82733A28;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733A28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82733a54
	if (ctx.cr6.eq) goto loc_82733A54;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733a54
	if (ctx.cr6.lt) goto loc_82733A54;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733A54:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82733a80
	if (ctx.cr6.eq) goto loc_82733A80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733aac
	if (ctx.cr6.lt) goto loc_82733AAC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733A80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733aac
	if (ctx.cr6.lt) goto loc_82733AAC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82733AAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82733ac8
	if (ctx.cr6.eq) goto loc_82733AC8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733AC8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82733ae4
	if (ctx.cr6.eq) goto loc_82733AE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733AE4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82733b00
	if (ctx.cr6.eq) goto loc_82733B00;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733B00:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82733b1c
	if (ctx.cr6.eq) goto loc_82733B1C;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733B1C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82733b38
	if (ctx.cr6.eq) goto loc_82733B38;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733B38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82733b50
	if (ctx.cr6.lt) goto loc_82733B50;
	// stw r19,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
loc_82733B50:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82733b6c
	if (ctx.cr6.eq) goto loc_82733B6C;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82733B78"))) PPC_WEAK_FUNC(sub_82733B78);
PPC_FUNC_IMPL(__imp__sub_82733B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x82733B80;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82733f8c
	if (ctx.cr6.gt) goto loc_82733F8C;
	// lis r12,-32141
	ctx.r12.s64 = -2106392576;
	// addi r12,r12,15312
	ctx.r12.s64 = ctx.r12.s64 + 15312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82733F8C;
	case 1:
		goto loc_82733BE0;
	case 2:
		goto loc_82733DE0;
	case 3:
		goto loc_82733E80;
	default:
		__builtin_unreachable();
	}
	// lwz r19,16268(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16268);
	// lwz r19,15328(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15328);
	// lwz r19,15840(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15840);
	// lwz r19,16000(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16000);
loc_82733BE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733c1c
	if (ctx.cr6.eq) goto loc_82733C1C;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82739668
	ctx.lr = 0x82733BF4;
	sub_82739668(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// bl 0x8273a9d8
	ctx.lr = 0x82733C00;
	sub_8273A9D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82733c1c
	if (!ctx.cr6.eq) goto loc_82733C1C;
loc_82733C0C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
loc_82733C1C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733c50
	if (ctx.cr6.eq) goto loc_82733C50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733c94
	if (ctx.cr6.eq) goto loc_82733C94;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733C50:
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82733c74
	if (!ctx.cr6.eq) goto loc_82733C74;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82733C74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82733ce4
	if (!ctx.cr6.eq) goto loc_82733CE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82733cd0
	if (ctx.cr6.eq) goto loc_82733CD0;
	// li r29,64
	ctx.r29.s64 = 64;
	// b 0x82733ce4
	goto loc_82733CE4;
loc_82733C94:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82739668
	ctx.lr = 0x82733C9C;
	sub_82739668(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733cc0
	if (ctx.cr6.eq) goto loc_82733CC0;
	// bl 0x8273a9d8
	ctx.lr = 0x82733CA8;
	sub_8273A9D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82733c50
	if (!ctx.cr6.eq) goto loc_82733C50;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733CC0:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733CD0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_82733CE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82733d04
	if (!ctx.cr6.eq) goto loc_82733D04;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82733D04:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r26,12
	ctx.r26.s64 = 12;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733d94
	if (ctx.cr6.eq) goto loc_82733D94;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82733D28:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82733d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82733D28;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// beq cr6,0x82733d70
	if (ctx.cr6.eq) goto loc_82733D70;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82733D70:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x827341c8
	if (ctx.cr6.lt) goto loc_827341C8;
loc_82733D94:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82733DB8:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82733db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82733DB8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// b 0x82734160
	goto loc_82734160;
loc_82733DE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733e24
	if (ctx.cr6.eq) goto loc_82733E24;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82739330
	ctx.lr = 0x82733DF4;
	sub_82739330(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// bl 0x827395a8
	ctx.lr = 0x82733E00;
	sub_827395A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82739350
	ctx.lr = 0x82733E18;
	sub_82739350(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x827341c8
	if (ctx.cr6.lt) goto loc_827341C8;
loc_82733E24:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82739330
	ctx.lr = 0x82733E38;
	sub_82739330(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733e5c
	if (ctx.cr6.eq) goto loc_82733E5C;
	// bl 0x827395a8
	ctx.lr = 0x82733E44;
	sub_827395A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82733e6c
	if (!ctx.cr6.eq) goto loc_82733E6C;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733E5C:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733E6C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82739350
	ctx.lr = 0x82733E7C;
	sub_82739350(ctx, base);
	// b 0x8273419c
	goto loc_8273419C;
loc_82733E80:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733ed0
	if (ctx.cr6.eq) goto loc_82733ED0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x827390f0
	ctx.lr = 0x82733E94;
	sub_827390F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// bl 0x82739260
	ctx.lr = 0x82733EA0;
	sub_82739260(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x827341c8
	if (ctx.cr6.lt) goto loc_827341C8;
loc_82733ED0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733f28
	if (ctx.cr6.eq) goto loc_82733F28;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82733f28
	if (!ctx.cr6.eq) goto loc_82733F28;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82733f28
	if (!ctx.cr6.eq) goto loc_82733F28;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827341a0
	goto loc_827341A0;
loc_82733F28:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x827390f0
	ctx.lr = 0x82733F30;
	sub_827390F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733f54
	if (ctx.cr6.eq) goto loc_82733F54;
	// bl 0x82739260
	ctx.lr = 0x82733F3C;
	sub_82739260(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82733f64
	if (!ctx.cr6.eq) goto loc_82733F64;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733F54:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_82733F64:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8273419c
	goto loc_8273419C;
loc_82733F8C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733fb8
	if (ctx.cr6.eq) goto loc_82733FB8;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82739668
	ctx.lr = 0x82733FA0;
	sub_82739668(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
	// bl 0x8273a9d8
	ctx.lr = 0x82733FAC;
	sub_8273A9D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82733c0c
	if (ctx.cr6.eq) goto loc_82733C0C;
loc_82733FB8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82733fec
	if (ctx.cr6.eq) goto loc_82733FEC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734030
	if (ctx.cr6.eq) goto loc_82734030;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82733FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82733FEC:
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82734010
	if (!ctx.cr6.eq) goto loc_82734010;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82734010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82734080
	if (!ctx.cr6.eq) goto loc_82734080;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273406c
	if (ctx.cr6.eq) goto loc_8273406C;
	// li r29,64
	ctx.r29.s64 = 64;
	// b 0x82734080
	goto loc_82734080;
loc_82734030:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82739668
	ctx.lr = 0x82734038;
	sub_82739668(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273405c
	if (ctx.cr6.eq) goto loc_8273405C;
	// bl 0x8273a9d8
	ctx.lr = 0x82734044;
	sub_8273A9D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82733fec
	if (!ctx.cr6.eq) goto loc_82733FEC;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_8273405C:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x827341c8
	goto loc_827341C8;
loc_8273406C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_82734080:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827340a0
	if (!ctx.cr6.eq) goto loc_827340A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_827340A0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,9
	ctx.r26.s64 = 9;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82734124
	if (ctx.cr6.eq) goto loc_82734124;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827340C4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x827340c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827340C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// beq cr6,0x82734100
	if (ctx.cr6.eq) goto loc_82734100;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82734100:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x827341c8
	if (ctx.cr6.lt) goto loc_827341C8;
loc_82734124:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x827341a0
	if (ctx.cr6.eq) goto loc_827341A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82734148:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82734148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82734148;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82734160:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82734184
	if (ctx.cr6.eq) goto loc_82734184;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82734184:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273419C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273419C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_827341A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x827341c8
	if (ctx.cr6.lt) goto loc_827341C8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827336a8
	ctx.lr = 0x827341C0;
	sub_827336A8(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_827341C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x827341e4
	if (ctx.cr6.eq) goto loc_827341E4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827341E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827341E4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82734200
	if (ctx.cr6.eq) goto loc_82734200;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82734200:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82734218
	if (ctx.cr6.lt) goto loc_82734218;
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
loc_82734218:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82734234
	if (ctx.cr6.eq) goto loc_82734234;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82734234:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82734240"))) PPC_WEAK_FUNC(sub_82734240);
PPC_FUNC_IMPL(__imp__sub_82734240) {
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
	// bl 0x8273ad30
	ctx.lr = 0x82734258;
	sub_8273AD30(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lfs f13,3136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3136);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,14388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14388);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f12,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
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
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x826dfd40
	ctx.lr = 0x827342F8;
	sub_826DFD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734310"))) PPC_WEAK_FUNC(sub_82734310);
PPC_FUNC_IMPL(__imp__sub_82734310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82734344
	if (ctx.cr6.lt) goto loc_82734344;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82734344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734358"))) PPC_WEAK_FUNC(sub_82734358);
PPC_FUNC_IMPL(__imp__sub_82734358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82734370"))) PPC_WEAK_FUNC(sub_82734370);
PPC_FUNC_IMPL(__imp__sub_82734370) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x827343ac
	if (ctx.cr6.eq) goto loc_827343AC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8273439c
	if (ctx.cr6.eq) goto loc_8273439C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8273439c
	if (!ctx.cr6.eq) goto loc_8273439C;
	// stw r5,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r6.u32);
	// blr 
	return;
loc_8273439C:
	// stw r5,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// blr 
	return;
loc_827343AC:
	// stw r5,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827343C0"))) PPC_WEAK_FUNC(sub_827343C0);
PPC_FUNC_IMPL(__imp__sub_827343C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827343F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734428"))) PPC_WEAK_FUNC(sub_82734428);
PPC_FUNC_IMPL(__imp__sub_82734428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82734460
	if (ctx.cr6.eq) goto loc_82734460;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82734460:
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

__attribute__((alias("__imp__sub_82734478"))) PPC_WEAK_FUNC(sub_82734478);
PPC_FUNC_IMPL(__imp__sub_82734478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82734488"))) PPC_WEAK_FUNC(sub_82734488);
PPC_FUNC_IMPL(__imp__sub_82734488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x827344A0;
	sub_8273AAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734240
	ctx.lr = 0x827344A8;
	sub_82734240(ctx, base);
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

__attribute__((alias("__imp__sub_827344C0"))) PPC_WEAK_FUNC(sub_827344C0);
PPC_FUNC_IMPL(__imp__sub_827344C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82734574
	if (ctx.cr6.eq) goto loc_82734574;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82543918
	ctx.lr = 0x827344FC;
	sub_82543918(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82546bd8
	ctx.lr = 0x82734508;
	sub_82546BD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82546ee0
	ctx.lr = 0x82734514;
	sub_82546EE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825470f8
	ctx.lr = 0x82734520;
	sub_825470F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82543ac8
	ctx.lr = 0x8273452C;
	sub_82543AC8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r6,r6,43,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253ac40
	ctx.lr = 0x82734544;
	sub_8253AC40(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r6,r6,42,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ac40
	ctx.lr = 0x8273455C;
	sub_8253AC40(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r6,r6,41,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ac40
	ctx.lr = 0x82734574;
	sub_8253AC40(ctx, base);
loc_82734574:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273458c
	if (ctx.cr6.eq) goto loc_8273458C;
	// bl 0x8253b438
	ctx.lr = 0x82734588;
	sub_8253B438(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_8273458C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827345a0
	if (ctx.cr6.eq) goto loc_827345A0;
	// bl 0x8253b438
	ctx.lr = 0x8273459C;
	sub_8253B438(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_827345A0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827345b4
	if (ctx.cr6.eq) goto loc_827345B4;
	// bl 0x8253b438
	ctx.lr = 0x827345B0;
	sub_8253B438(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_827345B4:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827345c8
	if (ctx.cr6.eq) goto loc_827345C8;
	// bl 0x8253b438
	ctx.lr = 0x827345C4;
	sub_8253B438(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_827345C8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827345dc
	if (ctx.cr6.eq) goto loc_827345DC;
	// bl 0x8253b438
	ctx.lr = 0x827345D8;
	sub_8253B438(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_827345DC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827345f0
	if (ctx.cr6.eq) goto loc_827345F0;
	// bl 0x8253eae0
	ctx.lr = 0x827345EC;
	sub_8253EAE0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_827345F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82734638"))) PPC_WEAK_FUNC(sub_82734638);
PPC_FUNC_IMPL(__imp__sub_82734638) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82734664:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82734664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82734664;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82aea9cc
	ctx.lr = 0x82734678;
	__imp__XGetVideoMode(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// bl 0x8254d570
	ctx.lr = 0x82734694;
	sub_8254D570(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// beq cr6,0x827346dc
	if (ctx.cr6.eq) goto loc_827346DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-27268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27268);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827346e4
	goto loc_827346E4;
loc_827346DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,6368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6368);
	ctx.f0.f64 = double(temp.f32);
loc_827346E4:
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// bl 0x8253b640
	ctx.lr = 0x82734704;
	sub_8253B640(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// bne cr6,0x8273471c
	if (!ctx.cr6.eq) goto loc_8273471C;
loc_82734710:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x827347ac
	goto loc_827347AC;
loc_8273471C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b6f0
	ctx.lr = 0x82734730;
	sub_8253B6F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,5
	ctx.r7.s64 = 5;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8253b750
	ctx.lr = 0x82734764;
	sub_8253B750(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8253b508
	ctx.lr = 0x82734774;
	sub_8253B508(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// beq cr6,0x82734710
	if (ctx.cr6.eq) goto loc_82734710;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// bl 0x82547118
	ctx.lr = 0x8273478C;
	sub_82547118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82734710
	if (ctx.cr6.eq) goto loc_82734710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827347AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827347AC:
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

__attribute__((alias("__imp__sub_827347C8"))) PPC_WEAK_FUNC(sub_827347C8);
PPC_FUNC_IMPL(__imp__sub_827347C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82734870
	if (ctx.cr6.eq) goto loc_82734870;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82543a40
	ctx.lr = 0x827347FC;
	sub_82543A40(ctx, base);
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82543918
	ctx.lr = 0x8273481C;
	sub_82543918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b5d0
	ctx.lr = 0x82734830;
	sub_8253B5D0(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x826df680
	ctx.lr = 0x8273483C;
	sub_826DF680(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8253b630
	ctx.lr = 0x82734844;
	sub_8253B630(ctx, base);
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82543918
	ctx.lr = 0x82734860;
	sub_82543918(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82734870
	if (ctx.cr6.eq) goto loc_82734870;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b438
	ctx.lr = 0x82734870;
	sub_8253B438(ctx, base);
loc_82734870:
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

__attribute__((alias("__imp__sub_82734890"))) PPC_WEAK_FUNC(sub_82734890);
PPC_FUNC_IMPL(__imp__sub_82734890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827344c0
	ctx.lr = 0x827348A8;
	sub_827344C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x827348B0;
	sub_8273AB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827348C8"))) PPC_WEAK_FUNC(sub_827348C8);
PPC_FUNC_IMPL(__imp__sub_827348C8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827348ec
	if (!ctx.cr6.eq) goto loc_827348EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x82734914
	goto loc_82734914;
loc_827348EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
loc_82734914:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// bl 0x827347c8
	ctx.lr = 0x82734A68;
	sub_827347C8(ctx, base);
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

__attribute__((alias("__imp__sub_82734A80"))) PPC_WEAK_FUNC(sub_82734A80);
PPC_FUNC_IMPL(__imp__sub_82734A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f10,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f9,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f13,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x82734b08
	if (!ctx.cr6.gt) goto loc_82734B08;
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fdivs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// fdivs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lfs f12,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x82734b2c
	goto loc_82734B2C;
loc_82734B08:
	// fmuls f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fdivs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fsubs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
loc_82734B2C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stfiwx f11,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfiwx f10,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfiwx f9,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f9.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f12,168(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f12,228(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,164(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f12,224(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f12,244(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,188(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,208(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// bl 0x827347c8
	ctx.lr = 0x82734C38;
	sub_827347C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734C50"))) PPC_WEAK_FUNC(sub_82734C50);
PPC_FUNC_IMPL(__imp__sub_82734C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82734C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82734ca0
	if (ctx.cr6.lt) goto loc_82734CA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253e948
	ctx.lr = 0x82734C88;
	sub_8253E948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// bl 0x82734638
	ctx.lr = 0x82734C94;
	sub_82734638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82734cb4
	if (!ctx.cr6.lt) goto loc_82734CB4;
loc_82734CA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82734CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82734CB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82734CC0"))) PPC_WEAK_FUNC(sub_82734CC0);
PPC_FUNC_IMPL(__imp__sub_82734CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8273ad48
	sub_8273AD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82734CD0"))) PPC_WEAK_FUNC(sub_82734CD0);
PPC_FUNC_IMPL(__imp__sub_82734CD0) {
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
	// bl 0x8273ad58
	ctx.lr = 0x82734CE8;
	sub_8273AD58(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-30764(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734D20"))) PPC_WEAK_FUNC(sub_82734D20);
PPC_FUNC_IMPL(__imp__sub_82734D20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734D28"))) PPC_WEAK_FUNC(sub_82734D28);
PPC_FUNC_IMPL(__imp__sub_82734D28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734D30"))) PPC_WEAK_FUNC(sub_82734D30);
PPC_FUNC_IMPL(__imp__sub_82734D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734D38"))) PPC_WEAK_FUNC(sub_82734D38);
PPC_FUNC_IMPL(__imp__sub_82734D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734D40"))) PPC_WEAK_FUNC(sub_82734D40);
PPC_FUNC_IMPL(__imp__sub_82734D40) {
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
	// bl 0x8273ad70
	ctx.lr = 0x82734D58;
	sub_8273AD70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ad58
	ctx.lr = 0x82734D6C;
	sub_8273AD58(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-30764(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734DA8"))) PPC_WEAK_FUNC(sub_82734DA8);
PPC_FUNC_IMPL(__imp__sub_82734DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ad48
	ctx.lr = 0x82734DD4;
	sub_8273AD48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734df4
	if (ctx.cr6.eq) goto loc_82734DF4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x82537f08
	ctx.lr = 0x82734DF0;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82734DF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734E10"))) PPC_WEAK_FUNC(sub_82734E10);
PPC_FUNC_IMPL(__imp__sub_82734E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8273ad48
	sub_8273AD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82734E20"))) PPC_WEAK_FUNC(sub_82734E20);
PPC_FUNC_IMPL(__imp__sub_82734E20) {
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
	// bl 0x8273ad58
	ctx.lr = 0x82734E38;
	sub_8273AD58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734E78"))) PPC_WEAK_FUNC(sub_82734E78);
PPC_FUNC_IMPL(__imp__sub_82734E78) {
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
	// bl 0x8273ad70
	ctx.lr = 0x82734E90;
	sub_8273AD70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ad58
	ctx.lr = 0x82734EA4;
	sub_8273AD58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734EE8"))) PPC_WEAK_FUNC(sub_82734EE8);
PPC_FUNC_IMPL(__imp__sub_82734EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ad48
	ctx.lr = 0x82734F14;
	sub_8273AD48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734f34
	if (ctx.cr6.eq) goto loc_82734F34;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// bl 0x82537f08
	ctx.lr = 0x82734F30;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82734F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734F50"))) PPC_WEAK_FUNC(sub_82734F50);
PPC_FUNC_IMPL(__imp__sub_82734F50) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82734F60"))) PPC_WEAK_FUNC(sub_82734F60);
PPC_FUNC_IMPL(__imp__sub_82734F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273ad30
	ctx.lr = 0x82734F78;
	sub_8273AD30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// bl 0x826dfd40
	ctx.lr = 0x82734FA4;
	sub_826DFD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734FB8"))) PPC_WEAK_FUNC(sub_82734FB8);
PPC_FUNC_IMPL(__imp__sub_82734FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734FD8"))) PPC_WEAK_FUNC(sub_82734FD8);
PPC_FUNC_IMPL(__imp__sub_82734FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82735010
	if (ctx.cr6.eq) goto loc_82735010;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82735010:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735048"))) PPC_WEAK_FUNC(sub_82735048);
PPC_FUNC_IMPL(__imp__sub_82735048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82735050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x82735078;
	sub_826DFD40(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82735150
	if (ctx.cr6.gt) goto loc_82735150;
	// lis r12,-32141
	ctx.r12.s64 = -2106392576;
	// addi r12,r12,20636
	ctx.r12.s64 = ctx.r12.s64 + 20636;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82735100;
	case 1:
		goto loc_82735150;
	case 2:
		goto loc_82735150;
	case 3:
		goto loc_82735150;
	case 4:
		goto loc_82735150;
	case 5:
		goto loc_82735150;
	case 6:
		goto loc_82735150;
	case 7:
		goto loc_82735150;
	case 8:
		goto loc_8273510C;
	case 9:
		goto loc_82735150;
	case 10:
		goto loc_82735150;
	case 11:
		goto loc_82735150;
	case 12:
		goto loc_82735150;
	case 13:
		goto loc_82735150;
	case 14:
		goto loc_82735150;
	case 15:
		goto loc_82735150;
	case 16:
		goto loc_82735118;
	case 17:
		goto loc_82735150;
	case 18:
		goto loc_82735150;
	case 19:
		goto loc_82735150;
	case 20:
		goto loc_82735150;
	case 21:
		goto loc_82735150;
	case 22:
		goto loc_82735150;
	case 23:
		goto loc_82735150;
	case 24:
		goto loc_82735118;
	default:
		__builtin_unreachable();
	}
	// lwz r19,20736(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20736);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20748(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20748);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20760(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20760);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20816(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20816);
	// lwz r19,20760(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20760);
loc_82735100:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x8273511c
	goto loc_8273511C;
loc_8273510C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x8273511c
	goto loc_8273511C;
loc_82735118:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_8273511C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82735150
	if (ctx.cr6.gt) goto loc_82735150;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bne cr6,0x82735134
	if (!ctx.cr6.eq) goto loc_82735134;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82735134:
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82735150
	if (ctx.cr6.eq) goto loc_82735150;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82735150:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735160"))) PPC_WEAK_FUNC(sub_82735160);
PPC_FUNC_IMPL(__imp__sub_82735160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,1472
	ctx.r8.s64 = ctx.r11.s64 + 1472;
loc_82735168:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82735168
	if (!ctx.cr0.eq) goto loc_82735168;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273519C"))) PPC_WEAK_FUNC(sub_8273519C);
PPC_FUNC_IMPL(__imp__sub_8273519C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827351A0"))) PPC_WEAK_FUNC(sub_827351A0);
PPC_FUNC_IMPL(__imp__sub_827351A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x827351B8;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ad30
	ctx.lr = 0x827351CC;
	sub_8273AD30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// bl 0x826dfd40
	ctx.lr = 0x827351F8;
	sub_826DFD40(ctx, base);
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

__attribute__((alias("__imp__sub_82735210"))) PPC_WEAK_FUNC(sub_82735210);
PPC_FUNC_IMPL(__imp__sub_82735210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82735218;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82735334
	if (ctx.cr6.lt) goto loc_82735334;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8255a4d0
	ctx.lr = 0x82735248;
	sub_8255A4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82735334
	if (ctx.cr6.lt) goto loc_82735334;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,1484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1484, ctx.r6.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8273526c
	if (!ctx.cr6.eq) goto loc_8273526C;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8273526C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r7,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82735280:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82735280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735280;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stb r7,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r7.u8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stb r6,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r8,20832
	ctx.r11.s64 = ctx.r8.s64 + 20832;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_827352D4:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x827352d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827352D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,44100
	ctx.r11.u64 = ctx.r11.u64 | 44100;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8255a4d8
	ctx.lr = 0x82735304;
	sub_8255A4D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82735334
	if (ctx.cr6.lt) goto loc_82735334;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82735348
	if (!ctx.cr6.lt) goto loc_82735348;
loc_82735334:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82735348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735358"))) PPC_WEAK_FUNC(sub_82735358);
PPC_FUNC_IMPL(__imp__sub_82735358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273539c
	if (ctx.cr6.eq) goto loc_8273539C;
	// bl 0x82559ef8
	ctx.lr = 0x82735398;
	sub_82559EF8(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_8273539C:
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827353b0
	if (ctx.cr6.eq) goto loc_827353B0;
	// bl 0x8255a3d8
	ctx.lr = 0x827353AC;
	sub_8255A3D8(ctx, base);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
loc_827353B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827353C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827353D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_827353F8"))) PPC_WEAK_FUNC(sub_827353F8);
PPC_FUNC_IMPL(__imp__sub_827353F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82735400;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273547c
	if (ctx.cr6.lt) goto loc_8273547C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581078
	ctx.lr = 0x82735430;
	sub_82581078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581080
	ctx.lr = 0x8273543C;
	sub_82581080(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221108
	ctx.lr = 0x82735448;
	sub_82221108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82735048
	ctx.lr = 0x82735460;
	sub_82735048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273547c
	if (ctx.cr6.lt) goto loc_8273547C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a010
	ctx.lr = 0x8273547C;
	sub_8255A010(ctx, base);
loc_8273547C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735488"))) PPC_WEAK_FUNC(sub_82735488);
PPC_FUNC_IMPL(__imp__sub_82735488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82559e90
	ctx.lr = 0x827354AC;
	sub_82559E90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_827354D0"))) PPC_WEAK_FUNC(sub_827354D0);
PPC_FUNC_IMPL(__imp__sub_827354D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827354D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,1472
	ctx.r30.s64 = ctx.r31.s64 + 1472;
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82735528
	if (ctx.cr6.lt) goto loc_82735528;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82735518
	if (!ctx.cr6.eq) goto loc_82735518;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8255a180
	ctx.lr = 0x82735510;
	sub_8255A180(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
loc_82735518:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82735528:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82735528
	if (!ctx.cr0.eq) goto loc_82735528;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8255a068
	ctx.lr = 0x827355A4;
	sub_8255A068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827355d8
	if (ctx.cr6.lt) goto loc_827355D8;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827355c4
	if (!ctx.cr6.eq) goto loc_827355C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8255a180
	ctx.lr = 0x827355C4;
	sub_8255A180(ctx, base);
loc_827355C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82735634
	if (ctx.cr6.lt) goto loc_82735634;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// b 0x827355f4
	goto loc_827355F4;
loc_827355D8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827355d8
	if (!ctx.cr0.eq) goto loc_827355D8;
loc_827355F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82735634
	if (ctx.cr6.lt) goto loc_82735634;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273561c
	if (ctx.cr6.lt) goto loc_8273561C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
loc_8273561C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82735634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735640"))) PPC_WEAK_FUNC(sub_82735640);
PPC_FUNC_IMPL(__imp__sub_82735640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827357a0
	if (ctx.cr6.eq) goto loc_827357A0;
	// lwz r10,1480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827356d8
	if (!ctx.cr6.eq) goto loc_827356D8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x827356d0
	if (ctx.cr6.eq) goto loc_827356D0;
	// bl 0x8255a128
	ctx.lr = 0x82735684;
	sub_8255A128(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x82735690;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827356cc
	if (ctx.cr6.eq) goto loc_827356CC;
loc_827356A4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826fce50
	ctx.lr = 0x827356AC;
	sub_826FCE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x827356B8;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827356a4
	if (!ctx.cr6.eq) goto loc_827356A4;
loc_827356CC:
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
loc_827356D0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827357a0
	goto loc_827357A0;
loc_827356D8:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8273574c
	if (ctx.cr6.eq) goto loc_8273574C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82735740
	if (ctx.cr6.eq) goto loc_82735740;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8273574c
	if (!ctx.cr6.eq) goto loc_8273574C;
	// bl 0x8255a220
	ctx.lr = 0x827356F4;
	sub_8255A220(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8255a128
	ctx.lr = 0x827356FC;
	sub_8255A128(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x82735708;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735798
	if (ctx.cr6.eq) goto loc_82735798;
loc_82735718:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826fce50
	ctx.lr = 0x82735720;
	sub_826FCE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x8273572C;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82735718
	if (!ctx.cr6.eq) goto loc_82735718;
	// b 0x82735798
	goto loc_82735798;
loc_82735740:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8255a1c8
	ctx.lr = 0x82735748;
	sub_8255A1C8(ctx, base);
	// b 0x8273579c
	goto loc_8273579C;
loc_8273574C:
	// bl 0x8255a220
	ctx.lr = 0x82735750;
	sub_8255A220(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x8273575C;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735790
	if (ctx.cr6.eq) goto loc_82735790;
loc_8273576C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826fce50
	ctx.lr = 0x82735774;
	sub_826FCE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82559fb8
	ctx.lr = 0x82735780;
	sub_82559FB8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273576c
	if (!ctx.cr6.eq) goto loc_8273576C;
loc_82735790:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8255a128
	ctx.lr = 0x82735798;
	sub_8255A128(ctx, base);
loc_82735798:
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
loc_8273579C:
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
loc_827357A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827357B8"))) PPC_WEAK_FUNC(sub_827357B8);
PPC_FUNC_IMPL(__imp__sub_827357B8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x82735210
	ctx.lr = 0x827357DC;
	sub_82735210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827357F0"))) PPC_WEAK_FUNC(sub_827357F0);
PPC_FUNC_IMPL(__imp__sub_827357F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82735358
	ctx.lr = 0x8273581C;
	sub_82735358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x82735824;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735844
	if (ctx.cr6.eq) goto loc_82735844;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// bl 0x82537f08
	ctx.lr = 0x82735840;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82735844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735860"))) PPC_WEAK_FUNC(sub_82735860);
PPC_FUNC_IMPL(__imp__sub_82735860) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735870"))) PPC_WEAK_FUNC(sub_82735870);
PPC_FUNC_IMPL(__imp__sub_82735870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82734240
	ctx.lr = 0x82735888;
	sub_82734240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,288
	ctx.r10.s64 = ctx.r31.s64 + 288;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827358A8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827358a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827358A8;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827358F0"))) PPC_WEAK_FUNC(sub_827358F0);
PPC_FUNC_IMPL(__imp__sub_827358F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735924
	if (ctx.cr6.eq) goto loc_82735924;
loc_82735910:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x826fce50
	ctx.lr = 0x82735918;
	sub_826FCE50(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82735910
	if (!ctx.cr6.eq) goto loc_82735910;
loc_82735924:
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

__attribute__((alias("__imp__sub_82735940"))) PPC_WEAK_FUNC(sub_82735940);
PPC_FUNC_IMPL(__imp__sub_82735940) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82735968"))) PPC_WEAK_FUNC(sub_82735968);
PPC_FUNC_IMPL(__imp__sub_82735968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r30,1440
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1440, ctx.xer);
	// bne cr6,0x827359a0
	if (!ctx.cr6.eq) goto loc_827359A0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,1080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1080, ctx.xer);
	// bne cr6,0x827359a0
	if (!ctx.cr6.eq) goto loc_827359A0;
	// li r11,1920
	ctx.r11.s64 = 1920;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_827359A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734a80
	ctx.lr = 0x827359A8;
	sub_82734A80(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827359b8
	if (ctx.cr6.eq) goto loc_827359B8;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_827359B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827359D0"))) PPC_WEAK_FUNC(sub_827359D0);
PPC_FUNC_IMPL(__imp__sub_827359D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82734488
	ctx.lr = 0x827359E8;
	sub_82734488(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82735870
	ctx.lr = 0x827359FC;
	sub_82735870(ctx, base);
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

__attribute__((alias("__imp__sub_82735A18"))) PPC_WEAK_FUNC(sub_82735A18);
PPC_FUNC_IMPL(__imp__sub_82735A18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_82735A1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82735a1c
	if (!ctx.cr0.eq) goto loc_82735A1C;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82735A50"))) PPC_WEAK_FUNC(sub_82735A50);
PPC_FUNC_IMPL(__imp__sub_82735A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735A58"))) PPC_WEAK_FUNC(sub_82735A58);
PPC_FUNC_IMPL(__imp__sub_82735A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82735A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735af4
	if (ctx.cr6.eq) goto loc_82735AF4;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82543918
	ctx.lr = 0x82735A90;
	sub_82543918(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82546bd8
	ctx.lr = 0x82735A9C;
	sub_82546BD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82546ee0
	ctx.lr = 0x82735AA8;
	sub_82546EE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x825470f8
	ctx.lr = 0x82735AB4;
	sub_825470F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82543ac8
	ctx.lr = 0x82735AC0;
	sub_82543AC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rldicr r30,r11,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82735ACC:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r30,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x8253ac40
	ctx.lr = 0x82735AE8;
	sub_8253AC40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82735acc
	if (ctx.cr6.lt) goto loc_82735ACC;
loc_82735AF4:
	// addi r31,r29,288
	ctx.r31.s64 = ctx.r29.s64 + 288;
	// li r28,3
	ctx.r28.s64 = 3;
loc_82735AFC:
	// li r30,3
	ctx.r30.s64 = 3;
loc_82735B00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735b14
	if (ctx.cr6.eq) goto loc_82735B14;
	// bl 0x8253b438
	ctx.lr = 0x82735B10;
	sub_8253B438(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82735B14:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82735b00
	if (!ctx.cr6.eq) goto loc_82735B00;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82735afc
	if (!ctx.cr6.eq) goto loc_82735AFC;
	// lwz r3,324(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735b44
	if (ctx.cr6.eq) goto loc_82735B44;
	// bl 0x8253b438
	ctx.lr = 0x82735B40;
	sub_8253B438(ctx, base);
	// stw r27,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r27.u32);
loc_82735B44:
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735b58
	if (ctx.cr6.eq) goto loc_82735B58;
	// bl 0x8253b438
	ctx.lr = 0x82735B54;
	sub_8253B438(ctx, base);
	// stw r27,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r27.u32);
loc_82735B58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827344c0
	ctx.lr = 0x82735B60;
	sub_827344C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735B68"))) PPC_WEAK_FUNC(sub_82735B68);
PPC_FUNC_IMPL(__imp__sub_82735B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82735B70;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82581080
	ctx.lr = 0x82735B8C;
	sub_82581080(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82735bac
	if (!ctx.cr6.eq) goto loc_82735BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581078
	ctx.lr = 0x82735BA0;
	sub_82581078(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82735d5c
	if (ctx.cr6.eq) goto loc_82735D5C;
loc_82735BAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581080
	ctx.lr = 0x82735BB4;
	sub_82581080(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// bl 0x82581078
	ctx.lr = 0x82735BC4;
	sub_82581078(ctx, base);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r24,r29,332
	ctx.r24.s64 = ctx.r29.s64 + 332;
	// stw r3,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r3.u32);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r3.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r10,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r10.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r11,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r11.u32);
	// stw r11,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r11.u32);
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
	// stw r11,352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 352, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r9.u32);
	// stw r9,364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 364, ctx.r9.u32);
	// rldicr r30,r11,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82735C08:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r30,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x8253ac40
	ctx.lr = 0x82735C24;
	sub_8253AC40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82735c08
	if (ctx.cr6.lt) goto loc_82735C08;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// addi r25,r29,288
	ctx.r25.s64 = ctx.r29.s64 + 288;
	// li r23,3
	ctx.r23.s64 = 3;
	// ori r27,r11,2
	ctx.r27.u64 = ctx.r11.u64 | 2;
loc_82735C40:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82735C4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735c60
	if (ctx.cr6.eq) goto loc_82735C60;
	// bl 0x8253b438
	ctx.lr = 0x82735C5C;
	sub_8253B438(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82735C60:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8253a8d8
	ctx.lr = 0x82735C84;
	sub_8253A8D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82735cac
	if (ctx.cr6.eq) goto loc_82735CAC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x82735c4c
	if (ctx.cr6.lt) goto loc_82735C4C;
	// b 0x82735cb4
	goto loc_82735CB4;
loc_82735CAC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82735CB4:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82735c40
	if (!ctx.cr6.eq) goto loc_82735C40;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82735d60
	if (ctx.cr6.lt) goto loc_82735D60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82735d5c
	if (ctx.cr6.lt) goto loc_82735D5C;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82735d08
	if (!ctx.cr6.eq) goto loc_82735D08;
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827348c8
	ctx.lr = 0x82735D04;
	sub_827348C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82735D08:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82735d5c
	if (ctx.cr6.lt) goto loc_82735D5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r31,76(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x82546bd8
	ctx.lr = 0x82735D20;
	sub_82546BD8(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// ble cr6,0x82735d34
	if (!ctx.cr6.gt) goto loc_82735D34;
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// b 0x82735d38
	goto loc_82735D38;
loc_82735D34:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
loc_82735D38:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// bl 0x8253b3c0
	ctx.lr = 0x82735D44;
	sub_8253B3C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82735d54
	if (ctx.cr6.eq) goto loc_82735D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b438
	ctx.lr = 0x82735D54;
	sub_8253B438(ctx, base);
loc_82735D54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r11.u32);
loc_82735D5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82735D60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735D68"))) PPC_WEAK_FUNC(sub_82735D68);
PPC_FUNC_IMPL(__imp__sub_82735D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82735D70;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82735dc8
	if (ctx.cr6.lt) goto loc_82735DC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82735DC8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82735dc8
	if (!ctx.cr0.eq) goto loc_82735DC8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,356
	ctx.r27.s64 = ctx.r31.s64 + 356;
	// rldicr r24,r11,63,63
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82735E0C:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r24,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r24.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x8253ac40
	ctx.lr = 0x82735E28;
	sub_8253AC40(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8253a740
	ctx.lr = 0x82735E58;
	sub_8253A740(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82735ea0
	if (!ctx.cr6.gt) goto loc_82735EA0;
	// addi r26,r27,-12
	ctx.r26.s64 = ctx.r27.s64 + -12;
loc_82735E70:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,-12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x82735E80;
	sub_826DF680(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82735e70
	if (ctx.cr6.lt) goto loc_82735E70;
loc_82735EA0:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82538d30
	ctx.lr = 0x82735EC4;
	sub_82538D30(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82735e0c
	if (ctx.cr6.lt) goto loc_82735E0C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735eec
	if (ctx.cr6.eq) goto loc_82735EEC;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82735EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82735EEC:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rldicr r27,r10,43,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8253ac40
	ctx.lr = 0x82735F1C;
	sub_8253AC40(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r28,r10,42,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x8253ac40
	ctx.lr = 0x82735F4C;
	sub_8253AC40(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r29,r10,41,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// bl 0x8253ac40
	ctx.lr = 0x82735F7C;
	sub_8253AC40(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82543ac8
	ctx.lr = 0x82735F88;
	sub_82543AC8(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825470f8
	ctx.lr = 0x82735F94;
	sub_825470F8(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82546ee0
	ctx.lr = 0x82735FA0;
	sub_82546EE0(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82546bd8
	ctx.lr = 0x82735FAC;
	sub_82546BD8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r10,r30,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r10,r30,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82542c48
	ctx.lr = 0x82735FF8;
	sub_82542C48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82542dd0
	ctx.lr = 0x82736008;
	sub_82542DD0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwimi r10,r30,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwimi r10,r30,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82542c48
	ctx.lr = 0x82736050;
	sub_82542C48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82542dd0
	ctx.lr = 0x82736060;
	sub_82542DD0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,1072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// rlwimi r10,r30,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1072, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,1072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// rlwimi r10,r30,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1072, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82542c48
	ctx.lr = 0x827360A8;
	sub_82542C48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82542dd0
	ctx.lr = 0x827360B8;
	sub_82542DD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82541a78
	ctx.lr = 0x827360C4;
	sub_82541A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82541400
	ctx.lr = 0x827360D0;
	sub_82541400(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825425d0
	ctx.lr = 0x827360DC;
	sub_825425D0(ctx, base);
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82543918
	ctx.lr = 0x827360F8;
	sub_82543918(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826fec28
	ctx.lr = 0x8273610C;
	sub_826FEC28(ctx, base);
	// bl 0x82538030
	ctx.lr = 0x82736110;
	sub_82538030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,17528
	ctx.r5.s64 = ctx.r10.s64 + 17528;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8253e340
	ctx.lr = 0x82736134;
	sub_8253E340(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273614c
	if (ctx.cr6.eq) goto loc_8273614C;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273614C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273614C:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// blt cr6,0x82736168
	if (ctx.cr6.lt) goto loc_82736168;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82736168:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736178"))) PPC_WEAK_FUNC(sub_82736178);
PPC_FUNC_IMPL(__imp__sub_82736178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,10104
	ctx.r30.s64 = ctx.r11.s64 + 10104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82548700
	ctx.lr = 0x827361A0;
	sub_82548700(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// beq cr6,0x827361dc
	if (ctx.cr6.eq) goto loc_827361DC;
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x82548608
	ctx.lr = 0x827361B4;
	sub_82548608(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// beq cr6,0x827361dc
	if (ctx.cr6.eq) goto loc_827361DC;
	// addi r3,r30,696
	ctx.r3.s64 = ctx.r30.s64 + 696;
	// bl 0x82548608
	ctx.lr = 0x827361C8;
	sub_82548608(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// beq cr6,0x827361dc
	if (ctx.cr6.eq) goto loc_827361DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827361e4
	goto loc_827361E4;
loc_827361DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_827361E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736200"))) PPC_WEAK_FUNC(sub_82736200);
PPC_FUNC_IMPL(__imp__sub_82736200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82735a58
	ctx.lr = 0x8273622C;
	sub_82735A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734890
	ctx.lr = 0x82736234;
	sub_82734890(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736254
	if (ctx.cr6.eq) goto loc_82736254;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// bl 0x82537f08
	ctx.lr = 0x82736250;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82736254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736270"))) PPC_WEAK_FUNC(sub_82736270);
PPC_FUNC_IMPL(__imp__sub_82736270) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736280"))) PPC_WEAK_FUNC(sub_82736280);
PPC_FUNC_IMPL(__imp__sub_82736280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273ae28
	ctx.lr = 0x82736298;
	sub_8273AE28(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827362D8"))) PPC_WEAK_FUNC(sub_827362D8);
PPC_FUNC_IMPL(__imp__sub_827362D8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82736318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736328"))) PPC_WEAK_FUNC(sub_82736328);
PPC_FUNC_IMPL(__imp__sub_82736328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82736330;
	__savegprlr_29(ctx, base);
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
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273634C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736408
	if (ctx.cr6.lt) goto loc_82736408;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x82537e70
	ctx.lr = 0x82736368;
	sub_82537E70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// bne cr6,0x82736380
	if (!ctx.cr6.eq) goto loc_82736380;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82736408
	goto loc_82736408;
loc_82736380:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827363b0
	if (ctx.cr6.eq) goto loc_827363B0;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
loc_827363B0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827363d4
	if (ctx.cr6.eq) goto loc_827363D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827363D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_827363D4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736408
	if (ctx.cr6.lt) goto loc_82736408;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82736400
	if (ctx.cr6.eq) goto loc_82736400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827363FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82736400:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8273641c
	if (!ctx.cr6.lt) goto loc_8273641C;
loc_82736408:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273641C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273641C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736428"))) PPC_WEAK_FUNC(sub_82736428);
PPC_FUNC_IMPL(__imp__sub_82736428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273645c
	if (ctx.cr6.eq) goto loc_8273645C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x82537f08
	ctx.lr = 0x82736454;
	sub_82537F08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_8273645C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736498;
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
}

__attribute__((alias("__imp__sub_827364B0"))) PPC_WEAK_FUNC(sub_827364B0);
PPC_FUNC_IMPL(__imp__sub_827364B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273650c
	if (ctx.cr6.eq) goto loc_8273650C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827364EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273650c
	if (ctx.cr6.lt) goto loc_8273650C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273650C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273650C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736528"))) PPC_WEAK_FUNC(sub_82736528);
PPC_FUNC_IMPL(__imp__sub_82736528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736580
	if (ctx.cr6.eq) goto loc_82736580;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8273c2c8
	ctx.lr = 0x82736564;
	sub_8273C2C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82736578
	goto loc_82736578;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82736578:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
loc_82736580:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827365a4
	if (ctx.cr6.eq) goto loc_827365A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273659C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_827365A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827365C0"))) PPC_WEAK_FUNC(sub_827365C0);
PPC_FUNC_IMPL(__imp__sub_827365C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827365D0"))) PPC_WEAK_FUNC(sub_827365D0);
PPC_FUNC_IMPL(__imp__sub_827365D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82736608
	if (ctx.cr6.eq) goto loc_82736608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82736608:
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

__attribute__((alias("__imp__sub_82736628"))) PPC_WEAK_FUNC(sub_82736628);
PPC_FUNC_IMPL(__imp__sub_82736628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x82736630;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273667C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r3,r23
	ctx.r25.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r30,540
	ctx.r28.s64 = ctx.r30.s64 + 540;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8273671c
	if (ctx.cr6.eq) goto loc_8273671C;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x827366a8
	if (!ctx.cr6.lt) goto loc_827366A8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_827366A8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8273df70
	ctx.lr = 0x827366C8;
	sub_8273DF70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x8273671c
	if (ctx.cr6.lt) goto loc_8273671C;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_8273671C:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82736720:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82736854
	if (!ctx.cr6.eq) goto loc_82736854;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82736854
	if (ctx.cr6.eq) goto loc_82736854;
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82736854
	if (!ctx.cr6.eq) goto loc_82736854;
loc_8273673C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827367bc
	if (!ctx.cr6.eq) goto loc_827367BC;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82736768
	if (!ctx.cr6.eq) goto loc_82736768;
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8273e410
	ctx.lr = 0x82736764;
	sub_8273E410(ctx, base);
	// b 0x82736780
	goto loc_82736780;
loc_82736768:
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82736784
	if (!ctx.cr6.eq) goto loc_82736784;
	// stw r24,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r24.u32);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x8273da90
	ctx.lr = 0x82736780;
	sub_8273DA90(ctx, base);
loc_82736780:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_82736784:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x8273e080
	ctx.lr = 0x82736798;
	sub_8273E080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x827367b0
	if (!ctx.cr6.eq) goto loc_827367B0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8273673c
	goto loc_8273673C;
loc_827367B0:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x827367bc
	if (!ctx.cr6.eq) goto loc_827367BC;
	// stw r24,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r24.u32);
loc_827367BC:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82736854
	if (ctx.cr6.eq) goto loc_82736854;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x827367d8
	if (!ctx.cr6.lt) goto loc_827367D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_827367D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8273df70
	ctx.lr = 0x827367F8;
	sub_8273DF70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x8273684c
	if (ctx.cr6.lt) goto loc_8273684C;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_8273684C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82736720
	goto loc_82736720;
loc_82736854:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x82736864
	if (!ctx.cr6.eq) goto loc_82736864;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_82736864:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82736874
	if (!ctx.cr6.eq) goto loc_82736874;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8273687c
	goto loc_8273687C;
loc_82736874:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_8273687C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827368d0
	if (ctx.cr6.lt) goto loc_827368D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827368d0
	if (ctx.cr6.eq) goto loc_827368D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827368AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827368D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827368D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x827368ec
	goto loc_827368EC;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
loc_827368EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827368F8"))) PPC_WEAK_FUNC(sub_827368F8);
PPC_FUNC_IMPL(__imp__sub_827368F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736910"))) PPC_WEAK_FUNC(sub_82736910);
PPC_FUNC_IMPL(__imp__sub_82736910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82736918;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r30,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r30.u64);
	// stw r30,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r30.u32);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8273e1c8
	ctx.lr = 0x82736950;
	sub_8273E1C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82736960
	if (ctx.cr6.eq) goto loc_82736960;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82736960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82736988
	goto loc_82736988;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r29,164(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_82736988:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82736998
	if (ctx.cr6.eq) goto loc_82736998;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82736998:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827369A0"))) PPC_WEAK_FUNC(sub_827369A0);
PPC_FUNC_IMPL(__imp__sub_827369A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827369B8"))) PPC_WEAK_FUNC(sub_827369B8);
PPC_FUNC_IMPL(__imp__sub_827369B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x827369C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// addi r31,r1,-2000
	ctx.r31.s64 = ctx.r1.s64 + -2000;
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r30,136
	ctx.r27.s64 = ctx.r30.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822219e0
	ctx.lr = 0x827369DC;
	sub_822219E0(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r28,528(r30)
	PPC_STORE_U64(ctx.r30.u32 + 528, ctx.r28.u64);
	// stw r28,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r28.u32);
	// stw r28,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r28.u32);
	// stw r28,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736bc8
	if (ctx.cr6.lt) goto loc_82736BC8;
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// bl 0x8273d670
	ctx.lr = 0x82736A48;
	sub_8273D670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82736a58
	if (!ctx.cr6.eq) goto loc_82736A58;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82736a60
	goto loc_82736A60;
loc_82736A58:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82736A60:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736bc8
	if (ctx.cr6.lt) goto loc_82736BC8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x8273c230
	ctx.lr = 0x82736A78;
	sub_8273C230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82736a88
	if (!ctx.cr6.eq) goto loc_82736A88;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82736a90
	goto loc_82736A90;
loc_82736A88:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82736A90:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736bc8
	if (ctx.cr6.lt) goto loc_82736BC8;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lwz r4,508(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x8273d8b8
	ctx.lr = 0x82736AAC;
	sub_8273D8B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82736abc
	if (!ctx.cr6.eq) goto loc_82736ABC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82736ac4
	goto loc_82736AC4;
loc_82736ABC:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82736AC4:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736bc8
	if (ctx.cr6.lt) goto loc_82736BC8;
	// li r5,1016
	ctx.r5.s64 = 1016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x826dfd40
	ctx.lr = 0x82736AE0;
	sub_826DFD40(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// sth r11,928(r31)
	PPC_STORE_U16(ctx.r31.u32 + 928, ctx.r11.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// bl 0x8273db90
	ctx.lr = 0x82736AFC;
	sub_8273DB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82736b0c
	if (!ctx.cr6.eq) goto loc_82736B0C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82736b14
	goto loc_82736B14;
loc_82736B0C:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82736B14:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82736bc8
	if (ctx.cr6.lt) goto loc_82736BC8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82206388
	ctx.lr = 0x82736B74;
	sub_82206388(ctx, base);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8267f920
	ctx.lr = 0x82736B80;
	sub_8267F920(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82734d20
	ctx.lr = 0x82736B8C;
	sub_82734D20(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82734d28
	ctx.lr = 0x82736BA4;
	sub_82734D28(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82736bbc
	if (ctx.cr6.eq) goto loc_82736BBC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82736BBC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82734d30
	ctx.lr = 0x82736BC8;
	sub_82734D30(ctx, base);
loc_82736BC8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82736be4
	goto loc_82736BE4;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_82736BE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,2000
	ctx.r1.s64 = ctx.r31.s64 + 2000;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736BF4"))) PPC_WEAK_FUNC(sub_82736BF4);
PPC_FUNC_IMPL(__imp__sub_82736BF4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736C00"))) PPC_WEAK_FUNC(sub_82736C00);
PPC_FUNC_IMPL(__imp__sub_82736C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82736C08;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// bgt cr6,0x82736d0c
	if (ctx.cr6.gt) goto loc_82736D0C;
	// ld r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 528);
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82736ca8
	if (ctx.cr6.lt) goto loc_82736CA8;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82736d9c
	if (!ctx.cr6.gt) goto loc_82736D9C;
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82736ca8
	if (ctx.cr6.lt) goto loc_82736CA8;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r29,r9
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x82736ca8
	if (!ctx.cr6.lt) goto loc_82736CA8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82736ca0
	if (ctx.cr6.gt) goto loc_82736CA0;
	// bl 0x826df680
	ctx.lr = 0x82736C9C;
	sub_826DF680(ctx, base);
	// b 0x82736cac
	goto loc_82736CAC;
loc_82736CA0:
	// bl 0x826de940
	ctx.lr = 0x82736CA4;
	sub_826DE940(ctx, base);
	// b 0x82736cac
	goto loc_82736CAC;
loc_82736CA8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82736CAC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82736ccc
	if (ctx.cr6.eq) goto loc_82736CCC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82736CCC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82736d18
	if (!ctx.cr6.lt) goto loc_82736D18;
loc_82736CEC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82736CF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82736d0c
	if (ctx.cr6.eq) goto loc_82736D0C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82736D0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82736D18:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82736cec
	if (ctx.cr6.lt) goto loc_82736CEC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// subf r5,r30,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r30.s64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82736cf0
	if (ctx.cr6.lt) goto loc_82736CF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82736d8c
	if (ctx.cr6.eq) goto loc_82736D8C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82736D8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r29,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r29.u64);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_82736D9C:
	// lwz r9,536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 528);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82736dbc
	if (ctx.cr6.lt) goto loc_82736DBC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82736DBC:
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r8,r29,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736DE0"))) PPC_WEAK_FUNC(sub_82736DE0);
PPC_FUNC_IMPL(__imp__sub_82736DE0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82736c00
	sub_82736C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736DF0"))) PPC_WEAK_FUNC(sub_82736DF0);
PPC_FUNC_IMPL(__imp__sub_82736DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82736DF8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82736E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273d5f0
	ctx.lr = 0x82736E48;
	sub_8273D5F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// beq cr6,0x82736e5c
	if (ctx.cr6.eq) goto loc_82736E5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82736e64
	goto loc_82736E64;
loc_82736E5C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82736E64:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82736e88
	goto loc_82736E88;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_82736E88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82736e98
	if (ctx.cr6.lt) goto loc_82736E98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827369b8
	ctx.lr = 0x82736E98;
	sub_827369B8(ctx, base);
loc_82736E98:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736EA0"))) PPC_WEAK_FUNC(sub_82736EA0);
PPC_FUNC_IMPL(__imp__sub_82736EA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736EB0"))) PPC_WEAK_FUNC(sub_82736EB0);
PPC_FUNC_IMPL(__imp__sub_82736EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x82736EC8;
	sub_8273AAD0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8273ad70
	ctx.lr = 0x82736ED0;
	sub_8273AD70(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82734d40
	ctx.lr = 0x82736ED8;
	sub_82734D40(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x8273e510
	ctx.lr = 0x82736EE0;
	sub_8273E510(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11368
	ctx.r11.s64 = ctx.r11.s64 + 11368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ae28
	ctx.lr = 0x82736EF4;
	sub_8273AE28(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736F38"))) PPC_WEAK_FUNC(sub_82736F38);
PPC_FUNC_IMPL(__imp__sub_82736F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11368
	ctx.r11.s64 = ctx.r11.s64 + 11368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82736428
	ctx.lr = 0x82736F64;
	sub_82736428(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x8273e478
	ctx.lr = 0x82736F6C;
	sub_8273E478(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82734cc0
	ctx.lr = 0x82736F74;
	sub_82734CC0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8273ad48
	ctx.lr = 0x82736F7C;
	sub_8273AD48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x82736F84;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736fa4
	if (ctx.cr6.eq) goto loc_82736FA4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x82537f08
	ctx.lr = 0x82736FA0;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82736FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736FC0"))) PPC_WEAK_FUNC(sub_82736FC0);
PPC_FUNC_IMPL(__imp__sub_82736FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736FD0"))) PPC_WEAK_FUNC(sub_82736FD0);
PPC_FUNC_IMPL(__imp__sub_82736FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273e660
	ctx.lr = 0x82736FE8;
	sub_8273E660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737020"))) PPC_WEAK_FUNC(sub_82737020);
PPC_FUNC_IMPL(__imp__sub_82737020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x82737028;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r26,208
	ctx.r30.s64 = ctx.r26.s64 + 208;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r18,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r18.u32);
	// lwz r3,672(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 672);
	// bl 0x8273f998
	ctx.lr = 0x82737068;
	sub_8273F998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737078
	if (!ctx.cr6.eq) goto loc_82737078;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82737080
	goto loc_82737080;
loc_82737078:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_82737080:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// blt cr6,0x827370f8
	if (ctx.cr6.lt) goto loc_827370F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827370ac
	if (!ctx.cr6.eq) goto loc_827370AC;
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16387
	ctx.r19.u64 = ctx.r19.u64 | 16387;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x827370f8
	goto loc_827370F8;
loc_827370AC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x827370f8
	if (ctx.cr6.lt) goto loc_827370F8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827370D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827370F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827370F8:
	// stw r18,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r18.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82737154
	if (ctx.cr6.lt) goto loc_82737154;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,672(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 672);
	// bl 0x8273f9c0
	ctx.lr = 0x82737110;
	sub_8273F9C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737120
	if (!ctx.cr6.eq) goto loc_82737120;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82737128
	goto loc_82737128;
loc_82737120:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_82737128:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82737154
	if (ctx.cr6.lt) goto loc_82737154;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82737158
	if (!ctx.cr6.eq) goto loc_82737158;
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16387
	ctx.r19.u64 = ctx.r19.u64 | 16387;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x827373e0
	goto loc_827373E0;
loc_82737154:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82737158:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x827373e0
	if (ctx.cr6.lt) goto loc_827373E0;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r23,r11,11652
	ctx.r23.s64 = ctx.r11.s64 + 11652;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r25,r11,11620
	ctx.r25.s64 = ctx.r11.s64 + 11620;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r22,r11,11596
	ctx.r22.s64 = ctx.r11.s64 + 11596;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r21,r11,11576
	ctx.r21.s64 = ctx.r11.s64 + 11576;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r11,11548
	ctx.r20.s64 = ctx.r11.s64 + 11548;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r24,r11,11516
	ctx.r24.s64 = ctx.r11.s64 + 11516;
loc_82737194:
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8273738c
	if (!ctx.cr6.lt) goto loc_8273738C;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827372e0
	if (!ctx.cr6.eq) goto loc_827372E0;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82914c28
	ctx.lr = 0x827371DC;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737208
	if (!ctx.cr6.eq) goto loc_82737208;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82737378
	goto loc_82737378;
loc_82737208:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82914c28
	ctx.lr = 0x82737218;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737244
	if (!ctx.cr6.eq) goto loc_82737244;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82737378
	goto loc_82737378;
loc_82737244:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82914c28
	ctx.lr = 0x82737254;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737280
	if (!ctx.cr6.eq) goto loc_82737280;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273727C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82737378
	goto loc_82737378;
loc_82737280:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82914c28
	ctx.lr = 0x82737290;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737378
	if (!ctx.cr6.eq) goto loc_82737378;
	// addi r29,r26,208
	ctx.r29.s64 = ctx.r26.s64 + 208;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827372B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826e2100
	ctx.lr = 0x827372B4;
	sub_826E2100(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737378
	if (!ctx.cr6.eq) goto loc_82737378;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827372DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82737378
	goto loc_82737378;
loc_827372E0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82737378
	if (!ctx.cr6.eq) goto loc_82737378;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82914c28
	ctx.lr = 0x827372FC;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737320
	if (!ctx.cr6.eq) goto loc_82737320;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82737374
	goto loc_82737374;
loc_82737320:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82914c28
	ctx.lr = 0x82737330;
	sub_82914C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737378
	if (!ctx.cr6.eq) goto loc_82737378;
	// addi r29,r26,208
	ctx.r29.s64 = ctx.r26.s64 + 208;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737378
	if (!ctx.cr6.eq) goto loc_82737378;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82737374:
	// bctrl 
	ctx.lr = 0x82737378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737378:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82737194
	goto loc_82737194;
loc_8273738C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x827373e0
	if (ctx.cr6.lt) goto loc_827373E0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,672(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 672);
	// bl 0x8273f8d0
	ctx.lr = 0x827373A0;
	sub_8273F8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827373b0
	if (!ctx.cr6.eq) goto loc_827373B0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x827373b8
	goto loc_827373B8;
loc_827373B0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_827373B8:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x827373e0
	if (ctx.cr6.lt) goto loc_827373E0;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827373E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827373E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x827373fc
	goto loc_827373FC;
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16389
	ctx.r19.u64 = ctx.r19.u64 | 16389;
	// stw r19,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
loc_827373FC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737408"))) PPC_WEAK_FUNC(sub_82737408);
PPC_FUNC_IMPL(__imp__sub_82737408) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737418"))) PPC_WEAK_FUNC(sub_82737418);
PPC_FUNC_IMPL(__imp__sub_82737418) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82737450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737460"))) PPC_WEAK_FUNC(sub_82737460);
PPC_FUNC_IMPL(__imp__sub_82737460) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827374A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827374B8"))) PPC_WEAK_FUNC(sub_827374B8);
PPC_FUNC_IMPL(__imp__sub_827374B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827374C0;
	__savegprlr_29(ctx, base);
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
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827374DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82737590
	if (ctx.cr6.lt) goto loc_82737590;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737510
	if (ctx.cr6.eq) goto loc_82737510;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
loc_82737510:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x82537e70
	ctx.lr = 0x82737520;
	sub_82537E70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82737538
	if (!ctx.cr6.eq) goto loc_82737538;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82737590
	goto loc_82737590;
loc_82737538:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273755c
	if (ctx.cr6.eq) goto loc_8273755C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8273755C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82737590
	if (ctx.cr6.lt) goto loc_82737590;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82737588
	if (ctx.cr6.eq) goto loc_82737588;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82737588:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x827375a4
	if (!ctx.cr6.lt) goto loc_827375A4;
loc_82737590:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827375A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827375A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827375B0"))) PPC_WEAK_FUNC(sub_827375B0);
PPC_FUNC_IMPL(__imp__sub_827375B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827375e4
	if (ctx.cr6.eq) goto loc_827375E4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x82537f08
	ctx.lr = 0x827375DC;
	sub_82537F08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_827375E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827375F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273760C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737620;
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
}

__attribute__((alias("__imp__sub_82737640"))) PPC_WEAK_FUNC(sub_82737640);
PPC_FUNC_IMPL(__imp__sub_82737640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82737648;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273766C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,672
	ctx.r29.s64 = ctx.r30.s64 + 672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8273eee8
	ctx.lr = 0x82737698;
	sub_8273EEE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// bne cr6,0x8273770c
	if (!ctx.cr6.eq) goto loc_8273770C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 608, ctx.r30.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827376CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827376f8
	if (ctx.cr6.eq) goto loc_827376F8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827376EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827376f8
	if (ctx.cr6.eq) goto loc_827376F8;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_827376F8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8273ef78
	ctx.lr = 0x82737704;
	sub_8273EF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8273770C:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stw r28,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
	// bne cr6,0x82737804
	if (!ctx.cr6.eq) goto loc_82737804;
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8273efa8
	ctx.lr = 0x82737758;
	sub_8273EFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737804
	if (!ctx.cr6.eq) goto loc_82737804;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// ble cr6,0x82737804
	if (!ctx.cr6.gt) goto loc_82737804;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8273ec50
	ctx.lr = 0x8273777C;
	sub_8273EC50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737804
	if (!ctx.cr6.eq) goto loc_82737804;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827377A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r28.u32);
	// stw r28,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r28.u32);
	// stw r28,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r28.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x8273eee8
	ctx.lr = 0x827377BC;
	sub_8273EEE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737804
	if (!ctx.cr6.eq) goto loc_82737804;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r30.u32);
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8273efa8
	ctx.lr = 0x827377FC;
	sub_8273EFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82737804:
	// sth r28,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r28.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737908
	if (!ctx.cr6.eq) goto loc_82737908;
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273782C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82206388
	ctx.lr = 0x82737850;
	sub_82206388(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8267f920
	ctx.lr = 0x8273785C;
	sub_8267F920(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208f58
	ctx.lr = 0x82737868;
	sub_82208F58(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82734d20
	ctx.lr = 0x8273787C;
	sub_82734D20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82734d28
	ctx.lr = 0x827378A0;
	sub_82734D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243ab88
	ctx.lr = 0x827378B0;
	sub_8243AB88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa258
	ctx.lr = 0x827378BC;
	sub_821FA258(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8273ebf8
	ctx.lr = 0x827378C8;
	sub_8273EBF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737908
	if (!ctx.cr6.eq) goto loc_82737908;
	// lhz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827378ec
	if (!ctx.cr6.eq) goto loc_827378EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_827378EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737908
	if (!ctx.cr6.eq) goto loc_82737908;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8273ec20
	ctx.lr = 0x82737900;
	sub_8273EC20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82737908:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737934
	if (ctx.cr6.eq) goto loc_82737934;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x8273792c
	if (!ctx.cr6.gt) goto loc_8273792C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8273792c
	if (ctx.cr6.gt) goto loc_8273792C;
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,10416
	ctx.r28.u64 = ctx.r28.u64 | 10416;
	// b 0x82737934
	goto loc_82737934;
loc_8273792C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
loc_82737934:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82737958
	goto loc_82737958;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_82737958:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737960"))) PPC_WEAK_FUNC(sub_82737960);
PPC_FUNC_IMPL(__imp__sub_82737960) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737970"))) PPC_WEAK_FUNC(sub_82737970);
PPC_FUNC_IMPL(__imp__sub_82737970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827379A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827379B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827379E0"))) PPC_WEAK_FUNC(sub_827379E0);
PPC_FUNC_IMPL(__imp__sub_827379E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827379E8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,672
	ctx.r3.s64 = ctx.r30.s64 + 672;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737a34
	if (ctx.cr6.eq) goto loc_82737A34;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8273ec50
	ctx.lr = 0x82737A14;
	sub_8273EC50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82737a28
	goto loc_82737A28;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82737A28:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r29.u32);
	// b 0x82737a38
	goto loc_82737A38;
loc_82737A34:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82737A38:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82737a58
	if (ctx.cr6.eq) goto loc_82737A58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
loc_82737A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r29.u32);
	// stw r29,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// stw r29,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737A70"))) PPC_WEAK_FUNC(sub_82737A70);
PPC_FUNC_IMPL(__imp__sub_82737A70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737A88"))) PPC_WEAK_FUNC(sub_82737A88);
PPC_FUNC_IMPL(__imp__sub_82737A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82737A90;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// stw r29,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// stw r29,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// lwz r3,672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// bl 0x82740350
	ctx.lr = 0x82737AC8;
	sub_82740350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82737ad8
	if (!ctx.cr6.eq) goto loc_82737AD8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82737ae0
	goto loc_82737AE0;
loc_82737AD8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_82737AE0:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82737af0
	if (ctx.cr6.lt) goto loc_82737AF0;
	// stw r29,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r29.u32);
loc_82737AF0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82737b10
	goto loc_82737B10;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_82737B10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82737b20
	if (ctx.cr6.eq) goto loc_82737B20;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82737B20:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737B2C"))) PPC_WEAK_FUNC(sub_82737B2C);
PPC_FUNC_IMPL(__imp__sub_82737B2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737B40"))) PPC_WEAK_FUNC(sub_82737B40);
PPC_FUNC_IMPL(__imp__sub_82737B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de89c
	ctx.lr = 0x82737B48;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581080
	ctx.lr = 0x82737B80;
	sub_82581080(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221108
	ctx.lr = 0x82737B8C;
	sub_82221108(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r24,r3,29,3,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bne cr6,0x82737ba4
	if (!ctx.cr6.eq) goto loc_82737BA4;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82737BA4:
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// divwu r20,r21,r11
	ctx.r20.u32 = ctx.r21.u32 / ctx.r11.u32;
	// twllei r11,0
	// divwu r25,r10,r11
	ctx.r25.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f31,11672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11672);
	// lfd f30,4080(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4080);
loc_82737BD8:
	// lwz r11,676(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737da0
	if (ctx.cr6.eq) goto loc_82737DA0;
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x82737da0
	if (ctx.cr6.lt) goto loc_82737DA0;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r30,r11,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r11.s64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r10,r25,r24
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// lwz r3,672(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82740548
	ctx.lr = 0x82737C58;
	sub_82740548(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82737d94
	if (ctx.cr6.eq) goto loc_82737D94;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82737cb4
	if (ctx.cr6.lt) goto loc_82737CB4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82737cb4
	if (!ctx.cr6.eq) goto loc_82737CB4;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lis r10,14470
	ctx.r10.s64 = 948305920;
	// ori r10,r10,22859
	ctx.r10.u64 = ctx.r10.u64 | 22859;
	// lis r9,13421
	ctx.r9.s64 = 879558656;
	// ori r9,r9,50646
	ctx.r9.u64 = ctx.r9.u64 | 50646;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// mulhd r11,r11,r10
	ctx.r11.s64 = (int64_t)((__int128)ctx.r11.s64 * (__int128)ctx.r10.s64 >> 64);
	// sradi r11,r11,11
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 11;
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82737CB4:
	// lwz r11,676(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 676);
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,676(r27)
	PPC_STORE_U32(ctx.r27.u32 + 676, ctx.r11.u32);
	// beq cr6,0x82737d80
	if (ctx.cr6.eq) goto loc_82737D80;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_82737CFC:
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82737d80
	if (!ctx.cr6.lt) goto loc_82737D80;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r6,r9,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82737d48
	if (ctx.cr6.eq) goto loc_82737D48;
	// clrldi r9,r9,41
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFF;
	// std r9,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmsub f0,f0,f31,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64;
	// b 0x82737d5c
	goto loc_82737D5C;
loc_82737D48:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
loc_82737D5C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82737cfc
	goto loc_82737CFC;
loc_82737D80:
	// mullw r11,r25,r24
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82737bd8
	goto loc_82737BD8;
loc_82737D94:
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
loc_82737DA0:
	// li r11,16
	ctx.r11.s64 = 16;
	// subfc r11,r11,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82737dd0
	goto loc_82737DD0;
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
loc_82737DD0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826de8ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737DE4"))) PPC_WEAK_FUNC(sub_82737DE4);
PPC_FUNC_IMPL(__imp__sub_82737DE4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82737DF0"))) PPC_WEAK_FUNC(sub_82737DF0);
PPC_FUNC_IMPL(__imp__sub_82737DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82737DF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// bgt cr6,0x82737eec
	if (ctx.cr6.gt) goto loc_82737EEC;
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82737e88
	if (ctx.cr6.lt) goto loc_82737E88;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82737f7c
	if (!ctx.cr6.gt) goto loc_82737F7C;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82737e88
	if (ctx.cr6.lt) goto loc_82737E88;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82737e88
	if (!ctx.cr6.lt) goto loc_82737E88;
	// subf r30,r29,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82737e80
	if (ctx.cr6.gt) goto loc_82737E80;
	// bl 0x826df680
	ctx.lr = 0x82737E7C;
	sub_826DF680(ctx, base);
	// b 0x82737e8c
	goto loc_82737E8C;
loc_82737E80:
	// bl 0x826de940
	ctx.lr = 0x82737E84;
	sub_826DE940(ctx, base);
	// b 0x82737e8c
	goto loc_82737E8C;
loc_82737E88:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82737E8C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82737eac
	if (ctx.cr6.eq) goto loc_82737EAC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737EAC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82737ef8
	if (!ctx.cr6.lt) goto loc_82737EF8;
loc_82737ECC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82737ED0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82737eec
	if (ctx.cr6.eq) goto loc_82737EEC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737EEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82737EF8:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82737ecc
	if (ctx.cr6.lt) goto loc_82737ECC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r5,r30,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r30.s64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82737ed0
	if (ctx.cr6.lt) goto loc_82737ED0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82737f6c
	if (ctx.cr6.eq) goto loc_82737F6C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82737F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737F6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_82737F7C:
	// lwz r10,668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82737f98
	if (!ctx.cr6.lt) goto loc_82737F98;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82737F98:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737FC0"))) PPC_WEAK_FUNC(sub_82737FC0);
PPC_FUNC_IMPL(__imp__sub_82737FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82737FC8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r25,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r25.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,124
	ctx.r29.s64 = ctx.r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581080
	ctx.lr = 0x82738004;
	sub_82581080(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221108
	ctx.lr = 0x82738010;
	sub_82221108(ctx, base);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// twllei r11,0
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82738034
	if (!ctx.cr6.lt) goto loc_82738034;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82738034:
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82738114
	if (ctx.cr6.lt) goto loc_82738114;
	// lwz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82738068
	if (!ctx.cr6.gt) goto loc_82738068;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82737b40
	ctx.lr = 0x82738060;
	sub_82737B40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82738068:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82738114
	if (ctx.cr6.lt) goto loc_82738114;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82738114
	if (!ctx.cr6.eq) goto loc_82738114;
loc_8273807C:
	// addi r29,r30,676
	ctx.r29.s64 = ctx.r30.s64 + 676;
	// lwz r3,672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82740390
	ctx.lr = 0x8273808C;
	sub_82740390(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827380a0
	if (!ctx.cr6.eq) goto loc_827380A0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273807c
	if (ctx.cr6.eq) goto loc_8273807C;
loc_827380A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827380d4
	if (!ctx.cr6.eq) goto loc_827380D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x827380cc
	if (ctx.cr6.lt) goto loc_827380CC;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82737b40
	ctx.lr = 0x827380C4;
	sub_82737B40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_827380CC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82738068
	goto loc_82738068;
loc_827380D4:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8273810c
	if (ctx.cr6.eq) goto loc_8273810C;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8273810c
	if (ctx.cr6.eq) goto loc_8273810C;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x82738100
	if (!ctx.cr6.gt) goto loc_82738100;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x82738100
	if (ctx.cr6.gt) goto loc_82738100;
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,10416
	ctx.r28.u64 = ctx.r28.u64 | 10416;
	// b 0x82738110
	goto loc_82738110;
loc_82738100:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x82738110
	goto loc_82738110;
loc_8273810C:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82738110:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82738114:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82738138
	goto loc_82738138;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r25,196(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
loc_82738138:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82738188
	if (ctx.cr6.lt) goto loc_82738188;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738188
	if (ctx.cr6.eq) goto loc_82738188;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82738188:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738194"))) PPC_WEAK_FUNC(sub_82738194);
PPC_FUNC_IMPL(__imp__sub_82738194) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827381A0"))) PPC_WEAK_FUNC(sub_827381A0);
PPC_FUNC_IMPL(__imp__sub_827381A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x82737df0
	sub_82737DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827381B0"))) PPC_WEAK_FUNC(sub_827381B0);
PPC_FUNC_IMPL(__imp__sub_827381B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x827381C8;
	sub_8273AAD0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8273ad70
	ctx.lr = 0x827381D0;
	sub_8273AD70(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82734e78
	ctx.lr = 0x827381D8;
	sub_82734E78(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x827407e0
	ctx.lr = 0x827381E0;
	sub_827407E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11680
	ctx.r11.s64 = ctx.r11.s64 + 11680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273e660
	ctx.lr = 0x827381F4;
	sub_8273E660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738228"))) PPC_WEAK_FUNC(sub_82738228);
PPC_FUNC_IMPL(__imp__sub_82738228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11680
	ctx.r11.s64 = ctx.r11.s64 + 11680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827375b0
	ctx.lr = 0x82738254;
	sub_827375B0(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x827406d8
	ctx.lr = 0x8273825C;
	sub_827406D8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82734e10
	ctx.lr = 0x82738264;
	sub_82734E10(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8273ad48
	ctx.lr = 0x8273826C;
	sub_8273AD48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x82738274;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738294
	if (ctx.cr6.eq) goto loc_82738294;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x82537f08
	ctx.lr = 0x82738290;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82738294:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827382B0"))) PPC_WEAK_FUNC(sub_827382B0);
PPC_FUNC_IMPL(__imp__sub_827382B0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827382C0"))) PPC_WEAK_FUNC(sub_827382C0);
PPC_FUNC_IMPL(__imp__sub_827382C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// std r11,304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 304, ctx.r11.u64);
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stfs f13,340(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738320"))) PPC_WEAK_FUNC(sub_82738320);
PPC_FUNC_IMPL(__imp__sub_82738320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82738330"))) PPC_WEAK_FUNC(sub_82738330);
PPC_FUNC_IMPL(__imp__sub_82738330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82738338;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827383b8
	if (ctx.cr6.lt) goto loc_827383B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827383b8
	if (ctx.cr6.lt) goto loc_827383B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827383B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827383B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827383C0"))) PPC_WEAK_FUNC(sub_827383C0);
PPC_FUNC_IMPL(__imp__sub_827383C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827383E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827383FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738464;
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
}

__attribute__((alias("__imp__sub_82738480"))) PPC_WEAK_FUNC(sub_82738480);
PPC_FUNC_IMPL(__imp__sub_82738480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82738488;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827384c0
	if (ctx.cr6.eq) goto loc_827384C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827384BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_827384C0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827384e0
	if (ctx.cr6.eq) goto loc_827384E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827384DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_827384E0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738500
	if (ctx.cr6.eq) goto loc_82738500;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827384FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82738500:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738520
	if (ctx.cr6.eq) goto loc_82738520;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273851C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82738520:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82738540
	if (ctx.cr6.eq) goto loc_82738540;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273853C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82738540:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82738560
	if (ctx.cr6.eq) goto loc_82738560;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273855C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_82738560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738570"))) PPC_WEAK_FUNC(sub_82738570);
PPC_FUNC_IMPL(__imp__sub_82738570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82738578;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827385b0
	if (ctx.cr6.eq) goto loc_827385B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827385AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_827385B0:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827385d0
	if (ctx.cr6.eq) goto loc_827385D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827385CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_827385D0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827385f0
	if (ctx.cr6.eq) goto loc_827385F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827385EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_827385F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738610
	if (ctx.cr6.eq) goto loc_82738610;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273860C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82738610:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82738630
	if (ctx.cr6.eq) goto loc_82738630;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273862C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82738630:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82738650
	if (ctx.cr6.eq) goto loc_82738650;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273864C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
loc_82738650:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738660"))) PPC_WEAK_FUNC(sub_82738660);
PPC_FUNC_IMPL(__imp__sub_82738660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82738668;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lfs f31,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827386ac
	if (ctx.cr6.eq) goto loc_827386AC;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827386A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827386AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827386e4
	if (ctx.cr6.eq) goto loc_827386E4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827386e4
	if (ctx.cr6.lt) goto loc_827386E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822219e0
	ctx.lr = 0x827386C4;
	sub_822219E0(ctx, base);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827386E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827386E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82738710
	if (ctx.cr6.eq) goto loc_82738710;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82738710
	if (ctx.cr6.lt) goto loc_82738710;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273870C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82738710:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827387cc
	if (ctx.cr6.eq) goto loc_827387CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827387cc
	if (ctx.cr6.lt) goto loc_827387CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82581080
	ctx.lr = 0x82738728;
	sub_82581080(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82221108
	ctx.lr = 0x82738734;
	sub_82221108(ctx, base);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82738744
	if (!ctx.cr6.eq) goto loc_82738744;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x82738750
	goto loc_82738750;
loc_82738744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82221108
	ctx.lr = 0x8273874C;
	sub_82221108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82738750:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r31,r30,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82581078
	ctx.lr = 0x8273875C;
	sub_82581078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r8,r11,r31
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// twllei r7,0
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// mulli r10,r11,8000
	ctx.r10.s64 = ctx.r11.s64 * 8000;
	// divwu r10,r10,r7
	ctx.r10.u32 = ctx.r10.u32 / ctx.r7.u32;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r10,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r10.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x82740d10
	ctx.lr = 0x827387C8;
	sub_82740D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827387CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82738850
	if (ctx.cr6.eq) goto loc_82738850;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82738850
	if (ctx.cr6.lt) goto loc_82738850;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581080
	ctx.lr = 0x827387E4;
	sub_82581080(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82738848
	if (!ctx.cr6.eq) goto loc_82738848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581078
	ctx.lr = 0x827387F8;
	sub_82581078(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82738848
	if (!ctx.cr6.eq) goto loc_82738848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581080
	ctx.lr = 0x8273880C;
	sub_82581080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581078
	ctx.lr = 0x82738818;
	sub_82581078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,31,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFF;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x82740d10
	ctx.lr = 0x82738840;
	sub_82740D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82738850
	goto loc_82738850;
loc_82738848:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
loc_82738850:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82738874
	if (ctx.cr6.eq) goto loc_82738874;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82738890
	if (ctx.cr6.lt) goto loc_82738890;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,11832
	ctx.r4.s64 = ctx.r11.s64 + 11832;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// bl 0x82aea31c
	ctx.lr = 0x82738874;
	__imp__DbgPrint(ctx, base);
loc_82738874:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82738894
	if (ctx.cr6.lt) goto loc_82738894;
	// stfs f31,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 336, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82738890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82738894:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827388A0"))) PPC_WEAK_FUNC(sub_827388A0);
PPC_FUNC_IMPL(__imp__sub_827388A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827388A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827388e0
	if (ctx.cr6.eq) goto loc_827388E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827388D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82738970
	if (ctx.cr6.lt) goto loc_82738970;
loc_827388E0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738900
	if (ctx.cr6.eq) goto loc_82738900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827388FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82738900:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82738970
	if (ctx.cr6.lt) goto loc_82738970;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738928
	if (ctx.cr6.eq) goto loc_82738928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82738928:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82738970
	if (ctx.cr6.lt) goto loc_82738970;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82740c58
	ctx.lr = 0x82738938;
	sub_82740C58(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82740c58
	ctx.lr = 0x82738940;
	sub_82740C58(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82740c58
	ctx.lr = 0x82738948;
	sub_82740C58(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r29,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r29.u64);
	// std r29,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r29.u64);
	// std r29,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r29.u64);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_82738970:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738980"))) PPC_WEAK_FUNC(sub_82738980);
PPC_FUNC_IMPL(__imp__sub_82738980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,340(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738990"))) PPC_WEAK_FUNC(sub_82738990);
PPC_FUNC_IMPL(__imp__sub_82738990) {
	PPC_FUNC_PROLOGUE();
	// ld r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827389A0"))) PPC_WEAK_FUNC(sub_827389A0);
PPC_FUNC_IMPL(__imp__sub_827389A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827389CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// std r30,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827389EC;
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
	ctx.lr = 0x82738A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82738A20"))) PPC_WEAK_FUNC(sub_82738A20);
PPC_FUNC_IMPL(__imp__sub_82738A20) {
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
	// bl 0x8273aad0
	ctx.lr = 0x82738A38;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,11872
	ctx.r11.s64 = ctx.r11.s64 + 11872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82740c70
	ctx.lr = 0x82738A4C;
	sub_82740C70(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82740c70
	ctx.lr = 0x82738A54;
	sub_82740C70(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82740c70
	ctx.lr = 0x82738A5C;
	sub_82740C70(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// std r11,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r11.u64);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738AD0"))) PPC_WEAK_FUNC(sub_82738AD0);
PPC_FUNC_IMPL(__imp__sub_82738AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82738AD8;
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738b1c
	if (ctx.cr6.eq) goto loc_82738B1C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738b14
	if (ctx.cr6.eq) goto loc_82738B14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738B14:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82738B1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738b4c
	if (ctx.cr6.eq) goto loc_82738B4C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738b44
	if (ctx.cr6.eq) goto loc_82738B44;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738B44:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82738B4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82738b7c
	if (ctx.cr6.eq) goto loc_82738B7C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738b74
	if (ctx.cr6.eq) goto loc_82738B74;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738B74:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82738B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738B88"))) PPC_WEAK_FUNC(sub_82738B88);
PPC_FUNC_IMPL(__imp__sub_82738B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82738B90;
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738bd4
	if (ctx.cr6.eq) goto loc_82738BD4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738bcc
	if (ctx.cr6.eq) goto loc_82738BCC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738BCC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82738BD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738c04
	if (ctx.cr6.eq) goto loc_82738C04;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738bfc
	if (ctx.cr6.eq) goto loc_82738BFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738BFC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82738C04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82738c34
	if (ctx.cr6.eq) goto loc_82738C34;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738c2c
	if (ctx.cr6.eq) goto loc_82738C2C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738C2C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82738C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738C40"))) PPC_WEAK_FUNC(sub_82738C40);
PPC_FUNC_IMPL(__imp__sub_82738C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82738C48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738c80
	if (ctx.cr6.eq) goto loc_82738C80;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82738C80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82738ca4
	if (ctx.cr6.eq) goto loc_82738CA4;
	// addi r31,r30,140
	ctx.r31.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82738CA4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82738cc8
	if (ctx.cr6.eq) goto loc_82738CC8;
	// addi r31,r30,212
	ctx.r31.s64 = ctx.r30.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82738CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738CD8"))) PPC_WEAK_FUNC(sub_82738CD8);
PPC_FUNC_IMPL(__imp__sub_82738CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82738cfc
	if (ctx.cr6.gt) goto loc_82738CFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82738d10
	if (ctx.cr6.gt) goto loc_82738D10;
loc_82738CFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82738d20
	if (ctx.cr6.lt) goto loc_82738D20;
loc_82738D10:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82738D20:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738D30"))) PPC_WEAK_FUNC(sub_82738D30);
PPC_FUNC_IMPL(__imp__sub_82738D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82738D38;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bne cr6,0x82738d6c
	if (!ctx.cr6.eq) goto loc_82738D6C;
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
loc_82738D6C:
	// ld r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ld r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f0.u64);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// ld r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738DD0"))) PPC_WEAK_FUNC(sub_82738DD0);
PPC_FUNC_IMPL(__imp__sub_82738DD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738DE8"))) PPC_WEAK_FUNC(sub_82738DE8);
PPC_FUNC_IMPL(__imp__sub_82738DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ori r10,r10,52429
	ctx.r10.u64 = ctx.r10.u64 | 52429;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// std r9,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r9.u64);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mulhwu r10,r11,r10
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82738e64
	if (!ctx.cr0.eq) goto loc_82738E64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738E64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82738E98"))) PPC_WEAK_FUNC(sub_82738E98);
PPC_FUNC_IMPL(__imp__sub_82738E98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738EB0"))) PPC_WEAK_FUNC(sub_82738EB0);
PPC_FUNC_IMPL(__imp__sub_82738EB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738EE8"))) PPC_WEAK_FUNC(sub_82738EE8);
PPC_FUNC_IMPL(__imp__sub_82738EE8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826fc3c8
	ctx.lr = 0x82738EFC;
	sub_826FC3C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826fce58
	ctx.lr = 0x82738F04;
	sub_826FCE58(ctx, base);
	// lis r10,-7341
	ctx.r10.s64 = -481099776;
	// lis r9,8388
	ctx.r9.s64 = 549715968;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r10,r10,63439
	ctx.r10.u64 = ctx.r10.u64 | 63439;
	// ori r9,r9,39845
	ctx.r9.u64 = ctx.r9.u64 | 39845;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mulhd r11,r11,r8
	ctx.r11.s64 = (int64_t)((__int128)ctx.r11.s64 * (__int128)ctx.r8.s64 >> 64);
	// rotldi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// sradi r11,r11,7
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 7;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rldicl r9,r11,1,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// divd r3,r10,r11
	ctx.r3.s64 = ctx.r10.s64 / ctx.r11.s64;
	// tdllei r11,0
	// tdlgei r9,-1
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738F60"))) PPC_WEAK_FUNC(sub_82738F60);
PPC_FUNC_IMPL(__imp__sub_82738F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// ld r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82738F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738FB0"))) PPC_WEAK_FUNC(sub_82738FB0);
PPC_FUNC_IMPL(__imp__sub_82738FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11872
	ctx.r11.s64 = ctx.r11.s64 + 11872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827383c0
	ctx.lr = 0x82738FDC;
	sub_827383C0(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82740cd0
	ctx.lr = 0x82738FE4;
	sub_82740CD0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82740cd0
	ctx.lr = 0x82738FEC;
	sub_82740CD0(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82740cd0
	ctx.lr = 0x82738FF4;
	sub_82740CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x82738FFC;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273901c
	if (ctx.cr6.eq) goto loc_8273901C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// bl 0x82537f08
	ctx.lr = 0x82739018;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8273901C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739038"))) PPC_WEAK_FUNC(sub_82739038);
PPC_FUNC_IMPL(__imp__sub_82739038) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739048"))) PPC_WEAK_FUNC(sub_82739048);
PPC_FUNC_IMPL(__imp__sub_82739048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827423b8
	ctx.lr = 0x82739060;
	sub_827423B8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,12000
	ctx.r11.s64 = ctx.r11.s64 + 12000;
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

__attribute__((alias("__imp__sub_82739088"))) PPC_WEAK_FUNC(sub_82739088);
PPC_FUNC_IMPL(__imp__sub_82739088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12000
	ctx.r11.s64 = ctx.r11.s64 + 12000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82744f68
	ctx.lr = 0x827390B4;
	sub_82744F68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827390d4
	if (ctx.cr6.eq) goto loc_827390D4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// bl 0x82537f08
	ctx.lr = 0x827390D0;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827390D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827390F0"))) PPC_WEAK_FUNC(sub_827390F0);
PPC_FUNC_IMPL(__imp__sub_827390F0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739100"))) PPC_WEAK_FUNC(sub_82739100);
PPC_FUNC_IMPL(__imp__sub_82739100) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739120"))) PPC_WEAK_FUNC(sub_82739120);
PPC_FUNC_IMPL(__imp__sub_82739120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82739128;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739164
	if (ctx.cr6.lt) goto loc_82739164;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82739164:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739188"))) PPC_WEAK_FUNC(sub_82739188);
PPC_FUNC_IMPL(__imp__sub_82739188) {
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
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827391A4;
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
}

__attribute__((alias("__imp__sub_827391B8"))) PPC_WEAK_FUNC(sub_827391B8);
PPC_FUNC_IMPL(__imp__sub_827391B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827391D8"))) PPC_WEAK_FUNC(sub_827391D8);
PPC_FUNC_IMPL(__imp__sub_827391D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827391F0"))) PPC_WEAK_FUNC(sub_827391F0);
PPC_FUNC_IMPL(__imp__sub_827391F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x827391F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8273923c
	if (ctx.cr6.lt) goto loc_8273923C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82739244
	if (!ctx.cr6.lt) goto loc_82739244;
loc_8273923C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82739244:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739260"))) PPC_WEAK_FUNC(sub_82739260);
PPC_FUNC_IMPL(__imp__sub_82739260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x82739278;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,12296
	ctx.r10.s64 = ctx.r11.s64 + 12296;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827392B8"))) PPC_WEAK_FUNC(sub_827392B8);
PPC_FUNC_IMPL(__imp__sub_827392B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12296
	ctx.r11.s64 = ctx.r11.s64 + 12296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827392EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x827392F4;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739314
	if (ctx.cr6.eq) goto loc_82739314;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82537f08
	ctx.lr = 0x82739310;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82739314:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739330"))) PPC_WEAK_FUNC(sub_82739330);
PPC_FUNC_IMPL(__imp__sub_82739330) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739340"))) PPC_WEAK_FUNC(sub_82739340);
PPC_FUNC_IMPL(__imp__sub_82739340) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x82537f08
	sub_82537F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739350"))) PPC_WEAK_FUNC(sub_82739350);
PPC_FUNC_IMPL(__imp__sub_82739350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82739358;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82739388
	if (ctx.cr6.lt) goto loc_82739388;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_82739388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739390"))) PPC_WEAK_FUNC(sub_82739390);
PPC_FUNC_IMPL(__imp__sub_82739390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827393c0
	if (ctx.cr6.eq) goto loc_827393C0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x82537f08
	ctx.lr = 0x827393C0;
	sub_82537F08(ctx, base);
loc_827393C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827393F0"))) PPC_WEAK_FUNC(sub_827393F0);
PPC_FUNC_IMPL(__imp__sub_827393F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739410"))) PPC_WEAK_FUNC(sub_82739410);
PPC_FUNC_IMPL(__imp__sub_82739410) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82739434
	if (ctx.cr6.eq) goto loc_82739434;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82739434
	if (!ctx.cr6.eq) goto loc_82739434;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
loc_82739434:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739448"))) PPC_WEAK_FUNC(sub_82739448);
PPC_FUNC_IMPL(__imp__sub_82739448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82739450;
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82739488
	if (ctx.cr6.eq) goto loc_82739488;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82739480:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x827394a0
	goto loc_827394A0;
loc_82739488:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82739480
	if (ctx.cr6.gt) goto loc_82739480;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_827394A0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826df680
	ctx.lr = 0x827394B8;
	sub_826DF680(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827394D8"))) PPC_WEAK_FUNC(sub_827394D8);
PPC_FUNC_IMPL(__imp__sub_827394D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x827394E0;
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82739518
	if (ctx.cr6.eq) goto loc_82739518;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82739510:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82739530
	goto loc_82739530;
loc_82739518:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82739510
	if (ctx.cr6.gt) goto loc_82739510;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82739530:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826df680
	ctx.lr = 0x82739548;
	sub_826DF680(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739568"))) PPC_WEAK_FUNC(sub_82739568);
PPC_FUNC_IMPL(__imp__sub_82739568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82739580"))) PPC_WEAK_FUNC(sub_82739580);
PPC_FUNC_IMPL(__imp__sub_82739580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739590"))) PPC_WEAK_FUNC(sub_82739590);
PPC_FUNC_IMPL(__imp__sub_82739590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827395A8"))) PPC_WEAK_FUNC(sub_827395A8);
PPC_FUNC_IMPL(__imp__sub_827395A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x827395C0;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,12400
	ctx.r10.s64 = ctx.r11.s64 + 12400;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827395F8"))) PPC_WEAK_FUNC(sub_827395F8);
PPC_FUNC_IMPL(__imp__sub_827395F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12400
	ctx.r11.s64 = ctx.r11.s64 + 12400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739634
	if (ctx.cr6.eq) goto loc_82739634;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x82537f08
	ctx.lr = 0x82739634;
	sub_82537F08(ctx, base);
loc_82739634:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8273ab18
	ctx.lr = 0x82739650;
	sub_8273AB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739668"))) PPC_WEAK_FUNC(sub_82739668);
PPC_FUNC_IMPL(__imp__sub_82739668) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// b 0x82537e70
	sub_82537E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739678"))) PPC_WEAK_FUNC(sub_82739678);
PPC_FUNC_IMPL(__imp__sub_82739678) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827396C8"))) PPC_WEAK_FUNC(sub_827396C8);
PPC_FUNC_IMPL(__imp__sub_827396C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x827396D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827396FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827397cc
	if (ctx.cr6.lt) goto loc_827397CC;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82537400
	ctx.lr = 0x82739728;
	sub_82537400(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82739774
	if (!ctx.cr6.eq) goto loc_82739774;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827397c8
	if (ctx.cr6.lt) goto loc_827397C8;
loc_82739754:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826fdc88
	ctx.lr = 0x82739760;
	sub_826FDC88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273977c
	if (ctx.cr6.eq) goto loc_8273977C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// b 0x82739794
	goto loc_82739794;
loc_82739774:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82739754
	goto loc_82739754;
loc_8273977C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82739794:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827397c8
	if (ctx.cr6.lt) goto loc_827397C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827397C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_827397C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827397CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827397D8"))) PPC_WEAK_FUNC(sub_827397D8);
PPC_FUNC_IMPL(__imp__sub_827397D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739820
	if (ctx.cr6.eq) goto loc_82739820;
loc_827397F8:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bge cr6,0x82739820
	if (!ctx.cr6.lt) goto loc_82739820;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827397f8
	if (!ctx.cr6.eq) goto loc_827397F8;
loc_82739820:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stbx r31,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739858"))) PPC_WEAK_FUNC(sub_82739858);
PPC_FUNC_IMPL(__imp__sub_82739858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82739860;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827398dc
	if (ctx.cr6.lt) goto loc_827398DC;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r28.u64);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827398DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827398DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827398E8"))) PPC_WEAK_FUNC(sub_827398E8);
PPC_FUNC_IMPL(__imp__sub_827398E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739964
	if (ctx.cr6.eq) goto loc_82739964;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_82739934:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273993C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273993C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273994c
	if (ctx.cr6.lt) goto loc_8273994C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
loc_8273994C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82739964:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739998
	if (ctx.cr6.eq) goto loc_82739998;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82739934
	goto loc_82739934;
loc_82739998:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827399d8
	if (ctx.cr6.eq) goto loc_827399D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827399D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8273993c
	goto loc_8273993C;
loc_827399D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8273994c
	goto loc_8273994C;
}

__attribute__((alias("__imp__sub_827399E8"))) PPC_WEAK_FUNC(sub_827399E8);
PPC_FUNC_IMPL(__imp__sub_827399E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x827399F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mulld r9,r9,r11
	ctx.r9.s64 = ctx.r9.s64 * ctx.r11.s64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82739a30
	if (!ctx.cr6.gt) goto loc_82739A30;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82739A30:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// bne cr6,0x82739a44
	if (!ctx.cr6.eq) goto loc_82739A44;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82739A44:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// beq cr6,0x82739a58
	if (ctx.cr6.eq) goto loc_82739A58;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82739a84
	goto loc_82739A84;
loc_82739A58:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x82537e70
	ctx.lr = 0x82739A68;
	sub_82537E70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// bne cr6,0x82739a7c
	if (!ctx.cr6.eq) goto loc_82739A7C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82739A7C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739b2c
	if (ctx.cr6.lt) goto loc_82739B2C;
loc_82739A84:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82739b0c
	if (ctx.cr6.eq) goto loc_82739B0C;
loc_82739A90:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82745018
	ctx.lr = 0x82739A98;
	sub_82745018(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739b4c
	if (ctx.cr6.eq) goto loc_82739B4C;
	// bl 0x827450c0
	ctx.lr = 0x82739AA4;
	sub_827450C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82739b4c
	if (ctx.cr6.eq) goto loc_82739B4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739b2c
	if (ctx.cr6.lt) goto loc_82739B2C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82739a90
	if (ctx.cr6.lt) goto loc_82739A90;
loc_82739B0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82739b40
	if (!ctx.cr6.lt) goto loc_82739B40;
loc_82739B2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739B40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82739B4C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82739b2c
	goto loc_82739B2C;
}

__attribute__((alias("__imp__sub_82739B58"))) PPC_WEAK_FUNC(sub_82739B58);
PPC_FUNC_IMPL(__imp__sub_82739B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82739B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82739b8c
	if (ctx.cr6.eq) goto loc_82739B8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82739B8C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82739bcc
	if (ctx.cr6.eq) goto loc_82739BCC;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739bcc
	if (!ctx.cr6.eq) goto loc_82739BCC;
	// bl 0x82537280
	ctx.lr = 0x82739BAC;
	sub_82537280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82739bcc
	if (!ctx.cr6.lt) goto loc_82739BCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82739BCC:
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82739c14
	if (ctx.cr6.eq) goto loc_82739C14;
loc_82739BDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82739bdc
	if (!ctx.cr6.eq) goto loc_82739BDC;
loc_82739C14:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739c2c
	if (ctx.cr6.eq) goto loc_82739C2C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x82537f08
	ctx.lr = 0x82739C2C;
	sub_82537F08(ctx, base);
loc_82739C2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739C50"))) PPC_WEAK_FUNC(sub_82739C50);
PPC_FUNC_IMPL(__imp__sub_82739C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82739C58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rldicr r11,r11,0,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// std r25,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r25.u64);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// std r27,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r27.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// ble cr6,0x82739dc0
	if (!ctx.cr6.gt) goto loc_82739DC0;
loc_82739C9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739cf0
	if (ctx.cr6.eq) goto loc_82739CF0;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82739cf0
	if (ctx.cr6.lt) goto loc_82739CF0;
	// rldicr r29,r11,0,52
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82739CF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rldicl r11,r29,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82537118
	ctx.lr = 0x82739D78;
	sub_82537118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82739dd4
	if (!ctx.cr6.eq) goto loc_82739DD4;
	// bl 0x82537110
	ctx.lr = 0x82739D84;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x82739dcc
	if (!ctx.cr6.eq) goto loc_82739DCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82739db0
	if (!ctx.cr6.eq) goto loc_82739DB0;
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
loc_82739DB0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739dd4
	if (!ctx.cr6.eq) goto loc_82739DD4;
loc_82739DC0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82739DC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82739DCC:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82739e04
	if (!ctx.cr6.eq) goto loc_82739E04;
loc_82739DD4:
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82739c9c
	if (ctx.cr6.lt) goto loc_82739C9C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82739E04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82739dc4
	if (!ctx.cr6.eq) goto loc_82739DC4;
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739E48"))) PPC_WEAK_FUNC(sub_82739E48);
PPC_FUNC_IMPL(__imp__sub_82739E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82739E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82739f6c
	if (ctx.cr6.eq) goto loc_82739F6C;
	// bl 0x82915638
	ctx.lr = 0x82739E70;
	sub_82915638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82739e9c
	if (!ctx.cr6.eq) goto loc_82739E9C;
	// bl 0x82537110
	ctx.lr = 0x82739E7C;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82739e9c
	if (ctx.cr6.eq) goto loc_82739E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82739E9C:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r31,132(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82739f6c
	if (!ctx.cr6.gt) goto loc_82739F6C;
loc_82739EB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82739f40
	if (!ctx.cr6.eq) goto loc_82739F40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82537068
	ctx.lr = 0x82739EF4;
	sub_82537068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82739f28
	if (!ctx.cr6.eq) goto loc_82739F28;
	// bl 0x82537110
	ctx.lr = 0x82739F00;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82739f28
	if (ctx.cr6.eq) goto loc_82739F28;
	// cmplwi cr6,r3,995
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 995, ctx.xer);
	// beq cr6,0x82739f28
	if (ctx.cr6.eq) goto loc_82739F28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82739F28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739F40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82739eb0
	if (ctx.cr6.lt) goto loc_82739EB0;
loc_82739F6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r27.u32);
	// stw r27,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r27.u32);
	// std r27,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r27.u64);
	// std r27,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r27.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739F88"))) PPC_WEAK_FUNC(sub_82739F88);
PPC_FUNC_IMPL(__imp__sub_82739F88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// ld r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// ld r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x82739fb4
	if (ctx.cr6.gt) goto loc_82739FB4;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82739fb8
	if (!ctx.cr6.lt) goto loc_82739FB8;
loc_82739FB4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82739FB8:
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82739FC8"))) PPC_WEAK_FUNC(sub_82739FC8);
PPC_FUNC_IMPL(__imp__sub_82739FC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82739ffc
	if (ctx.cr6.eq) goto loc_82739FFC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82739ffc
	if (!ctx.cr6.eq) goto loc_82739FFC;
	// ld r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
loc_82739FFC:
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A018"))) PPC_WEAK_FUNC(sub_8273A018);
PPC_FUNC_IMPL(__imp__sub_8273A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8273A020;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a05c
	if (ctx.cr6.eq) goto loc_8273A05C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
loc_8273A05C:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8273a09c
	if (ctx.cr6.lt) goto loc_8273A09C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
loc_8273A09C:
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r7,r22,32
	ctx.r7.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x8273a0c4
	if (!ctx.cr6.lt) goto loc_8273A0C4;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8273A0C4:
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8273a46c
	if (ctx.cr6.eq) goto loc_8273A46C;
loc_8273A0D0:
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x8273a468
	if (!ctx.cr6.lt) goto loc_8273A468;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8273a104
	if (ctx.cr6.lt) goto loc_8273A104;
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8273a150
	if (ctx.cr6.lt) goto loc_8273A150;
loc_8273A104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8273a46c
	if (ctx.cr6.lt) goto loc_8273A46C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8273a46c
	if (ctx.cr6.lt) goto loc_8273A46C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a46c
	if (!ctx.cr6.eq) goto loc_8273A46C;
loc_8273A150:
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// tdllei r9,0
	// divdu r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 / ctx.r9.u64;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8273a1a8
	if (!ctx.cr6.gt) goto loc_8273A1A8;
	// subf. r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x8273a1d4
	if (ctx.cr0.eq) goto loc_8273A1D4;
loc_8273A184:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a184
	if (ctx.cr6.lt) goto loc_8273A184;
	// b 0x8273a1d4
	goto loc_8273A1D4;
loc_8273A1A8:
	// subf. r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x8273a1d4
	if (ctx.cr0.eq) goto loc_8273A1D4;
loc_8273A1B4:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a1b4
	if (ctx.cr6.lt) goto loc_8273A1B4;
loc_8273A1D4:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a468
	if (!ctx.cr6.eq) goto loc_8273A468;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8273a350
	if (ctx.cr6.lt) goto loc_8273A350;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8273A204:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82537068
	ctx.lr = 0x8273A230;
	sub_82537068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273a334
	if (ctx.cr6.eq) goto loc_8273A334;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82537118
	ctx.lr = 0x8273A294;
	sub_82537118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a2f4
	if (!ctx.cr6.eq) goto loc_8273A2F4;
	// bl 0x82537110
	ctx.lr = 0x8273A2A0;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x8273a2b8
	if (!ctx.cr6.eq) goto loc_8273A2B8;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x8273a2e8
	goto loc_8273A2E8;
loc_8273A2B8:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8273a2f4
	if (ctx.cr6.eq) goto loc_8273A2F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
loc_8273A2E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A2F4:
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8273a204
	if (!ctx.cr6.gt) goto loc_8273A204;
	// b 0x8273a350
	goto loc_8273A350;
loc_8273A334:
	// bl 0x82537110
	ctx.lr = 0x8273A338;
	sub_82537110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8273A350:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8273a46c
	if (ctx.cr6.lt) goto loc_8273A46C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82537068
	ctx.lr = 0x8273A3A4;
	sub_82537068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a3d0
	if (!ctx.cr6.eq) goto loc_8273A3D0;
	// bl 0x82537110
	ctx.lr = 0x8273A3B0;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x8273a3d0
	if (ctx.cr6.eq) goto loc_8273A3D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8273A3D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8273a3fc
	if (!ctx.cr6.gt) goto loc_8273A3FC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8273A3FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a468
	if (ctx.cr6.lt) goto loc_8273A468;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a468
	if (ctx.cr6.eq) goto loc_8273A468;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8273a420
	if (!ctx.cr6.gt) goto loc_8273A420;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8273A420:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x826df680
	ctx.lr = 0x8273A434;
	sub_826DF680(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8273a46c
	if (ctx.cr6.lt) goto loc_8273A46C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8273a0d0
	if (!ctx.cr6.eq) goto loc_8273A0D0;
	// b 0x8273a46c
	goto loc_8273A46C;
loc_8273A468:
	// stw r21,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8273A46C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8273a480
	if (ctx.cr6.lt) goto loc_8273A480;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8273a484
	if (!ctx.cr6.lt) goto loc_8273A484;
loc_8273A480:
	// stw r21,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8273A484:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A490"))) PPC_WEAK_FUNC(sub_8273A490);
PPC_FUNC_IMPL(__imp__sub_8273A490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x8273A498;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8273a4ec
	if (ctx.cr6.lt) goto loc_8273A4EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
loc_8273A4EC:
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r7,r20,32
	ctx.r7.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x8273a514
	if (!ctx.cr6.lt) goto loc_8273A514;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8273A514:
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8273a9ac
	if (ctx.cr6.eq) goto loc_8273A9AC;
loc_8273A520:
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8273a9a8
	if (!ctx.cr6.lt) goto loc_8273A9A8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r22,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// ble cr6,0x8273a5d4
	if (!ctx.cr6.gt) goto loc_8273A5D4;
loc_8273A550:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// blt cr6,0x8273a598
	if (ctx.cr6.lt) goto loc_8273A598;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8273a5d4
	if (ctx.cr6.lt) goto loc_8273A5D4;
loc_8273A598:
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// blt cr6,0x8273a5b0
	if (ctx.cr6.lt) goto loc_8273A5B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8273a5b4
	goto loc_8273A5B4;
loc_8273A5B0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8273A5B4:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a550
	if (ctx.cr6.lt) goto loc_8273A550;
loc_8273A5D4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a634
	if (ctx.cr6.lt) goto loc_8273A634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x8273a9ac
	if (ctx.cr6.lt) goto loc_8273A9AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x8273a9ac
	if (ctx.cr6.lt) goto loc_8273A9AC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a9ac
	if (!ctx.cr6.eq) goto loc_8273A9AC;
	// b 0x8273a99c
	goto loc_8273A99C;
loc_8273A634:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a9a8
	if (!ctx.cr6.eq) goto loc_8273A9A8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r3,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r3.u64);
	// beq 0x8273a89c
	if (ctx.cr0.eq) goto loc_8273A89C;
loc_8273A680:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r29,r3
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r3.u64, ctx.xer);
	// bgt cr6,0x8273a834
	if (ctx.cr6.gt) goto loc_8273A834;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8273a89c
	if (ctx.cr6.gt) goto loc_8273A89C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82537068
	ctx.lr = 0x8273A73C;
	sub_82537068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273a84c
	if (ctx.cr6.eq) goto loc_8273A84C;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpld cr6,r29,r9
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8273a774
	if (ctx.cr6.lt) goto loc_8273A774;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273a89c
	if (ctx.cr6.eq) goto loc_8273A89C;
	// rldicr r29,r11,0,52
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
loc_8273A774:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rldicl r11,r29,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82537118
	ctx.lr = 0x8273A7FC;
	sub_82537118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a834
	if (!ctx.cr6.eq) goto loc_8273A834;
	// bl 0x82537110
	ctx.lr = 0x8273A808;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x8273a82c
	if (!ctx.cr6.eq) goto loc_8273A82C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8273a834
	goto loc_8273A834;
loc_8273A82C:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8273a86c
	if (!ctx.cr6.eq) goto loc_8273A86C;
loc_8273A834:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8273a680
	if (ctx.cr6.lt) goto loc_8273A680;
	// b 0x8273a89c
	goto loc_8273A89C;
loc_8273A84C:
	// bl 0x82537110
	ctx.lr = 0x8273A850;
	sub_82537110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8273a89c
	goto loc_8273A89C;
loc_8273A86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A89C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x8273a9ac
	if (ctx.cr6.lt) goto loc_8273A9AC;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A8B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82537068
	ctx.lr = 0x8273A8F0;
	sub_82537068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a91c
	if (!ctx.cr6.eq) goto loc_8273A91C;
	// bl 0x82537110
	ctx.lr = 0x8273A8FC;
	sub_82537110(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x8273a91c
	if (ctx.cr6.eq) goto loc_8273A91C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273A918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_8273A91C:
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8273a93c
	if (!ctx.cr6.gt) goto loc_8273A93C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8273A93C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273a9a8
	if (ctx.cr6.lt) goto loc_8273A9A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a9a8
	if (ctx.cr6.eq) goto loc_8273A9A8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8273a960
	if (!ctx.cr6.gt) goto loc_8273A960;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8273A960:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x826df680
	ctx.lr = 0x8273A974;
	sub_826DF680(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8273a9ac
	if (ctx.cr6.lt) goto loc_8273A9AC;
loc_8273A99C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8273a520
	if (!ctx.cr6.eq) goto loc_8273A520;
	// b 0x8273a9ac
	goto loc_8273A9AC;
loc_8273A9A8:
	// stw r19,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r19.u32);
loc_8273A9AC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8273a9c0
	if (ctx.cr6.lt) goto loc_8273A9C0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x8273a9c4
	if (!ctx.cr6.lt) goto loc_8273A9C4;
loc_8273A9C0:
	// stw r19,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r19.u32);
loc_8273A9C4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273A9D0"))) PPC_WEAK_FUNC(sub_8273A9D0);
PPC_FUNC_IMPL(__imp__sub_8273A9D0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273A9D8"))) PPC_WEAK_FUNC(sub_8273A9D8);
PPC_FUNC_IMPL(__imp__sub_8273A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x8273A9F0;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,12496
	ctx.r10.s64 = ctx.r11.s64 + 12496;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AA60"))) PPC_WEAK_FUNC(sub_8273AA60);
PPC_FUNC_IMPL(__imp__sub_8273AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12496
	ctx.r11.s64 = ctx.r11.s64 + 12496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82739b58
	ctx.lr = 0x8273AA8C;
	sub_82739B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273ab18
	ctx.lr = 0x8273AA94;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273aab4
	if (ctx.cr6.eq) goto loc_8273AAB4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x82537f08
	ctx.lr = 0x8273AAB0;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8273AAB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AAD0"))) PPC_WEAK_FUNC(sub_8273AAD0);
PPC_FUNC_IMPL(__imp__sub_8273AAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// bl 0x82aea1fc
	ctx.lr = 0x8273AAFC;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8273AB18"))) PPC_WEAK_FUNC(sub_8273AB18);
PPC_FUNC_IMPL(__imp__sub_8273AB18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AB28"))) PPC_WEAK_FUNC(sub_8273AB28);
PPC_FUNC_IMPL(__imp__sub_8273AB28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_8273AB2C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8273ab2c
	if (!ctx.cr0.eq) goto loc_8273AB2C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AB50"))) PPC_WEAK_FUNC(sub_8273AB50);
PPC_FUNC_IMPL(__imp__sub_8273AB50) {
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
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8273ab94
	if (!ctx.cr6.eq) goto loc_8273AB94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AB80;
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
loc_8273AB94:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8273ab94
	if (!ctx.cr0.eq) goto loc_8273AB94;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273ABC8"))) PPC_WEAK_FUNC(sub_8273ABC8);
PPC_FUNC_IMPL(__imp__sub_8273ABC8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82aea19c
	ctx.lr = 0x8273ABDC;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8273ABF0"))) PPC_WEAK_FUNC(sub_8273ABF0);
PPC_FUNC_IMPL(__imp__sub_8273ABF0) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82aea7cc
	ctx.lr = 0x8273AC04;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ac20
	if (ctx.cr6.eq) goto loc_8273AC20;
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
loc_8273AC20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AC38"))) PPC_WEAK_FUNC(sub_8273AC38);
PPC_FUNC_IMPL(__imp__sub_8273AC38) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82aea17c
	ctx.lr = 0x8273AC4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8273AC60"))) PPC_WEAK_FUNC(sub_8273AC60);
PPC_FUNC_IMPL(__imp__sub_8273AC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ac98
	if (ctx.cr6.eq) goto loc_8273AC98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
loc_8273AC98:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273ACB0"))) PPC_WEAK_FUNC(sub_8273ACB0);
PPC_FUNC_IMPL(__imp__sub_8273ACB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273acf0
	if (ctx.cr6.eq) goto loc_8273ACF0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8273acd8
	if (!ctx.cr6.eq) goto loc_8273ACD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8273acd4
	if (!ctx.cr6.eq) goto loc_8273ACD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8273ACD4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8273ACD8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8273ACF0:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AD00"))) PPC_WEAK_FUNC(sub_8273AD00);
PPC_FUNC_IMPL(__imp__sub_8273AD00) {
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
	// bl 0x82537110
	ctx.lr = 0x8273AD10;
	sub_82537110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8273ad20
	if (!ctx.cr6.gt) goto loc_8273AD20;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_8273AD20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AD30"))) PPC_WEAK_FUNC(sub_8273AD30);
PPC_FUNC_IMPL(__imp__sub_8273AD30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AD48"))) PPC_WEAK_FUNC(sub_8273AD48);
PPC_FUNC_IMPL(__imp__sub_8273AD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,12632
	ctx.r11.s64 = ctx.r11.s64 + 12632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8273ab18
	sub_8273AB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AD58"))) PPC_WEAK_FUNC(sub_8273AD58);
PPC_FUNC_IMPL(__imp__sub_8273AD58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AD70"))) PPC_WEAK_FUNC(sub_8273AD70);
PPC_FUNC_IMPL(__imp__sub_8273AD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273aad0
	ctx.lr = 0x8273AD88;
	sub_8273AAD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,12632
	ctx.r10.s64 = ctx.r11.s64 + 12632;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273ADC0"))) PPC_WEAK_FUNC(sub_8273ADC0);
PPC_FUNC_IMPL(__imp__sub_8273ADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12632
	ctx.r11.s64 = ctx.r11.s64 + 12632;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8273ab18
	ctx.lr = 0x8273ADEC;
	sub_8273AB18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ae0c
	if (ctx.cr6.eq) goto loc_8273AE0C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32771
	ctx.r4.u64 = ctx.r4.u64 | 32771;
	// bl 0x82537f08
	ctx.lr = 0x8273AE08;
	sub_82537F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8273AE0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AE28"))) PPC_WEAK_FUNC(sub_8273AE28);
PPC_FUNC_IMPL(__imp__sub_8273AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8273e5e8
	ctx.lr = 0x8273AE40;
	sub_8273E5E8(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AE88"))) PPC_WEAK_FUNC(sub_8273AE88);
PPC_FUNC_IMPL(__imp__sub_8273AE88) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273aec8
	if (ctx.cr6.eq) goto loc_8273AEC8;
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
loc_8273AEC8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AEE0"))) PPC_WEAK_FUNC(sub_8273AEE0);
PPC_FUNC_IMPL(__imp__sub_8273AEE0) {
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
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273af28
	if (ctx.cr6.eq) goto loc_8273AF28;
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
loc_8273AF28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF40"))) PPC_WEAK_FUNC(sub_8273AF40);
PPC_FUNC_IMPL(__imp__sub_8273AF40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r4.u32);
	// stw r5,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF58"))) PPC_WEAK_FUNC(sub_8273AF58);
PPC_FUNC_IMPL(__imp__sub_8273AF58) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x82734d30
	ctx.lr = 0x8273AF6C;
	sub_82734D30(ctx, base);
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

__attribute__((alias("__imp__sub_8273AF80"))) PPC_WEAK_FUNC(sub_8273AF80);
PPC_FUNC_IMPL(__imp__sub_8273AF80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273AF88"))) PPC_WEAK_FUNC(sub_8273AF88);
PPC_FUNC_IMPL(__imp__sub_8273AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8273AF90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82745a50
	ctx.lr = 0x8273AFC8;
	sub_82745A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273b07c
	if (ctx.cr6.lt) goto loc_8273B07C;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273b07c
	if (ctx.cr6.lt) goto loc_8273B07C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82745a40
	ctx.lr = 0x8273B010;
	sub_82745A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273b07c
	if (ctx.cr6.lt) goto loc_8273B07C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273b07c
	if (ctx.cr6.lt) goto loc_8273B07C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r24.u32);
	// stw r23,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r23.u32);
	// stw r26,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8273B07C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273b0f0
	if (ctx.cr6.eq) goto loc_8273B0F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8273b0f0
	if (!ctx.cr6.lt) goto loc_8273B0F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273b0c0
	if (ctx.cr6.eq) goto loc_8273B0C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b0c0
	if (ctx.cr6.eq) goto loc_8273B0C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B0C0;
	sub_827458B8(ctx, base);
loc_8273B0C0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273b0f0
	if (ctx.cr6.eq) goto loc_8273B0F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b0f0
	if (ctx.cr6.eq) goto loc_8273B0F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B0F0;
	sub_827458B8(ctx, base);
loc_8273B0F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B100"))) PPC_WEAK_FUNC(sub_8273B100);
PPC_FUNC_IMPL(__imp__sub_8273B100) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b158
	if (ctx.cr6.eq) goto loc_8273B158;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b148
	if (ctx.cr6.eq) goto loc_8273B148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B148:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B154;
	sub_827458B8(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B158:
	// lwz r3,572(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x82745df0
	ctx.lr = 0x8273B160;
	sub_82745DF0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// bl 0x82745df0
	ctx.lr = 0x8273B16C;
	sub_82745DF0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b194
	if (ctx.cr6.eq) goto loc_8273B194;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B190;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B194:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b1d8
	if (ctx.cr6.eq) goto loc_8273B1D8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b1c4
	if (ctx.cr6.eq) goto loc_8273B1C4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B1C4:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B1D4;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B1D8:
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b1f8
	if (ctx.cr6.eq) goto loc_8273B1F8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B1F4;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B1F8:
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b23c
	if (ctx.cr6.eq) goto loc_8273B23C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b228
	if (ctx.cr6.eq) goto loc_8273B228;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B224;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B228:
	// addi r5,r11,580
	ctx.r5.s64 = ctx.r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B238;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B23C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b2f0
	if (ctx.cr6.eq) goto loc_8273B2F0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b26c
	if (ctx.cr6.eq) goto loc_8273B26C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B268;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B26C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b290
	if (ctx.cr6.eq) goto loc_8273B290;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B28C;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B290:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b2b4
	if (ctx.cr6.eq) goto loc_8273B2B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B2B0;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B2B4:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8273b2dc
	if (ctx.cr6.eq) goto loc_8273B2DC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B2D8;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B2DC:
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B2EC;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B2F0:
	// addi r5,r11,612
	ctx.r5.s64 = ctx.r11.s64 + 612;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b314
	if (ctx.cr6.eq) goto loc_8273B314;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B30C;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273B314:
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b334
	if (ctx.cr6.eq) goto loc_8273B334;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827458b8
	ctx.lr = 0x8273B330;
	sub_827458B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8273B334:
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8273b350
	if (ctx.cr6.eq) goto loc_8273B350;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82745460
	ctx.lr = 0x8273B348;
	sub_82745460(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273B350:
	// lwz r4,640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8273b36c
	if (ctx.cr6.eq) goto loc_8273B36C;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82745460
	ctx.lr = 0x8273B364;
	sub_82745460(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273B36C:
	// lwz r4,644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8273b388
	if (ctx.cr6.eq) goto loc_8273B388;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82745460
	ctx.lr = 0x8273B380;
	sub_82745460(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273B388:
	// lwz r4,648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8273b3a4
	if (ctx.cr6.eq) goto loc_8273B3A4;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82745460
	ctx.lr = 0x8273B39C;
	sub_82745460(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273B3A4:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273B3B4;
	sub_827458B8(ctx, base);
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

__attribute__((alias("__imp__sub_8273B3D0"))) PPC_WEAK_FUNC(sub_8273B3D0);
PPC_FUNC_IMPL(__imp__sub_8273B3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82745cd0
	ctx.lr = 0x8273B404;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b44c
	if (ctx.cr6.lt) goto loc_8273B44C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273B41C;
	sub_82745CD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b440
	if (ctx.cr6.eq) goto loc_8273B440;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b440
	if (ctx.cr6.eq) goto loc_8273B440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x82745c50
	ctx.lr = 0x8273B440;
	sub_82745C50(ctx, base);
loc_8273B440:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82745c50
	ctx.lr = 0x8273B44C;
	sub_82745C50(ctx, base);
loc_8273B44C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B468"))) PPC_WEAK_FUNC(sub_8273B468);
PPC_FUNC_IMPL(__imp__sub_8273B468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x8273B470;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r31.u32);
	// clrldi r26,r26,5
	ctx.r26.u64 = ctx.r26.u64 & 0x7FFFFFFFFFFFFFF;
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// beq cr6,0x8273b4d8
	if (ctx.cr6.eq) goto loc_8273B4D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8273b4e0
	if (!ctx.cr6.eq) goto loc_8273B4E0;
loc_8273B4D8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r11.u32);
loc_8273B4E0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r17,20(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8273b55c
	if (!ctx.cr6.eq) goto loc_8273B55C;
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b550
	if (ctx.cr6.eq) goto loc_8273B550;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8273B51C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82745cf8
	ctx.lr = 0x8273B530;
	sub_82745CF8(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r18,r11,22
	ctx.r18.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8273b570
	if (!ctx.cr6.eq) goto loc_8273B570;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B550:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B55C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x8273b51c
	if (!ctx.cr6.lt) goto loc_8273B51C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B570:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// li r16,6
	ctx.r16.s64 = 6;
	// ori r19,r11,11
	ctx.r19.u64 = ctx.r11.u64 | 11;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r20,r11,11
	ctx.r20.u64 = ctx.r11.u64 | 11;
loc_8273B594:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273b85c
	if (ctx.cr6.eq) goto loc_8273B85C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x82745cd0
	ctx.lr = 0x8273B5BC;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827461a8
	ctx.lr = 0x8273B5DC;
	sub_827461A8(ctx, base);
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8273b628
	if (!ctx.cr6.eq) goto loc_8273B628;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8273b61c
	if (!ctx.cr6.eq) goto loc_8273B61C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273b61c
	if (!ctx.cr6.eq) goto loc_8273B61C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82746a28
	ctx.lr = 0x8273B608;
	sub_82746A28(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273b8a4
	if (!ctx.cr6.eq) goto loc_8273B8A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r23.u32);
loc_8273B61C:
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// b 0x8273b85c
	goto loc_8273B85C;
loc_8273B628:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bne cr6,0x8273b65c
	if (!ctx.cr6.eq) goto loc_8273B65C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x8273b65c
	if (!ctx.cr6.gt) goto loc_8273B65C;
	// stw r16,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r16.u32);
loc_8273B65C:
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8273b68c
	if (ctx.cr6.eq) goto loc_8273B68C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273b6a0
	if (!ctx.cr6.eq) goto loc_8273B6A0;
loc_8273B68C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82745cd0
	ctx.lr = 0x8273B69C;
	sub_82745CD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273B6A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8273b788
	if (!ctx.cr6.eq) goto loc_8273B788;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8273b6cc
	if (!ctx.cr6.eq) goto loc_8273B6CC;
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273B6CC:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8273b73c
	if (ctx.cr6.lt) goto loc_8273B73C;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x8273b3d0
	ctx.lr = 0x8273B734;
	sub_8273B3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
loc_8273B73C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273B750:
	// lwz r10,556(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273b838
	if (!ctx.cr6.eq) goto loc_8273B838;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrldi r9,r17,32
	ctx.r9.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpd cr6,r10,r26
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x8273b85c
	if (ctx.cr6.gt) goto loc_8273B85C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8273b85c
	if (ctx.cr6.eq) goto loc_8273B85C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x8273b850
	goto loc_8273B850;
loc_8273B788:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273b750
	if (!ctx.cr6.eq) goto loc_8273B750;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273b750
	if (ctx.cr6.eq) goto loc_8273B750;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8273b750
	if (ctx.cr6.lt) goto loc_8273B750;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273b7f0
	if (ctx.cr6.eq) goto loc_8273B7F0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8273b7f0
	if (!ctx.cr6.eq) goto loc_8273B7F0;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_8273B7F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x8273b3d0
	ctx.lr = 0x8273B828;
	sub_8273B3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x8273b85c
	goto loc_8273B85C;
loc_8273B838:
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x8273b85c
	if (ctx.cr6.gt) goto loc_8273B85C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273b85c
	if (ctx.cr6.eq) goto loc_8273B85C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8273B850:
	// lwz r25,68(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_8273B85C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82745d68
	ctx.lr = 0x8273B870;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8273b594
	if (!ctx.cr6.eq) goto loc_8273B594;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273B884;
	sub_82745DD8(ctx, base);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8273b8c8
	if (!ctx.cr6.eq) goto loc_8273B8C8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8273b8e4
	if (!ctx.cr6.eq) goto loc_8273B8E4;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B8A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r27,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r27.u32);
	// bl 0x82746868
	ctx.lr = 0x8273B8B4;
	sub_82746868(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273B8C0;
	sub_82745DD8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B8C8:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273b954
	if (ctx.cr6.eq) goto loc_8273B954;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8273b954
	if (!ctx.cr6.eq) goto loc_8273B954;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8273b970
	if (ctx.cr6.eq) goto loc_8273B970;
loc_8273B8E4:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r3,608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82745588
	ctx.lr = 0x8273B904;
	sub_82745588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82746868
	ctx.lr = 0x8273B91C;
	sub_82746868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b984
	if (ctx.cr6.lt) goto loc_8273B984;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82745cd0
	ctx.lr = 0x8273B934;
	sub_82745CD0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r22.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b96c
	if (ctx.cr6.eq) goto loc_8273B96C;
	// stw r24,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r24.u32);
	// b 0x8273b970
	goto loc_8273B970;
loc_8273B954:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8273b8e4
	if (!ctx.cr6.eq) goto loc_8273B8E4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_8273B96C:
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
loc_8273B970:
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8273b984
	if (!ctx.cr6.eq) goto loc_8273B984;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_8273B984:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B990"))) PPC_WEAK_FUNC(sub_8273B990);
PPC_FUNC_IMPL(__imp__sub_8273B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b9c4
	if (!ctx.cr6.eq) goto loc_8273B9C4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// b 0x8273b9e4
	goto loc_8273B9E4;
loc_8273B9C4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82746250
	ctx.lr = 0x8273B9CC;
	sub_82746250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273b9e4
	if (ctx.cr6.lt) goto loc_8273B9E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273b9e4
	if (!ctx.cr6.eq) goto loc_8273B9E4;
	// stw r11,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
loc_8273B9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BA00"))) PPC_WEAK_FUNC(sub_8273BA00);
PPC_FUNC_IMPL(__imp__sub_8273BA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8273BA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82745cf8
	ctx.lr = 0x8273BA3C;
	sub_82745CF8(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	ctx.r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8273ba8c
	if (ctx.cr6.eq) goto loc_8273BA8C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
loc_8273BA54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82746878
	ctx.lr = 0x8273BA68;
	sub_82746878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82745d68
	ctx.lr = 0x8273BA84;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8273ba54
	if (!ctx.cr6.eq) goto loc_8273BA54;
loc_8273BA8C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82745dd8
	ctx.lr = 0x8273BA98;
	sub_82745DD8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82745cf8
	ctx.lr = 0x8273BAAC;
	sub_82745CF8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8273bb40
	if (ctx.cr6.eq) goto loc_8273BB40;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
loc_8273BAC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8273bae0
	if (!ctx.cr6.eq) goto loc_8273BAE0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8273baec
	goto loc_8273BAEC;
loc_8273BAE0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273baf0
	if (!ctx.cr6.eq) goto loc_8273BAF0;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_8273BAEC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273BAF0:
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82745d68
	ctx.lr = 0x8273BB38;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8273bac0
	if (!ctx.cr6.eq) goto loc_8273BAC0;
loc_8273BB40:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273BB4C;
	sub_82745DD8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273BB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bb84
	if (ctx.cr6.lt) goto loc_8273BB84;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r31.u32);
	// stw r28,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r28.u32);
	// std r27,560(r30)
	PPC_STORE_U64(ctx.r30.u32 + 560, ctx.r27.u64);
	// stw r31,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r31.u32);
	// stw r31,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r31.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
loc_8273BB84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BB90"))) PPC_WEAK_FUNC(sub_8273BB90);
PPC_FUNC_IMPL(__imp__sub_8273BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8273BB98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82745cf8
	ctx.lr = 0x8273BBD4;
	sub_82745CF8(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	ctx.r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8273bc24
	if (ctx.cr6.eq) goto loc_8273BC24;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
loc_8273BBEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82746878
	ctx.lr = 0x8273BC00;
	sub_82746878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82745d68
	ctx.lr = 0x8273BC1C;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8273bbec
	if (!ctx.cr6.eq) goto loc_8273BBEC;
loc_8273BC24:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x82745dd8
	ctx.lr = 0x8273BC30;
	sub_82745DD8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82745cf8
	ctx.lr = 0x8273BC44;
	sub_82745CF8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8273bce8
	if (ctx.cr6.eq) goto loc_8273BCE8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
loc_8273BC58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8273bc78
	if (!ctx.cr6.eq) goto loc_8273BC78;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x8273bc84
	goto loc_8273BC84;
loc_8273BC78:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273bc88
	if (!ctx.cr6.eq) goto loc_8273BC88;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8273BC84:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273BC88:
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8273bccc
	if (!ctx.cr6.eq) goto loc_8273BCCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_8273BCCC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82745d68
	ctx.lr = 0x8273BCE0;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8273bc58
	if (!ctx.cr6.eq) goto loc_8273BC58;
loc_8273BCE8:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273BCF4;
	sub_82745DD8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273BD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273bd34
	if (ctx.cr6.lt) goto loc_8273BD34;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stb r28,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r28.u8);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r27,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r27.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
loc_8273BD34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BD40"))) PPC_WEAK_FUNC(sub_8273BD40);
PPC_FUNC_IMPL(__imp__sub_8273BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8273BD48;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// clrldi r27,r27,5
	ctx.r27.u64 = ctx.r27.u64 & 0x7FFFFFFFFFFFFFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bne cr6,0x8273c104
	if (!ctx.cr6.eq) goto loc_8273C104;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x8273bf78
	if (ctx.cr6.gt) goto loc_8273BF78;
	// beq cr6,0x8273c104
	if (ctx.cr6.eq) goto loc_8273C104;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273be14
	if (ctx.cr6.gt) goto loc_8273BE14;
	// beq cr6,0x8273c104
	if (ctx.cr6.eq) goto loc_8273C104;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8273bddc
	if (ctx.cr6.eq) goto loc_8273BDDC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273c0d8
	if (!ctx.cr6.eq) goto loc_8273C0D8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273BDDC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// stw r9,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r9.u32);
	// beq cr6,0x8273be08
	if (ctx.cr6.eq) goto loc_8273BE08;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273BE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273BE14:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8273c0d8
	if (!ctx.cr6.eq) goto loc_8273C0D8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82745cf8
	ctx.lr = 0x8273BE30;
	sub_82745CF8(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r26,r11,22
	ctx.r26.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8273be50
	if (!ctx.cr6.eq) goto loc_8273BE50;
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,167
	ctx.r31.u64 = ctx.r31.u64 | 167;
	// b 0x8273c0e8
	goto loc_8273C0E8;
loc_8273BE50:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273c0e8
	if (ctx.cr6.lt) goto loc_8273C0E8;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r25,r11,11
	ctx.r25.u64 = ctx.r11.u64 | 11;
loc_8273BE68:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273c0e8
	if (ctx.cr6.lt) goto loc_8273C0E8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273bf18
	if (ctx.cr6.eq) goto loc_8273BF18;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82745cd0
	ctx.lr = 0x8273BE90;
	sub_82745CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273c0e8
	if (ctx.cr6.lt) goto loc_8273C0E8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827461a8
	ctx.lr = 0x8273BEB0;
	sub_827461A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8273bec4
	if (!ctx.cr6.eq) goto loc_8273BEC4;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// b 0x8273bf18
	goto loc_8273BF18;
loc_8273BEC4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273c0e8
	if (ctx.cr6.lt) goto loc_8273C0E8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x8273beec
	if (!ctx.cr6.gt) goto loc_8273BEEC;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_8273BEEC:
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// bge cr6,0x8273bef8
	if (!ctx.cr6.lt) goto loc_8273BEF8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8273BEF8:
	// cmpd cr6,r10,r28
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r28.s64, ctx.xer);
	// ble cr6,0x8273bf04
	if (!ctx.cr6.gt) goto loc_8273BF04;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8273BF04:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x8273bf18
	if (!ctx.cr6.gt) goto loc_8273BF18;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_8273BF18:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82745d68
	ctx.lr = 0x8273BF2C;
	sub_82745D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8273be68
	if (!ctx.cr6.eq) goto loc_8273BE68;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273BF44;
	sub_82745DD8(ctx, base);
	// lwz r11,588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273bf68
	if (ctx.cr6.eq) goto loc_8273BF68;
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273bf60
	if (!ctx.cr6.eq) goto loc_8273BF60;
	// stw r24,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r24.u32);
loc_8273BF60:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// b 0x8273c0e8
	goto loc_8273C0E8;
loc_8273BF68:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273BF78:
	// addis r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x8273c0d8
	if (ctx.cr6.gt) goto loc_8273C0D8;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-16484
	ctx.r12.s64 = ctx.r12.s64 + -16484;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273C060;
	case 1:
		goto loc_8273C0D8;
	case 2:
		goto loc_8273C0D8;
	case 3:
		goto loc_8273C0D8;
	case 4:
		goto loc_8273C0D8;
	case 5:
		goto loc_8273C0D8;
	case 6:
		goto loc_8273C0D8;
	case 7:
		goto loc_8273C0D8;
	case 8:
		goto loc_8273C0D8;
	case 9:
		goto loc_8273C0D8;
	case 10:
		goto loc_8273C0D8;
	case 11:
		goto loc_8273C0D8;
	case 12:
		goto loc_8273C0D8;
	case 13:
		goto loc_8273C0D8;
	case 14:
		goto loc_8273C0D8;
	case 15:
		goto loc_8273C0D8;
	case 16:
		goto loc_8273C088;
	case 17:
		goto loc_8273C0D8;
	case 18:
		goto loc_8273C0D8;
	case 19:
		goto loc_8273C0D8;
	case 20:
		goto loc_8273C0D8;
	case 21:
		goto loc_8273C0D8;
	case 22:
		goto loc_8273C0D8;
	case 23:
		goto loc_8273C0D8;
	case 24:
		goto loc_8273C0D8;
	case 25:
		goto loc_8273C0D8;
	case 26:
		goto loc_8273C0D8;
	case 27:
		goto loc_8273C0D8;
	case 28:
		goto loc_8273C0D8;
	case 29:
		goto loc_8273C0D8;
	case 30:
		goto loc_8273C0D8;
	case 31:
		goto loc_8273C0D8;
	case 32:
		goto loc_8273C0A0;
	case 33:
		goto loc_8273C0D8;
	case 34:
		goto loc_8273C0D8;
	case 35:
		goto loc_8273C0D8;
	case 36:
		goto loc_8273C0D8;
	case 37:
		goto loc_8273C0D8;
	case 38:
		goto loc_8273C0D8;
	case 39:
		goto loc_8273C0D8;
	case 40:
		goto loc_8273C0D8;
	case 41:
		goto loc_8273C0D8;
	case 42:
		goto loc_8273C0D8;
	case 43:
		goto loc_8273C0D8;
	case 44:
		goto loc_8273C0D8;
	case 45:
		goto loc_8273C0D8;
	case 46:
		goto loc_8273C0D8;
	case 47:
		goto loc_8273C0D8;
	case 48:
		goto loc_8273C0B8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-16288(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16288);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16248(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16248);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16224(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16224);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16168(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16168);
	// lwz r19,-16200(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16200);
loc_8273C060:
	// lhz r11,626(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 626);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lbz r11,629(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 629);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lbz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 628);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273C088:
	// lhz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 624);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273C0A0:
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273C0B8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// bl 0x826df680
	ctx.lr = 0x8273C0C8;
	sub_826DF680(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8273C0D8:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ori r31,r31,178
	ctx.r31.u64 = ctx.r31.u64 | 178;
	// bne cr6,0x8273c104
	if (!ctx.cr6.eq) goto loc_8273C104;
loc_8273C0E8:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273c104
	if (ctx.cr6.eq) goto loc_8273C104;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273c104
	if (ctx.cr6.eq) goto loc_8273C104;
	// bl 0x82745dd8
	ctx.lr = 0x8273C104;
	sub_82745DD8(ctx, base);
loc_8273C104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C110"))) PPC_WEAK_FUNC(sub_8273C110);
PPC_FUNC_IMPL(__imp__sub_8273C110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8273c220
	if (ctx.cr6.gt) goto loc_8273C220;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-16068
	ctx.r12.s64 = ctx.r12.s64 + -16068;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273C1AC;
	case 1:
		goto loc_8273C1BC;
	case 2:
		goto loc_8273C1CC;
	case 3:
		goto loc_8273C1DC;
	case 4:
		goto loc_8273C1E8;
	case 5:
		goto loc_8273C1F4;
	case 6:
		goto loc_8273C208;
	case 7:
		goto loc_8273C214;
	case 8:
		goto loc_8273C16C;
	case 9:
		goto loc_8273C194;
	case 10:
		goto loc_8273C200;
	case 11:
		goto loc_8273C1A0;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-15956(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15956);
	// lwz r19,-15940(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15940);
	// lwz r19,-15924(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15924);
	// lwz r19,-15908(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15908);
	// lwz r19,-15896(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15896);
	// lwz r19,-15884(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15884);
	// lwz r19,-15864(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15864);
	// lwz r19,-15852(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15852);
	// lwz r19,-16020(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16020);
	// lwz r19,-15980(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15980);
	// lwz r19,-15872(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15872);
	// lwz r19,-15968(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15968);
loc_8273C16C:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
loc_8273C174:
	// li r10,12
	ctx.r10.s64 = 12;
loc_8273C178:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273c184
	if (ctx.cr6.eq) goto loc_8273C184;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8273C184:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8273c190
	if (ctx.cr6.eq) goto loc_8273C190;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_8273C190:
	// blr 
	return;
loc_8273C194:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// b 0x8273c174
	goto loc_8273C174;
loc_8273C1A0:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x8273c174
	goto loc_8273C174;
loc_8273C1AC:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C1BC:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C1CC:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C1DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C1E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C1F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C200:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8273c174
	goto loc_8273C174;
loc_8273C208:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C214:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8273c178
	goto loc_8273C178;
loc_8273C220:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C230"))) PPC_WEAK_FUNC(sub_8273C230);
PPC_FUNC_IMPL(__imp__sub_8273C230) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8273c2bc
	if (ctx.cr6.eq) goto loc_8273C2BC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273c2bc
	if (ctx.cr6.eq) goto loc_8273C2BC;
	// lwz r11,528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273c2bc
	if (ctx.cr6.eq) goto loc_8273C2BC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273C260:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8273c260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273C260;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_8273C2BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C2C8"))) PPC_WEAK_FUNC(sub_8273C2C8);
PPC_FUNC_IMPL(__imp__sub_8273C2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273c348
	if (ctx.cr6.eq) goto loc_8273C348;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273c348
	if (ctx.cr6.eq) goto loc_8273C348;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x827457a8
	ctx.lr = 0x8273C304;
	sub_827457A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x8273b100
	ctx.lr = 0x8273C310;
	sub_8273B100(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273c330
	if (ctx.cr6.eq) goto loc_8273C330;
	// bl 0x827477c0
	ctx.lr = 0x8273C320;
	sub_827477C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827458b8
	ctx.lr = 0x8273C330;
	sub_827458B8(ctx, base);
loc_8273C330:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82745900
	ctx.lr = 0x8273C340;
	sub_82745900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8273c34c
	goto loc_8273C34C;
loc_8273C348:
	// li r3,4
	ctx.r3.s64 = 4;
loc_8273C34C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C368"))) PPC_WEAK_FUNC(sub_8273C368);
PPC_FUNC_IMPL(__imp__sub_8273C368) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x8273c430
	if (ctx.cr6.gt) goto loc_8273C430;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-15480
	ctx.r12.s64 = ctx.r12.s64 + -15480;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8273C3C0;
	case 1:
		goto loc_8273C3C8;
	case 2:
		goto loc_8273C3D0;
	case 3:
		goto loc_8273C3D8;
	case 4:
		goto loc_8273C3E0;
	case 5:
		goto loc_8273C3E8;
	case 6:
		goto loc_8273C3F0;
	case 7:
		goto loc_8273C3F8;
	case 8:
		goto loc_8273C400;
	case 9:
		goto loc_8273C408;
	case 10:
		goto loc_8273C410;
	case 11:
		goto loc_8273C418;
	case 12:
		goto loc_8273C420;
	case 13:
		goto loc_8273C428;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-15424(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15424);
	// lwz r19,-15416(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15416);
	// lwz r19,-15408(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15408);
	// lwz r19,-15400(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15400);
	// lwz r19,-15392(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15392);
	// lwz r19,-15384(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15384);
	// lwz r19,-15376(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15376);
	// lwz r19,-15368(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15368);
	// lwz r19,-15360(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15360);
	// lwz r19,-15352(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15352);
	// lwz r19,-15344(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15344);
	// lwz r19,-15336(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15336);
	// lwz r19,-15328(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15328);
	// lwz r19,-15320(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -15320);
loc_8273C3C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8273C3C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8273C3D0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8273C3D8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8273C3E0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8273C3E8:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8273C3F0:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8273C3F8:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8273C400:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8273C408:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8273C410:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_8273C418:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8273C420:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8273C428:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8273C430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C438"))) PPC_WEAK_FUNC(sub_8273C438);
PPC_FUNC_IMPL(__imp__sub_8273C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273c7f4
	if (ctx.cr6.gt) goto loc_8273C7F4;
	// beq cr6,0x8273c7ec
	if (ctx.cr6.eq) goto loc_8273C7EC;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273c4f0
	if (ctx.cr6.gt) goto loc_8273C4F0;
	// beq cr6,0x8273c4e8
	if (ctx.cr6.eq) goto loc_8273C4E8;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273c4a8
	if (ctx.cr6.gt) goto loc_8273C4A8;
	// beq cr6,0x8273c4d8
	if (ctx.cr6.eq) goto loc_8273C4D8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273c4e0
	if (ctx.cr6.eq) goto loc_8273C4E0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8273c4a0
	if (ctx.cr0.eq) goto loc_8273C4A0;
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x8273c8c0
	if (!ctx.cr6.eq) goto loc_8273C8C0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8273C4A0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8273C4A8:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c8c0
	if (ctx.cr6.lt) goto loc_8273C8C0;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8273c4e0
	if (!ctx.cr6.gt) goto loc_8273C4E0;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273c8c0
	if (!ctx.cr6.eq) goto loc_8273C8C0;
loc_8273C4D8:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_8273C4E0:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_8273C4E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8273C4F0:
	// addis r11,r3,32688
	ctx.r11.s64 = ctx.r3.s64 + 2142240768;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bgt cr6,0x8273c8c0
	if (ctx.cr6.gt) goto loc_8273C8C0;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-15080
	ctx.r12.s64 = ctx.r12.s64 + -15080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273C7CC;
	case 1:
		goto loc_8273C7D4;
	case 2:
		goto loc_8273C7D4;
	case 3:
		goto loc_8273C7D4;
	case 4:
		goto loc_8273C7D4;
	case 5:
		goto loc_8273C7D4;
	case 6:
		goto loc_8273C7D4;
	case 7:
		goto loc_8273C7D4;
	case 8:
		goto loc_8273C7D4;
	case 9:
		goto loc_8273C8C0;
	case 10:
		goto loc_8273C7DC;
	case 11:
		goto loc_8273C7DC;
	case 12:
		goto loc_8273C8C0;
	case 13:
		goto loc_8273C8C0;
	case 14:
		goto loc_8273C8C0;
	case 15:
		goto loc_8273C8C0;
	case 16:
		goto loc_8273C8C0;
	case 17:
		goto loc_8273C8C0;
	case 18:
		goto loc_8273C8C0;
	case 19:
		goto loc_8273C8C0;
	case 20:
		goto loc_8273C8C0;
	case 21:
		goto loc_8273C8C0;
	case 22:
		goto loc_8273C8C0;
	case 23:
		goto loc_8273C8C0;
	case 24:
		goto loc_8273C8C0;
	case 25:
		goto loc_8273C8C0;
	case 26:
		goto loc_8273C8C0;
	case 27:
		goto loc_8273C8C0;
	case 28:
		goto loc_8273C8C0;
	case 29:
		goto loc_8273C8C0;
	case 30:
		goto loc_8273C8C0;
	case 31:
		goto loc_8273C8C0;
	case 32:
		goto loc_8273C8C0;
	case 33:
		goto loc_8273C8C0;
	case 34:
		goto loc_8273C8C0;
	case 35:
		goto loc_8273C8C0;
	case 36:
		goto loc_8273C8C0;
	case 37:
		goto loc_8273C8C0;
	case 38:
		goto loc_8273C8C0;
	case 39:
		goto loc_8273C8C0;
	case 40:
		goto loc_8273C8C0;
	case 41:
		goto loc_8273C8C0;
	case 42:
		goto loc_8273C8C0;
	case 43:
		goto loc_8273C8C0;
	case 44:
		goto loc_8273C8C0;
	case 45:
		goto loc_8273C8C0;
	case 46:
		goto loc_8273C8C0;
	case 47:
		goto loc_8273C8C0;
	case 48:
		goto loc_8273C8C0;
	case 49:
		goto loc_8273C8C0;
	case 50:
		goto loc_8273C8C0;
	case 51:
		goto loc_8273C8C0;
	case 52:
		goto loc_8273C8C0;
	case 53:
		goto loc_8273C8C0;
	case 54:
		goto loc_8273C8C0;
	case 55:
		goto loc_8273C8C0;
	case 56:
		goto loc_8273C8C0;
	case 57:
		goto loc_8273C8C0;
	case 58:
		goto loc_8273C8C0;
	case 59:
		goto loc_8273C8C0;
	case 60:
		goto loc_8273C8C0;
	case 61:
		goto loc_8273C8C0;
	case 62:
		goto loc_8273C8C0;
	case 63:
		goto loc_8273C8C0;
	case 64:
		goto loc_8273C8C0;
	case 65:
		goto loc_8273C8C0;
	case 66:
		goto loc_8273C8C0;
	case 67:
		goto loc_8273C8C0;
	case 68:
		goto loc_8273C8C0;
	case 69:
		goto loc_8273C8C0;
	case 70:
		goto loc_8273C8C0;
	case 71:
		goto loc_8273C8C0;
	case 72:
		goto loc_8273C8C0;
	case 73:
		goto loc_8273C8C0;
	case 74:
		goto loc_8273C8C0;
	case 75:
		goto loc_8273C8C0;
	case 76:
		goto loc_8273C8C0;
	case 77:
		goto loc_8273C8C0;
	case 78:
		goto loc_8273C8C0;
	case 79:
		goto loc_8273C8C0;
	case 80:
		goto loc_8273C8C0;
	case 81:
		goto loc_8273C8C0;
	case 82:
		goto loc_8273C8C0;
	case 83:
		goto loc_8273C8C0;
	case 84:
		goto loc_8273C8C0;
	case 85:
		goto loc_8273C8C0;
	case 86:
		goto loc_8273C8C0;
	case 87:
		goto loc_8273C8C0;
	case 88:
		goto loc_8273C8C0;
	case 89:
		goto loc_8273C8C0;
	case 90:
		goto loc_8273C8C0;
	case 91:
		goto loc_8273C8C0;
	case 92:
		goto loc_8273C8C0;
	case 93:
		goto loc_8273C8C0;
	case 94:
		goto loc_8273C8C0;
	case 95:
		goto loc_8273C8C0;
	case 96:
		goto loc_8273C8C0;
	case 97:
		goto loc_8273C8C0;
	case 98:
		goto loc_8273C8C0;
	case 99:
		goto loc_8273C8C0;
	case 100:
		goto loc_8273C8C0;
	case 101:
		goto loc_8273C8C0;
	case 102:
		goto loc_8273C8C0;
	case 103:
		goto loc_8273C8C0;
	case 104:
		goto loc_8273C8C0;
	case 105:
		goto loc_8273C8C0;
	case 106:
		goto loc_8273C8C0;
	case 107:
		goto loc_8273C8C0;
	case 108:
		goto loc_8273C8C0;
	case 109:
		goto loc_8273C8C0;
	case 110:
		goto loc_8273C8C0;
	case 111:
		goto loc_8273C8C0;
	case 112:
		goto loc_8273C8C0;
	case 113:
		goto loc_8273C8C0;
	case 114:
		goto loc_8273C8C0;
	case 115:
		goto loc_8273C8C0;
	case 116:
		goto loc_8273C8C0;
	case 117:
		goto loc_8273C8C0;
	case 118:
		goto loc_8273C8C0;
	case 119:
		goto loc_8273C8C0;
	case 120:
		goto loc_8273C8C0;
	case 121:
		goto loc_8273C8C0;
	case 122:
		goto loc_8273C8C0;
	case 123:
		goto loc_8273C8C0;
	case 124:
		goto loc_8273C8C0;
	case 125:
		goto loc_8273C8C0;
	case 126:
		goto loc_8273C8C0;
	case 127:
		goto loc_8273C8C0;
	case 128:
		goto loc_8273C8C0;
	case 129:
		goto loc_8273C8C0;
	case 130:
		goto loc_8273C8C0;
	case 131:
		goto loc_8273C8C0;
	case 132:
		goto loc_8273C8C0;
	case 133:
		goto loc_8273C8C0;
	case 134:
		goto loc_8273C8C0;
	case 135:
		goto loc_8273C8C0;
	case 136:
		goto loc_8273C8C0;
	case 137:
		goto loc_8273C8C0;
	case 138:
		goto loc_8273C8C0;
	case 139:
		goto loc_8273C8C0;
	case 140:
		goto loc_8273C8C0;
	case 141:
		goto loc_8273C8C0;
	case 142:
		goto loc_8273C8C0;
	case 143:
		goto loc_8273C8C0;
	case 144:
		goto loc_8273C8C0;
	case 145:
		goto loc_8273C8C0;
	case 146:
		goto loc_8273C8C0;
	case 147:
		goto loc_8273C8C0;
	case 148:
		goto loc_8273C8C0;
	case 149:
		goto loc_8273C8C0;
	case 150:
		goto loc_8273C8C0;
	case 151:
		goto loc_8273C8C0;
	case 152:
		goto loc_8273C8C0;
	case 153:
		goto loc_8273C8C0;
	case 154:
		goto loc_8273C7E4;
	case 155:
		goto loc_8273C7E4;
	case 156:
		goto loc_8273C8C0;
	case 157:
		goto loc_8273C8C0;
	case 158:
		goto loc_8273C8C0;
	case 159:
		goto loc_8273C8C0;
	case 160:
		goto loc_8273C8C0;
	case 161:
		goto loc_8273C8C0;
	case 162:
		goto loc_8273C8C0;
	case 163:
		goto loc_8273C8C0;
	case 164:
		goto loc_8273C8C0;
	case 165:
		goto loc_8273C8C0;
	case 166:
		goto loc_8273C8C0;
	case 167:
		goto loc_8273C8C0;
	case 168:
		goto loc_8273C8C0;
	case 169:
		goto loc_8273C8C0;
	case 170:
		goto loc_8273C7C4;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-14388(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14388);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14380(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14380);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14372(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14372);
	// lwz r19,-14372(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14372);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14364(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14364);
	// lwz r19,-14364(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14364);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14396(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14396);
loc_8273C7C4:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_8273C7CC:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_8273C7D4:
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
loc_8273C7DC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8273C7E4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8273C7EC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8273C7F4:
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273c884
	if (ctx.cr6.gt) goto loc_8273C884;
	// beq cr6,0x8273c87c
	if (ctx.cr6.eq) goto loc_8273C87C;
	// addis r11,r3,32672
	ctx.r11.s64 = ctx.r3.s64 + 2141192192;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8273c8c0
	if (ctx.cr6.gt) goto loc_8273C8C0;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-14292
	ctx.r12.s64 = ctx.r12.s64 + -14292;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273C84C;
	case 1:
		goto loc_8273C8C0;
	case 2:
		goto loc_8273C8C0;
	case 3:
		goto loc_8273C854;
	case 4:
		goto loc_8273C85C;
	case 5:
		goto loc_8273C864;
	case 6:
		goto loc_8273C86C;
	case 7:
		goto loc_8273C874;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-14260(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14260);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14144(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14144);
	// lwz r19,-14252(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14252);
	// lwz r19,-14244(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14244);
	// lwz r19,-14236(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14236);
	// lwz r19,-14228(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14228);
	// lwz r19,-14220(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -14220);
loc_8273C84C:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8273C854:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_8273C85C:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_8273C864:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_8273C86C:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_8273C874:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_8273C87C:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_8273C884:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8273c8dc
	if (ctx.cr6.gt) goto loc_8273C8DC;
	// beq cr6,0x8273c8d4
	if (ctx.cr6.eq) goto loc_8273C8D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273c8cc
	if (ctx.cr6.eq) goto loc_8273C8CC;
	// lis r11,79
	ctx.r11.s64 = 5177344;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8273c8c0
	if (!ctx.cr6.gt) goto loc_8273C8C0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8273c8cc
	if (!ctx.cr6.gt) goto loc_8273C8CC;
loc_8273C8C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x8273c8d0
	if (ctx.cr6.lt) goto loc_8273C8D0;
loc_8273C8CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8273C8D0:
	// blr 
	return;
loc_8273C8D4:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_8273C8DC:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c8c0
	if (ctx.cr6.lt) goto loc_8273C8C0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8273c8cc
	if (!ctx.cr6.gt) goto loc_8273C8CC;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273c8c0
	if (!ctx.cr6.eq) goto loc_8273C8C0;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C910"))) PPC_WEAK_FUNC(sub_8273C910);
PPC_FUNC_IMPL(__imp__sub_8273C910) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273C928:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8273c928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273C928;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8273c994
	if (ctx.cr6.eq) goto loc_8273C994;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8273c96c
	if (ctx.cr6.eq) goto loc_8273C96C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	return;
loc_8273C96C:
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_8273C994:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stb r11,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C9B8"))) PPC_WEAK_FUNC(sub_8273C9B8);
PPC_FUNC_IMPL(__imp__sub_8273C9B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r10,r4,-9
	ctx.r10.s64 = ctx.r4.s64 + -589824;
	// cmplwi cr6,r10,176
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 176, ctx.xer);
	// bgt cr6,0x8273cd10
	if (ctx.cr6.gt) goto loc_8273CD10;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-13836
	ctx.r12.s64 = ctx.r12.s64 + -13836;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8273CD18;
	case 1:
		goto loc_8273CD10;
	case 2:
		goto loc_8273CD10;
	case 3:
		goto loc_8273CD10;
	case 4:
		goto loc_8273CD10;
	case 5:
		goto loc_8273CD10;
	case 6:
		goto loc_8273CD10;
	case 7:
		goto loc_8273CD10;
	case 8:
		goto loc_8273CD10;
	case 9:
		goto loc_8273CD10;
	case 10:
		goto loc_8273CD10;
	case 11:
		goto loc_8273CD10;
	case 12:
		goto loc_8273CD10;
	case 13:
		goto loc_8273CD10;
	case 14:
		goto loc_8273CD10;
	case 15:
		goto loc_8273CD10;
	case 16:
		goto loc_8273CCB8;
	case 17:
		goto loc_8273CD10;
	case 18:
		goto loc_8273CD10;
	case 19:
		goto loc_8273CD10;
	case 20:
		goto loc_8273CD10;
	case 21:
		goto loc_8273CD10;
	case 22:
		goto loc_8273CD10;
	case 23:
		goto loc_8273CD10;
	case 24:
		goto loc_8273CD10;
	case 25:
		goto loc_8273CD10;
	case 26:
		goto loc_8273CD10;
	case 27:
		goto loc_8273CD10;
	case 28:
		goto loc_8273CD10;
	case 29:
		goto loc_8273CD10;
	case 30:
		goto loc_8273CD10;
	case 31:
		goto loc_8273CD10;
	case 32:
		goto loc_8273CCC4;
	case 33:
		goto loc_8273CD10;
	case 34:
		goto loc_8273CD10;
	case 35:
		goto loc_8273CD10;
	case 36:
		goto loc_8273CD10;
	case 37:
		goto loc_8273CD10;
	case 38:
		goto loc_8273CD10;
	case 39:
		goto loc_8273CD10;
	case 40:
		goto loc_8273CD10;
	case 41:
		goto loc_8273CD10;
	case 42:
		goto loc_8273CD10;
	case 43:
		goto loc_8273CD10;
	case 44:
		goto loc_8273CD10;
	case 45:
		goto loc_8273CD10;
	case 46:
		goto loc_8273CD10;
	case 47:
		goto loc_8273CD10;
	case 48:
		goto loc_8273CCCC;
	case 49:
		goto loc_8273CD10;
	case 50:
		goto loc_8273CD10;
	case 51:
		goto loc_8273CD10;
	case 52:
		goto loc_8273CD10;
	case 53:
		goto loc_8273CD10;
	case 54:
		goto loc_8273CD10;
	case 55:
		goto loc_8273CD10;
	case 56:
		goto loc_8273CD10;
	case 57:
		goto loc_8273CD10;
	case 58:
		goto loc_8273CD10;
	case 59:
		goto loc_8273CD10;
	case 60:
		goto loc_8273CD10;
	case 61:
		goto loc_8273CD10;
	case 62:
		goto loc_8273CD10;
	case 63:
		goto loc_8273CD10;
	case 64:
		goto loc_8273CCD4;
	case 65:
		goto loc_8273CD10;
	case 66:
		goto loc_8273CD10;
	case 67:
		goto loc_8273CD10;
	case 68:
		goto loc_8273CD10;
	case 69:
		goto loc_8273CD10;
	case 70:
		goto loc_8273CD10;
	case 71:
		goto loc_8273CD10;
	case 72:
		goto loc_8273CD10;
	case 73:
		goto loc_8273CD10;
	case 74:
		goto loc_8273CD10;
	case 75:
		goto loc_8273CD10;
	case 76:
		goto loc_8273CD10;
	case 77:
		goto loc_8273CD10;
	case 78:
		goto loc_8273CD10;
	case 79:
		goto loc_8273CD10;
	case 80:
		goto loc_8273CD18;
	case 81:
		goto loc_8273CD10;
	case 82:
		goto loc_8273CD10;
	case 83:
		goto loc_8273CD10;
	case 84:
		goto loc_8273CD10;
	case 85:
		goto loc_8273CD10;
	case 86:
		goto loc_8273CD10;
	case 87:
		goto loc_8273CD10;
	case 88:
		goto loc_8273CD10;
	case 89:
		goto loc_8273CD10;
	case 90:
		goto loc_8273CD10;
	case 91:
		goto loc_8273CD10;
	case 92:
		goto loc_8273CD10;
	case 93:
		goto loc_8273CD10;
	case 94:
		goto loc_8273CD10;
	case 95:
		goto loc_8273CD10;
	case 96:
		goto loc_8273CD18;
	case 97:
		goto loc_8273CD10;
	case 98:
		goto loc_8273CD10;
	case 99:
		goto loc_8273CD10;
	case 100:
		goto loc_8273CD10;
	case 101:
		goto loc_8273CD10;
	case 102:
		goto loc_8273CD10;
	case 103:
		goto loc_8273CD10;
	case 104:
		goto loc_8273CD10;
	case 105:
		goto loc_8273CD10;
	case 106:
		goto loc_8273CD10;
	case 107:
		goto loc_8273CD10;
	case 108:
		goto loc_8273CD10;
	case 109:
		goto loc_8273CD10;
	case 110:
		goto loc_8273CD10;
	case 111:
		goto loc_8273CD10;
	case 112:
		goto loc_8273CCDC;
	case 113:
		goto loc_8273CD10;
	case 114:
		goto loc_8273CD10;
	case 115:
		goto loc_8273CD10;
	case 116:
		goto loc_8273CD10;
	case 117:
		goto loc_8273CD10;
	case 118:
		goto loc_8273CD10;
	case 119:
		goto loc_8273CD10;
	case 120:
		goto loc_8273CD10;
	case 121:
		goto loc_8273CD10;
	case 122:
		goto loc_8273CD10;
	case 123:
		goto loc_8273CD10;
	case 124:
		goto loc_8273CD10;
	case 125:
		goto loc_8273CD10;
	case 126:
		goto loc_8273CD10;
	case 127:
		goto loc_8273CD10;
	case 128:
		goto loc_8273CCF0;
	case 129:
		goto loc_8273CD10;
	case 130:
		goto loc_8273CD10;
	case 131:
		goto loc_8273CD10;
	case 132:
		goto loc_8273CD10;
	case 133:
		goto loc_8273CD10;
	case 134:
		goto loc_8273CD10;
	case 135:
		goto loc_8273CD10;
	case 136:
		goto loc_8273CD10;
	case 137:
		goto loc_8273CD10;
	case 138:
		goto loc_8273CD10;
	case 139:
		goto loc_8273CD10;
	case 140:
		goto loc_8273CD10;
	case 141:
		goto loc_8273CD10;
	case 142:
		goto loc_8273CD10;
	case 143:
		goto loc_8273CD10;
	case 144:
		goto loc_8273CD18;
	case 145:
		goto loc_8273CD10;
	case 146:
		goto loc_8273CD10;
	case 147:
		goto loc_8273CD10;
	case 148:
		goto loc_8273CD10;
	case 149:
		goto loc_8273CD10;
	case 150:
		goto loc_8273CD10;
	case 151:
		goto loc_8273CD10;
	case 152:
		goto loc_8273CD10;
	case 153:
		goto loc_8273CD10;
	case 154:
		goto loc_8273CD10;
	case 155:
		goto loc_8273CD10;
	case 156:
		goto loc_8273CD10;
	case 157:
		goto loc_8273CD10;
	case 158:
		goto loc_8273CD10;
	case 159:
		goto loc_8273CD10;
	case 160:
		goto loc_8273CD18;
	case 161:
		goto loc_8273CD10;
	case 162:
		goto loc_8273CD10;
	case 163:
		goto loc_8273CD10;
	case 164:
		goto loc_8273CD10;
	case 165:
		goto loc_8273CD10;
	case 166:
		goto loc_8273CD10;
	case 167:
		goto loc_8273CD10;
	case 168:
		goto loc_8273CD10;
	case 169:
		goto loc_8273CD10;
	case 170:
		goto loc_8273CD10;
	case 171:
		goto loc_8273CD10;
	case 172:
		goto loc_8273CD10;
	case 173:
		goto loc_8273CD10;
	case 174:
		goto loc_8273CD10;
	case 175:
		goto loc_8273CD10;
	case 176:
		goto loc_8273CD18;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13128(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13128);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13116(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13116);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13108(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13108);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13100(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13100);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13092(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13092);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13072(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13072);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13040(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13040);
	// lwz r19,-13032(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13032);
loc_8273CCB8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8273CCC4:
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
loc_8273CCCC:
	// sth r5,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r5.u16);
	// blr 
	return;
loc_8273CCD4:
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// blr 
	return;
loc_8273CCDC:
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_8273CCF0:
	// lwz r10,552(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8273cd08
	if (ctx.cr6.eq) goto loc_8273CD08;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_8273CD08:
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// blr 
	return;
loc_8273CD10:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
loc_8273CD18:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CD20"))) PPC_WEAK_FUNC(sub_8273CD20);
PPC_FUNC_IMPL(__imp__sub_8273CD20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273cd34
	if (!ctx.cr6.eq) goto loc_8273CD34;
loc_8273CD28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8273CD34:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273cd28
	if (ctx.cr6.eq) goto loc_8273CD28;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8273cd28
	if (ctx.cr6.eq) goto loc_8273CD28;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82745f18
	sub_82745F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273CD50"))) PPC_WEAK_FUNC(sub_8273CD50);
PPC_FUNC_IMPL(__imp__sub_8273CD50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273cd6c
	if (!ctx.cr6.eq) goto loc_8273CD6C;
loc_8273CD60:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8273CD6C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273cd60
	if (ctx.cr6.eq) goto loc_8273CD60;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8273cd60
	if (ctx.cr6.eq) goto loc_8273CD60;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x82745460
	sub_82745460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273CD98"))) PPC_WEAK_FUNC(sub_8273CD98);
PPC_FUNC_IMPL(__imp__sub_8273CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8273CDA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82745850
	ctx.lr = 0x8273CDD4;
	sub_82745850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273cf08
	if (ctx.cr6.lt) goto loc_8273CF08;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8273CDF0;
	sub_826DFD40(ctx, base);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r27.u32);
	// stw r28,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r28.u32);
	// bl 0x82745850
	ctx.lr = 0x8273CE10;
	sub_82745850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273cf08
	if (ctx.cr6.lt) goto loc_8273CF08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273CE28:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8273ce28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273CE28;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82745850
	ctx.lr = 0x8273CE48;
	sub_82745850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273cf08
	if (ctx.cr6.lt) goto loc_8273CF08;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8273CE64;
	sub_826DFD40(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82745850
	ctx.lr = 0x8273CE78;
	sub_82745850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273cf08
	if (ctx.cr6.lt) goto loc_8273CF08;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826dfd40
	ctx.lr = 0x8273CE94;
	sub_826DFD40(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-13024
	ctx.r4.s64 = ctx.r11.s64 + -13024;
	// addi r7,r30,572
	ctx.r7.s64 = ctx.r30.s64 + 572;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r9.u32);
	// stw r29,608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 608, ctx.r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82745b30
	ctx.lr = 0x8273CED4;
	sub_82745B30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273cf08
	if (ctx.cr6.lt) goto loc_8273CF08;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// addi r7,r30,568
	ctx.r7.s64 = ctx.r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12976
	ctx.r4.s64 = ctx.r11.s64 + -12976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82745b30
	ctx.lr = 0x8273CEFC;
	sub_82745B30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8273cf78
	if (!ctx.cr6.lt) goto loc_8273CF78;
loc_8273CF08:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cf24
	if (ctx.cr6.eq) goto loc_8273CF24;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827458b8
	ctx.lr = 0x8273CF24;
	sub_827458B8(ctx, base);
loc_8273CF24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cf40
	if (ctx.cr6.eq) goto loc_8273CF40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827458b8
	ctx.lr = 0x8273CF40;
	sub_827458B8(ctx, base);
loc_8273CF40:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cf5c
	if (ctx.cr6.eq) goto loc_8273CF5C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827458b8
	ctx.lr = 0x8273CF5C;
	sub_827458B8(ctx, base);
loc_8273CF5C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cf78
	if (ctx.cr6.eq) goto loc_8273CF78;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827458b8
	ctx.lr = 0x8273CF78;
	sub_827458B8(ctx, base);
loc_8273CF78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273CF88"))) PPC_WEAK_FUNC(sub_8273CF88);
PPC_FUNC_IMPL(__imp__sub_8273CF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8273CF90;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273CFC0;
	sub_82745CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273CFDC;
	sub_82745CD0(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273cff8
	if (ctx.cr6.eq) goto loc_8273CFF8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
loc_8273CFF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273d050
	if (ctx.cr6.eq) goto loc_8273D050;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D014;
	sub_82745CD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d040
	if (ctx.cr6.eq) goto loc_8273D040;
	// bl 0x82745f18
	ctx.lr = 0x8273D024;
	sub_82745F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82745c50
	ctx.lr = 0x8273D040;
	sub_82745C50(ctx, base);
loc_8273D040:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82745c50
	ctx.lr = 0x8273D04C;
	sub_82745C50(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_8273D050:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82745be8
	ctx.lr = 0x8273D060;
	sub_82745BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// bl 0x82746e08
	ctx.lr = 0x8273D090;
	sub_82746E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8273d10c
	if (ctx.cr6.eq) goto loc_8273D10C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,13492
	ctx.r11.s64 = ctx.r11.s64 + 13492;
	// addi r10,r10,13480
	ctx.r10.s64 = ctx.r10.s64 + 13480;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273d0dc
	if (!ctx.cr6.eq) goto loc_8273D0DC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,13472
	ctx.r11.s64 = ctx.r11.s64 + 13472;
	// b 0x8273d0ec
	goto loc_8273D0EC;
loc_8273D0DC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273d0f0
	if (!ctx.cr6.eq) goto loc_8273D0F0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,13464
	ctx.r11.s64 = ctx.r11.s64 + 13464;
loc_8273D0EC:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8273D0F0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827456d8
	ctx.lr = 0x8273D100;
	sub_827456D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
loc_8273D10C:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x827472e0
	ctx.lr = 0x8273D138;
	sub_827472E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,-13896
	ctx.r4.s64 = ctx.r11.s64 + -13896;
	// bl 0x827453c0
	ctx.lr = 0x8273D15C;
	sub_827453C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8273c910
	ctx.lr = 0x8273D198;
	sub_8273C910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82745588
	ctx.lr = 0x8273D1BC;
	sub_82745588(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82745be8
	ctx.lr = 0x8273D1D8;
	sub_82745BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273d220
	if (ctx.cr6.lt) goto loc_8273D220;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82745588
	ctx.lr = 0x8273D214;
	sub_82745588(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8273d238
	if (!ctx.cr6.lt) goto loc_8273D238;
loc_8273D220:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273d238
	if (ctx.cr6.eq) goto loc_8273D238;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82745c50
	ctx.lr = 0x8273D238;
	sub_82745C50(ctx, base);
loc_8273D238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D248"))) PPC_WEAK_FUNC(sub_8273D248);
PPC_FUNC_IMPL(__imp__sub_8273D248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8273D250;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8273d2a0
	if (!ctx.cr6.eq) goto loc_8273D2A0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273D284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d320
	if (ctx.cr6.lt) goto loc_8273D320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273b3d0
	ctx.lr = 0x8273D298;
	sub_8273B3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8273D2A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82745cd0
	ctx.lr = 0x8273D2AC;
	sub_82745CD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273d2c4
	if (ctx.cr6.eq) goto loc_8273D2C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8273d320
	if (ctx.cr6.eq) goto loc_8273D320;
loc_8273D2C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cf88
	ctx.lr = 0x8273D2D4;
	sub_8273CF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d320
	if (ctx.cr6.lt) goto loc_8273D320;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273D2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d320
	if (ctx.cr6.lt) goto loc_8273D320;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D30C;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d320
	if (ctx.cr6.lt) goto loc_8273D320;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8273D320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D328"))) PPC_WEAK_FUNC(sub_8273D328);
PPC_FUNC_IMPL(__imp__sub_8273D328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8273D330;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8273d374
	if (!ctx.cr6.eq) goto loc_8273D374;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8273D374:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273D38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D3A4;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D3BC;
	sub_82745CD0(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273d3d4
	if (ctx.cr6.eq) goto loc_8273D3D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
loc_8273D3D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273d3f8
	if (!ctx.cr6.eq) goto loc_8273D3F8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cf88
	ctx.lr = 0x8273D3F0;
	sub_8273CF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
loc_8273D3F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D408;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8273d470
	if (ctx.cr6.eq) goto loc_8273D470;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273d470
	if (ctx.cr6.eq) goto loc_8273D470;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8273d470
	if (ctx.cr6.eq) goto loc_8273D470;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8273d470
	if (ctx.cr6.eq) goto loc_8273D470;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8273d5dc
	if (ctx.cr6.gt) goto loc_8273D5DC;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-11168
	ctx.r12.s64 = ctx.r12.s64 + -11168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273D470;
	case 1:
		goto loc_8273D480;
	case 2:
		goto loc_8273D470;
	case 3:
		goto loc_8273D4A0;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-11152(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11152);
	// lwz r19,-11136(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11136);
	// lwz r19,-11152(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11152);
	// lwz r19,-11104(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11104);
loc_8273D470:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8273D480:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// b 0x8273d514
	goto loc_8273D514;
loc_8273D4A0:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// bl 0x82745cd0
	ctx.lr = 0x8273D4B8;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// bl 0x8273b3d0
	ctx.lr = 0x8273D508;
	sub_8273B3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_8273D514:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8273d5dc
	if (ctx.cr6.gt) goto loc_8273D5DC;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// addi r12,r12,-10948
	ctx.r12.s64 = ctx.r12.s64 + -10948;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8273D54C;
	case 1:
		goto loc_8273D470;
	case 2:
		goto loc_8273D56C;
	case 3:
		goto loc_8273D470;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-10932(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -10932);
	// lwz r19,-11152(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11152);
	// lwz r19,-10900(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -10900);
	// lwz r19,-11152(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11152);
loc_8273D54C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8273D56C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273b3d0
	ctx.lr = 0x8273D578;
	sub_8273B3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cf88
	ctx.lr = 0x8273D594;
	sub_8273CF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82745cd0
	ctx.lr = 0x8273D5AC;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d5e4
	if (ctx.cr6.lt) goto loc_8273D5E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8273D5DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8273D5E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D5F0"))) PPC_WEAK_FUNC(sub_8273D5F0);
PPC_FUNC_IMPL(__imp__sub_8273D5F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82745310
	ctx.lr = 0x8273D618;
	sub_82745310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273d638
	if (ctx.cr6.lt) goto loc_8273D638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8273cd98
	ctx.lr = 0x8273D630;
	sub_8273CD98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8273d658
	if (!ctx.cr6.lt) goto loc_8273D658;
loc_8273D638:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82745900
	ctx.lr = 0x8273D640;
	sub_82745900(ctx, base);
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
loc_8273D658:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_8273D670"))) PPC_WEAK_FUNC(sub_8273D670);
PPC_FUNC_IMPL(__imp__sub_8273D670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8273D678;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,13492
	ctx.r11.s64 = ctx.r11.s64 + 13492;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8273d8ac
	if (ctx.cr6.eq) goto loc_8273D8AC;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8273d8ac
	if (ctx.cr6.gt) goto loc_8273D8AC;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d8ac
	if (ctx.cr6.eq) goto loc_8273D8AC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82745850
	ctx.lr = 0x8273D6D0;
	sub_82745850(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273D6EC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8273d6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273D6EC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82747930
	ctx.lr = 0x8273D710;
	sub_82747930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// addi r11,r11,13508
	ctx.r11.s64 = ctx.r11.s64 + 13508;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8273c368
	ctx.lr = 0x8273D754;
	sub_8273C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// bne cr6,0x8273d76c
	if (!ctx.cr6.eq) goto loc_8273D76C;
	// lis r30,-32688
	ctx.r30.s64 = -2142240768;
	// ori r30,r30,186
	ctx.r30.u64 = ctx.r30.u64 | 186;
	// b 0x8273d864
	goto loc_8273D864;
loc_8273D76C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827456d8
	ctx.lr = 0x8273D77C;
	sub_827456D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-17088
	ctx.r5.s64 = ctx.r11.s64 + -17088;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82745380
	ctx.lr = 0x8273D7A0;
	sub_82745380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r29.u32);
	// addi r5,r11,-17088
	ctx.r5.s64 = ctx.r11.s64 + -17088;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82745380
	ctx.lr = 0x8273D7C8;
	sub_82745380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-17088
	ctx.r5.s64 = ctx.r11.s64 + -17088;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// bl 0x82745380
	ctx.lr = 0x8273D7F4;
	sub_82745380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-17088
	ctx.r5.s64 = ctx.r11.s64 + -17088;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// bl 0x82745380
	ctx.lr = 0x8273D820;
	sub_82745380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273d864
	if (ctx.cr6.lt) goto loc_8273D864;
	// li r11,5
	ctx.r11.s64 = 5;
	// cntlzw r10,r25
	ctx.r10.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273af88
	ctx.lr = 0x8273D858;
	sub_8273AF88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8273d89c
	if (!ctx.cr6.lt) goto loc_8273D89C;
loc_8273D864:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d89c
	if (ctx.cr6.eq) goto loc_8273D89C;
	// bl 0x827477c0
	ctx.lr = 0x8273D874;
	sub_827477C0(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8273d88c
	if (!ctx.cr6.eq) goto loc_8273D88C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
loc_8273D88C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273D89C;
	sub_827458B8(ctx, base);
loc_8273D89C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c438
	ctx.lr = 0x8273D8A4;
	sub_8273C438(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8273D8AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D8B8"))) PPC_WEAK_FUNC(sub_8273D8B8);
PPC_FUNC_IMPL(__imp__sub_8273D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8273D8C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// beq cr6,0x8273da84
	if (ctx.cr6.eq) goto loc_8273DA84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273da84
	if (ctx.cr6.eq) goto loc_8273DA84;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8273da84
	if (ctx.cr6.gt) goto loc_8273DA84;
	// lwz r11,528(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273da84
	if (ctx.cr6.eq) goto loc_8273DA84;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8273D914;
	sub_826DFD40(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273D92C;
	sub_82745CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273da74
	if (ctx.cr6.lt) goto loc_8273DA74;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273da84
	if (!ctx.cr6.eq) goto loc_8273DA84;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x82745cd0
	ctx.lr = 0x8273D95C;
	sub_82745CD0(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273d9a8
	if (ctx.cr6.eq) goto loc_8273D9A8;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8273d9a8
	if (ctx.cr6.eq) goto loc_8273D9A8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8273D984:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273d9f8
	if (ctx.cr6.eq) goto loc_8273D9F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8273d984
	if (ctx.cr6.lt) goto loc_8273D984;
loc_8273D9A8:
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r11,r11,r9
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_8273D9C4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273da08
	if (ctx.cr6.eq) goto loc_8273DA08;
	// ld r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x8273da08
	if (ctx.cr6.eq) goto loc_8273DA08;
	// bl 0x826e3080
	ctx.lr = 0x8273D9E4;
	sub_826E3080(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f0,13512(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13512);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x8273da10
	goto loc_8273DA10;
loc_8273D9F8:
	// rlwinm r11,r10,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8273d9c4
	goto loc_8273D9C4;
loc_8273DA08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8273DA10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r5,r31,790
	ctx.r5.s64 = ctx.r31.s64 + 790;
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// sth r11,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r11.u16);
	// bl 0x8273c110
	ctx.lr = 0x8273DA54;
	sub_8273C110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273da74
	if (ctx.cr6.lt) goto loc_8273DA74;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,12696
	ctx.r4.s64 = ctx.r11.s64 + 12696;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x826df680
	ctx.lr = 0x8273DA74;
	sub_826DF680(ctx, base);
loc_8273DA74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c438
	ctx.lr = 0x8273DA7C;
	sub_8273C438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8273DA84:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273DA90"))) PPC_WEAK_FUNC(sub_8273DA90);
PPC_FUNC_IMPL(__imp__sub_8273DA90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8273dacc
	if (!ctx.cr6.eq) goto loc_8273DACC;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8273db74
	goto loc_8273DB74;
loc_8273DACC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82745cf8
	ctx.lr = 0x8273DAE0;
	sub_82745CF8(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	ctx.r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8273db64
	if (ctx.cr6.eq) goto loc_8273DB64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273db70
	if (ctx.cr6.lt) goto loc_8273DB70;
loc_8273DAF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273db70
	if (ctx.cr6.lt) goto loc_8273DB70;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8273db48
	if (!ctx.cr6.eq) goto loc_8273DB48;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273db48
	if (!ctx.cr6.eq) goto loc_8273DB48;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x82745cd0
	ctx.lr = 0x8273DB2C;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273db70
	if (ctx.cr6.lt) goto loc_8273DB70;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82746f38
	ctx.lr = 0x8273DB40;
	sub_82746F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273db70
	if (ctx.cr6.lt) goto loc_8273DB70;
loc_8273DB48:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82745d68
	ctx.lr = 0x8273DB5C;
	sub_82745D68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8273daf8
	if (!ctx.cr6.eq) goto loc_8273DAF8;
loc_8273DB64:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82745dd8
	ctx.lr = 0x8273DB70;
	sub_82745DD8(ctx, base);
loc_8273DB70:
	// bl 0x8273c438
	ctx.lr = 0x8273DB74;
	sub_8273C438(ctx, base);
loc_8273DB74:
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

__attribute__((alias("__imp__sub_8273DB90"))) PPC_WEAK_FUNC(sub_8273DB90);
PPC_FUNC_IMPL(__imp__sub_8273DB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8273DB98;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8273DBC0;
	sub_826DFD40(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x826dfd40
	ctx.lr = 0x8273DBD4;
	sub_826DFD40(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
	// lwz r11,528(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// lhz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8273dc7c
	if (!ctx.cr6.gt) goto loc_8273DC7C;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8273DC2C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8273dc4c
	if (!ctx.cr6.eq) goto loc_8273DC4C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r23.u32);
	// b 0x8273dc68
	goto loc_8273DC68;
loc_8273DC4C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x8273dc64
	if (!ctx.cr6.eq) goto loc_8273DC64;
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x8273dc68
	goto loc_8273DC68;
loc_8273DC64:
	// stwx r24,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r24.u32);
loc_8273DC68:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8273dc2c
	if (ctx.cr6.lt) goto loc_8273DC2C;
loc_8273DC7C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8273DC84:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8273dccc
	if (ctx.cr6.eq) goto loc_8273DCCC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8273dcb4
	if (!ctx.cr6.eq) goto loc_8273DCB4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
loc_8273DCB4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273dcc4
	if (!ctx.cr6.eq) goto loc_8273DCC4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8273df64
	if (ctx.cr6.eq) goto loc_8273DF64;
loc_8273DCC4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_8273DCCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8273dc84
	if (ctx.cr6.lt) goto loc_8273DC84;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8273DCE8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8273df14
	if (!ctx.cr6.eq) goto loc_8273DF14;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273DD0C;
	sub_82745CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273df54
	if (ctx.cr6.lt) goto loc_8273DF54;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x8273de3c
	if (!ctx.cr6.lt) goto loc_8273DE3C;
loc_8273DD2C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8273de28
	if (!ctx.cr6.eq) goto loc_8273DE28;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273DD50;
	sub_82745CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273df54
	if (ctx.cr6.lt) goto loc_8273DF54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8273de28
	if (!ctx.cr6.eq) goto loc_8273DE28;
	// addi r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8273dd90
	if (ctx.cr6.eq) goto loc_8273DD90;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273ddd4
	if (!ctx.cr6.eq) goto loc_8273DDD4;
loc_8273DD90:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273ddd4
	if (!ctx.cr6.eq) goto loc_8273DDD4;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273ddd4
	if (!ctx.cr6.eq) goto loc_8273DDD4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8273de58
	if (ctx.cr6.eq) goto loc_8273DE58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8273de58
	if (ctx.cr6.eq) goto loc_8273DE58;
loc_8273DDD4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273de28
	if (!ctx.cr6.eq) goto loc_8273DE28;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8273ddf8
	if (ctx.cr6.eq) goto loc_8273DDF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273de28
	if (!ctx.cr6.eq) goto loc_8273DE28;
loc_8273DDF8:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8273de14
	if (ctx.cr6.eq) goto loc_8273DE14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273de28
	if (!ctx.cr6.eq) goto loc_8273DE28;
loc_8273DE14:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273dea0
	if (ctx.cr6.eq) goto loc_8273DEA0;
loc_8273DE28:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x8273dd2c
	if (ctx.cr6.lt) goto loc_8273DD2C;
loc_8273DE3C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273dee8
	if (!ctx.cr6.eq) goto loc_8273DEE8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8273def8
	goto loc_8273DEF8;
loc_8273DE58:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8273d328
	ctx.lr = 0x8273DE88;
	sub_8273D328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273df54
	if (ctx.cr6.lt) goto loc_8273DF54;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r24,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// b 0x8273df14
	goto loc_8273DF14;
loc_8273DEA0:
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8273d328
	ctx.lr = 0x8273DECC;
	sub_8273D328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273df54
	if (ctx.cr6.lt) goto loc_8273DF54;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r24,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u8);
	// b 0x8273df14
	goto loc_8273DF14;
loc_8273DEE8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8273DEF8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8273d248
	ctx.lr = 0x8273DF08;
	sub_8273D248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273df54
	if (ctx.cr6.lt) goto loc_8273DF54;
loc_8273DF14:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// blt cr6,0x8273dce8
	if (ctx.cr6.lt) goto loc_8273DCE8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8273DF2C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8273df2c
	if (ctx.cr6.lt) goto loc_8273DF2C;
loc_8273DF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c438
	ctx.lr = 0x8273DF5C;
	sub_8273C438(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8273DF64:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273DF70"))) PPC_WEAK_FUNC(sub_8273DF70);
PPC_FUNC_IMPL(__imp__sub_8273DF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8273DF78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e070
	if (ctx.cr6.eq) goto loc_8273E070;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e004
	if (!ctx.cr6.eq) goto loc_8273E004;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x8273c438
	ctx.lr = 0x8273DFFC;
	sub_8273C438(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8273E004:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82746868
	ctx.lr = 0x8273E00C;
	sub_82746868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273e064
	if (ctx.cr6.lt) goto loc_8273E064;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273E028;
	sub_82745CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273e064
	if (ctx.cr6.lt) goto loc_8273E064;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273e070
	if (!ctx.cr6.eq) goto loc_8273E070;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273b990
	ctx.lr = 0x8273E064;
	sub_8273B990(ctx, base);
loc_8273E064:
	// bl 0x8273c438
	ctx.lr = 0x8273E068;
	sub_8273C438(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8273E070:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E080"))) PPC_WEAK_FUNC(sub_8273E080);
PPC_FUNC_IMPL(__imp__sub_8273E080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8273E088;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e1bc
	if (ctx.cr6.eq) goto loc_8273E1BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8273e1bc
	if (ctx.cr6.eq) goto loc_8273E1BC;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x8273e1bc
	if (ctx.cr6.gt) goto loc_8273E1BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e1bc
	if (ctx.cr6.eq) goto loc_8273E1BC;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273e1bc
	if (ctx.cr6.eq) goto loc_8273E1BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8273b468
	ctx.lr = 0x8273E0EC;
	sub_8273B468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8273e17c
	if (ctx.cr6.lt) goto loc_8273E17C;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8273e160
	if (ctx.cr6.eq) goto loc_8273E160;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8273e160
	if (!ctx.cr6.gt) goto loc_8273E160;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273E128;
	sub_82745CD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8273e160
	if (!ctx.cr6.eq) goto loc_8273E160;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8273E160:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273e17c
	if (!ctx.cr6.eq) goto loc_8273E17C;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8273E17C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273e1a8
	if (ctx.cr6.eq) goto loc_8273E1A8;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273e1a8
	if (ctx.cr6.eq) goto loc_8273E1A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8273c438
	ctx.lr = 0x8273E1A0;
	sub_8273C438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8273E1A8:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8273E1BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E1C8"))) PPC_WEAK_FUNC(sub_8273E1C8);
PPC_FUNC_IMPL(__imp__sub_8273E1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8273E1D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x8273e400
	if (ctx.cr6.eq) goto loc_8273E400;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8273e400
	if (ctx.cr6.eq) goto loc_8273E400;
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e400
	if (ctx.cr6.eq) goto loc_8273E400;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpld cr6,r27,r11
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8273e400
	if (ctx.cr6.gt) goto loc_8273E400;
	// std r28,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r28.u64);
	// bl 0x8273ba00
	ctx.lr = 0x8273E238;
	sub_8273BA00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r25,r11,168
	ctx.r25.u64 = ctx.r11.u64 | 168;
loc_8273E250:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273e080
	ctx.lr = 0x8273E264;
	sub_8273E080(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e3c0
	if (ctx.cr6.eq) goto loc_8273E3C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82745cd0
	ctx.lr = 0x8273E28C;
	sub_82745CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273e2f4
	if (!ctx.cr6.eq) goto loc_8273E2F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c110
	ctx.lr = 0x8273E2B8;
	sub_8273C110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8273e300
	goto loc_8273E300;
loc_8273E2F4:
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,7,19,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1000;
loc_8273E300:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82745850
	ctx.lr = 0x8273E314;
	sub_82745850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
loc_8273E320:
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e334
	if (!ctx.cr6.eq) goto loc_8273E334;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8273e36c
	goto loc_8273E36C;
loc_8273E334:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82746250
	ctx.lr = 0x8273E354;
	sub_82746250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273e36c
	if (ctx.cr6.lt) goto loc_8273E36C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273e36c
	if (!ctx.cr6.eq) goto loc_8273E36C;
	// stw r28,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r28.u32);
loc_8273E36C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// blt cr6,0x8273e398
	if (ctx.cr6.lt) goto loc_8273E398;
	// lwz r10,556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273e394
	if (ctx.cr6.eq) goto loc_8273E394;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
loc_8273E394:
	// stw r28,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r28.u32);
loc_8273E398:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273e320
	if (!ctx.cr6.eq) goto loc_8273E320;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273E3B4;
	sub_827458B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273e3d4
	if (ctx.cr6.lt) goto loc_8273E3D4;
loc_8273E3C0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8273e3d4
	if (!ctx.cr6.eq) goto loc_8273E3D4;
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273e250
	if (!ctx.cr6.eq) goto loc_8273E250;
loc_8273E3D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e3f0
	if (ctx.cr6.eq) goto loc_8273E3F0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827458b8
	ctx.lr = 0x8273E3F0;
	sub_827458B8(ctx, base);
loc_8273E3F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c438
	ctx.lr = 0x8273E3F8;
	sub_8273C438(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8273E400:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

