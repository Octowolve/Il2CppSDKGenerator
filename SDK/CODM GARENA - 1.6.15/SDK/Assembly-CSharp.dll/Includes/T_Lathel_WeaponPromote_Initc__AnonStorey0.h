#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathelWeaponPromoteInitcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_WeaponPromote_Init>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& ExpCardID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(TLathelWeaponPromoteInitcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A76A84))(this, it);
	}

};

}
