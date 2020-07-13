#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnWeaponPartLoadReadycAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnWeaponPartLoadReady>c__AnonStoreyA"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(OnWeaponPartLoadReadycAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x24E1340))(this, s);
	}

};

}
