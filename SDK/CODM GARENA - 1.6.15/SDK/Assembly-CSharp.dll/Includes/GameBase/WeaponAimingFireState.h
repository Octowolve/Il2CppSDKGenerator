#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimingFireState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimingFireState"));
	}

	template <typename T = bool> T& m_IsDoStopFire() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFireGroupEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4DDF0))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4DED8))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4DF7C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E038))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponAimingFireState*, float))(Il2CppBase() + 0x1C4E13C))(this, DeltaTime);
	}
	template <typename T = void> T DoFireGroupEnd() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E2A8))(this);
	}
	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E45C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E46C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAimingFireState*, float))(Il2CppBase() + 0x1C4E474))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DoFireGroupEnd() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E47C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponAimingFireState*))(Il2CppBase() + 0x1C4E484))(this);
	}

};

}
