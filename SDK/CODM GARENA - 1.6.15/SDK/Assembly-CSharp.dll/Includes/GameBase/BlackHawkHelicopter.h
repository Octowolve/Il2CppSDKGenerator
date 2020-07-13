#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BlackHawkHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BlackHawkHelicopter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(BlackHawkHelicopter*))(Il2CppBase() + 0x373F2C8))(this);
	}
	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(BlackHawkHelicopter*))(Il2CppBase() + 0x373F2D0))(this);
	}
	template <typename T = void> T UpdateMovementAnimation(float deltaTime, Il2CppVector3 LastPos, bool useSpeed) {
		return ((T (*)(BlackHawkHelicopter*, float, Il2CppVector3, bool))(Il2CppBase() + 0x373F2D8))(this, deltaTime, LastPos, useSpeed);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(BlackHawkHelicopter*, bool, uintptr_t))(Il2CppBase() + 0x373F5B4))(this, isHeadShot, damageType);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMovementAnimation(float P0, Il2CppVector3 P1, bool P2) {
		return ((T (*)(BlackHawkHelicopter*, float, Il2CppVector3, bool))(Il2CppBase() + 0x373F684))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(BlackHawkHelicopter*, bool, uintptr_t))(Il2CppBase() + 0x373F6B0))(this, P0, P1);
	}

};

}
