#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSpvpNextLevelRewardscAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetSpvpNextLevelRewards>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& nextLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ladderScoreAwardConf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetSpvpNextLevelRewardscAnonStorey4*, uintptr_t))(Il2CppBase() + 0x37FC0B4))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetSpvpNextLevelRewardscAnonStorey4*, uintptr_t))(Il2CppBase() + 0x37FC12C))(this, it);
	}

};

}
