#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetAnimProgressPosAndSizecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetAnimProgressPosAndSize>c__AnonStorey1"));
	}

	template <typename T = float> T& dur_2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetAnimProgressPosAndSizecAnonStorey1*))(Il2CppBase() + 0x2C1EB20))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(SetAnimProgressPosAndSizecAnonStorey1*))(Il2CppBase() + 0x2C1EC1C))(this);
	}

};

}
