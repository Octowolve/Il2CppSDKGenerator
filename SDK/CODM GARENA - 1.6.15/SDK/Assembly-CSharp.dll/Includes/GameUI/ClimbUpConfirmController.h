#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ClimbUpConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ClimbUpConfirmController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDED20))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDEDC4))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDEED0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDEF68))(this);
	}
	template <typename T = void> T ShowClimbUp() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDF010))(this);
	}
	template <typename T = void> T HideClimbUp() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDF2F4))(this);
	}
	template <typename T = void> T OnShowClimbable(bool isShow) {
		return ((T (*)(ClimbUpConfirmController*, bool))(Il2CppBase() + 0x3DDF5CC))(this, isShow);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDF790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDF798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ClimbUpConfirmController*))(Il2CppBase() + 0x3DDF7A0))(this);
	}

};

}
