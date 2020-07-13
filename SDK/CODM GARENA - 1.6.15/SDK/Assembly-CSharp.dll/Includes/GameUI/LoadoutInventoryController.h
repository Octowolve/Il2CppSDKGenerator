#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutInventoryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutInventoryController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mItemAllList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortConsumable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeCoinItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExchangeCoinShowInBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4E6BC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4E760))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4EA5C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4ED7C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4EE40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4FCE0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4FE2C))(this);
	}
	template <typename T = void> T RefreshAvatar() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A4FB38))(this);
	}
	template <typename T = void> T OnNotifyUseItem(uintptr_t obj) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t))(Il2CppBase() + 0x1A4FF70))(this, obj);
	}
	template <typename T = void> T UpdateItemList(bool resetScrollView) {
		return ((T (*)(LoadoutInventoryController*, bool))(Il2CppBase() + 0x1A4EF48))(this, resetScrollView);
	}
	template <typename T = int32_t> T SortConsumable(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A5014C))(this, a, b);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A502FC))(this, list, controller, index);
	}
	template <typename T = void> T OnExchangeCoinItemClick(uintptr_t itemData) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t))(Il2CppBase() + 0x1A511B8))(this, itemData);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A5148C))(this, list, userContext);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LoadoutInventoryController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1A51540))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T IsExchangeCoinShowInBag(int32_t itemid) {
		return ((T (*)(LoadoutInventoryController*, int32_t))(Il2CppBase() + 0x1A50020))(this, itemid);
	}
	template <typename T = uintptr_t> static T UpdateItemListm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51610))(0, s);
	}
	template <typename T = uintptr_t> static T UpdateItemListm__1(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51618))(0, s);
	}
	template <typename T = uintptr_t> static T UpdateItemListm__2(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51620))(0, s);
	}
	template <typename T = uintptr_t> static T UpdateItemListm__3(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51628))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51650))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryController*))(Il2CppBase() + 0x1A51658))(this);
	}

};

}
