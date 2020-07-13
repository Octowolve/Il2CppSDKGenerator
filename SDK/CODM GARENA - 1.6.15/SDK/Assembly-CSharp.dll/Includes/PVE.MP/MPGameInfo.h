#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPGameInfo"));
	}

	template <typename T = uintptr_t> T& m_GpsManager() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& m_RoundStage() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& AIJumpDownExtraVelocity() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_MPRewardLevelDropInfo() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& m_BossRoundBossID() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> static T& MaxAllowPlaySoundNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CurrentPlaySoundNum() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& m_ZoneCount() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ZoneInfoList() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uint32_t> T& m_RevivalCoinCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& infiniteCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& lastActiveSceneIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& lastPreloadSceneIndex() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZoneInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZoneInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchBossPawnStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStageChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecieveRewardLevelDropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDropGoldCountByMonsterID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreasePlaySoundAINum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreasePlaySoundAINum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAIPawnEnableSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPlayerInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSceneUnused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611A88))(this);
	}
	template <typename T = bool> T IsMPPVEGame() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611B90))(this);
	}
	template <typename T = int32_t> T get_RoundStage() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C30))(this);
	}
	template <typename T = void> T set_RoundStage(int32_t value) {
		return ((T (*)(MPGameInfo*, int32_t))(Il2CppBase() + 0x4611C38))(this, value);
	}
	template <typename T = void> T set_BossRoundBossID(int32_t value) {
		return ((T (*)(MPGameInfo*, int32_t))(Il2CppBase() + 0x4609F9C))(this, value);
	}
	template <typename T = int32_t> T get_BossRoundBossID() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C58))(this);
	}
	template <typename T = bool> T get_ShowEnemyOnRadar() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C60))(this);
	}
	template <typename T = bool> T get_CanAutoPickUpWeapon() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C68))(this);
	}
	template <typename T = int32_t> T get_ZoneCount() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C70))(this);
	}
	template <typename T = void> T set_ZoneCount(int32_t value) {
		return ((T (*)(MPGameInfo*, int32_t))(Il2CppBase() + 0x460D140))(this, value);
	}
	template <typename T = void> T SetZoneInfoList(Il2CppArray<uintptr_t>* zoneInfos) {
		return ((T (*)(MPGameInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x460D148))(this, zoneInfos);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetZoneInfoList() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611C78))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611D18))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4611D20))(this);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(MPGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x4611E68))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x4612164))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t pInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x461240C))(this, pInfo, propertyID, value, varType);
	}
	template <typename T = uint32_t> T get_RevivalCoinCount() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4613C90))(this);
	}
	template <typename T = void> T set_RevivalCoinCount(uint32_t value) {
		return ((T (*)(MPGameInfo*, uint32_t))(Il2CppBase() + 0x4613314))(this, value);
	}
	template <typename T = void> T SwitchBossPawnStage(uint32_t inPlayerID, uint32_t inStage) {
		return ((T (*)(MPGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4613110))(this, inPlayerID, inStage);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4613C98))(this);
	}
	template <typename T = void> T OnRoundStageChanged() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4613EA0))(this);
	}
	template <typename T = void> T OnRecieveRewardLevelDropInfo(uintptr_t inDropInfo) {
		return ((T (*)(MPGameInfo*, uintptr_t))(Il2CppBase() + 0x460CBDC))(this, inDropInfo);
	}
	template <typename T = int32_t> T GetDropGoldCountByMonsterID(int32_t inMonsterID) {
		return ((T (*)(MPGameInfo*, int32_t))(Il2CppBase() + 0x4614150))(this, inMonsterID);
	}
	template <typename T = void> T IncreasePlaySoundAINum() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x461432C))(this);
	}
	template <typename T = void> T DecreasePlaySoundAINum() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x46143D4))(this);
	}
	template <typename T = bool> T CanAIPawnEnableSound() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x461449C))(this);
	}
	template <typename T = bool> T IsBoss(uintptr_t pawn) {
		return ((T (*)(MPGameInfo*, uintptr_t))(Il2CppBase() + 0x4614548))(this, pawn);
	}
	template <typename T = void> T NotifyPlayerInfoChanged(uintptr_t playerInfo, uint32_t propertyID) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x4614640))(this, playerInfo, propertyID);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4614870))(this);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(MPGameInfo*, bool))(Il2CppBase() + 0x4614878))(this, infinite);
	}
	template <typename T = uintptr_t> T ChangeGps(Il2CppString* scenePath) {
		return ((T (*)(MPGameInfo*, Il2CppString*))(Il2CppBase() + 0x4614920))(this, scenePath);
	}
	template <typename T = bool> T IsSceneUnused(Il2CppString* scenePath) {
		return ((T (*)(MPGameInfo*, Il2CppString*))(Il2CppBase() + 0x4614A14))(this, scenePath);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(MPGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4614BD0))(this, propertyID, value, varType);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4615664))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMPPVEGame() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x461566C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x4615674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(MPGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x461567C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0, uint64_t P1) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x4615684))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x46156A4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged() {
		return ((T (*)(MPGameInfo*))(Il2CppBase() + 0x46156C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyPlayerInfoChanged(uintptr_t P0, uint32_t P1) {
		return ((T (*)(MPGameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x46156D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(MPGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x46156D8))(this, P0, P1, P2);
	}

};

}
