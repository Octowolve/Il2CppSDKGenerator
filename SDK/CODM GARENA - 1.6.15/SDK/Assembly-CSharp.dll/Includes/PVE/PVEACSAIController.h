#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEACSAIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEACSAIController"));
	}

	template <typename T = uintptr_t> T& teamInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LocalEnemyList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& currentDomVolume() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& currentCampSpot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& campFirst() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& domFirst() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& dodgeDir() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = float> T& dodgeDist() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& maxLostContactTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& CampAlertAngle() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& CampDuration() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& lastCover() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bShouldCheckPendingReaction() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& currentBotGoal() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& spawnBehaviorDone() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& squad() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlaySpecialAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnemyLost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEnemyLost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseATarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvaluateEnemey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickNewEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RootMotionTakeCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInTargetAttackRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttackEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FightEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveAlongPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChooseATarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ACSCmdMoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ACSCmdSWSFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingCmdFsmNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingSniperRifle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingShotgun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = bool> T get_BShouldCheckPendingReaction() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4364890))(this);
	}
	template <typename T = void> T set_BShouldCheckPendingReaction(bool value) {
		return ((T (*)(PVEACSAIController*, bool))(Il2CppBase() + 0x4364898))(this, value);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43648A0))(this);
	}
	template <typename T = bool> T CanPlaySpecialAnim(Il2CppString* animTriggerName) {
		return ((T (*)(PVEACSAIController*, Il2CppString*))(Il2CppBase() + 0x4365258))(this, animTriggerName);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4365300))(this, inPawn);
	}
	template <typename T = void> T UpdateEnemy() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43655A0))(this);
	}
	template <typename T = bool> T CheckEnemyLost() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4365654))(this);
	}
	template <typename T = void> T HandleEnemyLost() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43657BC))(this);
	}
	template <typename T = bool> T IsPawnInSight(uintptr_t InPawn, bool UseLineCheck) {
		return ((T (*)(PVEACSAIController*, uintptr_t, bool))(Il2CppBase() + 0x4365A98))(this, InPawn, UseLineCheck);
	}
	template <typename T = bool> T get_ShouldCheckPeripheralVision() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4365B64))(this);
	}
	template <typename T = uintptr_t> T ChooseATarget() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4365B6C))(this);
	}
	template <typename T = float> T EvaluateEnemey(uintptr_t enemyInfo) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4365F24))(this, enemyInfo);
	}
	template <typename T = void> T PickNewEnemy() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4366294))(this);
	}
	template <typename T = void> T UpdateEnemyInfo(uintptr_t inNewEnemy, uintptr_t inUpdateType) {
		return ((T (*)(PVEACSAIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4366350))(this, inNewEnemy, inUpdateType);
	}
	template <typename T = void> T SetEnemy(uintptr_t inEnemy) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4365864))(this, inEnemy);
	}
	template <typename T = void> T ReactToTakeDamage(uintptr_t instigator) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4366604))(this, instigator);
	}
	template <typename T = void> T ReactToSeePlayer(uintptr_t instigator) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x43666C4))(this, instigator);
	}
	template <typename T = bool> T TakeCover(uintptr_t inTargetCover, float inCoverDuration) {
		return ((T (*)(PVEACSAIController*, uintptr_t, float))(Il2CppBase() + 0x4366784))(this, inTargetCover, inCoverDuration);
	}
	template <typename T = bool> T RootMotionTakeCover(uintptr_t inTargetCover) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4366A48))(this, inTargetCover);
	}
	template <typename T = bool> T IsWeaponReady() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4366C34))(this);
	}
	template <typename T = bool> T IsInTargetAttackRange() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4366DC8))(this);
	}
	template <typename T = void> T AttackEnemy() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4366F88))(this);
	}
	template <typename T = bool> T FightEnemy(float attackDuration) {
		return ((T (*)(PVEACSAIController*, float))(Il2CppBase() + 0x4367230))(this, attackDuration);
	}
	template <typename T = void> T MoveAlongPath(uintptr_t inPathManager) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x43674BC))(this, inPathManager);
	}
	template <typename T = void> T ChooseATarget_1(uint32_t inPlayerID) {
		return ((T (*)(PVEACSAIController*, uint32_t))(Il2CppBase() + 0x4367884))(this, inPlayerID);
	}
	template <typename T = uintptr_t> T ACSCmdMoveTo(Il2CppVector3 pos, Il2CppQuaternion rot, float offset) {
		return ((T (*)(PVEACSAIController*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x4367A64))(this, pos, rot, offset);
	}
	template <typename T = uintptr_t> T ACSCmdSWSFollowPath(Il2CppString* inPathName) {
		return ((T (*)(PVEACSAIController*, Il2CppString*))(Il2CppBase() + 0x4367768))(this, inPathName);
	}
	template <typename T = void> T SetPendingCmdFsmNotification(Il2CppString* eventName) {
		return ((T (*)(PVEACSAIController*, Il2CppString*))(Il2CppBase() + 0x4367D18))(this, eventName);
	}
	template <typename T = bool> T DoSpawnBehavior() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4367E04))(this);
	}
	template <typename T = bool> T IsUsingSniperRifle() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x436814C))(this);
	}
	template <typename T = bool> T IsUsingShotgun() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43682E0))(this);
	}
	template <typename T = uintptr_t> T GetSquad() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4368474))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4368514))(this);
	}
	template <typename T = uintptr_t> T CmdPlayAnim(Il2CppString* animName, float animLen) {
		return ((T (*)(PVEACSAIController*, Il2CppString*, float))(Il2CppBase() + 0x4368674))(this, animName, animLen);
	}
	template <typename T = uintptr_t> T CmdPlayAnimationState(Il2CppString* inAnimStateName, float inAnimStateLength) {
		return ((T (*)(PVEACSAIController*, Il2CppString*, float))(Il2CppBase() + 0x43687AC))(this, inAnimStateName, inAnimStateLength);
	}
	template <typename T = bool> T CheckEnemyLostm__0(uintptr_t e) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x43688E4))(this, e);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43689B0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanPlaySpecialAnim(Il2CppString* P0) {
		return ((T (*)(PVEACSAIController*, Il2CppString*))(Il2CppBase() + 0x43689B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4368A60))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPawnInSight(uintptr_t P0, bool P1) {
		return ((T (*)(PVEACSAIController*, uintptr_t, bool))(Il2CppBase() + 0x4368A64))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ChooseATarget() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x4368A6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReactToTakeDamage(uintptr_t P0) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4368D4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReactToSeePlayer(uintptr_t P0) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4368E08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_MoveAlongPath(uintptr_t P0) {
		return ((T (*)(PVEACSAIController*, uintptr_t))(Il2CppBase() + 0x4368F1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPendingCmdFsmNotification(Il2CppString* P0) {
		return ((T (*)(PVEACSAIController*, Il2CppString*))(Il2CppBase() + 0x4368FF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LateUpdate() {
		return ((T (*)(PVEACSAIController*))(Il2CppBase() + 0x43690CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CmdPlayAnim(Il2CppString* P0, float P1) {
		return ((T (*)(PVEACSAIController*, Il2CppString*, float))(Il2CppBase() + 0x43690D0))(this, P0, P1);
	}

};

}
