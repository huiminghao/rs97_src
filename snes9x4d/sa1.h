/*
 * Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
 *
 * (c) Copyright 1996 - 2001 Gary Henderson (gary.henderson@ntlworld.com) and
 *                           Jerremy Koot (jkoot@snes9x.com)
 *
 * Super FX C emulator code 
 * (c) Copyright 1997 - 1999 Ivar (ivar@snes9x.com) and
 *                           Gary Henderson.
 * Super FX assembler emulator code (c) Copyright 1998 zsKnight and _Demo_.
 *
 * DSP1 emulator code (c) Copyright 1998 Ivar, _Demo_ and Gary Henderson.
 * C4 asm and some C emulation code (c) Copyright 2000 zsKnight and _Demo_.
 * C4 C code (c) Copyright 2001 Gary Henderson (gary.henderson@ntlworld.com).
 *
 * DOS port code contains the works of other authors. See headers in
 * individual files.
 *
 * Snes9x homepage: http://www.snes9x.com
 *
 * Permission to use, copy, modify and distribute Snes9x in both binary and
 * source form, for non-commercial purposes, is hereby granted without fee,
 * providing that this license information and copyright notice appear with
 * all copies and any derived work.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event shall the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Snes9x is freeware for PERSONAL USE only. Commercial users should
 * seek permission of the copyright holders first. Commercial use includes
 * charging money for Snes9x or software derived from Snes9x.
 *
 * The copyright holders request that bug fixes and improvements to the code
 * should be forwarded to them so everyone can benefit from the modifications
 * in future versions.
 *
 * Super NES and Super Nintendo Entertainment System are trademarks of
 * Nintendo Co., Limited and its subsidiary companies.
 */
#ifndef _sa1_h_
#define _sa1_h_

#include "memmap.h"

/*
struct SSA1Registers {
    uint8   PB;
    uint8   DB;
    pair    P;
    pair    A;
    pair    D;
    pair    S;
    pair    X;
    pair    Y;
    uint16  PC;
};
*/

/*
struct SSA1 {
    struct  SOpcodes *S9xOpcodes;
    uint8   _Carry;
    uint8   _Zero;
    uint8   _Negative;
    uint8   _Overflow;
    bool8_32   CPUExecuting;
    uint32  ShiftedPB;
    uint32  ShiftedDB;
    uint32  Flags;
    bool8_32   Executing;
    bool8_32   NMIActive;
    bool8_32   IRQActive;
    bool8_32   WaitingForInterrupt;
    bool8_32   Waiting;
//    uint8   WhichEvent;
    uint8   *PC;
    uint8   *PCBase;
    uint8   *BWRAM;
    uint8   *PCAtOpcodeStart;
    uint8   *WaitAddress;
    uint32  WaitCounter;
    uint8   *WaitByteAddress1;
    uint8   *WaitByteAddress2;
//    long    Cycles;
//    long    NextEvent;
//    long    V_Counter;
    uint8   *Map [MEMMAP_NUM_BLOCKS];
    uint8   *WriteMap [MEMMAP_NUM_BLOCKS];
    int16   op1;
    int16   op2;
    int     arithmetic_op;
    int64   sum;
    bool8_32   overflow;
    uint8   VirtualBitmapFormat;
    bool8_32   in_char_dma;
    uint8   variable_bit_pos;
};
*/

#define SA1CheckZero() (sa1->_Zero == 0)
#define SA1CheckCarry() (sa1->_Carry)
#define SA1CheckIRQ() (reg->P.W & IRQ)
#define SA1CheckDecimal() (reg->P.W & Decimal)
#define SA1CheckIndex() (reg->P.W & IndexFlag)
#define SA1CheckMemory() (reg->P.W & MemoryFlag)
#define SA1CheckOverflow() (sa1->_Overflow)
#define SA1CheckNegative() (sa1->_Negative & 0x80)
#define SA1CheckEmulation() (reg->P.W & Emulation)

#define SA1ClearFlags(f) (SA1Registers.P.W &= ~(f))
#define SA1SetFlags(f)   (SA1Registers.P.W |=  (f))
#define SA1CheckFlag(f)  (SA1Registers.P.W & (f))


START_EXTERN_C
uint8 S9xSA1GetByte (uint32, struct SCPUState *);
uint16 S9xSA1GetWord (uint32, struct SCPUState *);
void S9xSA1SetByte (uint8, uint32, struct SCPUState *);
void S9xSA1SetWord (uint16, uint32, struct SCPUState *);
void S9xSA1SetPCBase (uint32, struct SCPUState *);
uint8 S9xGetSA1 (uint32);
void S9xSetSA1 (uint8, uint32);

extern struct SOpcodes S9xSA1OpcodesM1X1 [256];
extern struct SOpcodes S9xSA1OpcodesM1X0 [256];
extern struct SOpcodes S9xSA1OpcodesM0X1 [256];
extern struct SOpcodes S9xSA1OpcodesM0X0 [256];
extern struct SRegisters SA1Registers;
extern struct SICPU SA1ICPU;
extern struct SCPUState SA1;
//extern struct SSA1Registers SA1Registers;
//extern struct SSA1 SA1;

void S9xSA1MainLoop ();
void S9xSA1Init ();
void S9xFixSA1AfterSnapshotLoad ();
void S9xSA1ExecuteDuringSleep ();
END_EXTERN_C

#define SNES_IRQ_SOURCE	    (1 << 7)
#define TIMER_IRQ_SOURCE    (1 << 6)
#define DMA_IRQ_SOURCE	    (1 << 5)

STATIC inline void S9xSA1UnpackStatus()
{
    SA1ICPU._Zero = (SA1Registers.PL & Zero) == 0;
    SA1ICPU._Negative = (SA1Registers.PL & Negative);
    SA1ICPU._Carry = (SA1Registers.PL & Carry);
    SA1ICPU._Overflow = (SA1Registers.PL & Overflow) >> 6;
}

STATIC inline void S9xSA1PackStatus()
{
    SA1Registers.PL &= ~(Zero | Negative | Carry | Overflow);
    SA1Registers.PL |= (SA1ICPU._Carry & 0xff) | (((SA1ICPU._Zero & 0xff) == 0) << 1) |
		       ((SA1ICPU._Negative & 0xff) & 0x80) | ((SA1ICPU._Overflow & 0xff) << 6);
}

STATIC inline void S9xSA1FixCycles (struct SRegisters * reg, struct SICPU * icpu)
{
    if (SA1CheckEmulation ())
	icpu->S9xOpcodes = S9xSA1OpcodesM1X1;
    else
    if (SA1CheckMemory ())
    {
	if (SA1CheckIndex ())
	    icpu->S9xOpcodes = S9xSA1OpcodesM1X1;
	else
	    icpu->S9xOpcodes = S9xSA1OpcodesM1X0;
    }
    else
    {
	if (SA1CheckIndex ())
	    icpu->S9xOpcodes = S9xSA1OpcodesM0X1;
	else
	    icpu->S9xOpcodes = S9xSA1OpcodesM0X0;
    }
}
#endif
