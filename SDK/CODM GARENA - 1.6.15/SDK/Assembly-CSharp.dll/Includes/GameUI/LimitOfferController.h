#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LimitOfferController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LimitOfferController"));
	}

	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rechargeItemData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _curSelectIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isRefreshBottomData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRefreshWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRechargeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSkipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSizePoster() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRewardLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x23391E0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x2339284))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x2339518))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233962C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x23396DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x23398DC))(this);
	}
	template <typename T = void> T RefreshBottomData() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x2339A20))(this);
	}
	template <typename T = void> T SetRefreshWhenOpen(int32_t selectIdx) {
		return ((T (*)(LimitOfferController*, int32_t))(Il2CppBase() + 0x2339C80))(this, selectIdx);
	}
	template <typename T = void> T RefreshRechargeItem(uintptr_t item, int32_t idx) {
		return ((T (*)(LimitOfferController*, uintptr_t, int32_t))(Il2CppBase() + 0x2339D30))(this, item, idx);
	}
	template <typename T = void> T OnSelectItem(uintptr_t item, int32_t idx, bool isSelect) {
		return ((T (*)(LimitOfferController*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x2339FB0))(this, item, idx, isSelect);
	}
	template <typename T = void> T OnBtnSkipClick() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233A77C))(this);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(LimitOfferController*, uintptr_t))(Il2CppBase() + 0x233A8F8))(this, message);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(LimitOfferController*, uintptr_t))(Il2CppBase() + 0x233AD84))(this, message);
	}
	template <typename T = void> T ReSizePoster() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233B324))(this);
	}
	template <typename T = void> T RefreshUIData() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233B694))(this);
	}
	template <typename T = void> T RefreshPost() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233A2E4))(this);
	}
	template <typename T = void> T OnRewardLoadSuccessed(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(LimitOfferController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x233B748))(this, url, isSuccess, texture);
	}
	template <typename T = bool> static T OnNotifyLuckyBoardInfom__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x233B974))(0, x);
	}
	template <typename T = bool> static T OnNotifyLuckyDrawInfom__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x233BA6C))(0, x);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LimitOfferController*))(Il2CppBase() + 0x233BB8C))(this);
	}

};

}
