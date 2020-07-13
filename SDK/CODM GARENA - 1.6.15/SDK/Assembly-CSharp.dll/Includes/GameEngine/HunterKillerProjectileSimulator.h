#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HunterKillerProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HunterKillerProjectileSimulator"));
	}

	template <typename T = float> static T& RotateAngleSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FlyState() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_HasTarget() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LockedTarget() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_Accel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CruiseY() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_hkData() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_DiffVect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_DiffLerpTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_CurrentLerpTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_LastUpdateTargetTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = uintptr_t> T get_FlyState() {
		return ((T (*)(HunterKillerProjectileSimulator*))(Il2CppBase() + 0x3700BD4))(this);
	}
	template <typename T = void> T Init(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t handler) {
		return ((T (*)(HunterKillerProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x3700BDC))(this, initalPosition, initalVelocity, data, handler);
	}
	template <typename T = void> T UpdateVelocity(float dt) {
		return ((T (*)(HunterKillerProjectileSimulator*, float))(Il2CppBase() + 0x3700D84))(this, dt);
	}
	template <typename T = void> T UpdateTarget() {
		return ((T (*)(HunterKillerProjectileSimulator*))(Il2CppBase() + 0x3700FD0))(this);
	}
	template <typename T = uintptr_t> T get_LockTarget() {
		return ((T (*)(HunterKillerProjectileSimulator*))(Il2CppBase() + 0x3701334))(this);
	}
	template <typename T = void> T LockOnTarget(uintptr_t target) {
		return ((T (*)(HunterKillerProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x370133C))(this, target);
	}
	template <typename T = void> T SyncStatus(uintptr_t flyState, uintptr_t lockTarget, Il2CppVector3 pos, Il2CppVector3 vel, Il2CppVector3 targetPos, float elapsedTime) {
		return ((T (*)(HunterKillerProjectileSimulator*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3701404))(this, flyState, lockTarget, pos, vel, targetPos, elapsedTime);
	}
	template <typename T = bool> T CheckForward(uintptr_t impactInfo, bool traceLocalPlayer, float deltaTime) {
		return ((T (*)(HunterKillerProjectileSimulator*, uintptr_t, bool, float))(Il2CppBase() + 0x3701628))(this, impactInfo, traceLocalPlayer, deltaTime);
	}
	template <typename T = bool> T SimulateTick(bool once, bool traceLocalPlayer, uintptr_t impactInfo, uintptr_t firstImpactInfo, float inUpdateTime, Il2CppList<Il2CppVector3>* outPositionList, uintptr_t throwOwnerPawn, int32_t maxPointsNum) {
		return ((T (*)(HunterKillerProjectileSimulator*, bool, bool, uintptr_t, uintptr_t, float, Il2CppList<Il2CppVector3>*, uintptr_t, int32_t))(Il2CppBase() + 0x370183C))(this, once, traceLocalPlayer, impactInfo, firstImpactInfo, inUpdateTime, outPositionList, throwOwnerPawn, maxPointsNum);
	}

};

}
