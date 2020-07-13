#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkTFGame {

class MlkTFPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkTFGame", "MlkTFPlayerInfo"));
	}

	template <typename T = Il2CppString*> T& WeaponTeamFirstSpriteName() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppString*> T& EnemyWeaponTeamFirstSpriteName() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = Il2CppString*> T& WeaponMaxLevelSpriteName() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppString*> T& EnemyWeaponMaxLevelSpriteName() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uint32_t> T& m_StarNum() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Team_MlkTFGame_MlkTFPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamNumberOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfWeaponLevelIsTeamMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponlevelSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMlkSwithGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStarNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStarNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Team_MlkTFGame_MlkTFPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x348D258))(0, src, dest);
	}
	template <typename T = uint32_t> T get_StarNum() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348D6C4))(this);
	}
	template <typename T = void> T set_StarNum(uint32_t value) {
		return ((T (*)(MlkTFPlayerInfo*, uint32_t))(Il2CppBase() + 0x348D6CC))(this, value);
	}
	template <typename T = bool> T IsTeamNumberOne(uintptr_t bMaxLevel) {
		return ((T (*)(MlkTFPlayerInfo*, uintptr_t))(Il2CppBase() + 0x348D6D4))(this, bMaxLevel);
	}
	template <typename T = bool> T CheckIfWeaponLevelIsTeamMax() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348D828))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponlevelSprite() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348DA54))(this);
	}
	template <typename T = void> T OnMlkSwithGun(uintptr_t msg) {
		return ((T (*)(MlkTFPlayerInfo*, uintptr_t))(Il2CppBase() + 0x348DD48))(this, msg);
	}
	template <typename T = void> T OnServerSwitchWeapon(uint32_t weaponId, int32_t actorId, uint32_t skinID) {
		return ((T (*)(MlkTFPlayerInfo*, uint32_t, int32_t, uint32_t))(Il2CppBase() + 0x348E538))(this, weaponId, actorId, skinID);
	}
	template <typename T = void> T UpdateStarNum(uint32_t inStarNum) {
		return ((T (*)(MlkTFPlayerInfo*, uint32_t))(Il2CppBase() + 0x348E490))(this, inStarNum);
	}
	template <typename T = uint32_t> T GetStarNum() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348E730))(this);
	}
	template <typename T = int32_t> T GetWeaponLevel() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348E7D0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsTeamNumberOne(uintptr_t P0) {
		return ((T (*)(MlkTFPlayerInfo*, uintptr_t))(Il2CppBase() + 0x348E878))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetWeaponlevelSprite() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348E880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMlkSwithGun(uintptr_t P0) {
		return ((T (*)(MlkTFPlayerInfo*, uintptr_t))(Il2CppBase() + 0x348E888))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSwitchWeapon(uint32_t P0, int32_t P1, uint32_t P2) {
		return ((T (*)(MlkTFPlayerInfo*, uint32_t, int32_t, uint32_t))(Il2CppBase() + 0x348E890))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetWeaponLevel() {
		return ((T (*)(MlkTFPlayerInfo*))(Il2CppBase() + 0x348E8B0))(this);
	}

};

}
