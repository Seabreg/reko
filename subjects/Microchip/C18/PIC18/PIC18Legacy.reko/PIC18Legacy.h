// PIC18Legacy.h
// Generated by decompiling PIC18Legacy.hex
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1 byte b0001) (C7 byte b00C7) (C8 byte b00C8) (C9 byte b00C9))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_11: (fn void (Eq_13, word24))
	T_11 (in fn00000E : ptr32)
	T_12 (in signature of fn00000E : void)
Eq_13: (union "Eq_13" (word16 u0) ((ptr32 byte) u1))
	T_13 (in FSR0 : Eq_13)
	T_15 (in 0x0000 : word16)
	T_127 (in FSR0 + 0x0001 : word16)
Eq_18: (fn void (word24, byte))
	T_18 (in __tblrd : ptr32)
	T_19 (in signature of __tblrd : void)
	T_28 (in __tblrd : ptr32)
	T_42 (in __tblrd : ptr32)
	T_48 (in __tblrd : ptr32)
	T_54 (in __tblrd : ptr32)
	T_60 (in __tblrd : ptr32)
	T_63 (in __tblrd : ptr32)
	T_66 (in __tblrd : ptr32)
	T_69 (in __tblrd : ptr32)
	T_72 (in __tblrd : ptr32)
	T_75 (in __tblrd : ptr32)
	T_81 (in __tblrd : ptr32)
	T_87 (in __tblrd : ptr32)
	T_90 (in __tblrd : ptr32)
	T_113 (in __tblrd : ptr32)
Eq_25: (segment "Eq_25" (C5 byte b00C5))
	T_25 (in 0x00 : byte)
Eq_26: (union "Eq_26" (byte u0) ((memptr (ptr8 Eq_25) byte) u1))
	T_26 (in 0xC5 : byte)
Eq_31: (segment "Eq_31" (C6 byte b00C6))
	T_31 (in 0x00 : byte)
Eq_32: (union "Eq_32" (byte u0) ((memptr (ptr8 Eq_31) byte) u1))
	T_32 (in 0xC6 : byte)
Eq_40: (union "Eq_40" (byte u0) (Eq_235 u1))
	T_40 (in Z_15 : Eq_40)
	T_41 (in cond(TABLAT) : byte)
	T_168 (in cond(0x00->b00C6) : byte)
Eq_45: (segment "Eq_45" (C0 byte b00C0))
	T_45 (in 0x00 : byte)
Eq_46: (union "Eq_46" (byte u0) ((memptr (ptr8 Eq_45) byte) u1))
	T_46 (in 0xC0 : byte)
Eq_51: (segment "Eq_51" (C1 byte b00C1))
	T_51 (in 0x00 : byte)
Eq_52: (union "Eq_52" (byte u0) ((memptr (ptr8 Eq_51) byte) u1))
	T_52 (in 0xC1 : byte)
Eq_57: (segment "Eq_57" (C2 byte b00C2))
	T_57 (in 0x00 : byte)
Eq_58: (union "Eq_58" (byte u0) ((memptr (ptr8 Eq_57) byte) u1))
	T_58 (in 0xC2 : byte)
Eq_78: (segment "Eq_78" (C3 byte b00C3))
	T_78 (in 0x00 : byte)
Eq_79: (union "Eq_79" (byte u0) ((memptr (ptr8 Eq_78) byte) u1))
	T_79 (in 0xC3 : byte)
Eq_84: (segment "Eq_84" (C4 byte b00C4))
	T_84 (in 0x00 : byte)
Eq_85: (union "Eq_85" (byte u0) ((memptr (ptr8 Eq_84) byte) u1))
	T_85 (in 0xC4 : byte)
Eq_99: (segment "Eq_99" (C3 byte b00C3))
	T_99 (in 0x00 : byte)
Eq_100: (union "Eq_100" (byte u0) ((memptr (ptr8 Eq_99) byte) u1) ((memptr (ptr8 Eq_102) byte) u2) ((memptr (ptr8 Eq_105) byte) u3))
	T_100 (in 0xC3 : byte)
Eq_102: (segment "Eq_102" (C3 byte b00C3))
	T_102 (in 0x00 : byte)
