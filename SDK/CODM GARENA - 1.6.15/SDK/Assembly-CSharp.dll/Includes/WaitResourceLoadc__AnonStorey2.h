#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitResourceLoadcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitResourceLoad>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& resObj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t i) {
		return ((T (*)(WaitResourceLoadcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3F25DF0))(this, i);
	}

};

}
