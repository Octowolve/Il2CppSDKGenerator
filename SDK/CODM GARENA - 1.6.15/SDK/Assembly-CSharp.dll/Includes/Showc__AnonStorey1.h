#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Show>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& netWorkBossAIPawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0() {
		return ((T (*)(ShowcAnonStorey1*))(Il2CppBase() + 0x2A599B0))(this);
	}

};

}