#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentTempest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Tempest"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentTempest*, Il2CppString*))(Il2CppBase() + 0x23FE564))(this, path);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentTempest*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23FE614))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentTempest*, Il2CppString*))(Il2CppBase() + 0x23FE830))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(WeaponFireComponentTempest*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23FE834))(this, P0, P1, P2, P3, P4);
	}

};

}
