#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class OpCodes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "OpCodes"));
	}

	template <typename T = uintptr_t> static T& Nop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Break() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Ldarg_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& Ldarg_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& Ldarg_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& Ldarg_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& Ldloc_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& Ldloc_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& Ldloc_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& Ldloc_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& Stloc_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& Stloc_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& Stloc_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& Stloc_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& Ldarg_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& Ldarga_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& Starg_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& Ldloc_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& Ldloca_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& Stloc_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& Ldnull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_M1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& Ldc_I4_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& Ldc_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& Ldc_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& Ldc_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& Ldc_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& Dup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& Pop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& Jmp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& Call() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& Calli() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& Ret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& Br_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& Brfalse_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& Brtrue_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& Beq_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& Bge_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& Bgt_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& Ble_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& Blt_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& Bne_Un_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& Bge_Un_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& Bgt_Un_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& Ble_Un_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& Blt_Un_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& Br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& Brfalse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& Brtrue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& Beq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& Bge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& Bgt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& Ble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& Blt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& Bne_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& Bge_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& Bgt_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& Ble_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& Blt_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& Switch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& Ldind_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& Ldind_U1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& Ldind_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& Ldind_U2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& Ldind_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& Ldind_U4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& Ldind_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& Ldind_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& Ldind_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& Ldind_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& Ldind_Ref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& Stind_Ref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& Stind_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& Stind_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& Stind_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& Stind_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& Stind_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& Stind_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& Sub() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& Mul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& Div() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& Div_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& Rem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& Rem_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& And() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& Or() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& Xor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& Shl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& Shr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& Shr_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& Neg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& Not() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& Conv_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& Conv_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& Conv_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& Conv_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& Conv_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& Conv_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& Conv_U4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& Conv_U8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& Callvirt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& Cpobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& Ldobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& Ldstr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& Newobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& Castclass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& Isinst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& Conv_R_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& Unbox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& Throw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& Ldfld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& Ldflda() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& Stfld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& Ldsfld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& Ldsflda() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& Stsfld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& Stobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I1_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I2_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I4_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I8_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U1_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U2_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U4_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U8_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& Box() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& Newarr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& Ldlen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& Ldelema() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& Ldelem_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& Ldelem_U1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& Ldelem_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& Ldelem_U2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& Ldelem_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& Ldelem_U4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& Ldelem_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& Ldelem_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& Ldelem_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& Ldelem_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& Ldelem_Ref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& Stelem_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& Stelem_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& Stelem_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& Stelem_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& Stelem_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& Stelem_R4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& Stelem_R8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& Stelem_Ref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& Ldelem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& Stelem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& Unbox_Any() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = uintptr_t> static T& Refanyval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = uintptr_t> static T& Ckfinite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = uintptr_t> static T& Mkrefany() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = uintptr_t> static T& Ldtoken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = uintptr_t> static T& Conv_U2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = uintptr_t> static T& Conv_U1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = uintptr_t> static T& Conv_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = uintptr_t> static T& Conv_Ovf_U() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = uintptr_t> static T& Add_Ovf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = uintptr_t> static T& Add_Ovf_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = uintptr_t> static T& Mul_Ovf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = uintptr_t> static T& Mul_Ovf_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = uintptr_t> static T& Sub_Ovf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = uintptr_t> static T& Sub_Ovf_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = uintptr_t> static T& Endfinally() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = uintptr_t> static T& Leave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = uintptr_t> static T& Leave_S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = uintptr_t> static T& Stind_I() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = uintptr_t> static T& Conv_U() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = uintptr_t> static T& Prefix7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = uintptr_t> static T& Prefix6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = uintptr_t> static T& Prefix5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = uintptr_t> static T& Prefix4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = uintptr_t> static T& Prefix3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = uintptr_t> static T& Prefix2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = uintptr_t> static T& Prefix1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = uintptr_t> static T& Prefixref() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = uintptr_t> static T& Arglist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = uintptr_t> static T& Ceq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = uintptr_t> static T& Cgt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = uintptr_t> static T& Cgt_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = uintptr_t> static T& Clt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = uintptr_t> static T& Clt_Un() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = uintptr_t> static T& Ldftn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = uintptr_t> static T& Ldvirtftn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = uintptr_t> static T& Ldarg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = uintptr_t> static T& Ldarga() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = uintptr_t> static T& Starg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = uintptr_t> static T& Ldloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = uintptr_t> static T& Ldloca() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = uintptr_t> static T& Stloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = uintptr_t> static T& Localloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = uintptr_t> static T& Endfilter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = uintptr_t> static T& Unaligned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = uintptr_t> static T& Volatile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = uintptr_t> static T& Tailcall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = uintptr_t> static T& Initobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = uintptr_t> static T& Constrained() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = uintptr_t> static T& Cpblk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = uintptr_t> static T& Initblk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = uintptr_t> static T& Rethrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	template <typename T = uintptr_t> static T& Sizeof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	template <typename T = uintptr_t> static T& Refanytype() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = uintptr_t> static T& Readonly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x708);
	}


};

}
