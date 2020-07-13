#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimedIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimedIdleState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentWeaponNeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsNeedStopAim() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4B80C))(this);
	}
	template <typename T = bool> T IsCurrentWeaponNeedStopAim() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4B9D4))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4BA90))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4BE70))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4BF2C))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4C070))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4C1A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4C1B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4C1B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimedIdleState*))(Il2CppBase() + 0x1C4C1C0))(this);
	}

};

}
