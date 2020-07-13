#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopRechargeConfirmPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopRechargeConfirmPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& DoRechargeAction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& refundUrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWinType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPicLoadSuccessedForRechargeConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOTOData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelPlayerDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7424))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7530))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A75D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7840))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7A74))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7B14))(this);
	}
	template <typename T = void> T _OnBtnDetailClick() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7BC8))(this);
	}
	template <typename T = void> T _OnBtnConfirmClick() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7CAC))(this);
	}
	template <typename T = void> T SetWinType(uintptr_t winType) {
		return ((T (*)(ShopRechargeConfirmPopController*, uintptr_t))(Il2CppBase() + 0x23A7DE4))(this, winType);
	}
	template <typename T = void> T SetViewData(Il2CppString* spriteItemIconName, Il2CppString* getDiamondNum, Il2CppString* realPrice) {
		return ((T (*)(ShopRechargeConfirmPopController*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x235E4A8))(this, spriteItemIconName, getDiamondNum, realPrice);
	}
	template <typename T = void> T OnPicLoadSuccessedForRechargeConfirm(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(ShopRechargeConfirmPopController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x23A813C))(this, url, isSuccess, texture);
	}
	template <typename T = void> T SetOTOData(Il2CppString* CostMoney, Il2CppString* picUrl) {
		return ((T (*)(ShopRechargeConfirmPopController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x23A8268))(this, CostMoney, picUrl);
	}
	template <typename T = Il2CppString*> T SetLabelPlayerDiamond() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A7F94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A8514))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A851C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A8524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A852C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(ShopRechargeConfirmPopController*))(Il2CppBase() + 0x23A8534))(this);
	}

};

}
