#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemovecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Remove>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t p) {
		return ((T (*)(RemovecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x480A920))(this, p);
	}
	template <typename T = bool> T m__1(uintptr_t p) {
		return ((T (*)(RemovecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x480A954))(this, p);
	}

};

}
