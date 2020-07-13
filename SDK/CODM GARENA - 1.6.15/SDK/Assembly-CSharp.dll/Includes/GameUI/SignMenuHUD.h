#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignMenuHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignMenuHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MenuItems() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MenuTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& CurrActiveSwitcherIndex() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMenuItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignOperatOperateBtnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignOperatOperateBtnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTouchingAreaIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealMenuItemsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemSelecting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C93BDC))(this);
	}
	template <typename T = void> T UpdateMenuItemData() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C93E4C))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignMenuHUD*, bool))(Il2CppBase() + 0x3C93D28))(this, isShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C94110))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C94298))(this);
	}
	template <typename T = void> T OnSignOperatOperateBtnDragEnd(uintptr_t Msg) {
		return ((T (*)(SignMenuHUD*, uintptr_t))(Il2CppBase() + 0x3C94398))(this, Msg);
	}
	template <typename T = void> T OnSignOperatOperateBtnDrag(uintptr_t Msg) {
		return ((T (*)(SignMenuHUD*, uintptr_t))(Il2CppBase() + 0x3C947EC))(this, Msg);
	}
	template <typename T = int32_t> T GetTouchingAreaIndex(Il2CppVector3 Pos) {
		return ((T (*)(SignMenuHUD*, Il2CppVector3))(Il2CppBase() + 0x3C94B10))(this, Pos);
	}
	template <typename T = int32_t> T GetRealMenuItemsCount() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C94E14))(this);
	}
	template <typename T = void> T OnItemSelected(int32_t SelectedIndex) {
		return ((T (*)(SignMenuHUD*, int32_t))(Il2CppBase() + 0x3C945F0))(this, SelectedIndex);
	}
	template <typename T = void> T OnItemSelecting(int32_t SelectingIndex, bool IsInCancelArea) {
		return ((T (*)(SignMenuHUD*, int32_t, bool))(Il2CppBase() + 0x3C949F0))(this, SelectingIndex, IsInCancelArea);
	}
	template <typename T = void> T SetSelectedIndex(int32_t ActiveIndex) {
		return ((T (*)(SignMenuHUD*, int32_t))(Il2CppBase() + 0x3C94EFC))(this, ActiveIndex);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(SignMenuHUD*, bool, bool))(Il2CppBase() + 0x3C952B8))(this, value, enableOptimize);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C953EC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C953F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C954A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C954B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignMenuHUD*))(Il2CppBase() + 0x3C954B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(SignMenuHUD*, bool, bool))(Il2CppBase() + 0x3C954C0))(this, P0, P1);
	}

};

}
