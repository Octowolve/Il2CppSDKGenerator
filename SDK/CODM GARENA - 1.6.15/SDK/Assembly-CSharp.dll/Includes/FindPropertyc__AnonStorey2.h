#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPropertycAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindProperty>c__AnonStorey2"));
	}

	template <typename T = Il2CppString*> T& label() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t p) {
		return ((T (*)(FindPropertycAnonStorey2*, uintptr_t))(Il2CppBase() + 0x480A770))(this, p);
	}

};

}
