#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrappleGunFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrappleGunFiringState"));
	}

	template <typename T = uintptr_t> T& m_FireGrappleGun() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_fAniWeightSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_fCurrAniWeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_fTargetAniWeight() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A598))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A734))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A7CC))(this);
	}
	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A8CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponGrappleGunFiringState*))(Il2CppBase() + 0x1C6A97C))(this);
	}

};

}
