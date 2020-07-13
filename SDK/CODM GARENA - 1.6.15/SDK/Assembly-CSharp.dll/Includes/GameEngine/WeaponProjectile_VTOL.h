#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_VTOL"));
	}

	template <typename T = uintptr_t> T& m_VTOLProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocationAndVelocityDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileVTOL*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x339BA58))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = bool> T CanExplode(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileVTOL*, uintptr_t))(Il2CppBase() + 0x339BBAC))(this, impactInfo);
	}
	template <typename T = void> T ResetLocationAndVelocityDir(Il2CppVector3 location, Il2CppVector3 velocityDir) {
		return ((T (*)(WeaponProjectileVTOL*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x339C004))(this, location, velocityDir);
	}
	template <typename T = void> T PlayFlightEffect() {
		return ((T (*)(WeaponProjectileVTOL*))(Il2CppBase() + 0x339C11C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileVTOL*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x339C574))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_CanExplode(uintptr_t P0) {
		return ((T (*)(WeaponProjectileVTOL*, uintptr_t))(Il2CppBase() + 0x339C5B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFlightEffect() {
		return ((T (*)(WeaponProjectileVTOL*))(Il2CppBase() + 0x339C5C0))(this);
	}

};

}
