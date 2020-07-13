#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignDayItemNormalView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignDayItemNormalView"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TitleSelected() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GoldNum() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& DiamondNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& GoldDiamondNumTable() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& IsSigned() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RewardItemTemplate() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RewardItemGrid() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& HideWhenSelected() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ReclamTag() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ClaimTag() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TomorrowTag() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_DayIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardItemViewList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardItemContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardGoldDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(uintptr_t reward, int32_t DayIndex, int32_t HasSignTime, int32_t CanRemedyTime, bool bTodayHasSign) {
		return ((T (*)(SignDayItemNormalView*, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x385D0E8))(this, reward, DayIndex, HasSignTime, CanRemedyTime, bTodayHasSign);
	}
	template <typename T = void> T SetRewardItemContent(Il2CppList<uintptr_t>* realItemList) {
		return ((T (*)(SignDayItemNormalView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x385D6E8))(this, realItemList);
	}
	template <typename T = void> T SetRewardGoldDiamond(int32_t goldCount, int32_t diamondCount) {
		return ((T (*)(SignDayItemNormalView*, int32_t, int32_t))(Il2CppBase() + 0x385DCA4))(this, goldCount, diamondCount);
	}

};

}
