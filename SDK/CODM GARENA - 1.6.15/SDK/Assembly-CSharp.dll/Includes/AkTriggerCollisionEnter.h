#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerCollisionEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerCollisionEnter"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnCollisionEnter(uintptr_t in_other) {
		return ((T (*)(AkTriggerCollisionEnter*, uintptr_t))(Il2CppBase() + 0x22AF848))(this, in_other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t in_other) {
		return ((T (*)(AkTriggerCollisionEnter*, uintptr_t))(Il2CppBase() + 0x22AF9B8))(this, in_other);
	}

};

}
