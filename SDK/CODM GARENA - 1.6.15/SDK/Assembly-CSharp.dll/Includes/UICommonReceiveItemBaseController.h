#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveItemBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveItemBaseController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Item() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _shareData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _shareBtnWindow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BackAction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareBtnWindowActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CB8A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CB944))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CBC90))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CBE20))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CBEC8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC0B8))(this);
	}
	template <typename T = void> T SetData(uintptr_t item, uintptr_t shareData) {
		return ((T (*)(UICommonReceiveItemBaseController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CC24C))(this, item, shareData);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC330))(this);
	}
	template <typename T = void> T ResetShareBtn() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC400))(this);
	}
	template <typename T = void> T ResetShareBtnWindowActive(bool active) {
		return ((T (*)(UICommonReceiveItemBaseController*, bool))(Il2CppBase() + 0x39CBD44))(this, active);
	}
	template <typename T = void> T OnCloseBtnClick(uintptr_t obj) {
		return ((T (*)(UICommonReceiveItemBaseController*, uintptr_t))(Il2CppBase() + 0x39CC540))(this, obj);
	}
	template <typename T = void> T OnShareBtnClicked() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC63C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveItemBaseController*))(Il2CppBase() + 0x39CC798))(this);
	}

};

}
