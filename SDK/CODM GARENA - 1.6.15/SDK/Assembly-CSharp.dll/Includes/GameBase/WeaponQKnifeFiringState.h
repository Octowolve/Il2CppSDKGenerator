#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponQKnifeFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponQKnifeFiringState"));
	}

	template <typename T = uintptr_t> T& m_FireComponentQKnife() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7A420))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7A528))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7A6E0))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7A778))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponQKnifeFiringState*, float))(Il2CppBase() + 0x3A7A810))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7A96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7AB48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7AB4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7AB50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7AB54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponQKnifeFiringState*, float))(Il2CppBase() + 0x3A7AB58))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponQKnifeFiringState*))(Il2CppBase() + 0x3A7AB5C))(this);
	}

};

}
