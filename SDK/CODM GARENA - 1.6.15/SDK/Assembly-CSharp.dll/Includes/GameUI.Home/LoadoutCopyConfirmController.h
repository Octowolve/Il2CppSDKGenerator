#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class LoadoutCopyConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "LoadoutCopyConfirmController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCopySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232B4BC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232B560))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232B908))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232B9B0))(this);
	}
	template <typename T = void> T OnNotifyCopySuccess(uintptr_t MSG) {
		return ((T (*)(LoadoutCopyConfirmController*, uintptr_t))(Il2CppBase() + 0x232BB84))(this, MSG);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232BDFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232BE04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232BE0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutCopyConfirmController*))(Il2CppBase() + 0x232BE14))(this);
	}

};

}
