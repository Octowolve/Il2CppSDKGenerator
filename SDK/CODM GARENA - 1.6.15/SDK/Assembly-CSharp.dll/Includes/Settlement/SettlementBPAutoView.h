#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBPAutoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBPAutoView"));
	}

	template <typename T = uintptr_t> T& BottomRightPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BottomRightAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BottomRightTable() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TopLeftPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TopLeftAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TopLeftTable() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BPNormalTierLevel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BPVIPTierLevel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& tempItem() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& BPActiveIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BuyPassLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BuyLevelBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BPNormalLevelRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BPVIPLevelRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& InfoRoot_V4() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BonusItemRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ProgressBPExp() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& OriginBPExp() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BPProgressLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BPTotalExp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& Tweener() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BPRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& InfoRoot_V5() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BPTotalExp_V5() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BonusItemRoot_V5() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BPRoot_V5() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& BPBuffInfoTip() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& isUserTopLeftPlayAgain() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& BonusItemDic() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BPSettlmentData() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetFinalExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBPSettlmentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUIAnimAndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBPExpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAquiredexp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBuyBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateBonusItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopLeftTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVNG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBuffTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = int32_t> T T_GetFinalExp() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293D174))(this);
	}
	template <typename T = uintptr_t> T get_settlementDS() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293D214))(this);
	}
	template <typename T = uintptr_t> T get_bpDS() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293D2B0))(this);
	}
	template <typename T = void> T SetBPSettlmentData(uintptr_t data) {
		return ((T (*)(SettlementBPAutoView*, uintptr_t))(Il2CppBase() + 0x29374F8))(this, data);
	}
	template <typename T = void> T PlayUIAnimAndEffect() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x2938C88))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x2938F5C))(this);
	}
	template <typename T = void> T ShowProgress(bool isNeedAnim) {
		return ((T (*)(SettlementBPAutoView*, bool))(Il2CppBase() + 0x293D34C))(this, isNeedAnim);
	}
	template <typename T = void> T PlayBPExpAnim(int32_t aquiredExp, int32_t preExp, int32_t level, int32_t totalAquiredExp) {
		return ((T (*)(SettlementBPAutoView*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x293E850))(this, aquiredExp, preExp, level, totalAquiredExp);
	}
	template <typename T = void> T OnAnimFinish() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293AA50))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x29395CC))(this);
	}
	template <typename T = void> T RefreshBonus() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293D9B4))(this);
	}
	template <typename T = void> T SetTier(int32_t level) {
		return ((T (*)(SettlementBPAutoView*, int32_t))(Il2CppBase() + 0x293D5F8))(this, level);
	}
	template <typename T = int32_t> T GetAquiredexp() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293E690))(this);
	}
	template <typename T = void> T RefreshBuyBtn() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293F148))(this);
	}
	template <typename T = void> T GenerateBonusItem(Il2CppString* title, Il2CppString* num, uintptr_t type, bool isLock, bool isGoldBG, Il2CppString* iconName, bool isNeedAnim) {
		return ((T (*)(SettlementBPAutoView*, Il2CppString*, Il2CppString*, uintptr_t, bool, bool, Il2CppString*, bool))(Il2CppBase() + 0x293F4A8))(this, title, num, type, isLock, isGoldBG, iconName, isNeedAnim);
	}
	template <typename T = uintptr_t> T GetBPConfig(int32_t level) {
		return ((T (*)(SettlementBPAutoView*, int32_t))(Il2CppBase() + 0x293F8F8))(this, level);
	}
	template <typename T = void> T RefreshBottomRightTable() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293A528))(this);
	}
	template <typename T = void> T RefreshTopLeftTable() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293A344))(this);
	}
	template <typename T = void> T ShowVNG() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293D824))(this);
	}
	template <typename T = void> T ShowBuffTip() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293E38C))(this);
	}
	template <typename T = void> T OnAnimFinishm__0() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293FB40))(this);
	}
	template <typename T = void> T RefreshTopLeftTablem__1() {
		return ((T (*)(SettlementBPAutoView*))(Il2CppBase() + 0x293FB44))(this);
	}

};

}
