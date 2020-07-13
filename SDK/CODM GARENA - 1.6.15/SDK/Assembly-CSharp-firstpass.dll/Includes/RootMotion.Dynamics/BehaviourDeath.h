#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourDeath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourDeath"));
	}

	template <typename T = float> T& blendToFreezeTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& blendMappingSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ModifyOverAllPinWeight() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourDeath*))(Il2CppBase() + 0x38A8DAC))(this);
	}
	template <typename T = uintptr_t> T DelayFreeze() {
		return ((T (*)(BehaviourDeath*))(Il2CppBase() + 0x38A8E98))(this);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(BehaviourDeath*))(Il2CppBase() + 0x38A8F44))(this);
	}
	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourDeath*))(Il2CppBase() + 0x38A8F48))(this);
	}
	template <typename T = uintptr_t> T SmoothActivate() {
		return ((T (*)(BehaviourDeath*))(Il2CppBase() + 0x38A8DF4))(this);
	}

};

}
