#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDycAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetDy>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetDycAnonStorey3*, uintptr_t))(Il2CppBase() + 0x352674C))(this, it);
	}

};

}
