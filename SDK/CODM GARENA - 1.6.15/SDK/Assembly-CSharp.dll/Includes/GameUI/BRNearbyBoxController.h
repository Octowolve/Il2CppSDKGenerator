#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyBoxController"));
	}

	template <typename T = int32_t> T& m_CanOpenBoxId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> T& m_cacheActorSet() {
		return *(T*)((uintptr_t)this + 0xBC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCanOpenBoxId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ObFreeViewRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowControllerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FastCheckRecommendWhenNeedOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FastCheckRecommend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNearbyListVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNearbyBoxItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBagMenuState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = bool> T get_IsBoxView() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D97044))(this);
	}
	template <typename T = bool> T get_IsOpenList() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9704C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D97174))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D97218))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D97610))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D98304))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D98E3C))(this);
	}
	template <typename T = void> T OnOpenButtonClick() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D990C0))(this);
	}
	template <typename T = void> T ShowView(bool IsActive) {
		return ((T (*)(BRNearbyBoxController*, bool))(Il2CppBase() + 0x2D99468))(this, IsActive);
	}
	template <typename T = bool> T get_IsNeedOpenBox() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D99780))(this);
	}
	template <typename T = int32_t> T get_CanOpenBoxId() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D997A8))(this);
	}
	template <typename T = void> T SetCanOpenBoxId(int32_t boxActorID) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D997B0))(this, boxActorID);
	}
	template <typename T = void> T ObFreeViewRefresh() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D99A40))(this);
	}
	template <typename T = void> T TryOpenBox() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D99390))(this);
	}
	template <typename T = int32_t> T GetItemWidth(int32_t index) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D9A1AC))(this, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(int32_t index) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D9A308))(this, index);
	}
	template <typename T = void> T RefreshDataList(uintptr_t type) {
		return ((T (*)(BRNearbyBoxController*, uintptr_t))(Il2CppBase() + 0x2D9A5B8))(this, type);
	}
	template <typename T = bool> T FastCheckRecommendWhenNeedOpen(int32_t boxOpenID) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D9A66C))(this, boxOpenID);
	}
	template <typename T = void> T FastCheckRecommend() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D998B8))(this);
	}
	template <typename T = void> T RefreshTitle(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BRNearbyBoxController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D9AA2C))(this, list);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9AD4C))(this);
	}
	template <typename T = void> T UpdateUIFrame(bool normalChanged, bool boxChanged) {
		return ((T (*)(BRNearbyBoxController*, bool, bool))(Il2CppBase() + 0x2D9B1D0))(this, normalChanged, boxChanged);
	}
	template <typename T = void> T RefreshNearbyListVisible() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B3F0))(this);
	}
	template <typename T = void> T HideNearbyBoxItem(uintptr_t msg) {
		return ((T (*)(BRNearbyBoxController*, uintptr_t))(Il2CppBase() + 0x2D9B670))(this, msg);
	}
	template <typename T = void> T ChangeBagMenuState(uintptr_t msg) {
		return ((T (*)(BRNearbyBoxController*, uintptr_t))(Il2CppBase() + 0x2D9B720))(this, msg);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B7C0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B908))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B90C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B910))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9B914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpenButtonClick() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9BAAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowView(bool P0) {
		return ((T (*)(BRNearbyBoxController*, bool))(Il2CppBase() + 0x2D9BD68))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ObFreeViewRefresh() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9C084))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetItemWidth(int32_t P0) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D9C120))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetShowControllerType(int32_t P0) {
		return ((T (*)(BRNearbyBoxController*, int32_t))(Il2CppBase() + 0x2D9C124))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshDataList(uintptr_t P0) {
		return ((T (*)(BRNearbyBoxController*, uintptr_t))(Il2CppBase() + 0x2D9C3D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTitle(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(BRNearbyBoxController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D9C490))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUI() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9C534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUIFrame(bool P0, bool P1) {
		return ((T (*)(BRNearbyBoxController*, bool, bool))(Il2CppBase() + 0x2D9C7B4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshNearbyListVisible() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9C988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeBagMenuState(uintptr_t P0) {
		return ((T (*)(BRNearbyBoxController*, uintptr_t))(Il2CppBase() + 0x2D9CC0C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetNewGuideInterface() {
		return ((T (*)(BRNearbyBoxController*))(Il2CppBase() + 0x2D9D00C))(this);
	}

};

}
