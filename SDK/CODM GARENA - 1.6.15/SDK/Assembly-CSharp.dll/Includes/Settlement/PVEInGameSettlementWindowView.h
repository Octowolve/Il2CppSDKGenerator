#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVEInGameSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVEInGameSettlementWindowView"));
	}

	template <typename T = uintptr_t> T& GoResult() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GoResultWin() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GoResultFail() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GoDetail() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GoRewardRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GridRewardRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& GoRewardItemTemplate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GridCoinRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelCoinPVE() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelCoinGold() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelResult() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LabelTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelDamage() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GridBtnRoot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BtnNextChapter() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelChapter() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& DelayShowDetail() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResutlView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T UpdateView(uintptr_t result, uintptr_t mode, int32_t NumGold, int32_t NumPVECoin, Il2CppList<uintptr_t>* items, Il2CppString* score, int32_t time, uint64_t damage, int32_t exp, int32_t chapter) {
		return ((T (*)(PVEInGameSettlementWindowView*, uintptr_t, uintptr_t, int32_t, int32_t, Il2CppList<uintptr_t>*, Il2CppString*, int32_t, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x3B2B5F0))(this, result, mode, NumGold, NumPVECoin, items, score, time, damage, exp, chapter);
	}
	template <typename T = void> T InitResutlView(uintptr_t result, int32_t NumGold, int32_t NumPVECoin, Il2CppList<uintptr_t>* items) {
		return ((T (*)(PVEInGameSettlementWindowView*, uintptr_t, int32_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B2BF18))(this, result, NumGold, NumPVECoin, items);
	}
	template <typename T = void> T InitDetailView(uintptr_t mode, int32_t chapter, Il2CppString* score, int32_t time, uint64_t damage, int32_t exp) {
		return ((T (*)(PVEInGameSettlementWindowView*, uintptr_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t))(Il2CppBase() + 0x3B2C3C4))(this, mode, chapter, score, time, damage, exp);
	}
	template <typename T = void> T SwitchToDetail() {
		return ((T (*)(PVEInGameSettlementWindowView*))(Il2CppBase() + 0x3B2CB80))(this);
	}
	template <typename T = void> T EnableClose() {
		return ((T (*)(PVEInGameSettlementWindowView*))(Il2CppBase() + 0x3B2CC80))(this);
	}

};

}
