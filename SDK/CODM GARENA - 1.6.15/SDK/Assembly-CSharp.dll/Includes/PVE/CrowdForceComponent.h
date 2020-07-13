#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class CrowdForceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "CrowdForceComponent"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NavAgent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& OutputCrowdForce() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsAffectedByCrowdForce() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& NeedClampMovementSpeed() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uintptr_t> T& DetectableLayers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& AwareUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& AwareRaidus() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RForceRadius() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& ExternalForce() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& DampingForce() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& FollowPathForce() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& RepulsiveForce() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& AlignmentForce() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& TotalForce() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& FollowPathForceStrength() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& RepulsiveForceStrength() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& AlignmentForceStrength() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NearbyDynamics() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliders() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _aiPawn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& _otherCrowdForceCom() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _flockPawn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& _force() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& _vectorMag() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& _toDest() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& _toFlock() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& _toFlockMag() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& _toFlockNormalized() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& _totalFlockVel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& _averageFlockVel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _flockCount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& _overlapFactor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& _radiusFactor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _velocityFactor() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& _velAngleCosineAbs() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetCrowdForceCom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerUpdateProximityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProximityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcEachIntraCrowdForceComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BEAE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BEB9C))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BECD0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BED84))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BEEC8))(this);
	}
	template <typename T = uintptr_t> T TryGetCrowdForceCom(uintptr_t collider) {
		return ((T (*)(CrowdForceComponent*, uintptr_t))(Il2CppBase() + 0x49BF0F8))(this, collider);
	}
	template <typename T = uintptr_t> T TimerUpdateProximityInfo() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BF018))(this);
	}
	template <typename T = void> T UpdateProximityInfo() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BF210))(this);
	}
	template <typename T = void> T CalcVelocity(float deltaTime) {
		return ((T (*)(CrowdForceComponent*, float))(Il2CppBase() + 0x49BF5C4))(this, deltaTime);
	}
	template <typename T = void> T CalcEachIntraCrowdForceComponent() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49BF9F8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49C00DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49C0610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(CrowdForceComponent*))(Il2CppBase() + 0x49C0618))(this);
	}

};

}
