#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerLocalPawnExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerLocalPawnExit"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnTriggerExit(uintptr_t in_other) {
		return ((T (*)(AkTriggerLocalPawnExit*, uintptr_t))(Il2CppBase() + 0x22B071C))(this, in_other);
	}

};

}
