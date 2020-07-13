#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerLocalPawnEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerLocalPawnEnter"));
	}

	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t in_other) {
		return ((T (*)(AkTriggerLocalPawnEnter*, uintptr_t))(Il2CppBase() + 0x22B0520))(this, in_other);
	}

};

}
