#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSwitch"));
	}

	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& valueID() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkSwitch*, uintptr_t))(Il2CppBase() + 0x22AC6B4))(this, in_gameObject);
	}

};

}
