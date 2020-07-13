#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerPawnBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerPawnBase"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AkTriggerPawnBase*))(Il2CppBase() + 0x22B0938))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkTriggerPawnBase*))(Il2CppBase() + 0x22B1200))(this);
	}
	template <typename T = void> T OnPawnFirstEnter(uintptr_t pTarget) {
		return ((T (*)(AkTriggerPawnBase*, uintptr_t))(Il2CppBase() + 0x22B18DC))(this, pTarget);
	}
	template <typename T = void> T OnPawnLastExit(uintptr_t pTarget) {
		return ((T (*)(AkTriggerPawnBase*, uintptr_t))(Il2CppBase() + 0x22B18E0))(this, pTarget);
	}

};

}
