#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SnapIsEnabledcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SnapIsEnabled>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& mi() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$3() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0() {
		return ((T (*)(SnapIsEnabledcAnonStorey2*))(Il2CppBase() + 0x4814CB8))(this);
	}
	template <typename T = bool> T m__1() {
		return ((T (*)(SnapIsEnabledcAnonStorey2*))(Il2CppBase() + 0x4814D6C))(this);
	}

};

}
