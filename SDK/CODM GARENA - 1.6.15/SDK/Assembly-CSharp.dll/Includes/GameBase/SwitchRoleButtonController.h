#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SwitchRoleButtonController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SwitchRoleButtonController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B68F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B6998))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B6AA4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B6D48))(this);
	}
	template <typename T = void> T OnSwitchBtnClick() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B6E98))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B70A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B70B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B70B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SwitchRoleButtonController*))(Il2CppBase() + 0x30B70C0))(this);
	}

};

}
