#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankAwardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankAwardItemView"));
	}

	template <typename T = uintptr_t> T& rankLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& noRankLable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& awardList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& mCurrencyScale() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_showRankRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T showRankRange(int32_t nRankLow, int32_t nRankUp, bool bIsPercent) {
		return ((T (*)(RankAwardItemView*, int32_t, int32_t, bool))(Il2CppBase() + 0x37FFDB4))(this, nRankLow, nRankUp, bIsPercent);
	}
	template <typename T = void> T SetAwardData(Il2CppList<void*>* awardListInfo, bool isMyReward) {
		return ((T (*)(RankAwardItemView*, Il2CppList<void*>*, bool))(Il2CppBase() + 0x38000B0))(this, awardListInfo, isMyReward);
	}
	template <typename T = void> T SetEasyListData(uintptr_t data, bool isMyReward) {
		return ((T (*)(RankAwardItemView*, uintptr_t, bool))(Il2CppBase() + 0x37FFA40))(this, data, isMyReward);
	}

};

}
