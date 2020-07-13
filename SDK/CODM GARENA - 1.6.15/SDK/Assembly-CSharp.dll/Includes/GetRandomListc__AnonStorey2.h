#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetRandomListcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetRandomList>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetRandomListcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x462ECB0))(this, x);
	}

};

}
