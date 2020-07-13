#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopUtility"));
	}

	template <typename T = Il2CppVector3> static T& ShopWindowChestBorderTop_WithTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& ShopWindowChestBorderTop_NoTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& ShopWindowBorderTop_WithTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector3> static T& ShopWindowBorderTop_NoTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& TreasureChestPanelBottomAnchorOffsetInShopNoDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& TreasureChestPanelBottomAnchorOffsetInShopDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& TreasureChestPanelBottomAnchorOffsetInBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& TreasureChestPanelBottomAnchorOffsetInBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppVector3> static T& OwnTreatrueBoxNumLabelPosInBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppVector3> static T& OwnTreatrueBoxNumLabelPosInBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = int32_t> static T& LastRemainTurnRedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = int32_t> static T& SHOP_PAYMENT_WAY_ONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = int32_t> static T& SHOP_PAYMENT_WAY_TWO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = int32_t> static T& SHOP_PAYMENT_WAY_THREE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = int32_t> static T& SHOP_PAYMENT_WAY_FOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = int32_t> static T& SHOP_PAYMENT_WAY_FIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = int32_t> static T& maxBuyCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = int32_t> static T& MaxOpenBoxNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& m_ShopDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> static T& m_CacheSubTabListDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& EDistinguishModuleComesFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = int32_t> static T& m_CurrentClickedShopPaymentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = int32_t> static T& CurrentBuyShopID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& m_CurrentShopMainTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = bool> static T& isReturnTwice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& UnionProcessedToAllWeaponTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& UnionProcessedToSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = int32_t> static T& WeaponItemIdToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GrenadeItemIdToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TreasureBoxAndGiftBoxIdToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RoleSkinToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& JetpackToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ParachuteToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProfessionChipSkinToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VehicleToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IndividuationChipSkinToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IndividuationLacquerToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GrenadeToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NumberItemToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HeadAvatarPicToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HeadFramePicToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MPBigSkillToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RepeatedlykillRewardToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PerkToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProfessionalChipToSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CallingCardSubTabUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& m_EventParamsDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = Il2CppString*> static T& m_currentEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = int32_t> static T& AreaId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = int32_t> static T& exchangeCoinPayType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = int32_t> static T& buyOneIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = int32_t> static T& buyMultiIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ArraySwitchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopSubTagConfigDataByTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToTreasureChestDetailsNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DynamicallyModifyProductFirstLevelTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopItemByGoodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InitSubTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPrimaryTabSpecifySecondaryToTabToOtherTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTreasureBoxConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentBuyMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterCurrentFirstTabIllegalExclusionSecondaryTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeIsHaveSubTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetPrimaryTabSpecifySecondaryToTabToOtherTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeIsSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeIsAllWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopItemSubTabId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGiftBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeBelongCurrentTabProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetShopItemSubTabId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCodmShopAdjacentRrelationship() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleShopDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HandleShopDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareShopitemByLimitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareShopitemBySequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetCodmShopAdjacentRrelationship() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSecondaryTabShopReferenceRelateion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CkeckCommidtyValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconEventWithMallModuleOperationRelated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUIObjectAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUIEventListenerForUIWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUIEventListenerForUIWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableBuy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindDataById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PaymentWayCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDiamondAndGoldSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeIsPermanentCommodity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableMultiNumPurchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrencyWithMultiTimeLimits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsCurrencyWithMultiTimeLimits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecifiedCurrencyPaymentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateActualPaymentPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateActualPaymentPriceWithIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateActualPaymentCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuyAgainPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuyAgainCurrencyIconSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrencyIconSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BtnClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_BtnClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitOfferClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLuckyBoxHasTenDraws() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLuckyBoxHasExchangeCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPaymentTypeExchangeCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinPaymentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExchangeCoinEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangeCoinStringFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangeCoinNumFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinPriceByItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoxShopIDByExchangeItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExchangeCoinCanBuyWhenCountLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinSmallSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeCoinSquareSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrencyIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedRefreshTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRemainTimeFormatChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInLuckyBoxOpenProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}

	template <typename T = uintptr_t> static T get_GetShopDataStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x23B75F0))(0);
	}
	template <typename T = int32_t> static T get_GetCurrentClickedShopPaymentIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x2379590))(0);
	}
	template <typename T = void> static T set_UpdateCurrentClickedShopPaymentIndex(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23A1DD0))(0, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ArraySwitchList(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21D2DA8))(0, array);
	}
	template <typename T = uintptr_t> static T get_CurrentShopMainTab() {
		return ((T (*)(void *))(Il2CppBase() + 0x23B7784))(0);
	}
	template <typename T = void> static T set_CurrentShopMainTab(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23B7834))(0, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_GetShopSubTagsConfConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x23B78E8))(0);
	}
	template <typename T = uintptr_t> static T GetShopSubTagConfigDataByTab(uintptr_t tab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23B79F8))(0, tab);
	}
	template <typename T = void> static T InitSubTabList(Il2CppList<uintptr_t>* ShopList, uintptr_t CodmShopRightSubTabController, uintptr_t CurrentshopTabType, uintptr_t ShopWindowController) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23B7BCC))(0, ShopList, CodmShopRightSubTabController, CurrentshopTabType, ShopWindowController);
	}
	template <typename T = void> static T GoToTreasureChestDetailsNavigation(uintptr_t comeFrom, uint32_t TreasureBoxGoodId, int32_t bagOwnTreasureBoxMaxCount, int32_t intParam, bool boolParam, bool force, uintptr_t inputShopItem, Il2CppString* mainLocID, Il2CppString* subLocID, Il2CppString* giftBoxMainLocID, Il2CppString* giftBoxSubLocID) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2373198))(0, comeFrom, TreasureBoxGoodId, bagOwnTreasureBoxMaxCount, intParam, boolParam, force, inputShopItem, mainLocID, subLocID, giftBoxMainLocID, giftBoxSubLocID);
	}
	template <typename T = void> static T DynamicallyModifyProductFirstLevelTab(uintptr_t currentShopFirstLevelTab, Il2CppList<uintptr_t>* itemList) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23B9D8C))(0, currentShopFirstLevelTab, itemList);
	}
	template <typename T = uintptr_t> static T GetShopItemByGoodID(int32_t goodId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23B9FD0))(0, goodId);
	}
	template <typename T = void> static T InitSubTabList_1(Il2CppList<uintptr_t>* ShopList, uintptr_t CodmShopRightSubTabController, uintptr_t CurrentshopTabType, uintptr_t ShopWindowController) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BA1E8))(0, ShopList, CodmShopRightSubTabController, CurrentshopTabType, ShopWindowController);
	}
	template <typename T = uintptr_t> static T SetPrimaryTabSpecifySecondaryToTabToOtherTab(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BACB8))(0, data);
	}
	template <typename T = uintptr_t> static T GetTreasureBoxConfig(uint32_t treasureBoxId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x23B9B6C))(0, treasureBoxId);
	}
	template <typename T = int32_t> static T GetCurrentBuyMaxCount(int32_t unitPrice, uintptr_t currencyType) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x23BB804))(0, unitPrice, currencyType);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FilterCurrentFirstTabIllegalExclusionSecondaryTabs(Il2CppList<uintptr_t>* ShopList, uintptr_t CurrentshopTabType) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x23B8688))(0, ShopList, CurrentshopTabType);
	}
	template <typename T = bool> static T IsExist(Il2CppList<uintptr_t>* dataList, uintptr_t item) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x23BB974))(0, dataList, item);
	}
	template <typename T = bool> static T JudgeIsHaveSubTab(int32_t mainTab) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23BBAE4))(0, mainTab);
	}
	template <typename T = void> static T SetPrimaryTabSpecifySecondaryToTabToOtherTab_1(Il2CppList<uintptr_t>* subTabList, uintptr_t CurrentshopTabType, Il2CppList<uintptr_t>* ShopList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23B895C))(0, subTabList, CurrentshopTabType, ShopList);
	}
	template <typename T = bool> static T JudgeIsSkill(uintptr_t tab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BB5F8))(0, tab);
	}
	template <typename T = bool> static T JudgeIsAllWeapon(uintptr_t tab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BB3EC))(0, tab);
	}
	template <typename T = uintptr_t> static T GetShopItemSubTabId(uint64_t goodId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x23BB194))(0, goodId);
	}
	template <typename T = bool> static T IsGiftBox(int64_t luckyboxId) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x23A6694))(0, luckyboxId);
	}
	template <typename T = bool> static T JudgeBelongCurrentTabProduct(int32_t tabId, uintptr_t item) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x236AF7C))(0, tabId, item);
	}
	template <typename T = uintptr_t> static T GetShopItemSubTabId_1(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2361910))(0, item);
	}
	template <typename T = void> static T SetCodmShopAdjacentRrelationship(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23BBCF4))(0, dataList);
	}
	template <typename T = void> static T HandleShopDataList(uintptr_t shopType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23B2F54))(0, shopType);
	}
	template <typename T = void> static T HandleShopDataList_1(int32_t subTagId, Il2CppList<uintptr_t>* shopList, uintptr_t recommendShopList, uintptr_t notRecommendShopList) {
		return ((T (*)(void *, int32_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BBFBC))(0, subTagId, shopList, recommendShopList, notRecommendShopList);
	}
	template <typename T = int32_t> static T CompareShopitemByLimitState(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BCDC4))(0, x, y);
	}
	template <typename T = int32_t> static T CompareShopitemBySequence(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BCF2C))(0, x, y);
	}
	template <typename T = void> static T SetCodmShopAdjacentRrelationship_1(Il2CppList<uintptr_t>* NotRecommendShopList, Il2CppList<uintptr_t>* RecommendShopList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23BC934))(0, NotRecommendShopList, RecommendShopList);
	}
	template <typename T = void> static T ClearSecondaryTabShopReferenceRelateion(Il2CppList<uintptr_t>* NotRecommendShopList, Il2CppList<uintptr_t>* RecommendShopList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23BD068))(0, NotRecommendShopList, RecommendShopList);
	}
	template <typename T = bool> static T CkeckCommidtyValid(uintptr_t item, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2387C84))(0, item, index);
	}
	template <typename T = void> static T ReportBeaconEventWithMallModuleOperationRelated(uintptr_t reportDataParam, uintptr_t triggerEventOccasion) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E80C54))(0, reportDataParam, triggerEventOccasion);
	}
	template <typename T = void> static T PlayUIObjectAnimation(float internalTime, uintptr_t item, float delayTimeDelta, bool bStart, uintptr_t comeFrom, int32_t PreItemCount) {
		return ((T (*)(void *, float, uintptr_t, float, bool, uintptr_t, int32_t))(Il2CppBase() + 0x23BD400))(0, internalTime, item, delayTimeDelta, bStart, comeFrom, PreItemCount);
	}
	template <typename T = void> static T AddUIEventListenerForUIWidget(Il2CppList<uintptr_t>* uiObject, uintptr_t callback, uintptr_t eventType) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E807C4))(0, uiObject, callback, eventType);
	}
	template <typename T = void> static T RemoveUIEventListenerForUIWidget(Il2CppList<uintptr_t>* uiObject, uintptr_t callback, uintptr_t eventType) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E80A0C))(0, uiObject, callback, eventType);
	}
	template <typename T = bool> static T CheckEnableBuy(uintptr_t codmShopItem, bool isConsiderExchangeCoin) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x236EA54))(0, codmShopItem, isConsiderExchangeCoin);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindDataById(Il2CppList<uintptr_t>* sourceList, uint32_t destinationId) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uint32_t))(Il2CppBase() + 0x23758A8))(0, sourceList, destinationId);
	}
	template <typename T = int32_t> static T PaymentWayCount(uintptr_t ShopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BD7D0))(0, ShopConfig);
	}
	template <typename T = bool> static T IsDiamondAndGoldSupport(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x239CE28))(0, shopConfig);
	}
	template <typename T = bool> static T JudgeIsPermanentCommodity(uintptr_t ShopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BDA48))(0, ShopConfig);
	}
	template <typename T = bool> static T IsEnableMultiNumPurchase(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x239CD34))(0, shopConfig);
	}
	template <typename T = bool> static T IsCurrencyWithMultiTimeLimits(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x239D000))(0, shopConfig);
	}
	template <typename T = bool> static T IsCurrencyWithMultiTimeLimits_1(uintptr_t shopConfig, uintptr_t payType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BDBD4))(0, shopConfig, payType);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetSpecifiedCurrencyPaymentList(uintptr_t shopConfig, uintptr_t payType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23BDF34))(0, shopConfig, payType);
	}
	template <typename T = int32_t> static T CalculateActualPaymentPrice(int32_t goodId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23BE148))(0, goodId);
	}
	template <typename T = int32_t> static T CalculateActualPaymentPriceWithIndex(int32_t shopId, int32_t index) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2399AF8))(0, shopId, index);
	}
	template <typename T = uintptr_t> static T CalculateActualPaymentCurrency(int32_t shopId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23BE3CC))(0, shopId);
	}
	template <typename T = int32_t> static T BuyAgainPrice() {
		return ((T (*)(void *))(Il2CppBase() + 0x23BE664))(0);
	}
	template <typename T = Il2CppString*> static T BuyAgainCurrencyIconSpriteName() {
		return ((T (*)(void *))(Il2CppBase() + 0x23BE76C))(0);
	}
	template <typename T = Il2CppString*> static T CurrencyIconSpriteName(int32_t shopId, int32_t index) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x23BE874))(0, shopId, index);
	}
	template <typename T = void> static T BtnClickTlogNtf(int32_t btnID, Il2CppString* productID) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x235E28C))(0, btnID, productID);
	}
	template <typename T = void> static T BtnClickTlogNtf_1(int32_t btnID, uint32_t goodID) {
		return ((T (*)(void *, int32_t, uint32_t))(Il2CppBase() + 0x23BED88))(0, btnID, goodID);
	}
	template <typename T = void> static T BtnClickTlogNtf_2(int32_t btnID, uintptr_t shopConfig) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x236EF88))(0, btnID, shopConfig);
	}
	template <typename T = void> static T LimitOfferClickTlogNtf(uint32_t goodID, int32_t showArea, int32_t index, Il2CppString* LimitOfferSkipType, int32_t skipParam) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x23B2B94))(0, goodID, showArea, index, LimitOfferSkipType, skipParam);
	}
	template <typename T = bool> static T IsLuckyBoxHasTenDraws(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2381A04))(0, shopConfig);
	}
	template <typename T = bool> static T IsLuckyBoxHasExchangeCoin(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BEF9C))(0, shopConfig);
	}
	template <typename T = bool> static T IsPaymentTypeExchangeCoin(uintptr_t paymentInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BF2C0))(0, paymentInfo);
	}
	template <typename T = int32_t> static T GetExchangeCoinId(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BF46C))(0, shopConfig);
	}
	template <typename T = int32_t> static T GetExchangeCoinPaymentIndex(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23813D0))(0, shopConfig);
	}
	template <typename T = bool> static T IsExchangeCoinEnough(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2381628))(0, shopConfig);
	}
	template <typename T = Il2CppString*> static T ExchangeCoinStringFormat(int32_t curNum, int32_t needNum) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x23BF7A4))(0, curNum, needNum);
	}
	template <typename T = Il2CppString*> static T ExchangeCoinNumFormat(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x239BD9C))(0, info);
	}
	template <typename T = int32_t> static T GetExchangeCoinPrice(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BF924))(0, shopConfig);
	}
	template <typename T = int32_t> static T GetExchangeCoinPriceByItemID(uint32_t itemID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x23BFC58))(0, itemID);
	}
	template <typename T = int32_t> static T GetBoxShopIDByExchangeItemID(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x23BFE54))(0, itemId);
	}
	template <typename T = bool> static T IsExchangeCoinCanBuyWhenCountLimit(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2381E18))(0, shopConfig);
	}
	template <typename T = Il2CppString*> static T GetExchangeCoinSpriteName(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C009C))(0, shopConfig);
	}
	template <typename T = Il2CppString*> static T GetExchangeCoinSmallSpriteName(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x239B7F0))(0, shopConfig);
	}
	template <typename T = Il2CppString*> static T GetExchangeCoinSquareSpriteName(uintptr_t shopConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23BEB7C))(0, shopConfig);
	}
	template <typename T = Il2CppString*> static T GetCurrencyIconName(uintptr_t shopConfig, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x239BFF8))(0, shopConfig, index);
	}
	template <typename T = bool> static T NeedRefreshTimeLabel(int32_t endTime, uintptr_t oldRemainTime, uintptr_t timeText) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x237F33C))(0, endTime, oldRemainTime, timeText);
	}
	template <typename T = bool> static T CheckRemainTimeFormatChange(int32_t newTime, int32_t oldTime) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x23C02A8))(0, newTime, oldTime);
	}
	template <typename T = bool> static T IsInLuckyBoxOpenProcess() {
		return ((T (*)(void *))(Il2CppBase() + 0x23C03D8))(0);
	}
	template <typename T = int32_t> static T InitSubTabListm__0(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C0B44))(0, param1, param2);
	}
	template <typename T = int32_t> static T InitSubTabListm__1(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C0B88))(0, param1, param2);
	}
	template <typename T = bool> static T SetPrimaryTabSpecifySecondaryToTabToOtherTabm__2(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0BCC))(0, item);
	}
	template <typename T = bool> static T SetPrimaryTabSpecifySecondaryToTabToOtherTabm__3(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0C04))(0, item);
	}
	template <typename T = bool> static T SetPrimaryTabSpecifySecondaryToTabToOtherTabm__4(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0C48))(0, item);
	}
	template <typename T = bool> static T SetPrimaryTabSpecifySecondaryToTabToOtherTabm__5(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0C80))(0, item);
	}
	template <typename T = bool> static T SetPrimaryTabSpecifySecondaryToTabToOtherTabm__6(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0CC4))(0, item);
	}
	template <typename T = bool> static T HandleShopDataListm__7(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0CF0))(0, it);
	}
	template <typename T = bool> static T HandleShopDataListm__8(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C0D70))(0, it);
	}

};

}
