#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonItemTimeoutController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonItemTimeoutController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& squadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& timeoutItems() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& USE_SCROLLVIEW_COUNT() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetNewInventoryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29D9C7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29D9D20))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29D9FD0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DA664))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DA8BC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DAA4C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DA074))(this);
	}
	template <typename T = void> T OnGetNewInventoryResponse(uintptr_t Msg) {
		return ((T (*)(UICommonItemTimeoutController*, uintptr_t))(Il2CppBase() + 0x29DAC48))(this, Msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(UICommonItemTimeoutController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x29DAD34))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(UICommonItemTimeoutController*, uintptr_t, int32_t))(Il2CppBase() + 0x29DADFC))(this, list, userContext);
	}
	template <typename T = void> T OnLoadoutBtnClick() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DAEB0))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB25C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB304))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB30C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB31C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UICommonItemTimeoutController*))(Il2CppBase() + 0x29DB32C))(this);
	}

};

}
