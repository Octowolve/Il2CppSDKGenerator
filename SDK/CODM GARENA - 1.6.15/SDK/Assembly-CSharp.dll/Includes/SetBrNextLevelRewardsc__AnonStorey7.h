#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBrNextLevelRewardscAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBrNextLevelRewards>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$6() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetBrNextLevelRewardscAnonStorey7*))(Il2CppBase() + 0x37FBE64))(this);
	}

};

}