Eq_104: (union "Eq_104" (byte u0) (Eq_236 u1))
	T_104 (in Z_57 : Eq_104)
	T_107 (in cond(0x00->b00C3) : byte)
	T_130 (in cond(0x00->b00C3) : byte)
Eq_105: (segment "Eq_105" (C3 byte b00C3))
	T_105 (in 0x00 : byte)
Eq_108: (segment "Eq_108" (C5 byte b00C5))
	T_108 (in 0x00 : byte)
Eq_109: (union "Eq_109" (byte u0) ((memptr (ptr8 Eq_108) byte) u1))
	T_109 (in 0xC5 : byte)
Eq_119: (segment "Eq_119" (C3 byte b00C3))
	T_119 (in 0x00 : byte)
Eq_120: (union "Eq_120" (byte u0) ((memptr (ptr8 Eq_119) byte) u1) ((memptr (ptr8 Eq_124) byte) u2) ((memptr (ptr8 Eq_128) cu8) u3))
	T_120 (in 0xC3 : byte)
Eq_124: (segment "Eq_124" (C3 byte b00C3))
	T_124 (in 0x00 : byte)
Eq_128: (segment "Eq_128" (C3 cu8 b00C3))
	T_128 (in 0x00 : byte)
Eq_134: (segment "Eq_134" (C4 byte b00C4))
	T_134 (in 0x00 : byte)
Eq_135: (union "Eq_135" (byte u0) ((memptr (ptr8 Eq_134) byte) u1) ((memptr (ptr8 Eq_137) byte) u2) ((memptr (ptr8 Eq_139) byte) u3))
	T_135 (in 0xC4 : byte)
Eq_137: (segment "Eq_137" (C4 byte b00C4))
	T_137 (in 0x00 : byte)
Eq_139: (segment "Eq_139" (C4 byte b00C4))
	T_139 (in 0x00 : byte)
Eq_149: (segment "Eq_149" (C5 byte b00C5))
	T_149 (in 0x00 : byte)
Eq_150: (union "Eq_150" (byte u0) ((memptr (ptr8 Eq_149) byte) u1) ((memptr (ptr8 Eq_154) byte) u2) ((memptr (ptr8 Eq_159) byte) u3))
	T_150 (in 0xC5 : byte)
Eq_154: (segment "Eq_154" (C5 byte b00C5))
	T_154 (in 0x00 : byte)
Eq_156: (segment "Eq_156" (C6 byte b00C6))
	T_156 (in 0x00 : byte)
Eq_157: (union "Eq_157" (byte u0) ((memptr (ptr8 Eq_156) byte) u1) ((memptr (ptr8 Eq_164) byte) u2) ((memptr (ptr8 Eq_166) byte) u3))
	T_157 (in 0xC6 : byte)
Eq_159: (segment "Eq_159" (C5 byte b00C5))
	T_159 (in 0x00 : byte)
Eq_164: (segment "Eq_164" (C6 byte b00C6))
	T_164 (in 0x00 : byte)
Eq_166: (segment "Eq_166" (C6 byte b00C6))
	T_166 (in 0x00 : byte)
Eq_169: (segment "Eq_169" (C4 byte b00C4))
	T_169 (in 0x00 : byte)
Eq_170: (union "Eq_170" (byte u0) ((memptr (ptr8 Eq_169) byte) u1) ((memptr (ptr8 Eq_174) byte) u2))
	T_170 (in 0xC4 : byte)
Eq_174: (segment "Eq_174" (C4 byte b00C4))
	T_174 (in 0x00 : byte)
Eq_178: (struct "Eq_178" (FE byte b00FE))
	T_178 (in FSR2 : (ptr16 Eq_178))
Eq_179: (struct "Eq_179" (0 byte b0000) (1 byte b0001))
	T_179 (in FSR1 : (ptr16 Eq_179))
Eq_188: (segment "Eq_188" (CA byte b00CA))
	T_188 (in 0x00 : byte)
Eq_189: (union "Eq_189" (byte u0) ((memptr (ptr8 Eq_188) byte) u1))
	T_189 (in 0xCA : byte)
Eq_195: (segment "Eq_195" (CA byte b00CA))
	T_195 (in 0x00 : byte)
