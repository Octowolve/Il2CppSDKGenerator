#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerExit"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& OnlyTriggerWithPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& OnlyTriggerWithLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = void> T OnTriggerExit(uintptr_t in_other) {
		return ((T (*)(AkTriggerExit*, uintptr_t))(Il2CppBase() + 0x22B010C))(this, in_other);
	}

};

}
