#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConstructorWrapcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConstructorWrap>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& ctor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(GetConstructorWrapcAnonStorey1*, uintptr_t))(Il2CppBase() + 0xF4B2A8))(this, L);
	}

};

}