Eq_196: (union "Eq_196" (byte u0) ((memptr (ptr8 Eq_195) byte) u1) ((memptr (ptr8 Eq_200) byte) u2))
	T_196 (in 0xCA : byte)
Eq_200: (segment "Eq_200" (CA byte b00CA))
	T_200 (in 0x00 : byte)
Eq_218: (union "Eq_218" (word16 u0) ((ptr32 byte) u1))
	T_218 (in FSR0 : Eq_218)
	T_225 (in FSR0 + 0x0001 : word16)
	T_231 (in FSR0 + 0x0001 : word16)
Eq_224: (union "Eq_224" (word16 u0) ((ptr32 byte) u1))
	T_224 (in 0x0001 : word16)
Eq_228: (union "Eq_228" (word16 u0) ((ptr32 byte) u1))
	T_228 (in FSR0 + 0x0000 : word16)
Eq_230: (union "Eq_230" (word16 u0) ((ptr32 byte) u1))
	T_230 (in 0x0001 : word16)
Eq_234: (struct "Eq_234" 0001 (0 ptr32 ptr0000))
	T_234
Eq_235: (union "Eq_235" (bool u0) (byte u1))
	T_235
Eq_236: (union "Eq_236" (bool u0) (byte u1))
	T_236
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in 0001 : ptr16)
  Class: Eq_2
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_3 t0000)))
T_3: (in Data[0x0001:byte] : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in 0xBF : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in globals->b0001 & 0xBF : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_6: (in Mem20[0x0001:byte] : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_7: (in 00014A : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_8: (in Stack : (arr Eq_234))
  Class: Eq_8
  DataType: (ptr32 (arr Eq_234))
  OrigDataType: (ptr32 (struct (0 (arr T_234) a0000)))
T_9: (in 0x01 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in Stack[0x01] : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_11: (in fn00000E : ptr32)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: (ptr32 (fn T_17 (T_15, T_16)))
T_12: (in signature of fn00000E : void)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: 
T_13: (in FSR0 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_14: (in TBLPTR : word24)
  Class: Eq_14
  DataType: word24
  OrigDataType: word24
T_15: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_16: (in 0x000000 : word24)
  Class: Eq_14
  DataType: word24
  OrigDataType: word24
T_17: (in fn00000E(0x0000, 0x000000) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_23 (T_14, T_22)))
T_19: (in signature of __tblrd : void)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: 
T_20: (in  : word24)
  Class: Eq_14
  DataType: word24
  OrigDataType: 
T_21: (in  : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: 
T_22: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in TABLAT : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x00 : byte)
  Class: Eq_25
  DataType: (ptr8 Eq_25)
  OrigDataType: (ptr8 (segment (C5 T_27 t00C5)))
T_26: (in 0xC5 : byte)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (byte u0) ((memptr T_25 (struct (0 byte b0000))) u1))
T_27: (in Mem12[0x00:0xC5:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_28: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_30 (T_14, T_29)))
T_29: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_30: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_31: (in 0x00 : byte)
  Class: Eq_31
  DataType: (ptr8 Eq_31)
  OrigDataType: (ptr8 (segment (C6 T_33 t00C6)))
T_32: (in 0xC6 : byte)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: (union (byte u0) ((memptr T_31 (struct (0 byte b0000))) u1))
T_33: (in Mem17[0x00:0xC6:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_34: (in TBLPTRL_24 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x06 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in TBLPTRH_25 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_38: (in TBLPTRU_26 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x00 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_40: (in Z_15 : Eq_40)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (bool u1) (byte u0))
T_41: (in cond(TABLAT) : byte)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: byte
T_42: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_44 (T_14, T_43)))
T_43: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_44: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_45: (in 0x00 : byte)
  Class: Eq_45
  DataType: (ptr8 Eq_45)
  OrigDataType: (ptr8 (segment (C0 T_47 t00C0)))
T_46: (in 0xC0 : byte)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (byte u0) ((memptr T_45 (struct (0 byte b0000))) u1))
T_47: (in Mem35[0x00:0xC0:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_48: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_50 (T_14, T_49)))
T_49: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_50: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_51: (in 0x00 : byte)
  Class: Eq_51
  DataType: (ptr8 Eq_51)
  OrigDataType: (ptr8 (segment (C1 T_53 t00C1)))
T_52: (in 0xC1 : byte)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (union (byte u0) ((memptr T_51 (struct (0 byte b0000))) u1))
T_53: (in Mem37[0x00:0xC1:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_54: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_56 (T_14, T_55)))
T_55: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_56: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_57: (in 0x00 : byte)
  Class: Eq_57
  DataType: (ptr8 Eq_57)
  OrigDataType: (ptr8 (segment (C2 T_59 t00C2)))
T_58: (in 0xC2 : byte)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: (union (byte u0) ((memptr T_57 (struct (0 byte b0000))) u1))
T_59: (in Mem39[0x00:0xC2:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_60: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_62 (T_14, T_61)))
T_61: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_62: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_63: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_65 (T_14, T_64)))
T_64: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_65: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_66: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_68 (T_14, T_67)))
T_67: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_68: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_69: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_71 (T_14, T_70)))
T_70: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_71: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_72: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_74 (T_14, T_73)))
T_73: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_74: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_75: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_77 (T_14, T_76)))
T_76: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_77: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_78: (in 0x00 : byte)
  Class: Eq_78
  DataType: (ptr8 Eq_78)
  OrigDataType: (ptr8 (segment (C3 T_80 t00C3)))
