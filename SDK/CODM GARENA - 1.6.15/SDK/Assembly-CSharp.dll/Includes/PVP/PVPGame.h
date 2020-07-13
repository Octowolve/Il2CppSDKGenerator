#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGame"));
	}

	template <typename T = uintptr_t> T& DeadReplayManager() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& BuildMgr() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& UAVAirplaneMgr() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& SentryGunManager() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& HelicopterPawnMgr() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& VTOLPawnMgr() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& CarePackageManager() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& CarePackagePlanePawnManager() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& NuclearBombManager() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& PropPawnMgr() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& UIPreZMgr() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& HiveProjectileMgr() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ExplodeFireMgr() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& ElectricShockCarPawnMgr() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& SignManager() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& ShadowBladeSmokeMgr() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& bDebugOBAI() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGoliathOnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectateSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearKillerIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseGoliathHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScreenAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpecialHandlingForReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordForHideInReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginTimeSlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNonPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllKillStreaks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenSceneFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_DeadReplayManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADAA80))(this);
	}
	template <typename T = void> T set_DeadReplayManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA14))(this, value);
	}
	template <typename T = uintptr_t> T get_BuildMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA1C))(this);
	}
	template <typename T = void> T set_BuildMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA24))(this, value);
	}
	template <typename T = uintptr_t> T get_UAVAirplaneMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA2C))(this);
	}
	template <typename T = void> T set_UAVAirplaneMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA34))(this, value);
	}
	template <typename T = uintptr_t> T get_SentryGunManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA3C))(this);
	}
	template <typename T = void> T set_SentryGunManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA44))(this, value);
	}
	template <typename T = uintptr_t> T get_HelicopterPawnMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA4C))(this);
	}
	template <typename T = void> T set_HelicopterPawnMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA54))(this, value);
	}
	template <typename T = uintptr_t> T get_VTOLPawnMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA5C))(this);
	}
	template <typename T = void> T set_VTOLPawnMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA64))(this, value);
	}
	template <typename T = uintptr_t> T get_CarePackageManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA6C))(this);
	}
	template <typename T = void> T set_CarePackageManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA74))(this, value);
	}
	template <typename T = uintptr_t> T get_CarePackagePlanePawnManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA7C))(this);
	}
	template <typename T = void> T set_CarePackagePlanePawnManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA84))(this, value);
	}
	template <typename T = uintptr_t> T get_NuclearBombManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA8C))(this);
	}
	template <typename T = void> T set_NuclearBombManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDA94))(this, value);
	}
	template <typename T = uintptr_t> T get_PropPawnMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDA9C))(this);
	}
	template <typename T = void> T set_PropPawnMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAA4))(this, value);
	}
	template <typename T = uintptr_t> T get_UIPreZMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDAAC))(this);
	}
	template <typename T = void> T set_UIPreZMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAB4))(this, value);
	}
	template <typename T = uintptr_t> T get_HiveProjectileMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDABC))(this);
	}
	template <typename T = void> T set_HiveProjectileMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAC4))(this, value);
	}
	template <typename T = uintptr_t> T get_ExplodeFireMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDACC))(this);
	}
	template <typename T = void> T set_ExplodeFireMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAD4))(this, value);
	}
	template <typename T = uintptr_t> T get_ElectricShockCarPawnMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDADC))(this);
	}
	template <typename T = void> T set_ElectricShockCarPawnMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAE4))(this, value);
	}
	template <typename T = uintptr_t> T get_SignManager() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDAEC))(this);
	}
	template <typename T = void> T set_SignManager(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDAF4))(this, value);
	}
	template <typename T = uintptr_t> T get_ShadowBladeSmokeMgr() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDAFC))(this);
	}
	template <typename T = void> T set_ShadowBladeSmokeMgr(uintptr_t value) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADDB04))(this, value);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDB0C))(this);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADDD80))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADE18C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADE668))(this);
	}
	template <typename T = void> T ProcessGoliathOnRoundEnd() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADE8A4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVPGame*, float))(Il2CppBase() + 0x2ADED1C))(this, deltaTime);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADEE30))(this, viewTarget);
	}
	template <typename T = bool> T CheckSpectatePlayerCount(uintptr_t gameInfo) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADF1BC))(this, gameInfo);
	}
	template <typename T = bool> T CheckSpectateSameTeam(uintptr_t viewPawn) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2ADF4A0))(this, viewPawn);
	}
	template <typename T = uintptr_t> T SpawnLocalPawn(uintptr_t controller, uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(PVPGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x2ADF5E8))(this, controller, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = void> T ClearKillerIndicator() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADF76C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADF8A4))(this);
	}
	template <typename T = void> T CloseGoliathHUD() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADFB84))(this);
	}
	template <typename T = void> T LoadScreenAsset() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADFF0C))(this);
	}
	template <typename T = void> T SpecialHandlingForReconnect() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADFFC8))(this);
	}
	template <typename T = void> T PlayerLogout(uint32_t playerID) {
		return ((T (*)(PVPGame*, uint32_t))(Il2CppBase() + 0x2AE0060))(this, playerID);
	}
	template <typename T = void> T RecordForHideInReplay(uintptr_t go) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2AE02A0))(this, go);
	}
	template <typename T = void> T PlayerLogin(uint32_t playerID, uint32_t actorID, uintptr_t camp, Il2CppString* nickName, unsigned char loginMsg, int32_t picId, int32_t frameId, Il2CppString* PicUrl, int32_t LadderScore, uint64_t roleID, int32_t moveState, int32_t LadderLevel, uint32_t ownerPlayerID) {
		return ((T (*)(PVPGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x2AE0378))(this, playerID, actorID, camp, nickName, loginMsg, picId, frameId, PicUrl, LadderScore, roleID, moveState, LadderLevel, ownerPlayerID);
	}
	template <typename T = void> T OnBeginTimeSlowDown() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0540))(this);
	}
	template <typename T = uintptr_t> T OnSpawnNonPlayer(uintptr_t Msg) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2AE0830))(this, Msg);
	}
	template <typename T = void> T DestroyPawn(uint32_t PlayerID) {
		return ((T (*)(PVPGame*, uint32_t))(Il2CppBase() + 0x2AE0A0C))(this, PlayerID);
	}
	template <typename T = void> T RemoveAllKillStreaks() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2ADE3D4))(this);
	}
	template <typename T = void> T OnOpenSceneFinish() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0C10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0C18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0C20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0C28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPGame*, float))(Il2CppBase() + 0x2AE0C30))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2AE0C38))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnLocalPawn(uintptr_t P0, uint32_t P1, uint64_t P2, uint32_t P3, Il2CppVector3 P4, Il2CppQuaternion P5, uintptr_t P6) {
		return ((T (*)(PVPGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x2AE0C40))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0CA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadScreenAsset() {
		return ((T (*)(PVPGame*))(Il2CppBase() + 0x2AE0CA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogout(uint32_t P0) {
		return ((T (*)(PVPGame*, uint32_t))(Il2CppBase() + 0x2AE0CB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RecordForHideInReplay(uintptr_t P0) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2AE0CB8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogin(uint32_t P0, uint32_t P1, uintptr_t P2, Il2CppString* P3, unsigned char P4, int32_t P5, int32_t P6, Il2CppString* P7, int32_t P8, uint64_t P9, int32_t P10, int32_t P11, uint32_t P12) {
		return ((T (*)(PVPGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x2AE0CC0))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_OnSpawnNonPlayer(uintptr_t P0) {
		return ((T (*)(PVPGame*, uintptr_t))(Il2CppBase() + 0x2AE0D30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn(uint32_t P0) {
		return ((T (*)(PVPGame*, uint32_t))(Il2CppBase() + 0x2AE0D38))(this, P0);
	}

};

}
