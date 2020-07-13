#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ExchangeShopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ExchangeShopController"));
	}

	template <typename T = int32_t> static T& exchangeShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& shopDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& curShopConf() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& curShopItems() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& GridWidth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ItemWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& cachBuyItemID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isPlayPopCloseAni() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGoodStyleNeedCheckLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyExchangeShopResInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyExchangeSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendExchangeShopReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClosePopWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBuyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4705280))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4705354))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4705718))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47059AC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4705B98))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4706538))(this);
	}
	template <typename T = void> T RefreshPrice() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4706020))(this);
	}
	template <typename T = void> T OnRefreshShopItem(uintptr_t item, int32_t idx) {
		return ((T (*)(ExchangeShopController*, uintptr_t, int32_t))(Il2CppBase() + 0x4706618))(this, item, idx);
	}
	template <typename T = bool> T CheckGoodStyleNeedCheckLimit(int32_t itemId) {
		return ((T (*)(ExchangeShopController*, int32_t))(Il2CppBase() + 0x47070FC))(this, itemId);
	}
	template <typename T = void> T OnBtnBuyClick(int32_t itemId) {
		return ((T (*)(ExchangeShopController*, int32_t))(Il2CppBase() + 0x4707568))(this, itemId);
	}
	template <typename T = void> T OnNotifyExchangeShopResInfo(uintptr_t msg) {
		return ((T (*)(ExchangeShopController*, uintptr_t))(Il2CppBase() + 0x4707F10))(this, msg);
	}
	template <typename T = void> T OnNotifyExchangeSuccess(uintptr_t msg) {
		return ((T (*)(ExchangeShopController*, uintptr_t))(Il2CppBase() + 0x4708138))(this, msg);
	}
	template <typename T = void> T SendExchangeShopReq() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x470821C))(this);
	}
	template <typename T = void> T OnBtnClosePopWindowClick() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x470834C))(this);
	}
	template <typename T = void> T OnConfirmBuyClick() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47086F8))(this);
	}
	template <typename T = void> T PlayOpenAni() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4708A64))(this);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x470638C))(this);
	}
	template <typename T = void> T BeforeClose() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4708420))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4708C08))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4708D4C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ExchangeShopController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4708EB0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4708FAC))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x4709090))(this);
	}
	template <typename T = bool> T OnConfirmBuyClickm__1(uintptr_t x) {
		return ((T (*)(ExchangeShopController*, uintptr_t))(Il2CppBase() + 0x4709288))(this, x);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(ExchangeShopController*))(Il2CppBase() + 0x47092FC))(this);
	}

};

}
