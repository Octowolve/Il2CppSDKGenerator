#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutInventoryExchangeItemConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutInventoryExchangeItemConfirmController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& mPrice() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkGrayBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabelAndBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A51A74))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A51B18))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A51C24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A51E6C))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52048))(this);
	}
	template <typename T = void> T OnOkGrayBtnClick() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A523A8))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52650))(this);
	}
	template <typename T = void> T SetData(uintptr_t itemData) {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*, uintptr_t))(Il2CppBase() + 0x1A51318))(this, itemData);
	}
	template <typename T = void> T SetTipsLabelAndBtn() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52704))(this);
	}
	template <typename T = void> T RefreshItem() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52B48))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52E0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmController*))(Il2CppBase() + 0x1A52E24))(this);
	}

};

}
