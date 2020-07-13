#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutCompoundController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutCompoundController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> static T& mCacheId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCacheItemConf() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mChipConf() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mChipCtr() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompoundBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChipSold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNumberTools() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUseChipLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A20E98))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A20F6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A210EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A21344))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LoadoutCompoundController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1A214BC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A215C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A221A4))(this);
	}
	template <typename T = void> T OnCompoundBtnClick() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22298))(this);
	}
	template <typename T = void> T OnSaleBtnClick() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22494))(this);
	}
	template <typename T = void> T CloseImpl() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22610))(this);
	}
	template <typename T = void> T OnChipSold(uintptr_t msg) {
		return ((T (*)(LoadoutCompoundController*, uintptr_t))(Il2CppBase() + 0x1A226EC))(this, msg);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A228B8))(this);
	}
	template <typename T = void> T SetBaseData() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A217A8))(this);
	}
	template <typename T = void> T SetNumberTools() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A21C90))(this);
	}
	template <typename T = void> T SetUseChipLabel(int32_t count) {
		return ((T (*)(LoadoutCompoundController*, int32_t))(Il2CppBase() + 0x1A22A34))(this, count);
	}
	template <typename T = void> T SetWeaponAssetState() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22068))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22CC0))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A22EC4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23118))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(LoadoutCompoundController*))(Il2CppBase() + 0x1A23138))(this);
	}

};

}
