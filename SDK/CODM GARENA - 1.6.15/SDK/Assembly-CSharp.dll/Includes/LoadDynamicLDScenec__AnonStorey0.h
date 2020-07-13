#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadDynamicLDScenecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadDynamicLDScene>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(LoadDynamicLDScenecAnonStorey0*, uintptr_t))(Il2CppBase() + 0xC1920C))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(LoadDynamicLDScenecAnonStorey0*, uintptr_t))(Il2CppBase() + 0xC192FC))(this, s);
	}

};

}
