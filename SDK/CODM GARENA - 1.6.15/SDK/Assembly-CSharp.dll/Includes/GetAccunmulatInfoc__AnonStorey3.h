#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAccunmulatInfocAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAccunmulatInfo>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetAccunmulatInfocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x19AA270))(this, x);
	}

};

}