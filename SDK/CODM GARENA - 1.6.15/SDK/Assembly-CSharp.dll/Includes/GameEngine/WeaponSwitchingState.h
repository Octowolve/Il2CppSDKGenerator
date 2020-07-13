#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwitchingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwitchingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwitchingState*))(Il2CppBase() + 0x33C311C))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSwitchingState*))(Il2CppBase() + 0x33C3240))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwitchingState*))(Il2CppBase() + 0x33C335C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSwitchingState*))(Il2CppBase() + 0x33C3364))(this);
	}

};

}
