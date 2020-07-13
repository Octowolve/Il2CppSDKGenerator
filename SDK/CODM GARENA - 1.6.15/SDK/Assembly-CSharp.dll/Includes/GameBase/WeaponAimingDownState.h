#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimingDownState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimingDownState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check1PCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4CB5C))(this);
	}
	template <typename T = void> T Check1PCamera(bool beginState, bool endState) {
		return ((T (*)(WeaponAimingDownState*, bool, bool))(Il2CppBase() + 0x1C4CC48))(this, beginState, endState);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4CE08))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4CF00))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponAimingDownState*, float))(Il2CppBase() + 0x1C4D0D8))(this, DeltaTime);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D1A0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D328))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D424))(this);
	}
	template <typename T = void> T CheckFire() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D71C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D72C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAimingDownState*, float))(Il2CppBase() + 0x1C4D734))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D73C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D744))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponAimingDownState*))(Il2CppBase() + 0x1C4D74C))(this);
	}

};

}
