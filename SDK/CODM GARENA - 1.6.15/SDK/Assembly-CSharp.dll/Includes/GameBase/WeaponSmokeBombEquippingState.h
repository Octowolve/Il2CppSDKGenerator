#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSmokeBombEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSmokeBombEquippingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A845D8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A8478C))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A8486C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A84988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A84990))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSmokeBombEquippingState*))(Il2CppBase() + 0x3A84998))(this);
	}

};

}
