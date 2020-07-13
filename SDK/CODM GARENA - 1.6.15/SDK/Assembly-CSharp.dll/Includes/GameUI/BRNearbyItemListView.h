#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemListView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_TxtTitle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_OpenButton() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_ItemListScrollView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_ItemListScrollBg() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TitleButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RootGameObject() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RootCollider() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RootNearby() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& PosFlag() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& OpenBtnHighLight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_ItemListItemHeight() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_ItemListHeightMax() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_ItemListPaddingTotal() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EdgeRect() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_ReallyHeight() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& LastWillShowFrame() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRecommendHighLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyListCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA49D0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA49DC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA49E4))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA49F0))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA49F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA4A9C))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* title) {
		return ((T (*)(BRNearbyItemListView*, Il2CppString*))(Il2CppBase() + 0x2DA4B44))(this, title);
	}
	template <typename T = void> T ShowItemList(bool show) {
		return ((T (*)(BRNearbyItemListView*, bool))(Il2CppBase() + 0x2DA4C38))(this, show);
	}
	template <typename T = void> T ShowRecommendHighLight(bool show) {
		return ((T (*)(BRNearbyItemListView*, bool))(Il2CppBase() + 0x2DA30B4))(this, show);
	}
	template <typename T = bool> T ApplyListCount(int32_t itemsHeight) {
		return ((T (*)(BRNearbyItemListView*, int32_t))(Il2CppBase() + 0x2D99CF4))(this, itemsHeight);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(BRNearbyItemListView*, bool))(Il2CppBase() + 0x2DA4F5C))(this, paused);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA505C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA5150))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRNearbyItemListView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2DA526C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRNearbyItemListView*, uintptr_t))(Il2CppBase() + 0x2DA54E0))(this, itemType);
	}
	template <typename T = bool> T IsOpen() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA5618))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA5748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA574C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(BRNearbyItemListView*, bool))(Il2CppBase() + 0x2DA5754))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA5758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRNearbyItemListView*))(Il2CppBase() + 0x2DA575C))(this);
	}

};

}
