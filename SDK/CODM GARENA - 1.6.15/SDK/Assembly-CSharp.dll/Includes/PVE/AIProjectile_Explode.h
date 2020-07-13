#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIProjectileExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIProjectile_Explode"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AIProjectileExplode*))(Il2CppBase() + 0x49B2580))(this);
	}
	template <typename T = bool> T CanExplode(uintptr_t impactInfo) {
		return ((T (*)(AIProjectileExplode*, uintptr_t))(Il2CppBase() + 0x49B2658))(this, impactInfo);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(AIProjectileExplode*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B2700))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = bool> T xLuaBaseProxy_CanExplode(uintptr_t P0) {
		return ((T (*)(AIProjectileExplode*, uintptr_t))(Il2CppBase() + 0x49B29D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(AIProjectileExplode*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B29D8))(this, P0, P1, P2);
	}

};

}
