#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FillBuffercAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FillBuffer>c__AnonStorey0"));
	}

	template <typename T = Il2CppVector3> T& camPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T m__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(FillBuffercAnonStorey0*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E20F54))(this, x, y);
	}

};

}
