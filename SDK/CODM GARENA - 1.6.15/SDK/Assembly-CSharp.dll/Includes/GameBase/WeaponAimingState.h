#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimingState"));
	}

	template <typename T = bool> T& m_BeginFire() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_IsDoAimingFire() {
		return *(T*)((uintptr_t)this + 0x2A);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAimMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4E558))(this);
	}
	template <typename T = void> T Check1PCamera(bool beginState, bool endState) {
		return ((T (*)(WeaponAimingState*, bool, bool))(Il2CppBase() + 0x1C4E854))(this, beginState, endState);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4EA14))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4EB40))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponAimingState*, float))(Il2CppBase() + 0x1C4ECCC))(this, DeltaTime);
	}
	template <typename T = void> T CheckAimMode() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4EED8))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F0D8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F32C))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F3DC))(this);
	}
	template <typename T = void> T CheckFire() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F514))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F6F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F7F0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F7F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAimingState*, float))(Il2CppBase() + 0x1C4F808))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F810))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponAimingState*))(Il2CppBase() + 0x1C4F828))(this);
	}

};

}
