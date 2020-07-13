#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMeleeFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMeleeFiringState"));
	}

	template <typename T = float> T& m_CurFireInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_StopFire() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_DblclickTick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_DblclickFire() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_FireComponentMelee() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDblclickFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5A354))(this);
	}
	template <typename T = void> T TryDblclickFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5A594))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponMeleeFiringState*, float))(Il2CppBase() + 0x3A5A7D8))(this, DeltaTime);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5A944))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5ABB0))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5AC54))(this);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5ACF8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5ADC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TryDblclickFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B10C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponMeleeFiringState*, float))(Il2CppBase() + 0x3A5B114))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B11C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopCurrentState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B12C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponMeleeFiringState*))(Il2CppBase() + 0x3A5B134))(this);
	}

};

}
