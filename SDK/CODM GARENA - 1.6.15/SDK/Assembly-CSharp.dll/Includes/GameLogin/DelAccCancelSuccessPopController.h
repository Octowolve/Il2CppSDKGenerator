#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DelAccCancelSuccessPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DelAccCancelSuccessPopController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnsureClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAndFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D1CD8))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(DelAccCancelSuccessPopController*, uintptr_t))(Il2CppBase() + 0x33D18E4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D1CE0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D1F9C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2040))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2174))(this);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D1DF4))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2290))(this);
	}
	template <typename T = void> T _OnBtnsureClick() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D240C))(this);
	}
	template <typename T = void> T CloseAndFinish() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2334))(this);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerFinish(uintptr_t result) {
		return ((T (*)(DelAccCancelSuccessPopController*, uintptr_t))(Il2CppBase() + 0x33D24B0))(this, result);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2578))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(DelAccCancelSuccessPopController*))(Il2CppBase() + 0x33D2598))(this);
	}

};

}
