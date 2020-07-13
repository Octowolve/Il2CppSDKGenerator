#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RPGProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RPGProjectileSimulator"));
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
	template <typename T = float> T& m_TrackAngle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_AirTargetAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_AirTargetMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAccelDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetTarget(uintptr_t inTarget, uintptr_t inHitGroup) {
		return ((T (*)(RPGProjectileSimulator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E04540))(this, inTarget, inHitGroup);
	}
	template <typename T = Il2CppVector3> T CalcAccelDir() {
		return ((T (*)(RPGProjectileSimulator*))(Il2CppBase() + 0x1E046FC))(this);
	}
	template <typename T = void> T UpdateVelocity(float dt) {
		return ((T (*)(RPGProjectileSimulator*, float))(Il2CppBase() + 0x1E04988))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateVelocity(float P0) {
		return ((T (*)(RPGProjectileSimulator*, float))(Il2CppBase() + 0x1E04D44))(this, P0);
	}

};

}
