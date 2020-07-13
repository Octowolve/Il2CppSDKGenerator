#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVESPBotController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVESPBotController"));
	}

	template <typename T = bool> T& pendingNewDecision() {
		return *(T*)((uintptr_t)this + 0xB5);
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
	template <typename T = uintptr_t> T& currentBotGoal() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& spawnBehaviorDone() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& squad() {
		return *(T*)((uintptr_t)this + 0xE8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeNewDecision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecisionCycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnemyLost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEnemyLost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBehindCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseATarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvaluateEnemey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickNewEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldTakeCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInTargetAttackRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Camp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseBestCampSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FightEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEngageFight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DominateObjective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomPointInsideCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseBestDomVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCombatMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RushToEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCombatMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DodgeEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseBestCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RateCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingSniperRifle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingShotgun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404A27C))(this);
	}
	template <typename T = bool> T CanPlaySpecialAnim(Il2CppString* animTriggerName) {
		return ((T (*)(PVESPBotController*, Il2CppString*))(Il2CppBase() + 0x404A894))(this, animTriggerName);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404A93C))(this, inPawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVESPBotController*, float))(Il2CppBase() + 0x404AAAC))(this, deltaTime);
	}
	template <typename T = void> T MakeNewDecision() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404ADA4))(this);
	}
	template <typename T = void> T DecisionCycle(float deltaTime) {
		return ((T (*)(PVESPBotController*, float))(Il2CppBase() + 0x404AE50))(this, deltaTime);
	}
	template <typename T = void> T UpdateEnemy() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404ACF0))(this);
	}
	template <typename T = bool> T CheckEnemyLost() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404BD34))(this);
	}
	template <typename T = void> T HandleEnemyLost() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404BE9C))(this);
	}
	template <typename T = bool> T IsBehindCover() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404C184))(this);
	}
	template <typename T = bool> T IsPawnInSight(uintptr_t InPawn, bool UseLineCheck) {
		return ((T (*)(PVESPBotController*, uintptr_t, bool))(Il2CppBase() + 0x404C230))(this, InPawn, UseLineCheck);
	}
	template <typename T = bool> T get_ShouldCheckPeripheralVision() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404C2FC))(this);
	}
	template <typename T = uintptr_t> T ChooseATarget() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404C304))(this);
	}
	template <typename T = float> T EvaluateEnemey(uintptr_t enemyInfo) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404C610))(this, enemyInfo);
	}
	template <typename T = void> T PickNewEnemy() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404B610))(this);
	}
	template <typename T = void> T UpdateEnemyInfo(uintptr_t inNewEnemy, uintptr_t inUpdateType) {
		return ((T (*)(PVESPBotController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x404C8CC))(this, inNewEnemy, inUpdateType);
	}
	template <typename T = void> T SetEnemy(uintptr_t inEnemy) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404BF44))(this, inEnemy);
	}
	template <typename T = void> T ReactToTakeDamage(uintptr_t instigator) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404CB84))(this, instigator);
	}
	template <typename T = void> T ReactToSeePlayer(uintptr_t instigator) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404CC38))(this, instigator);
	}
	template <typename T = bool> T TakeCover() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404B6CC))(this);
	}
	template <typename T = bool> T ShouldTakeCover() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404CF40))(this);
	}
	template <typename T = bool> T IsWeaponReady() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404D000))(this);
	}
	template <typename T = bool> T IsInTargetAttackRange() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404D194))(this);
	}
	template <typename T = bool> T Camp() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404D354))(this);
	}
	template <typename T = uintptr_t> T ChooseBestCampSpot(uintptr_t campSpotType) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404D8B4))(this, campSpotType);
	}
	template <typename T = bool> T ShouldCamp() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404DB68))(this);
	}
	template <typename T = bool> T FightEnemy() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404B8F4))(this);
	}
	template <typename T = bool> T ShouldEngageFight() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404DCB0))(this);
	}
	template <typename T = bool> T ShouldDomArea() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404DD70))(this);
	}
	template <typename T = bool> T DominateObjective() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404DE80))(this);
	}
	template <typename T = Il2CppVector3> T GetRandomPointInsideCircle(Il2CppVector3 center, float inRadius) {
		return ((T (*)(PVESPBotController*, Il2CppVector3, float))(Il2CppBase() + 0x404E314))(this, center, inRadius);
	}
	template <typename T = uintptr_t> T ChooseBestDomVolume() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404E114))(this);
	}
	template <typename T = bool> T SearchKill() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404BA90))(this);
	}
	template <typename T = bool> T DoSpawnBehavior() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404AF8C))(this);
	}
	template <typename T = void> T StartCombatMove() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404E46C))(this);
	}
	template <typename T = void> T RushToEnemy() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404E704))(this);
	}
	template <typename T = void> T EndCombatMove() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404EEAC))(this);
	}
	template <typename T = void> T DodgeEnemy() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404E91C))(this);
	}
	template <typename T = uintptr_t> T ChooseBestCover() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404CCEC))(this);
	}
	template <typename T = float> T RateCover(uintptr_t cover) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404EFE0))(this, cover);
	}
	template <typename T = bool> T IsUsingSniperRifle() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404D720))(this);
	}
	template <typename T = bool> T IsUsingShotgun() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404E570))(this);
	}
	template <typename T = uintptr_t> T GetSquad() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F3E4))(this);
	}
	template <typename T = bool> T CheckEnemyLostm__0(uintptr_t e) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404F484))(this, e);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F550))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanPlaySpecialAnim(Il2CppString* P0) {
		return ((T (*)(PVESPBotController*, Il2CppString*))(Il2CppBase() + 0x404F558))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404F560))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVESPBotController*, float))(Il2CppBase() + 0x404F568))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPawnInSight(uintptr_t P0, bool P1) {
		return ((T (*)(PVESPBotController*, uintptr_t, bool))(Il2CppBase() + 0x404F570))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ChooseATarget() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReactToTakeDamage(uintptr_t P0) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404F580))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReactToSeePlayer(uintptr_t P0) {
		return ((T (*)(PVESPBotController*, uintptr_t))(Il2CppBase() + 0x404F588))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldEngageFight() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartCombatMove() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndCombatMove() {
		return ((T (*)(PVESPBotController*))(Il2CppBase() + 0x404F5A0))(this);
	}

};

}
