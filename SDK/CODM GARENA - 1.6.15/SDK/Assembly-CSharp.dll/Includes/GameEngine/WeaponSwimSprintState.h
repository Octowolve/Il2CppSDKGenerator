#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwimSprintState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwimSprintState"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsSwimFire() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C194C))(this);
	}
	template <typename T = bool> T get_ProcessWeaponVisible() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C1954))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C195C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C1BD4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimSprintState*, float))(Il2CppBase() + 0x33C1D40))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C1EB8))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C1FD0))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C20F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C22C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C22CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimSprintState*, float))(Il2CppBase() + 0x33C22D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C22D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C22D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponSwimSprintState*))(Il2CppBase() + 0x33C22DC))(this);
	}

};

}
