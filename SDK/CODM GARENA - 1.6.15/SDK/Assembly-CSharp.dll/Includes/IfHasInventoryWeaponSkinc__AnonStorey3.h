#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IfHasInventoryWeaponSkincAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IfHasInventoryWeaponSkin>c__AnonStorey3"));
	}

	template <typename T = uint32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IfHasInventoryWeaponSkincAnonStorey3*, uintptr_t))(Il2CppBase() + 0x392F644))(this, it);
	}

};

}
