#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshQTInfocAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshQTInfo>c__AnonStorey4"));
	}

	template <typename T = double> T& startTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0() {
		return ((T (*)(RefreshQTInfocAnonStorey4*))(Il2CppBase() + 0x1D68A50))(this);
	}

};

}
