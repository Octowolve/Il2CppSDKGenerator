#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsRestoreController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsRestoreController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectAllBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreAllSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreSystemAdjustScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B25E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B268C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B2D94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B2F80))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B3028))(this);
	}
	template <typename T = void> T OnCancellBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B3234))(this);
	}
	template <typename T = void> T OnSelectAllBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B32D8))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B30CC))(this);
	}
	template <typename T = void> T RestoreAllSelected(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsRestoreController*, uintptr_t, int32_t))(Il2CppBase() + 0x28B36BC))(this, result, userContext);
	}
	template <typename T = void> T RestoreSystemAdjustScreen(bool bAdjustScreen, bool bAdjustLanguage, Il2CppList<uintptr_t>* tabList) {
		return ((T (*)(SettingsRestoreController*, bool, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28B3C38))(this, bAdjustScreen, bAdjustLanguage, tabList);
	}
	template <typename T = void> T RestoreSettings(Il2CppList<uintptr_t>* tabList) {
		return ((T (*)(SettingsRestoreController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28B4134))(this, tabList);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5BAC))(this);
	}
	template <typename T = bool> static T RestoreAllSelectedm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28B5C60))(0, it);
	}
	template <typename T = bool> static T RestoreAllSelectedm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28B5C70))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5C80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5C88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5C90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5C98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOkBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5CA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCancellBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5CA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseBtnClick() {
		return ((T (*)(SettingsRestoreController*))(Il2CppBase() + 0x28B5CB0))(this);
	}

};

}
