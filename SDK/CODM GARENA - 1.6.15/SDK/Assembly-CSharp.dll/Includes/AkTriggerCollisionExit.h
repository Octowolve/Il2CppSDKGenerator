#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerCollisionExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerCollisionExit"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnCollisionExit(uintptr_t in_other) {
		return ((T (*)(AkTriggerCollisionExit*, uintptr_t))(Il2CppBase() + 0x22AFB30))(this, in_other);
	}

};

}
