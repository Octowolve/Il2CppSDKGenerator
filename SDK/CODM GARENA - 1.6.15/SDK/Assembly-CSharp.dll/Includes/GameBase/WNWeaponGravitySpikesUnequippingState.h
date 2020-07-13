#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponGravitySpikesUnequippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponGravitySpikesUnequippingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x45969D8))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596B00))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596CD4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596E98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596EA0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596EA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WNWeaponGravitySpikesUnequippingState*))(Il2CppBase() + 0x4596EB0))(this);
	}

};

}
