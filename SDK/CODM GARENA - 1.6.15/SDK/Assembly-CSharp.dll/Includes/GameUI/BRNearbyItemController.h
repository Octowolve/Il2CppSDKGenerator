#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_List() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& ITEM_ACTION_DRAGDROP_BEGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_ACTION_DRAGDROP_MOVING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_ACTION_DRAGDROP_FINISH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_ACTION_MARK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Wrapper() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReuseListItemContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendReuseListItemAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9D8E4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9D988))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9DA94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9DBB0))(this);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(BRNearbyItemController*, bool))(Il2CppBase() + 0x2D9DC90))(this, selected);
	}
	template <typename T = void> T CheckEnableDrop() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9DE14))(this);
	}
	template <typename T = bool> T SetReuseListData(uintptr_t list, int32_t index, uintptr_t data, int32_t width, int32_t height, bool selected) {
		return ((T (*)(BRNearbyItemController*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2D9DFF0))(this, list, index, data, width, height, selected);
	}
	template <typename T = bool> T SetReuseListItemHide(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(BRNearbyItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2D9E740))(this, list, index, data);
	}
	template <typename T = uintptr_t> T GetReuseListItemContent() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9EB30))(this);
	}
	template <typename T = bool> T SendReuseListItemAction(int32_t action, uintptr_t data) {
		return ((T (*)(BRNearbyItemController*, int32_t, uintptr_t))(Il2CppBase() + 0x2D9ECC8))(this, action, data);
	}
	template <typename T = void> T OnDragDropStart(uintptr_t dropView) {
		return ((T (*)(BRNearbyItemController*, uintptr_t))(Il2CppBase() + 0x2D9EE20))(this, dropView);
	}
	template <typename T = void> T OnDragDropMove(uintptr_t dropView, Il2CppVector3 delta) {
		return ((T (*)(BRNearbyItemController*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2D9EED4))(this, dropView, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t dropView, uintptr_t surface) {
		return ((T (*)(BRNearbyItemController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D9EF94))(this, dropView, surface);
	}
	template <typename T = void> T OnIconClick() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9F2F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9F41C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9F424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9F42C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRNearbyItemController*))(Il2CppBase() + 0x2D9F434))(this);
	}

};

}
