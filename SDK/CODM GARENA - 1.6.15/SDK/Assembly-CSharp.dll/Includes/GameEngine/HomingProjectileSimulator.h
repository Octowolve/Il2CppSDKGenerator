#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HomingProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HomingProjectileSimulator"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& TargetHitGroup() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& TargetTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& OriginalDirection() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& LastTargetDirection() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& AllowUTurn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetTarget(uintptr_t inTarget, uintptr_t inHitGroup, bool inAlloUTurn) {
		return ((T (*)(HomingProjectileSimulator*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3700214))(this, inTarget, inHitGroup, inAlloUTurn);
	}
	template <typename T = void> T UpdateVelocity(float dt) {
		return ((T (*)(HomingProjectileSimulator*, float))(Il2CppBase() + 0x3700448))(this, dt);
	}
	template <typename T = Il2CppVector3> T CalcDirection(bool allowUTurn) {
		return ((T (*)(HomingProjectileSimulator*, bool))(Il2CppBase() + 0x370065C))(this, allowUTurn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateVelocity(float P0) {
		return ((T (*)(HomingProjectileSimulator*, float))(Il2CppBase() + 0x3700948))(this, P0);
	}

};

}
