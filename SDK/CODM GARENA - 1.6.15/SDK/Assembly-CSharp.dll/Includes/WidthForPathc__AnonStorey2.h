#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WidthForPathcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WidthForPath>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(WidthForPathcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23AE40C))(this, it);
	}

};

}
