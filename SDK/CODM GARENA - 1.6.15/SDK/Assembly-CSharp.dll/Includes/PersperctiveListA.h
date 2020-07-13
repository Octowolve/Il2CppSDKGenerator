#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersperctiveListA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersperctiveListA"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Normalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Normalize(uintptr_t Container) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B12DAC))(0, Container);
	}

};

}
