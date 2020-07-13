#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowCallingCardcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowCallingCard>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(ShowCallingCardcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x291582C))(this, x);
	}

};

}
