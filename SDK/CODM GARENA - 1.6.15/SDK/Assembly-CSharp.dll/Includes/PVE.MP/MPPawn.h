#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPawn"));
	}

	template <typename T = int32_t> T& m_ReviveTotalTime() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = float> T& m_RespawnTime() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = bool> T& m_ShouldPerformPhysics() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = bool> T& m_UsingItem() {
		return *(T*)((uintptr_t)this + 0xBD5);
	}
	template <typename T = bool> T& insidePortalVolume() {
		return *(T*)((uintptr_t)this + 0xBD6);
	}
	template <typename T = bool> T& bAskForHelp() {
		return *(T*)((uintptr_t)this + 0xBD7);
	}
	template <typename T = bool> T& bBeingGrapedFace() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = uintptr_t> T& m_Base() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = bool> T& m_LastTickUpdateCureTeammate() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = float> T& lastCheckDyingAnimTime() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = uint32_t> T& lastSaveTargetID() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = int32_t> T& electricPerk() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = bool> T& m_ShouldNavMeshMove() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = float> static T& AutoRotateDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AutoRotateSmoothTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AutoRotateMaxFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AutoRotateLookForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AutoPathStopDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsAutoRotating() {
		return *(T*)((uintptr_t)this + 0xBF1);
	}
	template <typename T = float> T& m_LastPlayKillEnemyEffectTime() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = uintptr_t> T& GetingItemObj() {
		return *(T*)((uintptr_t)this + 0xBF8);
	}
	template <typename T = bool> T& bReadyPlayGetPAPAnim() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = bool> T& forcedKnife() {
		return *(T*)((uintptr_t)this + 0xBFD);
	}
	template <typename T = float> T& m_DyingEyeHeight() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = int32_t> T& kDyingWeaponID() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = uintptr_t> T& saveTargetPawn() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = bool> T& IsSavingTeammate() {
		return *(T*)((uintptr_t)this + 0xC0C);
	}
	template <typename T = bool> T& isUltCD() {
		return *(T*)((uintptr_t)this + 0xC0D);
	}
	template <typename T = float> T& kZombieAudioEffectRange() {
		return *(T*)((uintptr_t)this + 0xC10);
	}
	template <typename T = float> T& kMinTriggerAudioTimeInterval() {
		return *(T*)((uintptr_t)this + 0xC14);
	}
	template <typename T = int32_t> T& kZombieAudioMaxCount() {
		return *(T*)((uintptr_t)this + 0xC18);
	}
	template <typename T = int32_t> T& kZombieAudioMinCount() {
		return *(T*)((uintptr_t)this + 0xC1C);
	}
	template <typename T = bool> T& zombieAudioEffectTriggered() {
		return *(T*)((uintptr_t)this + 0xC20);
	}
	template <typename T = float> T& lastZombieAudioEffectTiggerTime() {
		return *(T*)((uintptr_t)this + 0xC24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventoryManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalPawnItemSkillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelInvokeSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoteUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSwitchKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarMySelfSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockPlayerStateGetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGetCoinAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGetPerkAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLocalPawnReammo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGetPAPAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPAP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePlayerUesPAPState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelGetingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimingNetworkAIPawnBloodHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentPlayerEnterDyingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponHiddenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNotCureTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDyingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeaponByPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllStateWhenStartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDeathCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCallHelpSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFastenByActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUltPickUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanInteractiveLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUltPickUpCDState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ZombieAudioTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearNerverousAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	template <typename T = int32_t> T get_ReviveTotalTime() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C44))(this);
	}
	template <typename T = void> T set_ReviveTotalTime(int32_t value) {
		return ((T (*)(MPPawn*, int32_t))(Il2CppBase() + 0x4615C4C))(this, value);
	}
	template <typename T = float> T get_RespawnTime() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C54))(this);
	}
	template <typename T = void> T set_RespawnTime(float value) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x4615C5C))(this, value);
	}
	template <typename T = bool> T get_ShouldPerformPhysics() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C64))(this);
	}
	template <typename T = void> T set_ShouldPerformPhysics(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x4615C6C))(this, value);
	}
	template <typename T = bool> T get_ShouldCheckCollisionWithLocalPlayer() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C74))(this);
	}
	template <typename T = Il2CppQuaternion> T get_AimRotation() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C7C))(this);
	}
	template <typename T = bool> T get_UsingItem() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C8C))(this);
	}
	template <typename T = void> T set_UsingItem(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x4615C94))(this, value);
	}
	template <typename T = bool> T get_insidePortalVolume() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615C9C))(this);
	}
	template <typename T = void> T set_insidePortalVolume(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x4615CA4))(this, value);
	}
	template <typename T = bool> T get_bAskForHelp() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615CAC))(this);
	}
	template <typename T = void> T set_bAskForHelp(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x460D8D4))(this, value);
	}
	template <typename T = bool> T get_bBeingGrapedFace() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4615CB4))(this);
	}
	template <typename T = void> T set_bBeingGrapedFace(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x4615CBC))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x4615CC4))(this, info);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x4616394))(this, deltaTime);
	}
	template <typename T = void> T CreateInventoryManager() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46173B4))(this);
	}
	template <typename T = void> T CheckDyingTeammates() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4616C00))(this);
	}
	template <typename T = void> T AddLocalPawnItemSkillInfo() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4616208))(this);
	}
	template <typename T = bool> T CanSprint() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4617484))(this);
	}
	template <typename T = bool> T CanProne() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46175EC))(this);
	}
	template <typename T = bool> T CanChangeWeapon() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4617754))(this);
	}
	template <typename T = void> T OnChangeClip() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461781C))(this);
	}
	template <typename T = void> T PerformPhysics(float deltaTime) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x46178E0))(this, deltaTime);
	}
	template <typename T = bool> T get_ShouldNavMeshMove() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46179D4))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46179DC))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(MPPawn*, bool, uintptr_t))(Il2CppBase() + 0x4617B48))(this, isHeadShot, damageType);
	}
	template <typename T = void> T CancelInvokeSwitchView() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618868))(this);
	}
	template <typename T = void> T SwitchView() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46183BC))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618954))(this);
	}
	template <typename T = void> T StopDriving() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618A50))(this);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 deltaEulerAngles) {
		return ((T (*)(MPPawn*, Il2CppVector3))(Il2CppBase() + 0x4618B98))(this, deltaEulerAngles);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618C94))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618D58))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618E00))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_FirstPerson() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618EB0))(this);
	}
	template <typename T = Il2CppQuaternion> T GetCameraRotation() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618F60))(this);
	}
	template <typename T = void> T OnKillEnemy(bool isHeadShotKill, int32_t weaponID) {
		return ((T (*)(MPPawn*, bool, int32_t))(Il2CppBase() + 0x4619010))(this, isHeadShotKill, weaponID);
	}
	template <typename T = bool> T CanJump() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4619158))(this);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x4619200))(this, deltaTime);
	}
	template <typename T = void> T RemoteUseItem(uint64_t itemId, int32_t useItemType, float extendTime) {
		return ((T (*)(MPPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x46193E4))(this, itemId, useItemType, extendTime);
	}
	template <typename T = void> T UseItem(uint64_t itemID, int32_t useItemType, float extendTime) {
		return ((T (*)(MPPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x461951C))(this, itemID, useItemType, extendTime);
	}
	template <typename T = void> T ResetPlayer() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x46196B8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461980C))(this);
	}
	template <typename T = void> T CacheColliders(uintptr_t go, bool clearCache) {
		return ((T (*)(MPPawn*, uintptr_t, bool))(Il2CppBase() + 0x4619954))(this, go, clearCache);
	}
	template <typename T = void> T SyncPosition(Il2CppVector3 pos, bool checkColliders) {
		return ((T (*)(MPPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x4619B34))(this, pos, checkColliders);
	}
	template <typename T = bool> T ForceSwitchKnife() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4619C68))(this);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4619D48))(this);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t camp) {
		return ((T (*)(MPPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4619E44))(this, playerID, actorID, camp);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4619F9C))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarMySelfSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x461A044))(this, eTacticalPawnState);
	}
	template <typename T = void> T LockPlayerStateGetItem(bool bLock) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461A104))(this, bLock);
	}
	template <typename T = void> T PlayGetCoinAnim(bool blueCoin) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461A20C))(this, blueCoin);
	}
	template <typename T = uintptr_t> T GetCoin(bool blueCoin) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461A68C))(this, blueCoin);
	}
	template <typename T = void> T TryChangeClip(bool auto_) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461A780))(this, auto_);
	}
	template <typename T = void> T PlayGetPerkAnim(int32_t perkId) {
		return ((T (*)(MPPawn*, int32_t))(Il2CppBase() + 0x461A840))(this, perkId);
	}
	template <typename T = void> T StopLocalPawnReammo() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461A2F8))(this);
	}
	template <typename T = uintptr_t> T GetPerk(int32_t perkId) {
		return ((T (*)(MPPawn*, int32_t))(Il2CppBase() + 0x461A92C))(this, perkId);
	}
	template <typename T = void> T PlayGetPAPAnim() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461AA1C))(this);
	}
	template <typename T = uintptr_t> T GetPAP() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461AAFC))(this);
	}
	template <typename T = void> T ChangePlayerUesPAPState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461ABE4))(this);
	}
	template <typename T = void> T CancelGetingItem() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461AC88))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461AE70))(this);
	}
	template <typename T = void> T UpdateAimingNetworkAIPawnBloodHUD() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4616994))(this);
	}
	template <typename T = void> T ToggleKnife(bool show, uintptr_t target) {
		return ((T (*)(MPPawn*, bool, uintptr_t))(Il2CppBase() + 0x461AF34))(this, show, target);
	}
	template <typename T = bool> T get_IsDying() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461B874))(this);
	}
	template <typename T = void> T CurrentPlayerEnterDyingState(bool isEnterDying, uintptr_t oldState) {
		return ((T (*)(MPPawn*, bool, uintptr_t))(Il2CppBase() + 0x461B8B4))(this, isEnterDying, oldState);
	}
	template <typename T = void> T EndRevive() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461C724))(this);
	}
	template <typename T = bool> T get_IsSavingTeammate() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461C8AC))(this);
	}
	template <typename T = void> T set_IsSavingTeammate(bool value) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461C8B4))(this, value);
	}
	template <typename T = void> T BeginSave(uint32_t targetID) {
		return ((T (*)(MPPawn*, uint32_t))(Il2CppBase() + 0x460AB64))(this, targetID);
	}
	template <typename T = void> T CancelSave() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461C8BC))(this);
	}
	template <typename T = void> T EndSave() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x460AFB4))(this);
	}
	template <typename T = bool> T GetWeaponHiddenState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461CA64))(this);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(MPPawn*, uintptr_t, bool))(Il2CppBase() + 0x461CB50))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T CanNotCureTeammates(uint32_t playerid) {
		return ((T (*)(MPPawn*, uint32_t))(Il2CppBase() + 0x460A9F0))(this, playerid);
	}
	template <typename T = void> T PlayDyingAnim() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461CD84))(this);
	}
	template <typename T = void> T EndCrouch(bool immediately, bool setEyeHeightInImmediately, bool foce) {
		return ((T (*)(MPPawn*, bool, bool, bool))(Il2CppBase() + 0x461D1CC))(this, immediately, setEyeHeightInImmediately, foce);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461D2C8))(this);
	}
	template <typename T = uintptr_t> T GiveWeaponByPickUp(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLevel, int32_t crossHairItemID) {
		return ((T (*)(MPPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x461D38C))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLevel, crossHairItemID);
	}
	template <typename T = void> T TrySwitchWeapon(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID, bool isServerData) {
		return ((T (*)(MPPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x461D4C0))(this, itemId, slot, actorID, itemLevel, skinID, isServerData);
	}
	template <typename T = void> T StopAllStateWhenStartAim() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461D5DC))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x461D6A0))(this, eTacticalPawnState);
	}
	template <typename T = void> T CalcDeathCam(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(MPPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x461D760))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T PlayCallHelpSound() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4608F60))(this);
	}
	template <typename T = void> T OnFastenByActor(uint32_t actorID) {
		return ((T (*)(MPPawn*, uint32_t))(Il2CppBase() + 0x461D86C))(this, actorID);
	}
	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461D98C))(this);
	}
	template <typename T = bool> T GetUltPickUpState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DA40))(this);
	}
	template <typename T = bool> T CheckCanInteractiveLevelObject() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DAE8))(this);
	}
	template <typename T = void> T SetUltPickUpCDState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DBBC))(this);
	}
	template <typename T = uintptr_t> T EndCD() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DC84))(this);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DD6C))(this);
	}
	template <typename T = void> T ZombieAudioTimer() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461DEC0))(this);
	}
	template <typename T = void> T ClearNerverousAudio() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x4618704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x461E448))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x461E450))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInventoryManager() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E458))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSprint() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E460))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanProne() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E468))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanChangeWeapon() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnChangeClip() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PerformPhysics(float P0) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x461E480))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(MPPawn*, bool, uintptr_t))(Il2CppBase() + 0x461E490))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopDriving() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E4A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(MPPawn*, Il2CppVector3))(Il2CppBase() + 0x461E4A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E4C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E4D0))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E4D8))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition_FirstPerson() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E4EC))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetCameraRotation() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillEnemy(bool P0, int32_t P1) {
		return ((T (*)(MPPawn*, bool, int32_t))(Il2CppBase() + 0x461E514))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CanJump() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E51C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickSimulate(float P0) {
		return ((T (*)(MPPawn*, float))(Il2CppBase() + 0x461E524))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RemoteUseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(MPPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x461E52C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(MPPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x461E55C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPlayer() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E58C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E594))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CacheColliders(uintptr_t P0, bool P1) {
		return ((T (*)(MPPawn*, uintptr_t, bool))(Il2CppBase() + 0x461E59C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPosition(Il2CppVector3 P0, bool P1) {
		return ((T (*)(MPPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x461E5A4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E5C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(MPPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x461E5D0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E5F0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarMySelfSprite(uintptr_t P0) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x461E5F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryChangeClip(bool P0) {
		return ((T (*)(MPPawn*, bool))(Il2CppBase() + 0x461E600))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelSave() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E610))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_GetWeaponHiddenState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(MPPawn*, uintptr_t, bool))(Il2CppBase() + 0x461E620))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EndCrouch(bool P0, bool P1, bool P2) {
		return ((T (*)(MPPawn*, bool, bool, bool))(Il2CppBase() + 0x461E628))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DoJump() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E648))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GiveWeaponByPickUp(int32_t P0, unsigned char P1, bool P2, Il2CppList<uintptr_t>* P3, uint32_t P4, int32_t P5, int32_t P6, int32_t P7) {
		return ((T (*)(MPPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x461E650))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_TrySwitchWeapon(int32_t P0, unsigned char P1, int32_t P2, int32_t P3, uint32_t P4, bool P5) {
		return ((T (*)(MPPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x461E694))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllStateWhenStartAim() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E6C8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(MPPawn*, uintptr_t))(Il2CppBase() + 0x461E6D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CalcDeathCam(float P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(MPPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x461E6D8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToLastUsedWeapon() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E6F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_GetUltPickUpState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E700))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanInteractiveLevelObject() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUltPickUpCDState() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(MPPawn*))(Il2CppBase() + 0x461E718))(this);
	}

};

}
