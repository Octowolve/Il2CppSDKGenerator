#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourTemplate"));
	}

	template <typename T = uintptr_t> T& centerOfMass() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& groundLayers() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& onLoseBalance() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& loseBalanceAngle() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnInitiate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AF984))(this);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AF9B4))(this);
	}
	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AF9B8))(this);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AF9BC))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AF9C0))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(BehaviourTemplate*))(Il2CppBase() + 0x38AFA14))(this);
	}
	template <typename T = void> T OnMuscleHitBehaviour(uintptr_t hit) {
		return ((T (*)(BehaviourTemplate*, uintptr_t))(Il2CppBase() + 0x38AFA18))(this, hit);
	}
	template <typename T = void> T OnMuscleCollisionBehaviour(uintptr_t m) {
		return ((T (*)(BehaviourTemplate*, uintptr_t))(Il2CppBase() + 0x38AFA20))(this, m);
	}

};

}
