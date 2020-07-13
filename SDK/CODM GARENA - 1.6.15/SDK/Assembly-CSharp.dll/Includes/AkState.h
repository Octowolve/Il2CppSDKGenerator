#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkState"));
	}

	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& valueID() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkState*, uintptr_t))(Il2CppBase() + 0x22A9394))(this, in_gameObject);
	}

};

}
