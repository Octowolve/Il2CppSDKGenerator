#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipWeaponcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipWeapon>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& weaponActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t a) {
		return ((T (*)(EquipWeaponcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x24E11CC))(this, a);
	}

};

}
