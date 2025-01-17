#region License
/* 
 * Copyright (C) 1999-2019 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.Collections.Generic;
using Reko.Core;
using Reko.Core.Machine;

namespace Reko.Arch.Mips
{
    public class MipsInstructionComparer : InstructionComparer
    {
        public MipsInstructionComparer(Normalize norm) : base(norm)
        {
        }

        public override bool CompareOperands(MachineInstruction x, MachineInstruction y)
        {
            var a = (MipsInstruction)x;
            var b = (MipsInstruction)y;
            return Compare(a.op1, b.op1) &&
                   Compare(a.op2, b.op2) &&
                   Compare(a.op3, b.op3) &&
                   Compare(a.op4, b.op4);
        }

        private bool Compare(MachineOperand a, MachineOperand b)
        {
            if (a == null && b == null)
                return true;
            if (a == null || b == null)
                return false;
            if (a.GetType() != b.GetType())
                return false;
            var rA = a as RegisterOperand;
            if (rA != null)
            {
                if (NormalizeRegisters)
                    return true;
                var rB = (RegisterOperand)b;
                return rA.Register == rB.Register;
            }
            var iA = a as ImmediateOperand;
            if (iA != null)
            {
                if (NormalizeConstants)
                    return true;
                var iB = (ImmediateOperand)b;
                return CompareValues(iA.Value, iB.Value);
            }
            var aA = a as AddressOperand;
            if (aA != null)
            {
                if (NormalizeConstants)
                    return true;
                var aB = (AddressOperand)b;
                return aA.Address.ToLinear() == aB.Address.ToLinear();
            }
            var mA = a as IndirectOperand;
            if (mA != null)
            {
                var mB = (IndirectOperand)b;
                if (!NormalizeRegisters && mA.Base != mB.Base)
                    return false;
                if (!NormalizeConstants && mA.Offset != mB.Offset)
                    return false;
                return true;
            }
            throw new NotImplementedException();
        }

        public override int GetOperandsHash(MachineInstruction oinstr)
        {
            int h = 0;
            var instr = (MipsInstruction)oinstr;
            h = h*23 ^ GetHashCode(instr.op1);
            h = h*23 ^ GetHashCode(instr.op2);
            h = h*23 ^ GetHashCode(instr.op3);
            h = h*23 ^ GetHashCode(instr.op4);
            return h;
        }

        private int GetHashCode(MachineOperand op)
        {
            if (op == null)
                return 0;
            var r = op as RegisterOperand;
            if (r != null)
            {
                if (NormalizeRegisters)
                    return 0;
                else
                    return GetRegisterHash(r.Register);
            }
            var i = op as ImmediateOperand;
            if (i != null)
            {
                if (NormalizeConstants)
                    return 0;
                else
                    return GetConstantHash(i.Value);
            }
            var a = op as AddressOperand;
            if (a != null)
            {
                if (NormalizeConstants)
                    return 0;
                else
                    return a.Address.GetHashCode();
            }
            var m = op as IndirectOperand;
            if (m != null)
            {
                int h = 0;
                if (!NormalizeRegisters)
                    h = GetRegisterHash(m.Base);
                if (!NormalizeConstants)
                    h ^= m.Offset.GetHashCode();
                return h;
            }
            return 42;
        }
    }
}