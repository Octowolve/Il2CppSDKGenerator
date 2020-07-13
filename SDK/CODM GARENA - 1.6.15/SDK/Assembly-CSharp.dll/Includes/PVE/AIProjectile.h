#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIProjectile"));
	}

	template <typename T = float> T& m_ShakeFactor() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& ShakeCameraMaxRadius() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& ShakeCameraMaxIntensity() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExploded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T CanExplode(uintptr_t impactInfo) {
		return ((T (*)(AIProjectile*, uintptr_t))(Il2CppBase() + 0x49B165C))(this, impactInfo);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(AIProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B18F0))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(AIProjectile*, float))(Il2CppBase() + 0x49B19FC))(this, DeltaTime);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(AIProjectile*))(Il2CppBase() + 0x49B1AB0))(this);
	}
	template <typename T = void> T OnExploded() {
		return ((T (*)(AIProjectile*))(Il2CppBase() + 0x49B1B58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanExplode(uintptr_t P0) {
		return ((T (*)(AIProjectile*, uintptr_t))(Il2CppBase() + 0x49B1BF0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(AIProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49B1BF8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AIProjectile*, float))(Il2CppBase() + 0x49B1C24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(AIProjectile*))(Il2CppBase() + 0x49B1C2C))(this);
	}

};

}
