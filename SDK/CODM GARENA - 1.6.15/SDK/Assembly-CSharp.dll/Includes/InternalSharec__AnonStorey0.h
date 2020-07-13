#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalSharecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalShare>c__AnonStorey0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t texture) {
		return ((T (*)(InternalSharecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x497F9D0))(this, texture);
	}

};

}
