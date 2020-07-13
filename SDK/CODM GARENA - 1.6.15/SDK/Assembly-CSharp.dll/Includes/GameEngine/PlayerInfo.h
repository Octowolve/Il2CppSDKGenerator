#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerInfo"));
	}

	template <typename T = uintptr_t> T& ObserverInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ObBulletInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MainWeaponInfo_PickUp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ViceWeaponInfo_PickUp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_BulletDic() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpectateInfoArr() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsBind() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& ForcedKnifeMode() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_IsPlayerDead() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = float> T& m_PlayerDeadTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_TeamID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& TeamSeatID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& OBSeatIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& GameIDCollectionLastCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& GameIDCollectionCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& ElectricCarID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ElectricStartTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& ElectricTotalTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& ElectricReduceTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& VehicleSeatIndex() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& VehicleID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_PicId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& PicUrl() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_LadderScore() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& isShowInInductionArea() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsInterferedByDrone() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = uint64_t> T& m_RoleID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& m_HeadResId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& GameLevel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& IsBRTeamMateInfoFiring() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsFiring() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& m_LastFireTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_ProfessionChipID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_PreProfessionChipID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_BRPerkID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& m_FireMode() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& m_UltSkillID() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& m_UltSkillLayer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& m_UltWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& UltWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsUsingKillStreak() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint32_t> T& m_UltEnergy() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> T& m_MaxUltEnergy() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> static T& m_ULTSkillIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsInULTSkillUsingState() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& m_ULTFireNoCostBullet() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_IsInTauntState() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsConvergeTarget() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = bool> T& m_NPCRole() {
		return *(T*)((uintptr_t)this + 0xEE);
	}
	template <typename T = bool> T& m_MonsterRole() {
		return *(T*)((uintptr_t)this + 0xEF);
	}
	template <typename T = bool> T& m_IsRobot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& m_IsPropPawn() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& m_IsPsychosis() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = bool> T& m_IsInPsychosisState() {
		return *(T*)((uintptr_t)this + 0xF3);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerIDForPsychosis() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_IsInWarStatus() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_IsInvisible() {
		return *(T*)((uintptr_t)this + 0xF9);
	}
	template <typename T = bool> T& m_IsInInvisibleState() {
		return *(T*)((uintptr_t)this + 0xFA);
	}
	template <typename T = bool> T& m_bHasInvisibleManAround() {
		return *(T*)((uintptr_t)this + 0xFB);
	}
	template <typename T = bool> T& IsClientFakeRole() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& RoundStartTimeForLocalRespawn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& m_HeadShotCount() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& KillerWeaponID() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& KillerWeaponLevel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uint32_t> T& KillerPlayerID() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int64_t> T& CardID_H_Cache() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int64_t> T& m_CardID() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_KillEnemyCount() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_KillStreak() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_DeathCount() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint32_t> T& m_Score() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uint32_t> T& m_StreakScore() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint32_t> T& m_DisplayedKillScore() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& m_AssistCount() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uint32_t> T& m_CaptureCount() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uint32_t> T& m_DefendCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uint32_t> T& m_HPDefendKill() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& m_UpdateKillTime() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uint32_t> T& m_PlantBombCount() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uint32_t> T& m_BombDetonatedCount() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uint32_t> T& m_TotalDamage() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uint16_t> T& m_Ping() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& m_bIsHeadShot() {
		return *(T*)((uintptr_t)this + 0x162);
	}
	template <typename T = int32_t> T& m_AC() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& m_MaxAC() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_Level() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& m_PeakLevel() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uint32_t> T& m_DiamondCount() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uint32_t> T& m_RunEnergy() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& m_GodFlag() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExtraInventoryList() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InventoryList() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ArmorList() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& m_bEquipedHeavyArmo() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& m_SkillMgr() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& PropertySet() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& m_ReplicatedWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& m_ReplicatedWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = unsigned char> T& WeaponReplicateFlag() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& m_LastUsedWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& m_LastUsedWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& m_LastUsedWeaponItemLevel() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = unsigned char> T& m_LastUsedWeaponSlotID() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uint32_t> T& m_LastUsedWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LastUsedWeaponPartList() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uint32_t> T& m_LastUsedWeaponCrossHairID() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& m_LastUsedNormalWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& m_LastUsedNormalWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& m_LastUsedNormalWeaponItemLevel() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = unsigned char> T& m_LastUsedNormalWeaponSlotID() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uint32_t> T& m_LastUsedNormalWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LastUsedNormalWeaponPartList() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uint32_t> T& m_LastUsedNormalWeaponCrossHairID() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = bool> T& mIsHoldingGrenade() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& IsSniperAiming() {
		return *(T*)((uintptr_t)this + 0x1E1);
	}
	template <typename T = bool> T& IsSniperDoubleAiming() {
		return *(T*)((uintptr_t)this + 0x1E2);
	}
	template <typename T = Il2CppString*> T& LastDeadAnimName() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = int32_t> T& m_DefaultWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uint32_t> T& m_DefaultWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& m_PlayerState() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& m_IsHeavyAttack() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& m_RespawnType() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& m_IsReviveWaitSwitchMainWeapon() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = double> T& m_RespawnTime() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uint32_t> static T& MaxErrorNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ReconnectTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsReconnectTime() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& StartReconnectTime() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& m_MoveLogicTime() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uint32_t> T& m_LastMoveDataLogicNum() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = bool> T& m_BTakeC4Clamp() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& m_FlashBangTimeScale() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& m_AttackScale() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = bool> T& m_IsInDeadReplay() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = bool> T& m_HasSetDeadReplayPosition() {
		return *(T*)((uintptr_t)this + 0x225);
	}
	template <typename T = float> T& m_MoveSpeedScale() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& ExperToughRate() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = uint32_t> T& m_PlayerStage() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uint32_t> T& m_GainedExp() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uint32_t> T& m_Points() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& m_IsSprinting() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& SprintChangeTime() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& m_IsLargeKillStreakActor() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = bool> T& m_IsPlayFireIntervalChangedEffect() {
		return *(T*)((uintptr_t)this + 0x245);
	}
	template <typename T = float> T& m_MaxOxygen() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& m_Oxygen() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = bool> T& m_HasSelectBag() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& m_SelectedBagID() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& BagIDFromRespawn() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& m_PhysicsState() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& m_MoveState() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_KillStreakInfoList() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> T& CarePackageKillStreakID() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NetVehicleMatID() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = uint32_t> T& m_NetWingsuitSkinID() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uint32_t> T& m_NetParachuteSkinID() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = uint32_t> T& m_NetBagID() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uint32_t> T& m_NetHeatID() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uint32_t> T& m_NetVestID() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& HaveVest() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uint32_t> T& m_NetClothID() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = int32_t> T& m_NetClothType() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uint32_t> T& m_NetSuitID() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uint32_t> T& m_NetBodyID() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = bool> T& m_IsLEGO() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BagList() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PerkInfoList() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& m_CanDeploySentryGun() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = uint32_t> T& GoldBarCount() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uint32_t> T& KillConfirm() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uint32_t> T& KillDeny() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = int32_t> T& VisionRange() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = unsigned char> T& m_CheckSeq() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& m_NewestMoveData() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = int32_t> T& LastMainWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = uint32_t> T& LastMainWeaponID() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& m_ULTWeaponID() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& m_PreInventoryChangeULTWeapon() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_GameEngine_PlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncObserverBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObserverBulletCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildPartInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BuildPartInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObserveWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncObserverInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BitStateToSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStateActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBySpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleIDInRoundPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeadReplayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProfessionChipMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPurifierMuzzleAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPurifierHitEffectAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAIUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerUltSkillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuildUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncULTSkillIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddULTFireNoCostBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveULTFireNoCostBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsULTFireNoCostBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGodFlagChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponSpectatorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLastUseWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLastUseNormalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLastUseNormalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLesserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveLogicNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateTacticalVoiceUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDiamondEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerDiamondChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRespawnProtect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCarePackageKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillStreakCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HasKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillStreakScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLastUsedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInventoryInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetInventoryInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddScoreStreakToBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectedBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectedBagInventoryList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagInventoryList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllBagInventoryList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPerkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPerkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkIDForBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameTeamID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamNumberOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponlevelSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfoEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClientForcePredictMoveDataLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombieNewestMoveDataPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestNewestMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndRecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckAndRecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPreInventoryChangeULTWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}

	template <typename T = void> static T AutoGen_Copy(uintptr_t targetType, uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDCA30))(0, targetType, src, dest);
	}
	template <typename T = void> static T AutoGen_Copy_GameEngine_PlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDD4E0))(0, src, dest);
	}
	template <typename T = void> T OnSyncWeaponInfo(uintptr_t weapInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DDDC4C))(this, weapInfo);
	}
	template <typename T = void> T OnSyncObserverBullet(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlayerInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1DDE178))(this, bytes, position);
	}
	template <typename T = int32_t> T GetObserverBulletCount(int32_t itemID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DDE488))(this, itemID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T BuildPartInfoList(uintptr_t WeaponInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DDE5C4))(this, WeaponInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T BuildPartInfoList_1(uintptr_t WeaponInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DDE9D0))(this, WeaponInfo);
	}
	template <typename T = bool> T GetObserveWeaponInfo(int32_t weapID, int32_t actorID, uintptr_t skinID, uintptr_t partInfoList) {
		return ((T (*)(PlayerInfo*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDEDCC))(this, weapID, actorID, skinID, partInfoList);
	}
	template <typename T = void> T OnSyncObserverInfo(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlayerInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1DDEFE8))(this, bytes, position);
	}
	template <typename T = void> T SetSpectateInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDF24C))(this);
	}
	template <typename T = void> T OnSyncPlayerInfoProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x1DDF7A8))(this, propertyID, value);
	}
	template <typename T = void> T OnSyncAnimation(uintptr_t animName) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DDFC44))(this, animName);
	}
	template <typename T = void> T OnDeadReplayInit(int16_t state) {
		return ((T (*)(PlayerInfo*, int16_t))(Il2CppBase() + 0x1DDFD4C))(this, state);
	}
	template <typename T = uintptr_t> T BitStateToSpectateInfo(int32_t bitState) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DDFE60))(this, bitState);
	}
	template <typename T = bool> T IsStateActive(int16_t data, uintptr_t biteState) {
		return ((T (*)(PlayerInfo*, int16_t, uintptr_t))(Il2CppBase() + 0x1DDFF60))(this, data, biteState);
	}
	template <typename T = void> T InitBySpectateInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE005C))(this);
	}
	template <typename T = void> T SyncSpectateInfo(uintptr_t feature, bool active) {
		return ((T (*)(PlayerInfo*, uintptr_t, bool))(Il2CppBase() + 0x1DE022C))(this, feature, active);
	}
	template <typename T = void> T RecordSpectateInfo(uintptr_t feature, bool active) {
		return ((T (*)(PlayerInfo*, uintptr_t, bool))(Il2CppBase() + 0x1DDF8E4))(this, feature, active);
	}
	template <typename T = void> T HandleSpectateInfo(uintptr_t feature, bool active) {
		return ((T (*)(PlayerInfo*, uintptr_t, bool))(Il2CppBase() + 0x1DDFA94))(this, feature, active);
	}
	template <typename T = void> T UpdateSpectateInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DD9EB4))(this);
	}
	template <typename T = bool> T GetSpectateInfo(uintptr_t feature) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE0478))(this, feature);
	}
	template <typename T = bool> T get_ForcedKnifeMode() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0604))(this);
	}
	template <typename T = void> T set_ForcedKnifeMode(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE060C))(this, value);
	}
	template <typename T = bool> T get_IsPlayerDead() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0614))(this);
	}
	template <typename T = void> T set_IsPlayerDead(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE061C))(this, value);
	}
	template <typename T = bool> T get_IsValid() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0708))(this);
	}
	template <typename T = float> T get_PlayerDeadTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE07FC))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1D7CF50))(this);
	}
	template <typename T = void> T set_PlayerID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDDB54))(this, value);
	}
	template <typename T = uint32_t> T get_TeamID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DD9280))(this);
	}
	template <typename T = void> T set_TeamID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE0804))(this, value);
	}
	template <typename T = uint32_t> T get_TeamSeatID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB5C))(this);
	}
	template <typename T = void> T set_TeamSeatID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDDB64))(this, value);
	}
	template <typename T = uint32_t> T get_TeamMateTotalNum() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE080C))(this);
	}
	template <typename T = uint32_t> T get_OwnerPlayerID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB6C))(this);
	}
	template <typename T = void> T set_OwnerPlayerID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDDB74))(this, value);
	}
	template <typename T = uint32_t> T get_GameIDCollectionLastCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB7C))(this);
	}
	template <typename T = void> T set_GameIDCollectionLastCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDCA18))(this, value);
	}
	template <typename T = uint32_t> T get_GameIDCollectionCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB84))(this);
	}
	template <typename T = void> T set_GameIDCollectionCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDCA20))(this, value);
	}
	template <typename T = uint32_t> T get_ElectricCarID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE08E4))(this);
	}
	template <typename T = void> T set_ElectricCarID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE08EC))(this, value);
	}
	template <typename T = float> T get_ElectricStartTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE08F4))(this);
	}
	template <typename T = void> T set_ElectricStartTime(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE08FC))(this, value);
	}
	template <typename T = float> T get_ElectricTotalTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0904))(this);
	}
	template <typename T = void> T set_ElectricTotalTime(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE090C))(this, value);
	}
	template <typename T = float> T get_ElectricReduceTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0914))(this);
	}
	template <typename T = void> T set_ElectricReduceTime(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE091C))(this, value);
	}
	template <typename T = Il2CppString*> T get_NickName() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0924))(this);
	}
	template <typename T = void> T set_NickName(Il2CppString* value) {
		return ((T (*)(PlayerInfo*, Il2CppString*))(Il2CppBase() + 0x1DE092C))(this, value);
	}
	template <typename T = bool> T get_IsDriver() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE09DC))(this);
	}
	template <typename T = int32_t> T get_PicId() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A04))(this);
	}
	template <typename T = void> T set_PicId(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE0A0C))(this, value);
	}
	template <typename T = int32_t> T get_FrameId() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A14))(this);
	}
	template <typename T = void> T set_FrameId(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE0A1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PicUrl() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB8C))(this);
	}
	template <typename T = void> T set_PicUrl(Il2CppString* value) {
		return ((T (*)(PlayerInfo*, Il2CppString*))(Il2CppBase() + 0x1DDDB94))(this, value);
	}
	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A24))(this);
	}
	template <typename T = void> T set_LadderScore(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE0A2C))(this, value);
	}
	template <typename T = bool> T get_IsShowInInductionArea() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A34))(this);
	}
	template <typename T = void> T set_IsShowInInductionArea(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE0A3C))(this, value);
	}
	template <typename T = bool> T get_IsInterferedByDrone() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A44))(this);
	}
	template <typename T = void> T set_IsInterferedByDrone(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE0A4C))(this, value);
	}
	template <typename T = uint64_t> T get_RoleID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDB9C))(this);
	}
	template <typename T = void> T set_RoleID(uint64_t value) {
		return ((T (*)(PlayerInfo*, uint64_t))(Il2CppBase() + 0x1DDDBA4))(this, value);
	}
	template <typename T = uint64_t> T get_HeadResId() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A54))(this);
	}
	template <typename T = void> T set_HeadResId(uint64_t value) {
		return ((T (*)(PlayerInfo*, uint64_t))(Il2CppBase() + 0x1DE0A68))(this, value);
	}
	template <typename T = int32_t> T get_GameLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDBB4))(this);
	}
	template <typename T = void> T set_GameLevel(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DDDBBC))(this, value);
	}
	template <typename T = bool> T get_IsBRTeamMateInfoFiring() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDBC4))(this);
	}
	template <typename T = void> T set_IsBRTeamMateInfoFiring(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DDDBCC))(this, value);
	}
	template <typename T = bool> T get_IsFiringForUIShow() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0A78))(this);
	}
	template <typename T = void> T set_IsFiringForUIShow(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE0AC8))(this, value);
	}
	template <typename T = uint64_t> T GetRoleIDInRoundPrepare() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0AF4))(this);
	}
	template <typename T = void> T SetRoleID(uint64_t roleID) {
		return ((T (*)(PlayerInfo*, uint64_t))(Il2CppBase() + 0x1DC19FC))(this, roleID);
	}
	template <typename T = void> T SetDeadReplayData(uintptr_t srcPlayerInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE1260))(this, srcPlayerInfo);
	}
	template <typename T = int32_t> T get_ProfessionChipID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE1330))(this);
	}
	template <typename T = void> T set_ProfessionChipID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE1338))(this, value);
	}
	template <typename T = int32_t> T get_PreProfessionChipID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE1340))(this);
	}
	template <typename T = void> T set_PreProfessionChipID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE1348))(this, value);
	}
	template <typename T = int32_t> T get_BRPerkID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE1350))(this);
	}
	template <typename T = void> T set_BRPerkID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE1358))(this, value);
	}
	template <typename T = uint32_t> T get_FireMode() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE1360))(this);
	}
	template <typename T = void> T set_FireMode(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE1368))(this, value);
	}
	template <typename T = bool> T IsProfessionChipMaxLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1D9747C))(this);
	}
	template <typename T = uint32_t> T get_UltSkillID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC8180))(this);
	}
	template <typename T = void> T set_UltSkillID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE1370))(this, value);
	}
	template <typename T = uint32_t> T get_UltSkillLayer() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE1CD4))(this);
	}
	template <typename T = void> T set_UltSkillLayer(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE1CDC))(this, value);
	}
	template <typename T = uint32_t> T get_UltWeaponActorID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC6E90))(this);
	}
	template <typename T = void> T set_UltWeaponActorID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDDBD4))(this, value);
	}
	template <typename T = bool> T IsWeaponUltSkill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC7D94))(this);
	}
	template <typename T = void> T OnPurifierMuzzleAssetReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PlayerInfo*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE1E90))(this, assetID, obj);
	}
	template <typename T = void> T OnPurifierHitEffectAssetReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PlayerInfo*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE20D8))(this, assetID, obj);
	}
	template <typename T = bool> T get_IsUsingKillStreak() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2308))(this);
	}
	template <typename T = void> T set_IsUsingKillStreak(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1D8562C))(this, value);
	}
	template <typename T = bool> T HasUltSkill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2310))(this);
	}
	template <typename T = void> T UpdateAIUltSkill(uint32_t skillID) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE23E8))(this, skillID);
	}
	template <typename T = void> T UpdateLocalPlayerUltSkillInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0E10))(this);
	}
	template <typename T = bool> T IsBuildUltSkill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2560))(this);
	}
	template <typename T = bool> T IsPVEUltSkill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2670))(this);
	}
	template <typename T = bool> T ShowSkillHud() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2780))(this);
	}
	template <typename T = uint32_t> T get_UltEnergy() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE28D0))(this);
	}
	template <typename T = void> T set_UltEnergy(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE28D8))(this, value);
	}
	template <typename T = float> T get_UltEnergyRate() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2A8C))(this);
	}
	template <typename T = uint32_t> T get_MaxUltEnergy() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2B68))(this);
	}
	template <typename T = bool> T get_IsInULTSkillUsingState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC6E80))(this);
	}
	template <typename T = void> T set_IsInULTSkillUsingState(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE2B70))(this, value);
	}
	template <typename T = int32_t> T get_ULTSkillIdx() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2E9C))(this);
	}
	template <typename T = void> T IncULTSkillIdx() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2D8C))(this);
	}
	template <typename T = void> T AddULTFireNoCostBullet() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE2F4C))(this);
	}
	template <typename T = void> T RemoveULTFireNoCostBullet() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3118))(this);
	}
	template <typename T = bool> T IsULTFireNoCostBullet() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3354))(this);
	}
	template <typename T = bool> T CanUseUltSkill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3430))(this);
	}
	template <typename T = bool> T get_IsInTauntState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3520))(this);
	}
	template <typename T = void> T set_IsInTauntState(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3528))(this, value);
	}
	template <typename T = bool> T get_IsConvergeTarget() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3530))(this);
	}
	template <typename T = void> T set_IsConvergeTarget(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3538))(this, value);
	}
	template <typename T = void> T set_IsNPC(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3540))(this, value);
	}
	template <typename T = bool> T get_IsNPC() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3548))(this);
	}
	template <typename T = bool> T get_IsHuman() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3550))(this);
	}
	template <typename T = void> T set_IsMonster(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE1258))(this, value);
	}
	template <typename T = bool> T get_IsMonster() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3570))(this);
	}
	template <typename T = void> T set_IsRobot(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3578))(this, value);
	}
	template <typename T = bool> T get_IsRobot() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3580))(this);
	}
	template <typename T = bool> T get_IsPropPawn() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3588))(this);
	}
	template <typename T = void> T set_IsPropPawn(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3590))(this, value);
	}
	template <typename T = bool> T get_IsPsychosis() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3598))(this);
	}
	template <typename T = void> T set_IsPsychosis(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE35A0))(this, value);
	}
	template <typename T = bool> T get_IsInPsychosisState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35A8))(this);
	}
	template <typename T = void> T set_IsInPsychosisState(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE35B0))(this, value);
	}
	template <typename T = uint32_t> T get_OwnerPlayerIDForPsychosis() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35B8))(this);
	}
	template <typename T = void> T set_OwnerPlayerIDForPsychosis(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE35C0))(this, value);
	}
	template <typename T = bool> T get_IsInWarStatus() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35C8))(this);
	}
	template <typename T = void> T set_IsInWarStatus(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE35D0))(this, value);
	}
	template <typename T = bool> T get_IsInvisible() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35D8))(this);
	}
	template <typename T = void> T set_IsInvisible(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE35E0))(this, value);
	}
	template <typename T = bool> T get_IsInInvisibleState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35E8))(this);
	}
	template <typename T = void> T set_IsInInvisibleState(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE35F0))(this, value);
	}
	template <typename T = bool> T get_HasInvisibleManAround() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE35F8))(this);
	}
	template <typename T = void> T set_HasInvisibleManAround(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3600))(this, value);
	}
	template <typename T = bool> T get_IsClientFakeRole() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDBDC))(this);
	}
	template <typename T = void> T set_IsClientFakeRole(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DDDBE4))(this, value);
	}
	template <typename T = bool> T get_IsFemale() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DD4014))(this);
	}
	template <typename T = bool> T get_IsLocalPlayer() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE03CC))(this);
	}
	template <typename T = int32_t> T get_HeadShotCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3608))(this);
	}
	template <typename T = void> T set_HeadShotCount(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3610))(this, value);
	}
	template <typename T = int32_t> T get_KillerWeaponID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDBEC))(this);
	}
	template <typename T = void> T set_KillerWeaponID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DDDBF4))(this, value);
	}
	template <typename T = int32_t> T get_KillerWeaponLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDBFC))(this);
	}
	template <typename T = void> T set_KillerWeaponLevel(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DDDC04))(this, value);
	}
	template <typename T = uint32_t> T get_KillerPlayerID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDC0C))(this);
	}
	template <typename T = void> T set_KillerPlayerID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDDC14))(this, value);
	}
	template <typename T = int64_t> T get_CardID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3618))(this);
	}
	template <typename T = void> T set_CardID(int64_t value) {
		return ((T (*)(PlayerInfo*, int64_t))(Il2CppBase() + 0x1DE3628))(this, value);
	}
	template <typename T = int32_t> T get_KillEnemyCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3634))(this);
	}
	template <typename T = void> T set_KillEnemyCount(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE363C))(this, value);
	}
	template <typename T = int32_t> T get_KillStreak() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3644))(this);
	}
	template <typename T = void> T set_KillStreak(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE364C))(this, value);
	}
	template <typename T = int32_t> T get_DeathCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3654))(this);
	}
	template <typename T = void> T set_DeathCount(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE365C))(this, value);
	}
	template <typename T = uint32_t> T get_Score() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3664))(this);
	}
	template <typename T = void> T set_Score(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE366C))(this, value);
	}
	template <typename T = uint32_t> T get_StreakScore() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3674))(this);
	}
	template <typename T = void> T set_StreakScore(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE367C))(this, value);
	}
	template <typename T = uint32_t> T get_DisplayedKillScore() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3684))(this);
	}
	template <typename T = void> T set_DisplayedKillScore(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE368C))(this, value);
	}
	template <typename T = uint32_t> T get_AssistCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3694))(this);
	}
	template <typename T = void> T set_AssistCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE369C))(this, value);
	}
	template <typename T = uint32_t> T get_CaptureCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36A4))(this);
	}
	template <typename T = void> T set_CaptureCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE36AC))(this, value);
	}
	template <typename T = uint32_t> T get_DefendCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36B4))(this);
	}
	template <typename T = void> T set_DefendCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE36BC))(this, value);
	}
	template <typename T = uint32_t> T get_HPDefendKill() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36C4))(this);
	}
	template <typename T = void> T set_HPDefendKill(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE36CC))(this, value);
	}
	template <typename T = int32_t> T get_UpdateKillTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36D4))(this);
	}
	template <typename T = void> T set_UpdateKillTime(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE36DC))(this, value);
	}
	template <typename T = uint32_t> T get_PlantBombCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36E4))(this);
	}
	template <typename T = void> T set_PlantBombCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE36EC))(this, value);
	}
	template <typename T = uint32_t> T get_BombDetonatedCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE36F4))(this);
	}
	template <typename T = void> T set_BombDetonatedCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE36FC))(this, value);
	}
	template <typename T = uint32_t> T get_TotalDamage() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3704))(this);
	}
	template <typename T = void> T set_TotalDamage(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE370C))(this, value);
	}
	template <typename T = uint16_t> T get_Ping() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3714))(this);
	}
	template <typename T = void> T set_Ping(uint16_t value) {
		return ((T (*)(PlayerInfo*, uint16_t))(Il2CppBase() + 0x1DE3720))(this, value);
	}
	template <typename T = bool> T get_IsHeadShot() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE37F4))(this);
	}
	template <typename T = void> T set_IsHeadShot(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE37FC))(this, value);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3804))(this);
	}
	template <typename T = void> T set_Camp(uintptr_t value) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE380C))(this, value);
	}
	template <typename T = int32_t> T get_AC() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A08))(this);
	}
	template <typename T = void> T set_AC(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3A10))(this, value);
	}
	template <typename T = int32_t> T get_MaxAC() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A18))(this);
	}
	template <typename T = void> T set_MaxAC(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3A20))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A28))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3A30))(this, value);
	}
	template <typename T = int32_t> T get_PeakLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A38))(this);
	}
	template <typename T = void> T set_PeakLevel(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3A40))(this, value);
	}
	template <typename T = uint32_t> T get_DiamondCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A48))(this);
	}
	template <typename T = void> T set_DiamondCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE3A50))(this, value);
	}
	template <typename T = uint32_t> T get_RunEnergy() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3A98))(this);
	}
	template <typename T = void> T set_RunEnergy(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE3AA0))(this, value);
	}
	template <typename T = bool> T get_GodFlag() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3AA8))(this);
	}
	template <typename T = void> T set_GodFlag(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3AB0))(this, value);
	}
	template <typename T = void> T OnGodFlagChange(bool newFlag) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE3AD8))(this, newFlag);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ExtraInventoryList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC19DC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InventoryList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3C90))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ArmorList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC19EC))(this);
	}
	template <typename T = bool> T get_EquipedHeavyArmo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3C98))(this);
	}
	template <typename T = void> T set_EquipedHeavyArmo(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DC19D4))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_ItemList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC19E4))(this);
	}
	template <typename T = uintptr_t> T get_SkillMgr() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CA0))(this);
	}
	template <typename T = void> T set_SkillMgr(uintptr_t value) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE3CA8))(this, value);
	}
	template <typename T = int32_t> T get_ReplicatedWeaponItemID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CB0))(this);
	}
	template <typename T = void> T set_ReplicatedWeaponItemID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3CB8))(this, value);
	}
	template <typename T = int32_t> T get_ReplicatedWeaponActorID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CC4))(this);
	}
	template <typename T = void> T set_ReplicatedWeaponActorID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE3CCC))(this, value);
	}
	template <typename T = int32_t> T get_LastUsedWeaponActorID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CD8))(this);
	}
	template <typename T = int32_t> T get_LastUsedWeaponItemID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC6E78))(this);
	}
	template <typename T = int32_t> T get_LastUsedWeaponItemLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CE0))(this);
	}
	template <typename T = unsigned char> T get_LastUsedWeaponSlotID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CE8))(this);
	}
	template <typename T = uint32_t> T get_LastUsedWeaponSkinID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CF0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LastUsedWeaponPartList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3CF8))(this);
	}
	template <typename T = uint32_t> T get_LastUsedWeaponCrossHairID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D00))(this);
	}
	template <typename T = int32_t> T get_LastUsedNormalWeaponActorID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D08))(this);
	}
	template <typename T = int32_t> T get_LastUsedNormalWeaponItemID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D10))(this);
	}
	template <typename T = int32_t> T get_LastUsedNormalWeaponItemLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D18))(this);
	}
	template <typename T = unsigned char> T get_LastUsedNormalWeaponSlotID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D20))(this);
	}
	template <typename T = uint32_t> T get_LastUsedNormalWeaponSkinID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LastUsedNormalWeaponPartList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D30))(this);
	}
	template <typename T = uint32_t> T get_LastUsedNormalWeaponCrossHairID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D38))(this);
	}
	template <typename T = bool> T get_IsHoldingGrenade() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDC1C))(this);
	}
	template <typename T = void> T set_IsHoldingGrenade(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DDDC24))(this, value);
	}
	template <typename T = void> T ResetWeaponSpectatorState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3D40))(this);
	}
	template <typename T = void> T OnChangeWeapon() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3EB0))(this);
	}
	template <typename T = void> T ChangeLastUseWeapon(int32_t weaponID, unsigned char slotID, uint32_t skinID, Il2CppList<uintptr_t>* weaponPartList, int32_t actorID, int32_t weaponLevel, uint32_t crossHairID) {
		return ((T (*)(PlayerInfo*, int32_t, unsigned char, uint32_t, Il2CppList<uintptr_t>*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1DC6E98))(this, weaponID, slotID, skinID, weaponPartList, actorID, weaponLevel, crossHairID);
	}
	template <typename T = void> T ChangeLastUseNormalWeapon(int32_t weaponID, unsigned char slotID, uint32_t skinID, Il2CppList<uintptr_t>* weaponPartList, int32_t actorID, int32_t weaponLevel, uint32_t crossHairID) {
		return ((T (*)(PlayerInfo*, int32_t, unsigned char, uint32_t, Il2CppList<uintptr_t>*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1DE3F84))(this, weaponID, slotID, skinID, weaponPartList, actorID, weaponLevel, crossHairID);
	}
	template <typename T = void> T ClearLastUseNormalWeapon() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE40B4))(this);
	}
	template <typename T = unsigned char> T get_DefaultWeaponSlot() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE41A0))(this);
	}
	template <typename T = int32_t> T get_DefaultWeaponItemID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE41CC))(this);
	}
	template <typename T = uint32_t> T get_DefaultWeaponSkinID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE41F8))(this);
	}
	template <typename T = uintptr_t> T get_PlayerState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC6E70))(this);
	}
	template <typename T = void> T set_PlayerState(uintptr_t value) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE4224))(this, value);
	}
	template <typename T = bool> T get_IsDying() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4248))(this);
	}
	template <typename T = bool> T get_IsDead() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE425C))(this);
	}
	template <typename T = bool> T get_IsHeavyAttack() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE42A8))(this);
	}
	template <typename T = void> T set_IsHeavyAttack(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE42B0))(this, value);
	}
	template <typename T = bool> T get_IsObserver() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDB3A4))(this);
	}
	template <typename T = uintptr_t> T get_RespawnType() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE42B8))(this);
	}
	template <typename T = void> T set_RespawnType(uintptr_t value) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE42C0))(this, value);
	}
	template <typename T = bool> T get_IsReviveWaitSwitchMainWeapon() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE42C8))(this);
	}
	template <typename T = void> T set_IsReviveWaitSwitchMainWeapon(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE42D0))(this, value);
	}
	template <typename T = double> T get_RespawnTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE42D8))(this);
	}
	template <typename T = void> T set_RespawnTime(double value) {
		return ((T (*)(PlayerInfo*, double))(Il2CppBase() + 0x1DE42E4))(this, value);
	}
	template <typename T = uint32_t> T get_LastMoveDataLogicNum() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE42F0))(this);
	}
	template <typename T = void> T set_LastMoveDataLogicNum(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE42F8))(this, value);
	}
	template <typename T = bool> T get_BTakeC4Clamp() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4470))(this);
	}
	template <typename T = void> T set_BTakeC4Clamp(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DC19F4))(this, value);
	}
	template <typename T = float> T get_FlashBangTimeScale() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4478))(this);
	}
	template <typename T = void> T set_FlashBangTimeScale(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE4480))(this, value);
	}
	template <typename T = float> T get_AttackScale() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4488))(this);
	}
	template <typename T = void> T set_AttackScale(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE4490))(this, value);
	}
	template <typename T = bool> T get_IsInDeadReplay() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4498))(this);
	}
	template <typename T = void> T set_IsInDeadReplay(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE44A0))(this, value);
	}
	template <typename T = bool> T get_HasSetDeadReplayPosition() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE44A8))(this);
	}
	template <typename T = void> T set_HasSetDeadReplayPosition(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE44B0))(this, value);
	}
	template <typename T = float> T get_MoveSpeedScale() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE44B8))(this);
	}
	template <typename T = void> T set_MoveSpeedScale(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE44C0))(this, value);
	}
	template <typename T = uint32_t> T get_PlayerStage() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE461C))(this);
	}
	template <typename T = void> T set_PlayerStage(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE4624))(this, value);
	}
	template <typename T = uint32_t> T get_GainedExp() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE462C))(this);
	}
	template <typename T = void> T set_GainedExp(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE4634))(this, value);
	}
	template <typename T = uint32_t> T get_Points() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE463C))(this);
	}
	template <typename T = void> T set_Points(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE4644))(this, value);
	}
	template <typename T = bool> T get_IsSprinting() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE464C))(this);
	}
	template <typename T = void> T set_IsSprinting(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE4654))(this, value);
	}
	template <typename T = float> T get_SprintChangeTime() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDC2C))(this);
	}
	template <typename T = void> T set_SprintChangeTime(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DDDC34))(this, value);
	}
	template <typename T = bool> T get_IsLargeKillStreakActor() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4674))(this);
	}
	template <typename T = void> T set_IsLargeKillStreakActor(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE467C))(this, value);
	}
	template <typename T = bool> T get_IsPlayFireIntervalChangedEffect() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4684))(this);
	}
	template <typename T = void> T set_IsPlayFireIntervalChangedEffect(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE468C))(this, value);
	}
	template <typename T = float> T get_MaxOxygen() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4694))(this);
	}
	template <typename T = void> T set_MaxOxygen(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE469C))(this, value);
	}
	template <typename T = float> T get_Oxygen() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE46A4))(this);
	}
	template <typename T = void> T set_Oxygen(float value) {
		return ((T (*)(PlayerInfo*, float))(Il2CppBase() + 0x1DE46AC))(this, value);
	}
	template <typename T = bool> T get_HasSelectBag() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE46B4))(this);
	}
	template <typename T = void> T set_HasSelectBag(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DD3DA0))(this, value);
	}
	template <typename T = int32_t> T get_SelectedBagID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC444C))(this);
	}
	template <typename T = void> T set_SelectedBagID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE46BC))(this, value);
	}
	template <typename T = uintptr_t> T get_PhysicsState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE46C4))(this);
	}
	template <typename T = void> T set_PhysicsState(uintptr_t value) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE46CC))(this, value);
	}
	template <typename T = int32_t> T get_MoveState() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE46D0))(this);
	}
	template <typename T = void> T set_MoveState(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE46D8))(this, value);
	}
	template <typename T = bool> T IsGoliath() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4708))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE47F0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE49A8))(this);
	}
	template <typename T = void> T SetLesserInfo(int32_t picId, int32_t frameId, Il2CppString* picUrl) {
		return ((T (*)(PlayerInfo*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1DE4A94))(this, picId, frameId, picUrl);
	}
	template <typename T = uint32_t> T GetMoveLogicNum() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4B94))(this);
	}
	template <typename T = void> T ResetForReconnect() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4C8C))(this);
	}
	template <typename T = void> T OnRoundStarted() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE51D0))(this);
	}
	template <typename T = void> T OnRoundEnded() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE52C0))(this);
	}
	template <typename T = void> T OnPlayerStateChanged(uintptr_t oldState) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE53B0))(this, oldState);
	}
	template <typename T = void> T OnUpdateTacticalVoiceUI() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE3848))(this);
	}
	template <typename T = void> T OnRoleChanged() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE5A2C))(this);
	}
	template <typename T = bool> T IsDiamondEnough(int32_t requiredCount) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE5B08))(this, requiredCount);
	}
	template <typename T = void> T OnLocalPlayerDiamondChanged() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE5C08))(this);
	}
	template <typename T = bool> T HasRespawnProtect() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE5CD0))(this);
	}
	template <typename T = bool> T get_reviveFromDeath() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE5DDC))(this);
	}
	template <typename T = void> T RemoveCarePackageKillStreak() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE5DF0))(this);
	}
	template <typename T = void> T AddKillStreakInfo(int32_t weaponID, int32_t score, int32_t count, bool isCarePackageStreak) {
		return ((T (*)(PlayerInfo*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1DE62A8))(this, weaponID, score, count, isCarePackageStreak);
	}
	template <typename T = void> T RemoveKillStreakInfo(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE5ED4))(this, weaponID);
	}
	template <typename T = bool> T HasKillStreak(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DD36D0))(this, weaponID);
	}
	template <typename T = int32_t> T GetKillStreakCount(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE6B3C))(this, weaponID);
	}
	template <typename T = bool> T HasKillStreak_1() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE6CF4))(this);
	}
	template <typename T = uintptr_t> T GetKillStreakInfo(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE6984))(this, weaponID);
	}
	template <typename T = int32_t> T GetKillStreakScore(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE6E08))(this, weaponID);
	}
	template <typename T = void> T RemoveAllKillStreakInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE4D68))(this);
	}
	template <typename T = unsigned char> T GetSide() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7050))(this);
	}
	template <typename T = void> T ResetLastUsedInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7134))(this);
	}
	template <typename T = void> T RecordWeaponInfo(uintptr_t inventory, uintptr_t weaponInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D857D4))(this, inventory, weaponInfo);
	}
	template <typename T = uintptr_t> T GetInventoryInfo(int32_t weaponID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE7358))(this, weaponID);
	}
	template <typename T = uintptr_t> T GetInventoryInfo_1(int32_t itemId, int32_t actorId) {
		return ((T (*)(PlayerInfo*, int32_t, int32_t))(Il2CppBase() + 0x1DE74F8))(this, itemId, actorId);
	}
	template <typename T = void> T AddScoreStreakToBag(int32_t itemID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE76EC))(this, itemID);
	}
	template <typename T = uint32_t> T get_NetWingsuitSkinID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7914))(this);
	}
	template <typename T = void> T set_NetWingsuitSkinID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE791C))(this, value);
	}
	template <typename T = uint32_t> T get_NetParachuteSkinID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7924))(this);
	}
	template <typename T = void> T set_NetParachuteSkinID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE792C))(this, value);
	}
	template <typename T = uint32_t> T get_NetBagID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7934))(this);
	}
	template <typename T = void> T set_NetBagID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE793C))(this, value);
	}
	template <typename T = uint32_t> T get_NetHeatID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7944))(this);
	}
	template <typename T = void> T set_NetHeatID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE794C))(this, value);
	}
	template <typename T = uint32_t> T get_NetVestID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7954))(this);
	}
	template <typename T = void> T set_NetVestID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE5B00))(this, value);
	}
	template <typename T = bool> T get_HaveVest() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DDDC3C))(this);
	}
	template <typename T = void> T set_HaveVest(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DDDC44))(this, value);
	}
	template <typename T = uint32_t> T get_NetClothID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE795C))(this);
	}
	template <typename T = void> T set_NetClothID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE7964))(this, value);
	}
	template <typename T = int32_t> T get_NetClothType() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE796C))(this);
	}
	template <typename T = void> T set_NetClothType(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE7974))(this, value);
	}
	template <typename T = uint32_t> T get_NetSuitID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE797C))(this);
	}
	template <typename T = void> T set_NetSuitID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE7984))(this, value);
	}
	template <typename T = uint32_t> T get_NetBodyID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE798C))(this);
	}
	template <typename T = void> T set_NetBodyID(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE7994))(this, value);
	}
	template <typename T = bool> T get_IsLEGO() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE799C))(this);
	}
	template <typename T = void> T set_IsLEGO(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE79A4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BagList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC3DC4))(this);
	}
	template <typename T = uintptr_t> T GetBag(int32_t bagId) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE79AC))(this, bagId);
	}
	template <typename T = int32_t> T GetBagCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7B54))(this);
	}
	template <typename T = uintptr_t> T GetSelectedBag() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE0D38))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSelectedBagInventoryList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7C54))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBagInventoryList(int32_t bagId) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE7D2C))(this, bagId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllBagInventoryList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE7F48))(this);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE810C))(this);
	}
	template <typename T = bool> T SwitchBag(int32_t bagID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE81DC))(this, bagID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PerkInfoList() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE8554))(this);
	}
	template <typename T = void> T OnSyncPerkInfo(bool addOrDelete, int32_t perkID, int32_t posIdx) {
		return ((T (*)(PlayerInfo*, bool, int32_t, int32_t))(Il2CppBase() + 0x1DE855C))(this, addOrDelete, perkID, posIdx);
	}
	template <typename T = void> T ClearPerkInfo() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE8980))(this);
	}
	template <typename T = int32_t> T GetPerkIDForBuff(int32_t buffID) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE8A84))(this, buffID);
	}
	template <typename T = bool> T IsSameTeamID(uint32_t otherPlayerID) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE8C44))(this, otherPlayerID);
	}
	template <typename T = bool> T IsSameTeam(uint32_t otherPlayerID) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE8E0C))(this, otherPlayerID);
	}
	template <typename T = void> T SetPlayerID(uint32_t playerID) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE9158))(this, playerID);
	}
	template <typename T = bool> T get_CanDeploySentryGun() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9230))(this);
	}
	template <typename T = void> T set_CanDeploySentryGun(bool value) {
		return ((T (*)(PlayerInfo*, bool))(Il2CppBase() + 0x1DE9238))(this, value);
	}
	template <typename T = bool> T IsTeamNumberOne(uintptr_t bMaxLevel) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE9240))(this, bMaxLevel);
	}
	template <typename T = Il2CppString*> T GetWeaponlevelSprite() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9318))(this);
	}
	template <typename T = int32_t> T GetWeaponLevel() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9438))(this);
	}
	template <typename T = void> T set_GoldBarCount(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DDCA28))(this, value);
	}
	template <typename T = uint32_t> T get_GoldBarCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9508))(this);
	}
	template <typename T = void> T set_KillConfirm(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE9510))(this, value);
	}
	template <typename T = uint32_t> T get_KillConfirm() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9518))(this);
	}
	template <typename T = void> T set_KillDeny(uint32_t value) {
		return ((T (*)(PlayerInfo*, uint32_t))(Il2CppBase() + 0x1DE9520))(this, value);
	}
	template <typename T = uint32_t> T get_KillDeny() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9528))(this);
	}
	template <typename T = uintptr_t> T GetInfoEventType() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9530))(this);
	}
	template <typename T = uintptr_t> T get_NewestMoveData() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE965C))(this);
	}
	template <typename T = void> T ClientForcePredictMoveDataLocation(Il2CppVector3 ClientPredictLocation) {
		return ((T (*)(PlayerInfo*, Il2CppVector3))(Il2CppBase() + 0x1DE96C8))(this, ClientPredictLocation);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PlayerInfo*, Il2CppVector3))(Il2CppBase() + 0x1DE97C8))(this, shift);
	}
	template <typename T = uintptr_t> T SimulateMoveData(uint32_t frame, Il2CppVector3 pos, Il2CppVector3 dir, Il2CppVector3 velocity, uintptr_t state, unsigned char extraByte) {
		return ((T (*)(PlayerInfo*, uint32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, unsigned char))(Il2CppBase() + 0x1DE9900))(this, frame, pos, dir, velocity, state, extraByte);
	}
	template <typename T = void> T SetZombieNewestMoveDataPos(Il2CppVector3 pos) {
		return ((T (*)(PlayerInfo*, Il2CppVector3))(Il2CppBase() + 0x1DE9BB4))(this, pos);
	}
	template <typename T = void> T RestNewestMoveData() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9CB4))(this);
	}
	template <typename T = void> T CheckAndRecordWeaponInfo(uintptr_t weaponInfo) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE9D88))(this, weaponInfo);
	}
	template <typename T = void> T CheckAndRecordWeaponInfo_1(int32_t lastMainWeaponActorID, uint32_t lastMainWeaponID) {
		return ((T (*)(PlayerInfo*, int32_t, uint32_t))(Il2CppBase() + 0x1DE9E7C))(this, lastMainWeaponActorID, lastMainWeaponID);
	}
	template <typename T = int32_t> T get_ULTWeaponID() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DC6E88))(this);
	}
	template <typename T = void> T set_ULTWeaponID(int32_t value) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x1DE9F70))(this, value);
	}
	template <typename T = uintptr_t> T get_PreInventoryChangeULTWeapon() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DE9F78))(this);
	}
	template <typename T = void> T SetPreInventoryChangeULTWeapon(uintptr_t setInventory) {
		return ((T (*)(PlayerInfo*, uintptr_t))(Il2CppBase() + 0x1DE9F80))(this, setInventory);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DEA1C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInfoEventType() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x1DEA1D0))(this);
	}

};

}
