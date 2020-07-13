#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SparrowProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SparrowProjectileSimulator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionPositionSparrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T PreOneTick(uintptr_t deltaTime) {
		return ((T (*)(SparrowProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33F6A94))(this, deltaTime);
	}
	template <typename T = uintptr_t> T CheckPawn(uintptr_t impactInfo, Il2CppVector3 direction, float distance) {
		return ((T (*)(SparrowProjectileSimulator*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x33F6D0C))(this, impactInfo, direction, distance);
	}
	template <typename T = Il2CppVector3> static T GetExplosionPositionSparrow(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t* explosionTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*))(Il2CppBase() + 0x33F7240))(0, initalPosition, initalVelocity, data, explosionTime);
	}
	template <typename T = bool> T xLuaBaseProxy_PreOneTick(uintptr_t P0) {
		return ((T (*)(SparrowProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33F737C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CheckPawn(uintptr_t P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(SparrowProjectileSimulator*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x33F7384))(this, P0, P1, P2);
	}

};

}
