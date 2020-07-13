#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourFall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourFall"));
	}

	template <typename T = Il2CppString*> T& stateName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& transitionDuration() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& fixedTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& raycastLayers() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& blendParameter() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& writheHeight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& writheYVelocity() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& blendSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& blendMappingSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& canEnd() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& minTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& maxEndVelocity() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& onEnd() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& endTriggered() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T OpenUserManual() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9648))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A96CC))(this);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9750))(this);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9830))(this);
	}
	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A983C))(this);
	}
	template <typename T = uintptr_t> T SmoothActivate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A978C))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9854))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9EC8))(this);
	}
	template <typename T = void> T Resurrect() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38AA028))(this);
	}
	template <typename T = float> T GetBlendTarget(float groundHeight) {
		return ((T (*)(BehaviourFall*, float))(Il2CppBase() + 0x38A9D04))(this, groundHeight);
	}
	template <typename T = float> T GetGroundHeight() {
		return ((T (*)(BehaviourFall*))(Il2CppBase() + 0x38A9B3C))(this);
	}

};

}
