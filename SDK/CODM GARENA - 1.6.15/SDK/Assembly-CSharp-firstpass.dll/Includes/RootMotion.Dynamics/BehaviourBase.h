#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourBase"));
	}

	template <typename T = uintptr_t> T& puppetMaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OnPreActivate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnPreInitiate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OnPreFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnPreUpdate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OnPreLateUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnPreDeactivate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OnPreFixTransforms() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnPreRead() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OnPreWrite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnPreMuscleHit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& OnPreMuscleCollision() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnPreMuscleCollisionExit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OnHierarchyChanged() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnPostActivate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& OnPostInitiate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnPostFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& OnPostUpdate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& OnPostLateUpdate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& OnPostDeactivate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnPostDrawGizmos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& OnPostFixTransforms() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnPostRead() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& OnPostWrite() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& OnPostMuscleHit() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& OnPostMuscleCollision() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OnPostMuscleCollisionExit() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& deactivated() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& forceActive() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& initiated() {
		return *(T*)((uintptr_t)this + 0x7A);
	}

	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Resurrect() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5B3C))(this);
	}
	template <typename T = void> T Freeze() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5B40))(this);
	}
	template <typename T = void> T Unfreeze() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5B44))(this);
	}
	template <typename T = void> T KillStart() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5B48))(this);
	}
	template <typename T = void> T KillEnd() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5B4C))(this);
	}
	template <typename T = void> T OnTeleport(Il2CppQuaternion deltaRotation, Il2CppVector3 deltaPosition, Il2CppVector3 pivot, bool moveToTarget) {
		return ((T (*)(BehaviourBase*, Il2CppQuaternion, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x38A5B50))(this, deltaRotation, deltaPosition, pivot, moveToTarget);
	}
	template <typename T = void> T OnMuscleAdded(uintptr_t m) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5B54))(this, m);
	}
	template <typename T = void> T OnMuscleRemoved(uintptr_t m) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5BF8))(this, m);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C0C))(this);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C10))(this);
	}
	template <typename T = void> T OnInitiate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C14))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C18))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C1C))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C20))(this);
	}
	template <typename T = void> T OnDrawGizmosBehaviour() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C24))(this);
	}
	template <typename T = void> T OnFixTransformsBehaviour() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C28))(this);
	}
	template <typename T = void> T OnReadBehaviour() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C2C))(this);
	}
	template <typename T = void> T OnWriteBehaviour() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C30))(this);
	}
	template <typename T = void> T OnMuscleHitBehaviour(uintptr_t hit) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5C34))(this, hit);
	}
	template <typename T = void> T OnMuscleCollisionBehaviour(uintptr_t collision) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5C38))(this, collision);
	}
	template <typename T = void> T OnMuscleCollisionExitBehaviour(uintptr_t collision) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5C3C))(this, collision);
	}
	template <typename T = bool> T get_forceActive() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C40))(this);
	}
	template <typename T = void> T set_forceActive(bool value) {
		return ((T (*)(BehaviourBase*, bool))(Il2CppBase() + 0x38A5C48))(this, value);
	}
	template <typename T = void> T Initiate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5C50))(this);
	}
	template <typename T = void> T OnFixTransforms() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5CA0))(this);
	}
	template <typename T = void> T OnRead() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5D0C))(this);
	}
	template <typename T = void> T OnWrite() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A5D78))(this);
	}
	template <typename T = void> T OnMuscleHit(uintptr_t hit) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5DE4))(this, hit);
	}
	template <typename T = void> T OnMuscleCollision(uintptr_t collision) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A5FF0))(this, collision);
	}
	template <typename T = void> T OnMuscleCollisionExit(uintptr_t collision) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A6134))(this, collision);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A61D0))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A61E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A6338))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A6390))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A6458))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A6520))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A65E8))(this);
	}
	template <typename T = void> T RotateTargetToRootMuscle() {
		return ((T (*)(BehaviourBase*))(Il2CppBase() + 0x38A6630))(this);
	}
	template <typename T = void> T TranslateTargetToRootMuscle(float maintainY) {
		return ((T (*)(BehaviourBase*, float))(Il2CppBase() + 0x38A67E0))(this, maintainY);
	}
	template <typename T = void> T RemoveMusclesOfGroup(uintptr_t group) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A536C))(this, group);
	}
	template <typename T = void> T GroundTarget(uintptr_t layers) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A80A0))(this, layers);
	}
	template <typename T = bool> T MusclesContainsGroup(uintptr_t group) {
		return ((T (*)(BehaviourBase*, uintptr_t))(Il2CppBase() + 0x38A8018))(this, group);
	}

};

}
