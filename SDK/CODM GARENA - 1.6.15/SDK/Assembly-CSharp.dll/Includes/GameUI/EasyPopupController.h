#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyPopupController"));
	}

	template <typename T = uintptr_t> T& m_ItemControllerType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& CellWidth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& CellHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_MenuItemCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_CallBack() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ShowingItem() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPopupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPopupListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF284))(this);
	}
	template <typename T = void> T InitPopupItem(uintptr_t callback, int32_t width, int32_t height) {
		return ((T (*)(EasyPopupController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1E84BA8))(this, callback, width, height);
	}
	template <typename T = void> T SetPopupListData(Il2CppList<uintptr_t>* data, uintptr_t defalutData) {
		return ((T (*)(EasyPopupController*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E84E00))(this, data, defalutData);
	}
	template <typename T = void> T SetGrid() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF3B8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF4C4))(this);
	}
	template <typename T = void> T OnItemClick(uintptr_t controller, uintptr_t wrapper) {
		return ((T (*)(EasyPopupController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46FF568))(this, controller, wrapper);
	}
	template <typename T = void> T UpdateShowingItem(uintptr_t newWrapper) {
		return ((T (*)(EasyPopupController*, uintptr_t))(Il2CppBase() + 0x46FF950))(this, newWrapper);
	}
	template <typename T = void> T OpenPopup() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF888))(this);
	}
	template <typename T = void> T ClosePopup() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF7C0))(this);
	}
	template <typename T = bool> T IsOpenPopup() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FF6FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FFB70))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EasyPopupController*))(Il2CppBase() + 0x46FFB78))(this);
	}

};

}
