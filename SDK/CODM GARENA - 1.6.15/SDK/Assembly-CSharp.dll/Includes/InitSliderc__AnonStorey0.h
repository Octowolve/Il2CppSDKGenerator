#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitSlidercAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitSlider>c__AnonStorey0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(InitSlidercAnonStorey0*))(Il2CppBase() + 0x28B9E9C))(this);
	}

};

}
