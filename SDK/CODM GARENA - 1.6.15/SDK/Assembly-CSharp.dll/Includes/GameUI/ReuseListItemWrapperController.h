#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseListItemWrapperController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseListItemWrapperController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ContentController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_EasyAnim() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ReuseList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_EnableClick() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& currentContentController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemAnimInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContentVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_ContentController() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACA4D0))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACA4C8))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACB698))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACB730))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACB85C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACB900))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACBA50))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACBBA0))(this);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACBD00))(this);
	}
	template <typename T = void> T OnItemAnimInitialize() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3AC73BC))(this);
	}
	template <typename T = void> T OnItemInitialize(int32_t wrapIndex, int32_t realIndex, bool selected) {
		return ((T (*)(ReuseListItemWrapperController*, int32_t, int32_t, bool))(Il2CppBase() + 0x3AC6C3C))(this, wrapIndex, realIndex, selected);
	}
	template <typename T = void> T OnItemHide(int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(ReuseListItemWrapperController*, int32_t, int32_t))(Il2CppBase() + 0x3AC6F54))(this, wrapIndex, realIndex);
	}
	template <typename T = void> T InitContent(uintptr_t ReuseList, uintptr_t contentControllerType, int32_t width, int32_t height, bool enableClick) {
		return ((T (*)(ReuseListItemWrapperController*, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3ACA610))(this, ReuseList, contentControllerType, width, height, enableClick);
	}
	template <typename T = void> T SetReuseListItemData(uintptr_t data, int32_t wrapIndex, int32_t realIndex, bool selected) {
		return ((T (*)(ReuseListItemWrapperController*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3ACBE2C))(this, data, wrapIndex, realIndex, selected);
	}
	template <typename T = void> T SetReuseListItemHide(uintptr_t data, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(ReuseListItemWrapperController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3ACC0D4))(this, data, wrapIndex, realIndex);
	}
	template <typename T = void> T SetUIActive(bool IsActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(ReuseListItemWrapperController*, bool, bool, bool))(Il2CppBase() + 0x3ACC5B4))(this, IsActive, recursively, RemoveDelegate);
	}
	template <typename T = bool> T IsContentVisible() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC974))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC97C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC98C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ReuseListItemWrapperController*))(Il2CppBase() + 0x3ACC994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(ReuseListItemWrapperController*, bool, bool, bool))(Il2CppBase() + 0x3ACC99C))(this, P0, P1, P2);
	}

};

}
