#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkGame {

class MlkPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkGame", "MlkPlayerInfo"));
	}

	template <typename T = uint32_t> T& m_OrderId() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uint32_t> T& m_WeaponId() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& m_WeaponActorId() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uint32_t> T& m_WeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PartInfoList() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = unsigned char> T& MLK_WEAPON_SLOT() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& m_IsDoChangeWeapon() {
		return *(T*)((uintptr_t)this + 0x321);
	}
	template <typename T = int32_t> T& LastWeaponId() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = int32_t> T& NextWeaponId() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = float> T& UnEquipTime() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Team_MlkGame_MlkPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMlkSwithGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLastUsedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMlkLastUseWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Team_MlkGame_MlkPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4046520))(0, src, dest);
	}
	template <typename T = int32_t> T get_OrderId() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x40469CC))(this);
	}
	template <typename T = int32_t> T get_WeaponId() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x40469D8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MlkPlayerInfo*, float))(Il2CppBase() + 0x40469E0))(this, deltaTime);
	}
	template <typename T = void> T OnMlkSwithGun(uintptr_t msg) {
		return ((T (*)(MlkPlayerInfo*, uintptr_t))(Il2CppBase() + 0x4046E74))(this, msg);
	}
	template <typename T = void> T ChangeWeapon() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x4047518))(this);
	}
	template <typename T = uintptr_t> T DoChangeWeapon() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x40476FC))(this);
	}
	template <typename T = void> T OnServerSwitchWeapon(uint32_t weaponId, int32_t actorId, uint32_t skinID) {
		return ((T (*)(MlkPlayerInfo*, uint32_t, int32_t, uint32_t))(Il2CppBase() + 0x40477E4))(this, weaponId, actorId, skinID);
	}
	template <typename T = void> T ResetLastUsedInfo() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x40479DC))(this);
	}
	template <typename T = void> T SetMlkLastUseWeapon() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x4047444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetLastUsedInfo() {
		return ((T (*)(MlkPlayerInfo*))(Il2CppBase() + 0x4047A80))(this);
	}

};

}
