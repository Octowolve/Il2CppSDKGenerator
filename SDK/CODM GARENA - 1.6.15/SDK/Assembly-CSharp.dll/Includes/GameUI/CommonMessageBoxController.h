#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonMessageBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonMessageBoxController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = int32_t> T get_UserContext() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1364))(this);
	}
	template <typename T = void> T set_UserContext(int32_t value) {
		return ((T (*)(CommonMessageBoxController*, int32_t))(Il2CppBase() + 0x3DF136C))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1374))(this);
	}
	template <typename T = void> T SetData(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(CommonMessageBoxController*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3DF1418))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, okButtonText, cancelButtonText);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1820))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF192C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF19CC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1B9C))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1D08))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1DCC))(this);
	}
	template <typename T = void> T OnOkButtonClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF1EA4))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF2034))(this);
	}
	template <typename T = void> T FakeClick(uintptr_t result) {
		return ((T (*)(CommonMessageBoxController*, uintptr_t))(Il2CppBase() + 0x3DF20FC))(this, result);
	}
	template <typename T = void> T DoCallBack(uintptr_t result) {
		return ((T (*)(CommonMessageBoxController*, uintptr_t))(Il2CppBase() + 0x3DF1F6C))(this, result);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF21CC))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF227C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF231C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF2324))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF232C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF2334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF233C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF2344))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF234C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF2354))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(CommonMessageBoxController*))(Il2CppBase() + 0x3DF235C))(this);
	}

};

}
