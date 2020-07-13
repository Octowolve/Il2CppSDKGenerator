#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutChipSaleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutChipSaleController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mChip() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mChipConf() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mSaleNum() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mSaleNumMin() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mSaleNumMax() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& mCurrentNum() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& mNeedNum() {
		return *(T*)((uintptr_t)this + 0x6C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIncreaseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDecreaseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaxBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnShouldDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A1F790))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A1F834))(this);
	}
	template <typename T = void> T SetItemData(uintptr_t chipData, uintptr_t chipConf) {
		return ((T (*)(LoadoutChipSaleController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A1F964))(this, chipData, chipConf);
	}
	template <typename T = void> T SetViewParent(uintptr_t parent) {
		return ((T (*)(LoadoutChipSaleController*, uintptr_t))(Il2CppBase() + 0x1A20118))(this, parent);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20244))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A202EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20560))(this);
	}
	template <typename T = void> T OnSaleBtnClick() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A2079C))(this);
	}
	template <typename T = void> T OnIncreaseBtnClick() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A2090C))(this);
	}
	template <typename T = void> T OnDecreaseBtnClick() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20A08))(this);
	}
	template <typename T = void> T OnMaxBtnClick() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20B04))(this);
	}
	template <typename T = void> T CheckBtnShouldDisable() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A1FFB8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20C10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20C18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20C20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutChipSaleController*))(Il2CppBase() + 0x1A20C28))(this);
	}

};

}
