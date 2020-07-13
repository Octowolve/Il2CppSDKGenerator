#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerEnter"));
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

	template <typename T = void> T OnTriggerEnter(uintptr_t in_other) {
		return ((T (*)(AkTriggerEnter*, uintptr_t))(Il2CppBase() + 0x22AFCF0))(this, in_other);
	}

};

}
