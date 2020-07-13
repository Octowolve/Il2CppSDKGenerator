#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDataStore"));
	}

	template <typename T = bool> T& NeedRefreshShop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsSwitchToShop() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& m_shopItemRenewList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SwitchType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _serverOTOInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _serverLimitInfos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _clientOTOInfos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _clientLimitOfferInfos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CodmShopList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShopTagList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShopRedDotDataList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _luckyDrawGoods() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _luckyDrawGoodsOnSale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _luckyBoardGoods() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _luckyBoardGoodsOnSale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& exchangeShopRes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_maxDelaySecond() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_minDelaySecond() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_normalDelaySecond() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& lpds() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& _dicLuckyDrawinfoStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppArray<uintptr_t>*>*> T& luckyboxPropColorsDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& COLORMAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StoreShopTagData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShopItemRenewList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckShopItemRenewList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShopItemRenewList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRandomDelayRenewTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearShopItemRenewList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdataShopItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShopItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShopItemInfoProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShopItemInfoProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTutorialWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubscribers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShopEntraceVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGoodByShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGoodIdByShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGoodByGoodId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScrollPlayList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLimitOfferItemPictureUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLimitOfferItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCountryAndSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkipResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShopItemCanSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLimitOfferTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyShopDataStoreUpdateLimitGoodInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckLimitOfferTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopMainTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTagIsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllShopList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopListByTagId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopTagTypeByTagId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShopRedDotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActivateHomeMainLobbyShopRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRedDotActivceInTagId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRedDotActivceInShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdataShopRedDotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreeShopItemInTagID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowFreePriceRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRemoveShopRedDotDataByTagId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLuckyDrawItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLuckyBoardItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLuckyDrawItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLuckyBoardItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShopItemPaymentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyDrawInfoStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLukcyDrawBestWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LuckyDrawCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOTOData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLimitOfferData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsServerOTOOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientOTOInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExchangeShopData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckExchangeShopConfByShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckExchangeShopConfByExchangeShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExchangeShopItemExchangeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllExchangeShopItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyboxPropColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuckyBoxPropColorsById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}

	template <typename T = bool> T get_IsSwitchToShop() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235EFCC))(this);
	}
	template <typename T = void> T set_IsSwitchToShop(bool value) {
		return ((T (*)(ShopDataStore*, bool))(Il2CppBase() + 0x235EFD4))(this, value);
	}
	template <typename T = uintptr_t> T get_SwitchType() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235EFDC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ShopRedDotDataList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235EFE4))(this);
	}
	template <typename T = void> T set_ShopRedDotDataList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x235EFEC))(this, value);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235EFF4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GetShopTagList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235F0A4))(this);
	}
	template <typename T = void> T StoreShopTagData(Il2CppList<uintptr_t>* list) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x235F0AC))(this, list);
	}
	template <typename T = void> T CheckShopItemRenewList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x235F260))(this);
	}
	template <typename T = void> T CheckShopItemRenewList_1(uintptr_t ids) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x235F430))(this, ids);
	}
	template <typename T = void> T AddShopItemRenewList(uint32_t shopID, Il2CppList<uintptr_t>* paymentList) {
		return ((T (*)(ShopDataStore*, uint32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x235FC3C))(this, shopID, paymentList);
	}
	template <typename T = void> T AddRandomDelayRenewTime(Il2CppList<uintptr_t>* paymentList) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2360124))(this, paymentList);
	}
	template <typename T = void> T ClearShopItemRenewList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2360328))(this);
	}
	template <typename T = bool> T UpdataShopItems(Il2CppList<uintptr_t>* shopCfgs, Il2CppList<uintptr_t>* Bought_limit_goods) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x236051C))(this, shopCfgs, Bought_limit_goods);
	}
	template <typename T = void> T InitShopItems(Il2CppList<uintptr_t>* shopCfgs, Il2CppList<uintptr_t>* Bought_limit_goods) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2360DE4))(this, shopCfgs, Bought_limit_goods);
	}
	template <typename T = void> T AddShopItem(uintptr_t shopCfg, Il2CppList<uintptr_t>* Bought_limit_goods) {
		return ((T (*)(ShopDataStore*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2360A48))(this, shopCfg, Bought_limit_goods);
	}
	template <typename T = void> T AddShopItemInfoProcess(uintptr_t shopItemData) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2361A58))(this, shopItemData);
	}
	template <typename T = void> T UpdateShopItemInfoProcess(uint32_t shopID, Il2CppList<uintptr_t>* paymentList) {
		return ((T (*)(ShopDataStore*, uint32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2360930))(this, shopID, paymentList);
	}
	template <typename T = uintptr_t> T GetTutorialWeapon() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x23611C0))(this);
	}
	template <typename T = void> T RefreshSubscribers() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2361F14))(this);
	}
	template <typename T = bool> T IsShopEntraceVisible() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2361FEC))(this);
	}
	template <typename T = bool> T CheckDataValid(uintptr_t data) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2361630))(this, data);
	}
	template <typename T = uintptr_t> T GetGoodByShopId(int32_t shopId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2360790))(this, shopId);
	}
	template <typename T = uint32_t> T GetGoodIdByShopId(int32_t shopId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2362108))(this, shopId);
	}
	template <typename T = uintptr_t> T GetGoodByGoodId(int32_t goodId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x236221C))(this, goodId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetScrollPlayList(uintptr_t areaType) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x23623C4))(this, areaType);
	}
	template <typename T = Il2CppString*> T GetLimitOfferItemPictureUrl(int32_t skipParam, int32_t showArea, uintptr_t skip) {
		return ((T (*)(ShopDataStore*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2363350))(this, skipParam, showArea, skip);
	}
	template <typename T = uintptr_t> T GetLimitOfferItemData(int32_t skipParam, int32_t showArea, uintptr_t skip) {
		return ((T (*)(ShopDataStore*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x23634C4))(this, skipParam, showArea, skip);
	}
	template <typename T = bool> T CheckCountryAndSkip(uintptr_t config) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2362F1C))(this, config);
	}
	template <typename T = bool> T CheckSkipResult(uintptr_t config) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2363750))(this, config);
	}
	template <typename T = bool> T IsShopItemCanSkip(uintptr_t shopItem) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x236432C))(this, shopItem);
	}
	template <typename T = bool> T CheckLimitOfferTime(int32_t beginDate, int32_t beginTime, int32_t endDate, int32_t endTime) {
		return ((T (*)(ShopDataStore*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x236589C))(this, beginDate, beginTime, endDate, endTime);
	}
	template <typename T = void> T NotifyShopDataStoreUpdateLimitGoodInfo(uintptr_t LimitationGoodsClient) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2365998))(this, LimitationGoodsClient);
	}
	template <typename T = bool> T CheckLimitOfferTime_1(Il2CppString* beginTime, Il2CppString* endTime) {
		return ((T (*)(ShopDataStore*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2365BC4))(this, beginTime, endTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetShopMainTabList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2364A08))(this);
	}
	template <typename T = bool> T CheckTagIsValid(uintptr_t tag) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2365F9C))(this, tag);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllShopList() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2366568))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetShopListByTagId(int32_t tagId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2366638))(this, tagId);
	}
	template <typename T = int32_t> T GetShopTagTypeByTagId(int32_t tagId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2366318))(this, tagId);
	}
	template <typename T = void> T SetSwitchType(uintptr_t type) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2366818))(this, type);
	}
	template <typename T = bool> T IsOnDiscount(uintptr_t shopConfig, int32_t index) {
		return ((T (*)(ShopDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x23668F8))(this, shopConfig, index);
	}
	template <typename T = void> T SetShopRedDotData(Il2CppList<uintptr_t>* shopRedDotDataList) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2366CBC))(this, shopRedDotDataList);
	}
	template <typename T = bool> T IsActivateHomeMainLobbyShopRedPoint() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2367230))(this);
	}
	template <typename T = bool> T IsRedDotActivceInTagId(uint32_t tagId) {
		return ((T (*)(ShopDataStore*, uint32_t))(Il2CppBase() + 0x236750C))(this, tagId);
	}
	template <typename T = bool> T IsRedDotActivceInShopId(uint32_t shopID) {
		return ((T (*)(ShopDataStore*, uint32_t))(Il2CppBase() + 0x2367964))(this, shopID);
	}
	template <typename T = void> T UpdataShopRedDotData() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2367B4C))(this);
	}
	template <typename T = bool> T IsFreeShopItemInTagID(uint32_t tagId) {
		return ((T (*)(ShopDataStore*, uint32_t))(Il2CppBase() + 0x2367718))(this, tagId);
	}
	template <typename T = bool> T IsShowFreePriceRedDot(uintptr_t shopItem, int32_t paymentIndex) {
		return ((T (*)(ShopDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x2367D5C))(this, shopItem, paymentIndex);
	}
	template <typename T = bool> T TryRemoveShopRedDotDataByTagId(uint32_t tagId) {
		return ((T (*)(ShopDataStore*, uint32_t))(Il2CppBase() + 0x2367F30))(this, tagId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllLuckyDrawItems() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2364734))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllLuckyBoardItems() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x23655C8))(this);
	}
	template <typename T = void> T UpdateLuckyDrawItemInfo(uintptr_t buyRes) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2368224))(this, buyRes);
	}
	template <typename T = void> T UpdateLuckyBoardItemInfo(uintptr_t buyRes) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x23684FC))(this, buyRes);
	}
	template <typename T = void> T UpdateShopItemPaymentList(uint32_t shopID, Il2CppList<uintptr_t>* paymentList) {
		return ((T (*)(ShopDataStore*, uint32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2361BE0))(this, shopID, paymentList);
	}
	template <typename T = void> T SetLuckyDrawInfoStore(uintptr_t res) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2368AAC))(this, res);
	}
	template <typename T = uint32_t> T GetLukcyDrawBestWeapon() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2368BD8))(this);
	}
	template <typename T = int32_t> T LuckyDrawCount() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x2369024))(this);
	}
	template <typename T = void> T SetOTOData(uintptr_t res) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x2369124))(this, res);
	}
	template <typename T = void> T SetLimitOfferData(uintptr_t res) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x23695E0))(this, res);
	}
	template <typename T = bool> T IsServerOTOOpen(int32_t otoOrder) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2364490))(this, otoOrder);
	}
	template <typename T = uintptr_t> T GetClientOTOInfo(int32_t otoOrder) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x23631B0))(this, otoOrder);
	}
	template <typename T = void> T SetExchangeShopData(uintptr_t res) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x23698D8))(this, res);
	}
	template <typename T = uintptr_t> T CheckExchangeShopConfByShopId(int32_t ShopId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x23699B4))(this, ShopId);
	}
	template <typename T = uintptr_t> T CheckExchangeShopConfByExchangeShopId(int32_t exchangeShopId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2369B9C))(this, exchangeShopId);
	}
	template <typename T = int32_t> T GetExchangeShopItemExchangeCount(int32_t itemId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2369D84))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllExchangeShopItems(int32_t exchangeShopId) {
		return ((T (*)(ShopDataStore*, int32_t))(Il2CppBase() + 0x2369F74))(this, exchangeShopId);
	}
	template <typename T = void> T SetLuckyboxPropColors(Il2CppList<uintptr_t>* boxSummaryList) {
		return ((T (*)(ShopDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x236A15C))(this, boxSummaryList);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetLuckyBoxPropColorsById(uint32_t id) {
		return ((T (*)(ShopDataStore*, uint32_t))(Il2CppBase() + 0x2356554))(this, id);
	}
	template <typename T = int32_t> static T GetScrollPlayListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x236A6DC))(0, a, b);
	}
	template <typename T = bool> static T GetShopMainTabListm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x236A70C))(0, it);
	}
	template <typename T = int32_t> static T GetShopMainTabListm__2(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x236A73C))(0, param1, param2);
	}
	template <typename T = bool> static T IsActivateHomeMainLobbyShopRedPointm__3(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x236A7C0))(0, item);
	}
	template <typename T = bool> T UpdataShopRedDotDatam__4(uintptr_t data) {
		return ((T (*)(ShopDataStore*, uintptr_t))(Il2CppBase() + 0x236A7F0))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshSubscribers() {
		return ((T (*)(ShopDataStore*))(Il2CppBase() + 0x236A898))(this);
	}

};

}
