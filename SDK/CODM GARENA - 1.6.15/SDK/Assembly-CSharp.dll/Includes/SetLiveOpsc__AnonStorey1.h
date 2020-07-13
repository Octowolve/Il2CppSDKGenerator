#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLiveOpscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetLiveOps>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetLiveOpscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x34FBA50))(this, it);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(SetLiveOpscAnonStorey1*))(Il2CppBase() + 0x34FBAA0))(this);
	}

};

}
