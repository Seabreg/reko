// VCExeSample.h
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: cdecl_class
	T_2 (in c : (ptr32 Eq_2))
Eq_5: cdecl_class
	T_5 (in c : (ptr32 cdecl_class))
Eq_7: cdecl_class_vtbl
	T_7 (in c + 0x00000000 : word32)
Eq_8: cdecl_class_vtbl
	T_8 (in Mem0[c + 0x00000000:word32] : word32)
Eq_10: (fn void ((ptr32 cdecl_class), int32, int32))
	T_10 (in Mem0[c + 0x00000000:word32] + 0x00000008 : word32)
Eq_11: (fn void ((ptr32 cdecl_class), int32, int32))
	T_11 (in Mem0[Mem0[c + 0x00000000:word32] + 0x00000008:word32] : word32)
Eq_19: (struct "Eq_19" (4 (ptr32 Eq_22) ptr0004))
	T_19 (in Mem48[c + 0x00000000:word32] : word32)
Eq_22: (fn void ((ptr32 Eq_5), word32))
	T_22 (in Mem48[Mem48[c + 0x00000000:word32] + 0x00000004:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in c : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 cdecl_class)
T_3: (in a : int32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in b : int32)
  Class: Eq_4
  DataType: int32
  OrigDataType: int32
T_5: (in c : (ptr32 cdecl_class))
  Class: Eq_5
  DataType: (ptr32 Eq_5)
  OrigDataType: (ptr32 cdecl_class)
T_6: (in 0x00000000 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in c + 0x00000000 : word32)
  Class: Eq_7
  DataType: (ptr32 (ptr32 Eq_7))
  OrigDataType: (ptr32 (ptr32 cdecl_class_vtbl))
T_8: (in Mem0[c + 0x00000000:word32] : word32)
  Class: Eq_8
  DataType: (ptr32 Eq_8)
  OrigDataType: (ptr32 (union (cdecl_class_vtbl u1)))
T_9: (in 0x00000008 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in Mem0[c + 0x00000000:word32] + 0x00000008 : word32)
  Class: Eq_10
  DataType: (ptr32 (ptr32 Eq_10))
  OrigDataType: (ptr32 (ptr32 (fn void ((ptr32 cdecl_class), int32, int32))))
T_11: (in Mem0[Mem0[c + 0x00000000:word32] + 0x00000008:word32] : word32)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: (ptr32 (fn T_14 ((ptr32 cdecl_class), int32, int32)))
T_12: (in a : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: int32
T_13: (in b : int32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_14: (in c->vtbl->sum(c, a, b) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in eax_37 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in <invalid> : void)
  Class: Eq_15
  DataType: word32
  OrigDataType: void
T_17: (in 0x00000000 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in c + 0x00000000 : word32)
  Class: Eq_18
  DataType: ptr32
  OrigDataType: ptr32
T_19: (in Mem48[c + 0x00000000:word32] : word32)
  Class: Eq_19
  DataType: (ptr32 Eq_19)
  OrigDataType: (ptr32 (struct (4 T_22 t0004)))
T_20: (in 0x00000004 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in Mem48[c + 0x00000000:word32] + 0x00000004 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in Mem48[Mem48[c + 0x00000000:word32] + 0x00000004:word32] : word32)
  Class: Eq_22
  DataType: (ptr32 Eq_22)
  OrigDataType: (ptr32 (fn T_23 (T_5, T_15)))
T_23: (in c->vtbl->method04(c, eax_37) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef cdecl_class Eq_2;

typedef cdecl_class Eq_5;

typedef cdecl_class_vtbl Eq_7;

typedef cdecl_class_vtbl Eq_8;

typedef void (Eq_10)(cdecl_class * ptrArg04, int32 dwArg08, int32 dwArg0C);

typedef void (Eq_11)(cdecl_class *, int32, int32);

typedef struct Eq_19 {
	void (* ptr0004)(cdecl_class *, word32);	// 4
} Eq_19;

typedef void (Eq_22)(cdecl_class *, word32);

