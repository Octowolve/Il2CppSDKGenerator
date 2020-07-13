#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveWeaponAvatarcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveWeaponAvatar>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& weaponActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(RemoveWeaponAvatarcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x24E1460))(this, s);
	}

};

}
