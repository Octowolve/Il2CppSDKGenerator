#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkipCurrentCutScenecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SkipCurrentCutScene>c__AnonStorey2"));
	}

	template <typename T = bool> T& forceSkip() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(SkipCurrentCutScenecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x19C9780))(this, e);
	}

};

}
