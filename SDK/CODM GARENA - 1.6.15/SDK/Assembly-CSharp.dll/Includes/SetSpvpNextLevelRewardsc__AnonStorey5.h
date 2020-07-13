#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSpvpNextLevelRewardscAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetSpvpNextLevelRewards>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$4() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetSpvpNextLevelRewardscAnonStorey5*))(Il2CppBase() + 0x37FC1C4))(this);
	}

};

}
