#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGamePlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGamePlay"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_IsBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipmentMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceLandscapeSyncUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> static T IsBR() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926604))(0);
	}
	template <typename T = bool> static T IsBRTeam() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B2F8C))(0);
	}
	template <typename T = uintptr_t> static T get_Game() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B4650))(0);
	}
	template <typename T = uintptr_t> static T get_GameInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B2E94))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPC() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B3EE8))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPawn() {
		return ((T (*)(void *))(Il2CppBase() + 0x18BA9B8))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPlayerInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C8C28))(0);
	}
	template <typename T = uintptr_t> static T get_BRViewTargetPlayerInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926700))(0);
	}
	template <typename T = uintptr_t> static T get_LocalEquipmentMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C8380))(0);
	}
	template <typename T = uintptr_t> static T get_ViewTargetEquipmentMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x192683C))(0);
	}
	template <typename T = uintptr_t> static T GetEquipmentMgr(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x18C8D9C))(0, playerID);
	}
	template <typename T = uintptr_t> static T get_UIScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B1184))(0);
	}
	template <typename T = uintptr_t> static T GetPawn(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x18ECBC0))(0, id);
	}
	template <typename T = uintptr_t> static T get_LocalInvManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x18ECD10))(0);
	}
	template <typename T = uintptr_t> static T get_OpenWorldMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926930))(0);
	}
	template <typename T = uintptr_t> static T get_ElectricTripWireBaseMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x190A954))(0);
	}
	template <typename T = uintptr_t> static T get_AirDropMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x1914EB0))(0);
	}
	template <typename T = uintptr_t> static T get_AirDropPlaneMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x1914D54))(0);
	}
	template <typename T = uintptr_t> static T get_ReviveMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x19109EC))(0);
	}
	template <typename T = uintptr_t> static T get_CollectionMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x190D2A0))(0);
	}
	template <typename T = uintptr_t> static T get_ZombieZoneMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x18BAD88))(0);
	}
	template <typename T = uintptr_t> static T get_LotteryMachineMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B1FF4))(0);
	}
	template <typename T = uintptr_t> static T get_TeamStateMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x192696C))(0);
	}
	template <typename T = uintptr_t> static T get_BossSantaMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x19269A8))(0);
	}
	template <typename T = uintptr_t> static T get_ChristmasTreeMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x1915CEC))(0);
	}
	template <typename T = uintptr_t> static T get_DestructibleObjMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x1915CB0))(0);
	}
	template <typename T = uintptr_t> static T get_DoorMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x191D084))(0);
	}
	template <typename T = uintptr_t> static T get_WindowMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x19158A0))(0);
	}
	template <typename T = uintptr_t> static T get_FenceMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x18F68C4))(0);
	}
	template <typename T = uintptr_t> static T get_RelevantMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x19106F0))(0);
	}
	template <typename T = uintptr_t> static T get_ChipMachineMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C6118))(0);
	}
	template <typename T = uintptr_t> static T get_MedicalStationBoxMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x19269E4))(0);
	}
	template <typename T = uintptr_t> static T get_TreasureMapMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x190B014))(0);
	}
	template <typename T = uintptr_t> static T LocalGetWeapon(int32_t actorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18F3C7C))(0, actorId);
	}
	template <typename T = bool> static T get_IsOnPlane() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926A20))(0);
	}
	template <typename T = bool> static T get_IsSkyDiving() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926BC4))(0);
	}
	template <typename T = float> static T get_CurrentHeightToTerrain() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926D20))(0);
	}
	template <typename T = uintptr_t> static T get_landscape() {
		return ((T (*)(void *))(Il2CppBase() + 0x1926E2C))(0);
	}
	template <typename T = void> static T ForceLandscapeSyncUpdate(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x19104E0))(0, pos);
	}

};

}
