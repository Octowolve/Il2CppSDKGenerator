#pragma once
#include <Il2Cpp/Il2Cpp.h>

class On3PWeaponChangedcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<On3PWeaponChanged>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(On3PWeaponChangedcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1926524))(this, s);
	}

};

}
