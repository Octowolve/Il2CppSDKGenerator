#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DelAccCancelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DelAccCancelController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LoadingFlowController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnSureClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRecoverAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDelAccCancelFailMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelAccCancelFailMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAndBackToLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Backtologin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D07BC))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(DelAccCancelController*, uintptr_t))(Il2CppBase() + 0x33D07C4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D07CC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D0AA4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D0B48))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D0E20))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1078))(this);
	}
	template <typename T = void> T _OnBtnSureClick() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D11FC))(this);
	}
	template <typename T = void> T OnResRecoverAccount(uintptr_t Msg) {
		return ((T (*)(DelAccCancelController*, uintptr_t))(Il2CppBase() + 0x33D1420))(this, Msg);
	}
	template <typename T = void> T ShowDelAccCancelFailMessageBox() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1748))(this);
	}
	template <typename T = void> T OnDelAccCancelFailMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(DelAccCancelController*, uintptr_t, int32_t))(Il2CppBase() + 0x33D18EC))(this, result, userContext);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerFinish(uintptr_t result) {
		return ((T (*)(DelAccCancelController*, uintptr_t))(Il2CppBase() + 0x33D1358))(this, result);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerProgress(Il2CppString* tips, float progress) {
		return ((T (*)(DelAccCancelController*, Il2CppString*, float))(Il2CppBase() + 0x33D1B30))(this, tips, progress);
	}
	template <typename T = void> T CloseAndBackToLogin() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D111C))(this);
	}
	template <typename T = void> T Backtologin() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D19BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1C14))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DelAccCancelController*))(Il2CppBase() + 0x33D1C2C))(this);
	}

};

}
