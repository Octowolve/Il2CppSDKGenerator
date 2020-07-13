#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrappleGunActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrappleGunActiveState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryCancelUseUltWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrappleGunActiveState*))(Il2CppBase() + 0x1C6995C))(this);
	}
	template <typename T = void> T TryCancelUseUltWeapon() {
		return ((T (*)(WeaponGrappleGunActiveState*))(Il2CppBase() + 0x1C69B54))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGrappleGunActiveState*))(Il2CppBase() + 0x1C69CFC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrappleGunActiveState*, float))(Il2CppBase() + 0x1C69E30))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrappleGunActiveState*))(Il2CppBase() + 0x1C69EE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGrappleGunActiveState*))(Il2CppBase() + 0x1C69EE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrappleGunActiveState*, float))(Il2CppBase() + 0x1C69EE8))(this, P0);
	}

};

}
