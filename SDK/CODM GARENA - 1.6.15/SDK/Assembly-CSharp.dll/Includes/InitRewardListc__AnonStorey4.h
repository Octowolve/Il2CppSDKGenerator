#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitRewardListcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitRewardList>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$3() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(InitRewardListcAnonStorey4*))(Il2CppBase() + 0x4927348))(this);
	}

};

}
