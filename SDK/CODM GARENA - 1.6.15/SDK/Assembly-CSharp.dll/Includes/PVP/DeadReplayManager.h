#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ReleventPlayerInfos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ReleventPawns() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ViewTargetPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AimTargetPawn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_LastAimTargetPhysics() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_LastViewTargetPhysics() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_AfterFirstFrame() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = float> T& m_WaitForDeadAnimTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BeginTimer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_EndTimer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_SkillTimer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_SummonMgr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_SuspendTouchOver() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsSlowDown() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& bC4FinalKill() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = bool> T& bPlayedC4FinalKill() {
		return *(T*)((uintptr_t)this + 0x4F);
	}
	template <typename T = bool> T& bForcePlayOver() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& LastFrameTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bClosedAim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_PlayOverFromTouchScreenCallBack() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& viewTargetLastIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& aimTargetLastIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadReplayAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDeadPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRequestDeadPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitingForFinalKillReplayTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinalKillReplayTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStateActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildFakePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClonePalyerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFakePlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyFakePlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBatchAIAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedUpdateSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvDeadReplayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSuspendTouchOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverFromTouchScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckServerPlayOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayOverFromTouchScreenCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerPlayOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginTimeSlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTimeSlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateReplayPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnExsitInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReleventPawnByPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaitForDeadAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = uintptr_t> T get_DataContainer() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3445F98))(this);
	}
	template <typename T = uintptr_t> T get_CurReplayInfo() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344272C))(this);
	}
	template <typename T = bool> T get_IsSlowDown() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446168))(this);
	}
	template <typename T = void> T set_IsSlowDown(bool value) {
		return ((T (*)(DeadReplayManager*, bool))(Il2CppBase() + 0x3446170))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446178))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446260))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344639C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446E68))(this);
	}
	template <typename T = void> T OnRestartPlayer() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446F0C))(this);
	}
	template <typename T = void> T RenameActorID(uint32_t oldID, uint32_t newID) {
		return ((T (*)(DeadReplayManager*, uint32_t, uint32_t))(Il2CppBase() + 0x3446FB0))(this, oldID, newID);
	}
	template <typename T = void> T PreLoadReplayAsset(int32_t assetID) {
		return ((T (*)(DeadReplayManager*, int32_t))(Il2CppBase() + 0x3447094))(this, assetID);
	}
	template <typename T = float> T GetLeftTime() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3444D24))(this);
	}
	template <typename T = uintptr_t> T GetAimTarget() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x34449B4))(this);
	}
	template <typename T = bool> T IsDeadPawn(uint32_t playerID) {
		return ((T (*)(DeadReplayManager*, uint32_t))(Il2CppBase() + 0x344718C))(this, playerID);
	}
	template <typename T = void> T OnLocalPlayerDead(uintptr_t deadMsg) {
		return ((T (*)(DeadReplayManager*, uintptr_t))(Il2CppBase() + 0x34472C8))(this, deadMsg);
	}
	template <typename T = void> T DelayRequestDeadPlay() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x34474C8))(this);
	}
	template <typename T = void> T RequestDeadReplay() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3447620))(this);
	}
	template <typename T = void> T RequestFinalKillReplay() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344776C))(this);
	}
	template <typename T = void> T WaitingForFinalKillReplayTimeOut(float time) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x3447840))(this, time);
	}
	template <typename T = void> T OnFinalKillReplayTimeOut() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3447974))(this);
	}
	template <typename T = void> T OnResDeadReplay(uintptr_t msg) {
		return ((T (*)(DeadReplayManager*, uintptr_t))(Il2CppBase() + 0x3447AD0))(this, msg);
	}
	template <typename T = bool> T IsStateActive(int16_t data, uintptr_t biteState) {
		return ((T (*)(DeadReplayManager*, int16_t, uintptr_t))(Il2CppBase() + 0x3447BF8))(this, data, biteState);
	}
	template <typename T = void> T BuildFakePlayerInfo(uintptr_t srcPlayerInfo, uintptr_t destPlayerInfo, uint32_t fakePlayerID, uintptr_t playerState) {
		return ((T (*)(DeadReplayManager*, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3447CC4))(this, srcPlayerInfo, destPlayerInfo, fakePlayerID, playerState);
	}
	template <typename T = void> T ClonePalyerInfo(uintptr_t srcPlayerInfo, uintptr_t destPlayerInfo) {
		return ((T (*)(DeadReplayManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3447F80))(this, srcPlayerInfo, destPlayerInfo);
	}
	template <typename T = void> T CreateFakePlayerList() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3448264))(this);
	}
	template <typename T = void> T DestroyFakePlayerList() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x34496C4))(this);
	}
	template <typename T = void> T BeginBatchAIAttack() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3449C7C))(this);
	}
	template <typename T = void> T DelayedUpdateSkill() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3449D74))(this);
	}
	template <typename T = void> T OnRecvDeadReplayInfo(uintptr_t msg) {
		return ((T (*)(DeadReplayManager*, uintptr_t))(Il2CppBase() + 0x344A504))(this, msg);
	}
	template <typename T = void> T BeginReplay(uintptr_t replayType) {
		return ((T (*)(DeadReplayManager*, uintptr_t))(Il2CppBase() + 0x344C9FC))(this, replayType);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3446468))(this);
	}
	template <typename T = void> T SetSuspendTouchOver(bool suspend) {
		return ((T (*)(DeadReplayManager*, bool))(Il2CppBase() + 0x344D204))(this, suspend);
	}
	template <typename T = void> T PlayOverFromTouchScreen() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344159C))(this);
	}
	template <typename T = void> T CheckServerPlayOver() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344D690))(this);
	}
	template <typename T = void> T SetPlayOverFromTouchScreenCallBack(uintptr_t callBack) {
		return ((T (*)(DeadReplayManager*, uintptr_t))(Il2CppBase() + 0x344D74C))(this, callBack);
	}
	template <typename T = void> T ServerPlayOver() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344D2AC))(this);
	}
	template <typename T = void> T PreTick(float deltaTime) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x344D7F4))(this, deltaTime);
	}
	template <typename T = void> T ForceTick(float deltaTime) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x344DC98))(this, deltaTime);
	}
	template <typename T = void> T BeginTimeSlowDown() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344DF50))(this);
	}
	template <typename T = void> T EndTimeSlowDown() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x344D0E0))(this);
	}
	template <typename T = void> T SimulateReplayPawn(uintptr_t targetPawn, float replayTime, uintptr_t lastIndex, uintptr_t lastState, bool log) {
		return ((T (*)(DeadReplayManager*, uintptr_t, float, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x344E108))(this, targetPawn, replayTime, lastIndex, lastState, log);
	}
	template <typename T = void> T CheckPawnExsitInDeadReplay(uint32_t playerID, Il2CppVector3 pos, float upwardRotationAngle) {
		return ((T (*)(DeadReplayManager*, uint32_t, Il2CppVector3, float))(Il2CppBase() + 0x344FC08))(this, playerID, pos, upwardRotationAngle);
	}
	template <typename T = uintptr_t> T GetReleventPawnByPlayerID(uint32_t playerID) {
		return ((T (*)(DeadReplayManager*, uint32_t))(Il2CppBase() + 0x344A2C4))(this, playerID);
	}
	template <typename T = void> T SetWaitForDeadAnimTime(float time) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x3450188))(this, time);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3450234))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x345023C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3450244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x345024C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRestartPlayer() {
		return ((T (*)(DeadReplayManager*))(Il2CppBase() + 0x3450254))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreTick(float P0) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x345025C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceTick(float P0) {
		return ((T (*)(DeadReplayManager*, float))(Il2CppBase() + 0x3450264))(this, P0);
	}

};

}
