#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBladeFiringState"));
	}

	template <typename T = uintptr_t> T& m_FireComponent() {
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
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A815E4))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A816F0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A818A8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81940))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponShadowBladeFiringState*, float))(Il2CppBase() + 0x3A819D8))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81B34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81D10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81D14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81D18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81D1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponShadowBladeFiringState*, float))(Il2CppBase() + 0x3A81D20))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponShadowBladeFiringState*))(Il2CppBase() + 0x3A81D24))(this);
	}

};

}
