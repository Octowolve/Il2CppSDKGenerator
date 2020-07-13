#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedShowcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedShow>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& stageDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(DelayedShowcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1FA5A9C))(this, it);
	}

};

}
