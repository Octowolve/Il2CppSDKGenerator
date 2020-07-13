#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResponseMessagecAnonStoreyD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ResponseMessage>c__AnonStoreyD"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ResponseMessagecAnonStoreyD*, uintptr_t))(Il2CppBase() + 0x329B6C0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(ResponseMessagecAnonStoreyD*, uintptr_t))(Il2CppBase() + 0x329B70C))(this, it);
	}

};

}
