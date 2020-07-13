#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailPlayerItemScoreDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailPlayerItemScoreDetailView"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ScoreDetailTotalScoreName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ScoreDetailTotalScoreNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ScoreDetailItemTemp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ScoreDetailItemTable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& BGDefaultHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BGAddHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& totalDetailScore() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScoreDetailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenaraScoreItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitScoreDetailInfo(Il2CppList<uintptr_t>* scoreDetails, int32_t totalScore) {
		return ((T (*)(SettlementDetailPlayerItemScoreDetailView*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x29599D4))(this, scoreDetails, totalScore);
	}
	template <typename T = void> T GenaraScoreItem(int32_t score, int32_t category) {
		return ((T (*)(SettlementDetailPlayerItemScoreDetailView*, int32_t, int32_t))(Il2CppBase() + 0x295A128))(this, score, category);
	}
	template <typename T = void> T ClearItem() {
		return ((T (*)(SettlementDetailPlayerItemScoreDetailView*))(Il2CppBase() + 0x2959ED8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettlementDetailPlayerItemScoreDetailView*))(Il2CppBase() + 0x295A7CC))(this);
	}

};

}
