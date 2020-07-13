#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDetectParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "AutoDetectParams"));
	}

	template <typename T = bool> T& legsParentInSpine() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& includeEyes() {
		return *(T*)((uintptr_t)this + 0x1);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x38A2E7C))(0);
	}

};

}
