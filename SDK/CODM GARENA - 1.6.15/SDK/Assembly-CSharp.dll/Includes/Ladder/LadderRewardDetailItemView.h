#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ladder {

class LadderRewardDetailItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ladder", "LadderRewardDetailItemView"));
	}

	template <typename T = uintptr_t> T& LevelRewardGridRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SeasonRewardGridRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BgCurrRank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BgOtherRank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SpriteRank() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LabelScoreRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LevelRewrdItemTemplate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SeasonRewrdItemTemplate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRewardDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(int32_t rank) {
		return ((T (*)(LadderRewardDetailItemView*, int32_t))(Il2CppBase() + 0x4925858))(this, rank);
	}
	template <typename T = void> T InitRewardList(Il2CppList<uintptr_t>* RewardList, uintptr_t GridRoot, uintptr_t Template, bool bNeedChecked) {
		return ((T (*)(LadderRewardDetailItemView*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x49263B0))(this, RewardList, GridRoot, Template, bNeedChecked);
	}
	template <typename T = void> T OnBtnRewardDetailClick(uint32_t itemID) {
		return ((T (*)(LadderRewardDetailItemView*, uint32_t))(Il2CppBase() + 0x4926C94))(this, itemID);
	}

};

}
