#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyQuickMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyQuickMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_NearbyDropListEasyListController() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchNearbyListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNearbyListVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRootColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRootColliderDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNearbyItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRNearbyItemDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRNearbyItemDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbyModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_NearbyDropListEasyListController() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC0B0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC0B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC15C))(this);
	}
	template <typename T = void> T InitList() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC360))(this);
	}
	template <typename T = void> T OnSwitchNearbyListBtnClick() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC504))(this);
	}
	template <typename T = void> T RefreshNearbyListVisible() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC638))(this);
	}
	template <typename T = void> T SetRootColliderEnabled() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC808))(this);
	}
	template <typename T = void> T SetRootColliderDisabled() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABC934))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABCA60))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABCB18))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABCBC8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABCD84))(this);
	}
	template <typename T = void> T UpdateUIFrame(int32_t capacity) {
		return ((T (*)(BRNearbyQuickMainController*, int32_t))(Il2CppBase() + 0x1ABCE68))(this, capacity);
	}
	template <typename T = void> T NotifyNearbyItemClick(uintptr_t msg) {
		return ((T (*)(BRNearbyQuickMainController*, uintptr_t))(Il2CppBase() + 0x1ABD300))(this, msg);
	}
	template <typename T = void> T NotifyBRNearbyItemDragStart(uintptr_t msg) {
		return ((T (*)(BRNearbyQuickMainController*, uintptr_t))(Il2CppBase() + 0x1ABD61C))(this, msg);
	}
	template <typename T = void> T NotifyBRNearbyItemDragEnd(uintptr_t msg) {
		return ((T (*)(BRNearbyQuickMainController*, uintptr_t))(Il2CppBase() + 0x1ABD6C8))(this, msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BRNearbyQuickMainController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1ABD774))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BRNearbyQuickMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x1ABDA08))(this, list, userContext);
	}
	template <typename T = uintptr_t> T GetNearbyModule() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABD55C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDABC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDAC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDACC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDAD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRNearbyQuickMainController*))(Il2CppBase() + 0x1ABDAE4))(this);
	}

};

}
