#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class SwitchRoleComponentSPBot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "SwitchRoleComponent_SPBot"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAvatarShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SwitchAvatarShow(uintptr_t viewType) {
		return ((T (*)(SwitchRoleComponentSPBot*, uintptr_t))(Il2CppBase() + 0x4056228))(this, viewType);
	}
	template <typename T = void> T PullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponentSPBot*))(Il2CppBase() + 0x40563C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAvatarShow(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentSPBot*, uintptr_t))(Il2CppBase() + 0x405648C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponentSPBot*))(Il2CppBase() + 0x4056494))(this);
	}

};

}
