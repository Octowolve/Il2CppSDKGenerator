#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopPaymentConfirmPopupWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopPaymentConfirmPopupWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_GuildData() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C911E4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C912F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C91394))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C9143C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x3C914E4))(this, data);
	}
	template <typename T = void> T UpdateView_1(uintptr_t data) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x3C91B38))(this, data);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C924B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C927A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C927B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C927B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C927C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x3C927C8))(this);
	}

};

}