T_79: (in 0xC3 : byte)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: (union (byte u0) ((memptr T_78 (struct (0 byte b0000))) u1))
T_80: (in Mem45[0x00:0xC3:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_81: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_83 (T_14, T_82)))
T_82: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_83: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_84: (in 0x00 : byte)
  Class: Eq_84
  DataType: (ptr8 Eq_84)
  OrigDataType: (ptr8 (segment (C4 T_86 t00C4)))
T_85: (in 0xC4 : byte)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (byte u0) ((memptr T_84 (struct (0 byte b0000))) u1))
T_86: (in Mem47[0x00:0xC4:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_87: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_89 (T_14, T_88)))
T_88: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_89: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_90: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_92 (T_14, T_91)))
T_91: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_92: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_93: (in 00C7 : ptr16)
  Class: Eq_93
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_94 t0000)))
T_94: (in Mem48[0x00C7:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_95: (in 00C8 : ptr16)
  Class: Eq_95
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_96 t0000)))
T_96: (in Mem49[0x00C8:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_97: (in 00C9 : ptr16)
  Class: Eq_97
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_98 t0000)))
T_98: (in Mem50[0x00C9:byte] : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_99: (in 0x00 : byte)
  Class: Eq_99
  DataType: (ptr8 Eq_99)
  OrigDataType: (ptr8 (segment (C3 T_101 t00C3)))
T_100: (in 0xC3 : byte)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: (union (byte u0) ((memptr T_99 (struct (0 byte b0000))) u1) ((memptr T_102 (struct (0 byte b0000))) u2) ((memptr T_105 (struct (0 byte b0000))) u3))
T_101: (in Mem50[0x00:0xC3:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x00 : byte)
  Class: Eq_102
  DataType: (ptr8 Eq_102)
  OrigDataType: (ptr8 (segment (C3 T_103 t00C3)))
T_103: (in Mem55[0x00:0xC3:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_104: (in Z_57 : Eq_104)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: (union (bool u1) (byte u0))
T_105: (in 0x00 : byte)
  Class: Eq_105
  DataType: (ptr8 Eq_105)
  OrigDataType: (ptr8 (segment (C3 T_106 t00C3)))
T_106: (in Mem55[0x00:0xC3:byte] : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in cond(0x00->b00C3) : byte)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: byte
T_108: (in 0x00 : byte)
  Class: Eq_108
  DataType: (ptr8 Eq_108)
  OrigDataType: (ptr8 (segment (C5 T_110 t00C5)))
T_109: (in 0xC5 : byte)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: (union (byte u0) ((memptr T_108 (struct (0 byte b0000))) u1))
T_110: (in Mem17[0x00:0xC5:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0x00 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_112: (in 0x00->b00C5 == 0x00 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in __tblrd : ptr32)
  Class: Eq_18
  DataType: (ptr32 Eq_18)
  OrigDataType: (ptr32 (fn T_115 (T_14, T_114)))
T_114: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_115: (in __tblrd(TBLPTR, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in FSR0 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem67[FSR0 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: Eq_13
  OrigDataType: byte
T_119: (in 0x00 : byte)
  Class: Eq_119
  DataType: (ptr8 Eq_119)
  OrigDataType: (ptr8 (segment (C3 T_121 t00C3)))
T_120: (in 0xC3 : byte)
  Class: Eq_120
  DataType: Eq_120
  OrigDataType: (union (byte u0) ((memptr T_119 (struct (0 byte b0000))) u1) ((memptr T_124 (struct (0 byte b0000))) u2) ((memptr T_128 (struct (0 cu8 b0000))) u3))
T_121: (in Mem67[0x00:0xC3:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x01 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in 0x00->b00C3 - 0x01 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in 0x00 : byte)
  Class: Eq_124
  DataType: (ptr8 Eq_124)
  OrigDataType: (ptr8 (segment (C3 T_125 t00C3)))
T_125: (in Mem69[0x00:0xC3:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: (ptr32 byte)
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_127: (in FSR0 + 0x0001 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_128: (in 0x00 : byte)
  Class: Eq_128
  DataType: (ptr8 Eq_128)
  OrigDataType: (ptr8 (segment (C3 T_129 t00C3)))
T_129: (in Mem69[0x00:0xC3:byte] : byte)
  Class: Eq_129
  DataType: cu8
  OrigDataType: byte
T_130: (in cond(0x00->b00C3) : byte)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: byte
T_131: (in Mem69[0x00:0xC3:byte] : byte)
  Class: Eq_129
  DataType: cu8
  OrigDataType: cu8
T_132: (in 0x00 : byte)
  Class: Eq_129
  DataType: cu8
  OrigDataType: cu8
T_133: (in 0x00->b00C3 < 0x00 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in 0x00 : byte)
  Class: Eq_134
  DataType: (ptr8 Eq_134)
  OrigDataType: (ptr8 (segment (C4 T_136 t00C4)))
T_135: (in 0xC4 : byte)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: (union (byte u0) ((memptr T_134 (struct (0 byte b0000))) u1) ((memptr T_137 (struct (0 byte b0000))) u2) ((memptr T_139 (struct (0 byte b0000))) u3))
T_136: (in Mem55[0x00:0xC4:byte] : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in 0x00 : byte)
  Class: Eq_137
  DataType: (ptr8 Eq_137)
  OrigDataType: (ptr8 (segment (C4 T_138 t00C4)))
T_138: (in Mem76[0x00:0xC4:byte] : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_139: (in 0x00 : byte)
  Class: Eq_139
  DataType: (ptr8 Eq_139)
  OrigDataType: (ptr8 (segment (C4 T_140 t00C4)))
T_140: (in Mem76[0x00:0xC4:byte] : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0x00 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_142: (in 0x00->b00C4 == 0x00 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 00C7 : ptr16)
  Class: Eq_143
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_144 t0000)))
T_144: (in Mem76[0x00C7:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_145: (in 00C8 : ptr16)
  Class: Eq_145
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_146 t0000)))
T_146: (in Mem76[0x00C8:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_147: (in 00C9 : ptr16)
  Class: Eq_147
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_148 t0000)))
T_148: (in Mem76[0x00C9:byte] : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_149: (in 0x00 : byte)
  Class: Eq_149
  DataType: (ptr8 Eq_149)
  OrigDataType: (ptr8 (segment (C5 T_151 t00C5)))
T_150: (in 0xC5 : byte)
  Class: Eq_150
  DataType: Eq_150
  OrigDataType: (union (byte u0) ((memptr T_149 (struct (0 byte b0000))) u1) ((memptr T_154 (struct (0 byte b0000))) u2) ((memptr T_159 (struct (0 byte b0000))) u3))
T_151: (in Mem76[0x00:0xC5:byte] : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in 0x01 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in 0x00->b00C5 - 0x01 : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in 0x00 : byte)
  Class: Eq_154
  DataType: (ptr8 Eq_154)
  OrigDataType: (ptr8 (segment (C5 T_155 t00C5)))
T_155: (in Mem83[0x00:0xC5:byte] : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_156: (in 0x00 : byte)
  Class: Eq_156
  DataType: (ptr8 Eq_156)
  OrigDataType: (ptr8 (segment (C6 T_158 t00C6)))
T_157: (in 0xC6 : byte)
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: (union (byte u0) ((memptr T_156 (struct (0 byte b0000))) u1) ((memptr T_164 (struct (0 byte b0000))) u2) ((memptr T_166 (struct (0 byte b0000))) u3))
T_158: (in Mem83[0x00:0xC6:byte] : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in 0x00 : byte)
  Class: Eq_159
  DataType: (ptr8 Eq_159)
  OrigDataType: (ptr8 (segment (C5 T_160 t00C5)))
T_160: (in Mem83[0x00:0xC5:byte] : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in cond(0x00->b00C5) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in !cond(0x00->b00C5) : bool)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x00->b00C6 - !cond(0x00->b00C5) : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in 0x00 : byte)
  Class: Eq_164
  DataType: (ptr8 Eq_164)
  OrigDataType: (ptr8 (segment (C6 T_165 t00C6)))
T_165: (in Mem87[0x00:0xC6:byte] : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_166: (in 0x00 : byte)
  Class: Eq_166
  DataType: (ptr8 Eq_166)
  OrigDataType: (ptr8 (segment (C6 T_167 t00C6)))
T_167: (in Mem87[0x00:0xC6:byte] : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in cond(0x00->b00C6) : byte)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: byte
T_169: (in 0x00 : byte)
  Class: Eq_169
  DataType: (ptr8 Eq_169)
  OrigDataType: (ptr8 (segment (C4 T_171 t00C4)))
T_170: (in 0xC4 : byte)
  Class: Eq_170
  DataType: Eq_170
  OrigDataType: (union (byte u0) ((memptr T_169 (struct (0 byte b0000))) u1) ((memptr T_174 (struct (0 byte b0000))) u2))
T_171: (in Mem69[0x00:0xC4:byte] : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in 0x01 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in 0x00->b00C4 - 0x01 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in 0x00 : byte)
  Class: Eq_174
  DataType: (ptr8 Eq_174)
  OrigDataType: (ptr8 (segment (C4 T_175 t00C4)))
T_175: (in Mem74[0x00:0xC4:byte] : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_176: (in LATB : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in FSR2L : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in FSR2 : (ptr16 Eq_178))
  Class: Eq_178
  DataType: (ptr16 Eq_178)
  OrigDataType: (ptr16 (struct (FE T_208 t00FE)))
T_179: (in FSR1 : (ptr16 Eq_179))
  Class: Eq_179
  DataType: (ptr16 Eq_179)
  OrigDataType: (ptr16 (struct (0 T_182 t0000) (1 T_185 t0001)))
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in FSR1 + 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem3[FSR1 + 0x0000:byte] : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in FSR1 + 0x0001 : word16)
  Class: Eq_184
  DataType: ptr16
  OrigDataType: ptr16
T_185: (in Mem3[FSR1 + 0x0001:byte] : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in FSR1 + 0x0001 : word16)
  Class: Eq_186
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 byte)
T_187: (in Mem29[FSR1 + 0x0001:byte] : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_188: (in 0x00 : byte)
  Class: Eq_188
  DataType: (ptr8 Eq_188)
  OrigDataType: (ptr8 (segment (CA T_190 t00CA)))
T_189: (in 0xCA : byte)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: (union (byte u0) ((memptr T_188 (struct (0 byte b0000))) u1))
T_190: (in Mem3[0x00:0xCA:byte] : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in 0x01 : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in 0x00->b00CA & 0x01 : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in 0x00 : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_194: (in (0x00->b00CA & 0x01) != 0x00 : bool)
  Class: Eq_194
  DataType: bool
  OrigDataType: bool
T_195: (in 0x00 : byte)
  Class: Eq_195
  DataType: (ptr8 Eq_195)
  OrigDataType: (ptr8 (segment (CA T_197 t00CA)))
T_196: (in 0xCA : byte)
  Class: Eq_196
  DataType: Eq_196
  OrigDataType: (union (byte u0) ((memptr T_195 (struct (0 byte b0000))) u1) ((memptr T_200 (struct (0 byte b0000))) u2))
T_197: (in Mem3[0x00:0xCA:byte] : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in 0xFE : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in 0x00->b00CA & 0xFE : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in 0x00 : byte)
  Class: Eq_200
  DataType: (ptr8 Eq_200)
  OrigDataType: (ptr8 (segment (CA T_201 t00CA)))
T_201: (in Mem22[0x00:0xCA:byte] : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_202: (in 0x01 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in LATB & 0x01 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0x00 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_205: (in (LATB & 0x01) == 0x00 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in 0xFE : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in FSR2 + 0xFE : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in Mem3[FSR2 + 0xFE:byte] : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in 0x00 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_210: (in FSR2->b00FE == 0x00 : bool)
  Class: Eq_210
  DataType: bool
  OrigDataType: bool
T_211: (in 0x7F : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in LATB & 0x7F : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_213: (in 0x80 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in LATB | 0x80 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_215: (in WREG : cu8)
  Class: Eq_215
  DataType: cu8
  OrigDataType: cu8
T_216: (in FSR0L : cu8)
  Class: Eq_216
  DataType: cu8
  OrigDataType: cu8
T_217: (in FSR0H : cu8)
  Class: Eq_215
  DataType: cu8
  OrigDataType: cu8
T_218: (in FSR0 : Eq_218)
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: word32
T_219: (in FSR0H < WREG : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in 0x00 : byte)
  Class: Eq_220
  DataType: byte
  OrigDataType: byte
T_221: (in 0x0000 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in FSR0 + 0x0000 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in Mem20[FSR0 + 0x0000:byte] : byte)
  Class: Eq_220
  DataType: Eq_218
  OrigDataType: byte
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_225: (in FSR0 + 0x0001 : word16)
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_226: (in 0x00 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in 0x0000 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in FSR0 + 0x0000 : word16)
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_229: (in Mem17[FSR0 + 0x0000:byte] : byte)
  Class: Eq_226
  DataType: Eq_218
  OrigDataType: byte
T_230: (in 0x0001 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_231: (in FSR0 + 0x0001 : word16)
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_232: (in PRODL : byte)
  Class: Eq_216
  DataType: cu8
  OrigDataType: cu8
T_233: (in FSR0L < PRODL : bool)
  Class: Eq_233
  DataType: bool
  OrigDataType: bool
T_234:
  Class: Eq_234
  DataType: Eq_234
  OrigDataType: (struct 0001 (0 T_10 t0000))
T_235:
  Class: Eq_235
  DataType: Eq_235
  OrigDataType: 
T_236:
  Class: Eq_236
  DataType: Eq_236
  OrigDataType: 
*/
typedef struct Globals {
	byte b0001;	// 1
	byte b00C7;	// C7
	byte b00C8;	// C8
	byte b00C9;	// C9
} Eq_1;

typedef void (Eq_11)(Eq_13, word24);

typedef union Eq_13 {
	word16 u0;
	byte * u1;
} Eq_13;

typedef void (Eq_18)(word24, byte);

typedef struct Eq_25 {
	byte b00C5;	// C5
} Eq_25;

typedef union Eq_26 {
	byte u0;
	byte Eq_25::* u1;
} Eq_26;

typedef struct Eq_31 {
	byte b00C6;	// C6
} Eq_31;

typedef union Eq_32 {
	byte u0;
	byte Eq_31::* u1;
} Eq_32;

typedef union Eq_40 {
	byte u0;
	Eq_235 u1;
} Eq_40;

typedef struct Eq_45 {
	byte b00C0;	// C0
} Eq_45;

typedef union Eq_46 {
	byte u0;
	byte Eq_45::* u1;
} Eq_46;

typedef struct Eq_51 {
	byte b00C1;	// C1
} Eq_51;

typedef union Eq_52 {
	byte u0;
	byte Eq_51::* u1;
} Eq_52;

typedef struct Eq_57 {
	byte b00C2;	// C2
} Eq_57;

typedef union Eq_58 {
	byte u0;
	byte Eq_57::* u1;
} Eq_58;

typedef struct Eq_78 {
	byte b00C3;	// C3
} Eq_78;

typedef union Eq_79 {
	byte u0;
	byte Eq_78::* u1;
} Eq_79;

typedef struct Eq_84 {
	byte b00C4;	// C4
} Eq_84;

typedef union Eq_85 {
	byte u0;
	byte Eq_84::* u1;
} Eq_85;

typedef struct Eq_99 {
	byte b00C3;	// C3
} Eq_99;

typedef union Eq_100 {
	byte u0;
	byte Eq_99::* u1;
	byte Eq_102::* u2;
	byte Eq_105::* u3;
} Eq_100;

typedef struct Eq_102 {
	byte b00C3;	// C3
} Eq_102;

typedef union Eq_104 {
	byte u0;
	Eq_236 u1;
} Eq_104;

typedef struct Eq_105 {
	byte b00C3;	// C3
} Eq_105;

typedef struct Eq_108 {
	byte b00C5;	// C5
} Eq_108;

typedef union Eq_109 {
	byte u0;
	byte Eq_108::* u1;
} Eq_109;

typedef struct Eq_119 {
	byte b00C3;	// C3
} Eq_119;

typedef union Eq_120 {
	byte u0;
	byte Eq_119::* u1;
	byte Eq_124::* u2;
	cu8 Eq_128::* u3;
} Eq_120;

typedef struct Eq_124 {
	byte b00C3;	// C3
} Eq_124;

typedef struct Eq_128 {
	cu8 b00C3;	// C3
} Eq_128;

typedef struct Eq_134 {
	byte b00C4;	// C4
} Eq_134;

typedef union Eq_135 {
	byte u0;
	byte Eq_134::* u1;
	byte Eq_137::* u2;
	byte Eq_139::* u3;
} Eq_135;

typedef struct Eq_137 {
	byte b00C4;	// C4
} Eq_137;

typedef struct Eq_139 {
	byte b00C4;	// C4
} Eq_139;

typedef struct Eq_149 {
	byte b00C5;	// C5
} Eq_149;

typedef union Eq_150 {
	byte u0;
	byte Eq_149::* u1;
	byte Eq_154::* u2;
	byte Eq_159::* u3;
} Eq_150;

typedef struct Eq_154 {
	byte b00C5;	// C5
} Eq_154;

typedef struct Eq_156 {
	byte b00C6;	// C6
} Eq_156;

typedef union Eq_157 {
	byte u0;
	byte Eq_156::* u1;
	byte Eq_164::* u2;
	byte Eq_166::* u3;
} Eq_157;

typedef struct Eq_159 {
	byte b00C5;	// C5
} Eq_159;

typedef struct Eq_164 {
	byte b00C6;	// C6
} Eq_164;

typedef struct Eq_166 {
	byte b00C6;	// C6
} Eq_166;

typedef struct Eq_169 {
	byte b00C4;	// C4
} Eq_169;

typedef union Eq_170 {
	byte u0;
	byte Eq_169::* u1;
	byte Eq_174::* u2;
} Eq_170;

typedef struct Eq_174 {
	byte b00C4;	// C4
} Eq_174;

typedef struct Eq_178 {
	byte b00FE;	// FE
} Eq_178;

typedef struct Eq_179 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_179;

typedef struct Eq_188 {
	byte b00CA;	// CA
} Eq_188;

typedef union Eq_189 {
	byte u0;
	byte Eq_188::* u1;
} Eq_189;

typedef struct Eq_195 {
	byte b00CA;	// CA
} Eq_195;

typedef union Eq_196 {
	byte u0;
	byte Eq_195::* u1;
	byte Eq_200::* u2;
} Eq_196;

typedef struct Eq_200 {
	byte b00CA;	// CA
} Eq_200;

typedef union Eq_218 {
	word16 u0;
	byte * u1;
} Eq_218;

typedef union Eq_224 {
	word16 u0;
	byte * u1;
} Eq_224;

typedef union Eq_228 {
	word16 u0;
	byte * u1;
} Eq_228;

typedef union Eq_230 {
	word16 u0;
	byte * u1;
} Eq_230;

typedef struct Eq_234 {	// size: 1 1
	ptr32 ptr0000;	// 0
} Eq_234;

typedef union Eq_235 {
	bool u0;
	byte u1;
} Eq_235;

typedef union Eq_236 {
	bool u0;
	byte u1;
} Eq_236;

