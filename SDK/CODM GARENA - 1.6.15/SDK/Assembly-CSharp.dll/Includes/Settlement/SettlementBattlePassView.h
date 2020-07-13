#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBattlePassView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBattlePassView"));
	}

	template <typename T = uintptr_t> T& playagainStateView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& AgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BottomRightTable() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnDetail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BtnPlayagain() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GoCommonTier() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& GoVipTier() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelTier() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelExp() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelUnclaim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TaskListScrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ProgressCurrExp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ProgressGainExp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelNumItemsUnlock() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ItemTemp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ItemParent() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBPItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateView(uintptr_t data, int32_t unclaimExp) {
		return ((T (*)(SettlementBattlePassView*, uintptr_t, int32_t))(Il2CppBase() + 0x3B5A99C))(this, data, unclaimExp);
	}
	template <typename T = void> T SetBPItem(Il2CppList<uintptr_t>* tasks) {
		return ((T (*)(SettlementBattlePassView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B5B33C))(this, tasks);
	}
	template <typename T = void> T DelayUpdateView() {
		return ((T (*)(SettlementBattlePassView*))(Il2CppBase() + 0x3B5B75C))(this);
	}
	template <typename T = void> T RefreshBottomRightTable() {
		return ((T (*)(SettlementBattlePassView*))(Il2CppBase() + 0x3B5BA1C))(this);
	}
	template <typename T = void> T RefreshBottomRightTablem__0() {
		return ((T (*)(SettlementBattlePassView*))(Il2CppBase() + 0x3B5BC00))(this);
	}

};

}
