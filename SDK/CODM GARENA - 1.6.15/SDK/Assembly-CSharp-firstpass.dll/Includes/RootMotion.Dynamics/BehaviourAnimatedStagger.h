#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourAnimatedStagger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourAnimatedStagger"));
	}

	template <typename T = uintptr_t> T& groundLayers() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& animationBlendSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& animationMag() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& momentumMag() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& unbalancedMuscleWeightMlp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& unbalancedMuscleDamperAdd() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& dropProps() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& maxGetUpVelocity() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& minHipHeight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& centerOfMass() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& defaults() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groupOverrides() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& onUngrounded() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& onFallOver() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& onRest() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector3> T& moveVector() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& isGrounded() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& forward() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T OnInitiate() {
		return ((T (*)(BehaviourAnimatedStagger*))(Il2CppBase() + 0x38A3F14))(this);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourAnimatedStagger*))(Il2CppBase() + 0x38A47A8))(this);
	}
	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourAnimatedStagger*))(Il2CppBase() + 0x38A4870))(this);
	}
	template <typename T = uintptr_t> T LoseBalance() {
		return ((T (*)(BehaviourAnimatedStagger*))(Il2CppBase() + 0x38A47CC))(this);
	}
	template <typename T = uintptr_t> T GetFallParams(uintptr_t group) {
		return ((T (*)(BehaviourAnimatedStagger*, uintptr_t))(Il2CppBase() + 0x38A487C))(this, group);
	}

};

}
