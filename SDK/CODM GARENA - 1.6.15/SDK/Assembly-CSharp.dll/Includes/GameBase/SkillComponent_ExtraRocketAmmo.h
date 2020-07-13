#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentExtraRocketAmmo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponent_ExtraRocketAmmo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T AddAmmo() {
		return ((T (*)(SkillComponentExtraRocketAmmo*))(Il2CppBase() + 0x2E1344C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAmmo() {
		return ((T (*)(SkillComponentExtraRocketAmmo*))(Il2CppBase() + 0x2E134E4))(this);
	}

};

}
