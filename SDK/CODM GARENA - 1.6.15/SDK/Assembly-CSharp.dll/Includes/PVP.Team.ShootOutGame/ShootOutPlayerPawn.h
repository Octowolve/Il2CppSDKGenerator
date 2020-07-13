#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutPlayerPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnDeadComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGoliathInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUpArmFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShootOutCreateUpArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpArmFXShowOrHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShootOutCreateUpArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetPawnDeadComponentType() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34C9E5C))(this);
	}
	template <typename T = void> T PlayGoliathInitSound() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34C9F58))(this);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t pawn) {
		return ((T (*)(ShootOutPlayerPawn*, uintptr_t))(Il2CppBase() + 0x34CA2EC))(this, pawn);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34CA438))(this);
	}
	template <typename T = void> T RefreshUpArmFX() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34C050C))(this);
	}
	template <typename T = void> T ShootOutCreateUpArmObj() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34CA5F4))(this);
	}
	template <typename T = void> T SetUpArmFXShowOrHide(bool value) {
		return ((T (*)(ShootOutPlayerPawn*, bool))(Il2CppBase() + 0x34CA84C))(this, value);
	}
	template <typename T = void> T ShootOutCreateUpArmObj_1(uintptr_t model) {
		return ((T (*)(ShootOutPlayerPawn*, uintptr_t))(Il2CppBase() + 0x34CAB1C))(this, model);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPawnDeadComponentType() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34CABD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayGoliathInitSound() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34CABD8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameCamp(uintptr_t P0) {
		return ((T (*)(ShootOutPlayerPawn*, uintptr_t))(Il2CppBase() + 0x34CABE0))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(ShootOutPlayerPawn*))(Il2CppBase() + 0x34CABE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUpArmFXShowOrHide(bool P0) {
		return ((T (*)(ShootOutPlayerPawn*, bool))(Il2CppBase() + 0x34CABF0))(this, P0);
	}

};

}
