#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class SwitchRoleComponentShootOut
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "SwitchRoleComponent_ShootOut"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUpArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShootOutCreateUpArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CreateUpArmObj() {
		return ((T (*)(SwitchRoleComponentShootOut*))(Il2CppBase() + 0x34CA534))(this);
	}
	template <typename T = void> T ShootOutCreateUpArmObj() {
		return ((T (*)(SwitchRoleComponentShootOut*))(Il2CppBase() + 0x34CA6E8))(this);
	}

};

}
