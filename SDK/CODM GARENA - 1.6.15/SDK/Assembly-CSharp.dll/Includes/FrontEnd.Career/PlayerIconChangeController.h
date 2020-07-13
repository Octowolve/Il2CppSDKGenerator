#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class PlayerIconChangeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "PlayerIconChangeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_IconListCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IconList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingIcon() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheIconID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bUnEquip() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetShowIconResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrameBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290C6B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290C788))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290CB4C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290CD1C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290CF9C))(this);
	}
	template <typename T = void> T InitPendingIcon(uintptr_t type) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t))(Il2CppBase() + 0x290D2A0))(this, type);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x290D958))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t, int32_t))(Il2CppBase() + 0x290E488))(this, list, userContext);
	}
	template <typename T = void> T OnShowBtnClick() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290E56C))(this);
	}
	template <typename T = void> T OnUnEquipBtnClick() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290E6D0))(this);
	}
	template <typename T = void> T OnGetShowIconResponse(uintptr_t Msg) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t))(Il2CppBase() + 0x290E864))(this, Msg);
	}
	template <typename T = void> T OnTypeChange(uintptr_t Msg) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t))(Il2CppBase() + 0x290EE68))(this, Msg);
	}
	template <typename T = void> T OnIconBtnClick(uintptr_t obj) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t))(Il2CppBase() + 0x290F3A4))(this, obj);
	}
	template <typename T = void> T OnFrameBtnClick(uintptr_t obj) {
		return ((T (*)(PlayerIconChangeController*, uintptr_t))(Il2CppBase() + 0x290F5BC))(this, obj);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F6BC))(this);
	}
	template <typename T = int32_t> static T InitPendingIconm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x290F7B8))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PlayerIconChangeController*))(Il2CppBase() + 0x290F858))(this);
	}

};

}
