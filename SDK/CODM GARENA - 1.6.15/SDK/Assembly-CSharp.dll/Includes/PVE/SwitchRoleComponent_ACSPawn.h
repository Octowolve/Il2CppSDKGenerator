#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class SwitchRoleComponentACSPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "SwitchRoleComponent_ACSPawn"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Load3PAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SwitchAvatarShow(uintptr_t viewType) {
		return ((T (*)(SwitchRoleComponentACSPawn*, uintptr_t))(Il2CppBase() + 0x4055B34))(this, viewType);
	}
	template <typename T = void> T PullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponentACSPawn*))(Il2CppBase() + 0x4055D0C))(this);
	}
	template <typename T = void> T Load3PAvatarOver() {
		return ((T (*)(SwitchRoleComponentACSPawn*))(Il2CppBase() + 0x4055DD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAvatarShow(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentACSPawn*, uintptr_t))(Il2CppBase() + 0x4056134))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponentACSPawn*))(Il2CppBase() + 0x405613C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Load3PAvatarOver() {
		return ((T (*)(SwitchRoleComponentACSPawn*))(Il2CppBase() + 0x4056144))(this);
	}

};

}
