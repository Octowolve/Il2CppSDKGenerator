#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class SwitchLoginController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "SwitchLoginController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoSwitchAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2532E30))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2532F3C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2532FE0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2533220))(this);
	}
	template <typename T = void> T OnCloseWindows() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25333F4))(this);
	}
	template <typename T = void> T OnDoSwitchAccount() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2533568))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x2533600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25336A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25336B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25336B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25336C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(SwitchLoginController*))(Il2CppBase() + 0x25336C8))(this);
	}

};

}
