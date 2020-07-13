#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLoadoutAndWeapon1InitcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_LoadoutAndWeapon_1_Init>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLoadoutAndWeapon1InitcAnonStorey0*))(Il2CppBase() + 0x1A49568))(this);
	}

};

}
