#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsUltSkillWeaponcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsUltSkillWeapon>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsUltSkillWeaponcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x30F1AF4))(this, x);
	}

};

}
