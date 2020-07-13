#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class ChangeNickNameEditNavigationNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "ChangeNickNameEditNavigationNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_ChangeController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeNameSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeNameFailure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431C958))(this);
	}
	template <typename T = bool> T IsShowWeapon() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431C9F8))(this);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*, uintptr_t))(Il2CppBase() + 0x431CA98))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x431CC8C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x431CDC4))(this, data, nextData);
	}
	template <typename T = void> T OnChangeNameSuccess() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431CEB8))(this);
	}
	template <typename T = void> T OnChangeNameFailure() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431CF50))(this);
	}
	template <typename T = void> T ReturnInventory(int32_t userContext) {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*, int32_t))(Il2CppBase() + 0x431D008))(this, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431D178))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWeapon() {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*))(Il2CppBase() + 0x431D180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillShow(uintptr_t P0) {
		return ((T (*)(ChangeNickNameEditNavigationNavigationUIController*, uintptr_t))(Il2CppBase() + 0x431D188))(this, P0);
	}

};

}
