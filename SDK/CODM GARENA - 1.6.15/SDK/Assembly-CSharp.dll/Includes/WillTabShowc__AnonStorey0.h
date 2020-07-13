#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WillTabShowcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WillTabShow>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& vec() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(WillTabShowcAnonStorey0*))(Il2CppBase() + 0x20E986C))(this);
	}

};

}
