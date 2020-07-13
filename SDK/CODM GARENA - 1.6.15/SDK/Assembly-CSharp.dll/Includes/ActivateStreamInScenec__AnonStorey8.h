#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateStreamInScenecAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ActivateStreamInScene>c__AnonStorey8"));
	}

	template <typename T = Il2CppString*> T& scenePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& streamInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(ActivateStreamInScenecAnonStorey8*, uintptr_t))(Il2CppBase() + 0x4AA38B8))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t e) {
		return ((T (*)(ActivateStreamInScenecAnonStorey8*, uintptr_t))(Il2CppBase() + 0x4AA3990))(this, e);
	}

};

}
