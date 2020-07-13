#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalSharecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalShare>c__AnonStorey1"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t texture) {
		return ((T (*)(InternalSharecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4498224))(this, texture);
	}

};

}
