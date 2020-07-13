#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIProjectileDamageZone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIProjectile_DamageZone"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDamageVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveADamageZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(AIProjectileDamageZone*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B1CD4))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = uintptr_t> T CreateDamageVolume(Il2CppVector3 ExplodeLocation) {
		return ((T (*)(AIProjectileDamageZone*, Il2CppVector3))(Il2CppBase() + 0x49B1F18))(this, ExplodeLocation);
	}
	template <typename T = uintptr_t> T LeaveADamageZone(Il2CppVector3 ExplodeLocation) {
		return ((T (*)(AIProjectileDamageZone*, Il2CppVector3))(Il2CppBase() + 0x49B2104))(this, ExplodeLocation);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(AIProjectileDamageZone*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B2274))(this, P0, P1, P2);
	}

};

}
