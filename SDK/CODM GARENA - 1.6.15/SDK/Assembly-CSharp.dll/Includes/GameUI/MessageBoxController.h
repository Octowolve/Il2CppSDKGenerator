#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MessageBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MessageBoxController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& userContext() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_UserResult() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadOk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = int32_t> T get_UserContext() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA1EE0))(this);
	}
	template <typename T = void> T set_UserContext(int32_t value) {
		return ((T (*)(MessageBoxController*, int32_t))(Il2CppBase() + 0x1FA1EE8))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA1EF0))(this);
	}
	template <typename T = void> T SetData(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, Il2CppString* okButtonText, Il2CppString* cancelButtonText, bool errorTopReport) {
		return ((T (*)(MessageBoxController*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1FA1F94))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, okButtonText, cancelButtonText, errorTopReport);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA253C))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2648))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA26E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA29E8))(this);
	}
	template <typename T = bool> T GamepadClose() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2C54))(this);
	}
	template <typename T = bool> T GamepadOk() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2D08))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2DBC))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2E80))(this);
	}
	template <typename T = void> T OnOkButtonClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA2F4C))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA3214))(this);
	}
	template <typename T = void> T FakeClick(uintptr_t result) {
		return ((T (*)(MessageBoxController*, uintptr_t))(Il2CppBase() + 0x1FA338C))(this, result);
	}
	template <typename T = void> T CloseImpl() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA30C0))(this);
	}
	template <typename T = void> T DoCallBack(uintptr_t result) {
		return ((T (*)(MessageBoxController*, uintptr_t))(Il2CppBase() + 0x1FA3684))(this, result);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA37E0))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA3890))(this);
	}
	template <typename T = void> T OnOkButtonClickm__0() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA3930))(this);
	}
	template <typename T = void> T OnCancelButtonClickm__1() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA3964))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA3998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39C8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39D0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(MessageBoxController*))(Il2CppBase() + 0x1FA39D8))(this);
	}

};

}
