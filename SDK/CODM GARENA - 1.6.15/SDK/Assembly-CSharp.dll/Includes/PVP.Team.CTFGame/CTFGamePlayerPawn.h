#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGamePlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGamePlayerPawn"));
	}

	template <typename T = bool> T& bDelayEquipAfterDeadReplay() {
		return *(T*)((uintptr_t)this + 0xBE5);
	}
	template <typename T = bool> T& bDelayUnEquipAfterDeadReplay() {
		return *(T*)((uintptr_t)this + 0xBE6);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipGoldBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipGoldBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayEquipAfterDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUnEquipAfterDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2B278))(this);
	}
	template <typename T = void> T EquipGoldBag() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2A82C))(this);
	}
	template <typename T = void> T UnEquipGoldBag() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2ABE0))(this);
	}
	template <typename T = void> T DelayEquipAfterDeadReplay() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B27184))(this);
	}
	template <typename T = void> T DelayUnEquipAfterDeadReplay() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B27230))(this);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(CTFGamePlayerPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x2B2B66C))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2B894))(this);
	}
	template <typename T = void> T ShowFlag(bool bShow) {
		return ((T (*)(CTFGamePlayerPawn*, bool))(Il2CppBase() + 0x2B26D64))(this, bShow);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2BB54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(CTFGamePlayerPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x2B2BB5C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(CTFGamePlayerPawn*))(Il2CppBase() + 0x2B2BB74))(this);
	}

};

}
