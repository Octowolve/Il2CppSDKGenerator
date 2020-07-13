#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailViewChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailView_Chest"));
	}

	template <typename T = uintptr_t> T& WidgetTitle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelShopName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteShopQuality() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TextureCDN() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TreasureChestSpriteName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& OwnTreatrueBoxNum() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GoToBagBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ToInventoryObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& luckypointContainer() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& luckyValueLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& luckyValueSlider() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& tipHolder() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CompareLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContainerWeaponCompare() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnWeaponCompare() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BuySingle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BuyMulti() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BuySingleWide() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ContainerBtnBuy() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ObjBuySingle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ObjBuyMulti() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ObjBuySingleWide() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ContainerRemainTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SpriteBG() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ContainerItemList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ScrollViewUIPanel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BorderBottom() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BorderTop() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LabelPromise() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& WidgetScrollViewBg() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& FlowGridItemList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ItemDetailView() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& callingCardTemplate() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& headAvater() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& TreasureBoxDetailBtn() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& FragObj() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& BuyContainer() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& BtnOpenLuckyBox() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& OpenTreasureChestContainer() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& MinusSprite() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& PlusSprite() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& MaxBtnUISprite() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& MinusBtn() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& MaxBtn() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& PlusBtn() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& InputFrame() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& OpenBtn() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& m_ItemState() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppList<int32_t>*> T& refreshTimeList() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& m_LastRemainTime() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& m_isSingleBtnShowExchange() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_exchangeIconPaymentIndex() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_ETreasureChestBuyButtonType() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshFlashSaleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshBtnTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShopInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnStateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdpatItemBgSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDetailview() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenUIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxDetailBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPromiseLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptScrollViewBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponCompare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFragObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T get_ShopData() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x23803E4))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x23803EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x238049C))(this);
	}
	template <typename T = void> T CheckRefreshFlashSaleTime() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x238061C))(this);
	}
	template <typename T = void> T CheckRefreshBtnTimeLabel() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380958))(this);
	}
	template <typename T = void> T CheckItemStateChange() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380550))(this);
	}
	template <typename T = void> T RefreshItemState() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380B84))(this);
	}
	template <typename T = bool> T get_IsSingleBtnShowExchange() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x237A890))(this);
	}
	template <typename T = void> T InitShopInfo(uintptr_t data) {
		return ((T (*)(ShopDetailViewChest*, uintptr_t))(Il2CppBase() + 0x23753AC))(this, data);
	}
	template <typename T = void> T SetBtnStateData() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380CB0))(this);
	}
	template <typename T = void> T SetBtnActive() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2381CD8))(this);
	}
	template <typename T = void> T SetButtom() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380E50))(this);
	}
	template <typename T = void> T SetBtnLimitNum() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2380F90))(this);
	}
	template <typename T = void> T AdpatItemBgSize() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2381F8C))(this);
	}
	template <typename T = void> T ShowItemList(bool bShow) {
		return ((T (*)(ShopDetailViewChest*, bool))(Il2CppBase() + 0x2378650))(this, bShow);
	}
	template <typename T = void> T ShowDetailview(bool bShow) {
		return ((T (*)(ShopDetailViewChest*, bool))(Il2CppBase() + 0x237B2F0))(this, bShow);
	}
	template <typename T = void> T ShowTitle(bool bShow) {
		return ((T (*)(ShopDetailViewChest*, bool))(Il2CppBase() + 0x2376220))(this, bShow);
	}
	template <typename T = void> T OnOpenUIInit() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2374C44))(this);
	}
	template <typename T = void> T SetTreasureBoxDetailBtn(uintptr_t res) {
		return ((T (*)(ShopDetailViewChest*, uintptr_t))(Il2CppBase() + 0x23778B8))(this, res);
	}
	template <typename T = void> T SetPromiseLabel(uintptr_t res) {
		return ((T (*)(ShopDetailViewChest*, uintptr_t))(Il2CppBase() + 0x23779D8))(this, res);
	}
	template <typename T = void> T SetLuckyValue(uintptr_t res, uintptr_t comeFrom) {
		return ((T (*)(ShopDetailViewChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2377DAC))(this, res, comeFrom);
	}
	template <typename T = void> T SetUIVisibility(uintptr_t comeFrom) {
		return ((T (*)(ShopDetailViewChest*, uintptr_t))(Il2CppBase() + 0x2374F50))(this, comeFrom);
	}
	template <typename T = void> T AdaptScrollViewBg() {
		return ((T (*)(ShopDetailViewChest*))(Il2CppBase() + 0x2382078))(this);
	}
	template <typename T = void> T SetWeaponCompare(int32_t weaponId, bool bWeapon) {
		return ((T (*)(ShopDetailViewChest*, int32_t, bool))(Il2CppBase() + 0x237B590))(this, weaponId, bWeapon);
	}
	template <typename T = void> T SetDetailInfo(int32_t propId, int32_t durationTime) {
		return ((T (*)(ShopDetailViewChest*, int32_t, int32_t))(Il2CppBase() + 0x237B3E4))(this, propId, durationTime);
	}
	template <typename T = void> T SetFragObj(int32_t propId) {
		return ((T (*)(ShopDetailViewChest*, int32_t))(Il2CppBase() + 0x237B174))(this, propId);
	}
	template <typename T = void> T SetItemIcon(int32_t itemID, bool isShowItemIcon) {
		return ((T (*)(ShopDetailViewChest*, int32_t, bool))(Il2CppBase() + 0x237B748))(this, itemID, isShowItemIcon);
	}

};

}
