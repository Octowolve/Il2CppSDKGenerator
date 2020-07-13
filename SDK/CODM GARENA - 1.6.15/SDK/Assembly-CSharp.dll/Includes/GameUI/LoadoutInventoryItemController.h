#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutInventoryItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutInventoryItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExchangeCoinData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A53070))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A53114))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A53264))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A5330C))(this);
	}
	template <typename T = void> T SetReddotActive(uintptr_t state) {
		return ((T (*)(LoadoutInventoryItemController*, uintptr_t))(Il2CppBase() + 0x1A51008))(this, state);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(LoadoutInventoryItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A533B4))(this, list, index, data);
	}
	template <typename T = void> T SetExchangeCoinData(uintptr_t item) {
		return ((T (*)(LoadoutInventoryItemController*, uintptr_t))(Il2CppBase() + 0x1A54008))(this, item);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A543AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A543B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A543BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryItemController*))(Il2CppBase() + 0x1A543C4))(this);
	}

};

}
