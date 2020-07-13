#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostInitcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PostInit>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& stageDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(PostInitcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3309C90))(this, it);
	}

};

}
