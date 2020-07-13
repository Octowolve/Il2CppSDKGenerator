#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetWeaponSquadProperycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetWeaponSquadPropery>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& pc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T m__0(uint32_t nBagId) {
		return ((T (*)(SetWeaponSquadProperycAnonStorey0*, uint32_t))(Il2CppBase() + 0x2D6877C))(this, nBagId);
	}

};

}
