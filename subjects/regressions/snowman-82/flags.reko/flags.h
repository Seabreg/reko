// flags.h
// Generated by decompiling flags
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_16: (fn void ())
	T_16 (in bar : ptr64)
	T_17 (in signature of bar : void)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in sil : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in rdi : (ptr64 word32))
  Class: Eq_3
  DataType: (ptr64 word32)
  OrigDataType: (ptr64 (struct (0 T_6 t0000)))
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_5: (in rdi + 0x0000000000000000 : word64)
  Class: Eq_5
  DataType: word64
  OrigDataType: word64
T_6: (in Mem0[rdi + 0x0000000000000000:word32] : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in (uint64) Mem0[rdi + 0x0000000000000000:word32] : uint64)
  Class: Eq_7
  DataType: uint64
  OrigDataType: uint64
T_8: (in (word32) (uint64) Mem0[rdi + 0x0000000000000000:word32] : word32)
  Class: Eq_8
  DataType: uint32
  OrigDataType: uint32
T_9: (in 0x0000000A : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in (word32) (uint64) *rdi >> 0x0000000A : word32)
  Class: Eq_10
  DataType: uint32
  OrigDataType: uint32
T_11: (in (uint64) ((word32) (uint64) Mem0[rdi + 0x0000000000000000:word32] >>u 0x0000000A) : uint64)
  Class: Eq_11
  DataType: uint64
  OrigDataType: uint64
T_12: (in (byte) (uint64) ((word32) (uint64) Mem0[rdi + 0x0000000000000000:word32] >>u 0x0000000A) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in (byte) (uint64) ((word32) (uint64) *rdi >> 0x0000000A) ^ sil : byte)
  Class: Eq_13
  DataType: ui8
  OrigDataType: ui8
T_14: (in 0x00 : byte)
  Class: Eq_13
  DataType: ui8
  OrigDataType: byte
T_15: (in ((byte) (uint64) ((word32) (uint64) *rdi >> 0x0000000A) ^ sil) == 0x00 : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in bar : ptr64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn T_18 ()))
T_17: (in signature of bar : void)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_18: (in bar() : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_16)();

