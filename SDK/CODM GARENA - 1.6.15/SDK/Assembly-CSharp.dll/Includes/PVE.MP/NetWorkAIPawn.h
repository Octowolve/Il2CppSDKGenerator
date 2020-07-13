#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetWorkAIPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetWorkAIPawn"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x9C0);
	}
	template <typename T = float> T& maxRotSpeed() {
		return *(T*)((uintptr_t)this + 0x9C4);
	}
	template <typename T = Il2CppVector3> T& cachedPosition() {
		return *(T*)((uintptr_t)this + 0x9C8);
	}
	template <typename T = uintptr_t> T& BlockCollider() {
		return *(T*)((uintptr_t)this + 0x9D4);
	}
	template <typename T = uintptr_t> T& m_AvatarComponentCache() {
		return *(T*)((uintptr_t)this + 0x9D8);
	}
	template <typename T = uintptr_t> T& currentSpecialMoveType() {
		return *(T*)((uintptr_t)this + 0x9DC);
	}
	template <typename T = Il2CppVector3> T& focalPoint() {
		return *(T*)((uintptr_t)this + 0x9E0);
	}
	template <typename T = bool> T& focalPointSet() {
		return *(T*)((uintptr_t)this + 0x9EC);
	}
	template <typename T = uintptr_t> T& rotationTarget() {
		return *(T*)((uintptr_t)this + 0x9F0);
	}
	template <typename T = Il2CppQuaternion> T& desiredRotation() {
		return *(T*)((uintptr_t)this + 0x9F4);
	}
	template <typename T = bool> T& updateRotationByRM() {
		return *(T*)((uintptr_t)this + 0xA04);
	}
	template <typename T = bool> T& rotationFollowVelocity() {
		return *(T*)((uintptr_t)this + 0xA05);
	}
	template <typename T = uintptr_t> T& m_rootMotion() {
		return *(T*)((uintptr_t)this + 0xA08);
	}
	template <typename T = uintptr_t> T& m_animEventComp() {
		return *(T*)((uintptr_t)this + 0xA0C);
	}
	template <typename T = uintptr_t> T& configPreset() {
		return *(T*)((uintptr_t)this + 0xA10);
	}
	template <typename T = void*> T& bodyFragmentHandler() {
		return *(T*)((uintptr_t)this + 0xA14);
	}
	template <typename T = uintptr_t> T& shadowMesh() {
		return *(T*)((uintptr_t)this + 0xA18);
	}
	template <typename T = int32_t> T& normalHitFXAssetID() {
		return *(T*)((uintptr_t)this + 0xA1C);
	}
	template <typename T = int32_t> T& criticalHitFXAssetID() {
		return *(T*)((uintptr_t)this + 0xA20);
	}
	template <typename T = Il2CppString*> T& hitByMeleeSound_1P() {
		return *(T*)((uintptr_t)this + 0xA24);
	}
	template <typename T = Il2CppString*> T& hitByGunSound_1P() {
		return *(T*)((uintptr_t)this + 0xA28);
	}
	template <typename T = Il2CppString*> T& hitByMeleeSound_3P() {
		return *(T*)((uintptr_t)this + 0xA2C);
	}
	template <typename T = Il2CppString*> T& hitByGunSound_3P() {
		return *(T*)((uintptr_t)this + 0xA30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mainRenderers() {
		return *(T*)((uintptr_t)this + 0xA34);
	}
	template <typename T = uintptr_t> T& lastDamageType() {
		return *(T*)((uintptr_t)this + 0xA38);
	}
	template <typename T = uintptr_t> T& m_SoundPlayer() {
		return *(T*)((uintptr_t)this + 0xA3C);
	}
	template <typename T = float> T& nextTriggerTeammateVoiceTime() {
		return *(T*)((uintptr_t)this + 0xA40);
	}
	template <typename T = uintptr_t> T& m_NetworkAIPawnBloodHUD() {
		return *(T*)((uintptr_t)this + 0xA44);
	}
	template <typename T = bool> T& cacheHeadShot() {
		return *(T*)((uintptr_t)this + 0xA48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PendingMovePath() {
		return *(T*)((uintptr_t)this + 0xA4C);
	}
	template <typename T = uintptr_t> T& m_MoveSyncModule() {
		return *(T*)((uintptr_t)this + 0xA50);
	}
	template <typename T = uintptr_t> T& m_SkillSyncModule() {
		return *(T*)((uintptr_t)this + 0xA54);
	}
	template <typename T = bool> T& m_NeedForceSyncPosDiffTooMuch() {
		return *(T*)((uintptr_t)this + 0xA58);
	}
	template <typename T = float> T& arrivalRange() {
		return *(T*)((uintptr_t)this + 0xA5C);
	}
	template <typename T = float> T& monsterApproachAlertUpdateTime() {
		return *(T*)((uintptr_t)this + 0xA60);
	}
	template <typename T = float> T& cacheDistence() {
		return *(T*)((uintptr_t)this + 0xA64);
	}
	template <typename T = float> T& lastHeight() {
		return *(T*)((uintptr_t)this + 0xA68);
	}
	template <typename T = float> T& groundOffset() {
		return *(T*)((uintptr_t)this + 0xA6C);
	}
	template <typename T = Il2CppVector3> T& groundNormal() {
		return *(T*)((uintptr_t)this + 0xA70);
	}
	template <typename T = uintptr_t> T& activeBehavior() {
		return *(T*)((uintptr_t)this + 0xA7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skillBehaviors() {
		return *(T*)((uintptr_t)this + 0xA80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& specialMoveBehaviors() {
		return *(T*)((uintptr_t)this + 0xA84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& passiveBehaviors() {
		return *(T*)((uintptr_t)this + 0xA88);
	}
	template <typename T = uintptr_t> T& spawnBehavior() {
		return *(T*)((uintptr_t)this + 0xA8C);
	}
	template <typename T = bool> T& m_IsSoundEnabled() {
		return *(T*)((uintptr_t)this + 0xA90);
	}
	template <typename T = float> T& LastCheckSoundTime() {
		return *(T*)((uintptr_t)this + 0xA94);
	}
	template <typename T = uintptr_t> T& m_TakeDamageAudioComponentCache() {
		return *(T*)((uintptr_t)this + 0xA98);
	}
	template <typename T = Il2CppQuaternion> T& shadowRot() {
		return *(T*)((uintptr_t)this + 0xA9C);
	}
	template <typename T = uintptr_t> T& DamageEffect() {
		return *(T*)((uintptr_t)this + 0xAAC);
	}
	template <typename T = uintptr_t> T& StatusEffect() {
		return *(T*)((uintptr_t)this + 0xAB0);
	}
	template <typename T = uintptr_t> T& m_LastStatus() {
		return *(T*)((uintptr_t)this + 0xAB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDampAndMagnAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAIPawnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerBehaviorVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportHitByLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerLocalPlayerAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTakeDamageAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAccelRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAgent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMonsterAlivePlayerSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttackable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die_DrumTrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProtectDie_DrumTrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die_LightenTrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayKillZombiePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerHideDeadBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncToServerPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPendingMoveDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReachedDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedNormalMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedMovePathProtect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePositionOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDesiredRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotationTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRotationTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySkillPlayerSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBehaviorFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableBlockCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrouchComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeshVisibleToPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBloodEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AlignToGroundNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CouldPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatarEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShadowMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostRenderFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayElectricEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHurtEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStatusEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorCullingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpecialSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AILog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}

	template <typename T = float> T get_Radius() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96708))(this);
	}
	template <typename T = bool> T get_ShowOnRadar() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96710))(this);
	}
	template <typename T = bool> T get_IsZombie() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96718))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96720))(this);
	}
	template <typename T = bool> T get_ShowNameOnTacticalMap() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96728))(this);
	}
	template <typename T = bool> T CanDampAndMagnAssistAim() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96730))(this);
	}
	template <typename T = Il2CppVector3> T get_CenterOffset() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E967D0))(this);
	}
	template <typename T = bool> T get_displayBossBloodHUD() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E902E0))(this);
	}
	template <typename T = Il2CppString*> T get_displayName() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E968D0))(this);
	}
	template <typename T = bool> T get_isArmored() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E969FC))(this);
	}
	template <typename T = Il2CppString*> T get_displayIcon() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96AE4))(this);
	}
	template <typename T = int32_t> T get_displayLayerCount() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96BC0))(this);
	}
	template <typename T = uint32_t> T get_PerSkillPlayerSoundId() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96C9C))(this);
	}
	template <typename T = uint32_t> T get_BossBornPlayerSoundId() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96D78))(this);
	}
	template <typename T = uint32_t> T get_OnTakeDamagePlayerSoundId() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96E54))(this);
	}
	template <typename T = uint32_t> T get_OnKillPlayerSoundId() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E96F30))(this);
	}
	template <typename T = uint32_t> T get_OnApproachPlayerSoundId() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9700C))(this);
	}
	template <typename T = float> T get_OnApproachAlertLength() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E970E8))(this);
	}
	template <typename T = float> T get_OnApproachAlertHeight() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E971CC))(this);
	}
	template <typename T = bool> T get_needRotate() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E972B0))(this);
	}
	template <typename T = Il2CppQuaternion> T get_desiredRotation() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97370))(this);
	}
	template <typename T = void> T set_desiredRotation(Il2CppQuaternion value) {
		return ((T (*)(NetWorkAIPawn*, Il2CppQuaternion))(Il2CppBase() + 0x3E97384))(this, value);
	}
	template <typename T = bool> T get_updateRotationByRM() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9739C))(this);
	}
	template <typename T = void> T set_updateRotationByRM(bool value) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E973A4))(this, value);
	}
	template <typename T = bool> T get_rotationFollowVelocity() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E973AC))(this);
	}
	template <typename T = void> T set_rotationFollowVelocity(bool value) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E973B4))(this, value);
	}
	template <typename T = uintptr_t> T get_ZombieType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E973BC))(this);
	}
	template <typename T = uintptr_t> T get_rootMotionComp() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E8DBE4))(this);
	}
	template <typename T = uintptr_t> T get_animEventComp() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E8CB7C))(this);
	}
	template <typename T = void> T set_configPreset(uintptr_t value) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E97498))(this, value);
	}
	template <typename T = uintptr_t> T get_configPreset() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E968C8))(this);
	}
	template <typename T = void*> T get_bodyFragmentHandler() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E974A0))(this);
	}
	template <typename T = void> T set_bodyFragmentHandler(void* value) {
		return ((T (*)(NetWorkAIPawn*, void*))(Il2CppBase() + 0x3E974A8))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E974B0))(this, info);
	}
	template <typename T = void> T OnNotifyAIPawnChange() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97854))(this);
	}
	template <typename T = void> T InitAudio() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E979D0))(this);
	}
	template <typename T = void> T ShutdownAudio() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97B78))(this);
	}
	template <typename T = void> T TriggerBehaviorVoice(uintptr_t voiceEvent) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E8FBB0))(this, voiceEvent);
	}
	template <typename T = void> T InitHUD() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97C9C))(this);
	}
	template <typename T = void> T ReportHitByLocalPlayer(uintptr_t damageInfo) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E97E70))(this, damageInfo);
	}
	template <typename T = void> T TriggerLocalPlayerAiming() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97F9C))(this);
	}
	template <typename T = void> T InitTakeDamageAudio() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E980B0))(this);
	}
	template <typename T = void> T InitPawnProperty(uintptr_t info) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E98188))(this, info);
	}
	template <typename T = void> T SetAccelRate(float accelRate) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9841C))(this, accelRate);
	}
	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E984D0))(this, info);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t camp) {
		return ((T (*)(NetWorkAIPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3E98570))(this, playerID, actorID, camp);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E98790))(this);
	}
	template <typename T = uintptr_t> T GetPawnEventProcessor() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E98868))(this);
	}
	template <typename T = void> T CacheTransform() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9895C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E97690))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E98A40))(this);
	}
	template <typename T = void> T InitAnim() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E994FC))(this);
	}
	template <typename T = uintptr_t> T GetMeshAgent(uintptr_t model) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E99620))(this, model);
	}
	template <typename T = void> T PlayMonsterAlivePlayerSound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E996C8))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E99934))(this, model);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E99DBC))(this, isHidden);
	}
	template <typename T = void> T SetAttackable(bool enable) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E8D2DC))(this, enable);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E99F50))(this);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool isAiming, bool isSingleShot, int32_t aommoCount, bool bLeftHandWeapon) {
		return ((T (*)(NetWorkAIPawn*, int32_t, bool, bool, int32_t, bool))(Il2CppBase() + 0x3E99FE8))(this, inFireCompIndex, isAiming, isSingleShot, aommoCount, bLeftHandWeapon);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9A0B4))(this);
	}
	template <typename T = void> T Die_DrumTrap() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9A14C))(this);
	}
	template <typename T = uintptr_t> T ProtectDie_DrumTrap() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9A440))(this);
	}
	template <typename T = void> T Die_LightenTrap() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9A528))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetWorkAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3E9A5E8))(this, isHeadShot, damageType);
	}
	template <typename T = void> T PlayKillZombiePlayer(bool isHeadShot, uint32_t inKillerID) {
		return ((T (*)(NetWorkAIPawn*, bool, uint32_t))(Il2CppBase() + 0x3E9ABCC))(this, isHeadShot, inKillerID);
	}
	template <typename T = void> T TimerHideDeadBody() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9AE84))(this);
	}
	template <typename T = void> T OnTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E9B004))(this, damageInfo);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(NetWorkAIPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x3E9B238))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9B568))(this);
	}
	template <typename T = uintptr_t> T get_MoveSyncModule() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9B984))(this);
	}
	template <typename T = uintptr_t> T get_SkillSyncModule() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9BA84))(this);
	}
	template <typename T = void> T RecvMovePath(uintptr_t moveData) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E9BB84))(this, moveData);
	}
	template <typename T = bool> T get_NeedForceSyncPosDiffTooMuch() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9C5C4))(this);
	}
	template <typename T = void> T set_NeedForceSyncPosDiffTooMuch(bool value) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E9C5CC))(this, value);
	}
	template <typename T = void> T SyncToServerPos(Il2CppVector3 dest) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3E9C014))(this, dest);
	}
	template <typename T = void> T AddPendingMoveDest(Il2CppVector3 dest, float duration, uintptr_t specialMoveType) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3E9C350))(this, dest, duration, specialMoveType);
	}
	template <typename T = bool> T CheckReachedDest(Il2CppVector3 dest, float sqrTolerance) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3, float))(Il2CppBase() + 0x3E9C684))(this, dest, sqrTolerance);
	}
	template <typename T = void> T ProcessMovePath() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9C818))(this);
	}
	template <typename T = void> T ClearMovePath() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9D08C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9D160))(this, deltaTime);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9D6B8))(this, deltaTime);
	}
	template <typename T = void> T SimulatedMove(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9D86C))(this, deltaTime);
	}
	template <typename T = void> T SimulatedNormalMove(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9DCE4))(this, deltaTime);
	}
	template <typename T = void> T SimulatedFightOff(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9E570))(this, deltaTime);
	}
	template <typename T = bool> T NeedMovePathProtect() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9E7D4))(this);
	}
	template <typename T = bool> T UpdateVelocity(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9DE84))(this, deltaTime);
	}
	template <typename T = void> T AdjustToGround(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9E874))(this, deltaTime);
	}
	template <typename T = void> T UpdatePositionOnGround(float deltaTime, bool updateFloor) {
		return ((T (*)(NetWorkAIPawn*, float, bool))(Il2CppBase() + 0x3E9EEE8))(this, deltaTime, updateFloor);
	}
	template <typename T = int32_t> T GetTraceFlag() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9F434))(this);
	}
	template <typename T = Il2CppQuaternion> T AdjustDesiredRotation(Il2CppVector3 focalDirection) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3E9F4D4))(this, focalDirection);
	}
	template <typename T = void> T UpdateRotation(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9F5B8))(this, deltaTime);
	}
	template <typename T = void> T SetFocalPoint(Il2CppVector3 focalPoint) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3E9CEE4))(this, focalPoint);
	}
	template <typename T = void> T ReleaseFocalPoint(bool forceRotateDone) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E9CFBC))(this, forceRotateDone);
	}
	template <typename T = void> T ForceFocalPoint(Il2CppVector3 inFocalPoint) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3E9F8F4))(this, inFocalPoint);
	}
	template <typename T = void> T SetRotationTarget(uintptr_t targetTrans) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E932EC))(this, targetTrans);
	}
	template <typename T = void> T ClearRotationTarget() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9339C))(this);
	}
	template <typename T = void> T AddBehavior(uintptr_t behavior) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E9FA38))(this, behavior);
	}
	template <typename T = void> T PlaySkillPlayerSound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9FD74))(this);
	}
	template <typename T = void> T StartBehavior(uintptr_t behavior) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E99CF8))(this, behavior);
	}
	template <typename T = void> T StopCurrentBehavior() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9C5D4))(this);
	}
	template <typename T = void> T SimulateSkill(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3E9D7A8))(this, deltaTime);
	}
	template <typename T = void> T UpdateSkill(uintptr_t newSkillStepData) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E9FFE8))(this, newSkillStepData);
	}
	template <typename T = void> T OnBehaviorFinish() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA05EC))(this);
	}
	template <typename T = uintptr_t> T get_activeBehavior() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9A438))(this);
	}
	template <typename T = void> T set_activeBehavior(uintptr_t value) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E9FFE0))(this, value);
	}
	template <typename T = void> T CheckEnableBlockCollider() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA06AC))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA09FC))(this);
	}
	template <typename T = void> T CacheColliders(uintptr_t go, bool clearCache) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t, bool))(Il2CppBase() + 0x3EA0A04))(this, go, clearCache);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA0EE4))(this);
	}
	template <typename T = uintptr_t> T GetCrouchComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA0FE0))(this);
	}
	template <typename T = bool> T IsMeshVisibleToPlayer() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9EA14))(this);
	}
	template <typename T = int32_t> T GetBloodEffectAsset(uintptr_t info) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA1080))(this, info);
	}
	template <typename T = void> T AlignToGroundNormal() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA1404))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3EA15C8))(this, isHeadShot);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetWorkAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3EA1800))(this, isHeadShot, damageType);
	}
	template <typename T = void> T CheckEnableSound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9D9B8))(this);
	}
	template <typename T = void> T EnableSound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA18FC))(this);
	}
	template <typename T = void> T DisableSound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E9AA80))(this);
	}
	template <typename T = bool> T CouldPlaySound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA1A48))(this);
	}
	template <typename T = uintptr_t> T get_AvatarComponentCache() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E99308))(this);
	}
	template <typename T = void> T set_AvatarComponentCache(uintptr_t value) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E99CE8))(this, value);
	}
	template <typename T = uintptr_t> T get_TakeDamageAudioComponentCache() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3E98180))(this);
	}
	template <typename T = void> T set_TakeDamageAudioComponentCache(uintptr_t value) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3E99CF0))(this, value);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA1AF0))(this);
	}
	template <typename T = void> T PlayHitAnim(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA1B88))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA1C3C))(this);
	}
	template <typename T = void> T ShowAvatarEffects(bool active) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E99310))(this, active);
	}
	template <typename T = void> T EnableCollider(bool enable) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E9B854))(this, enable);
	}
	template <typename T = void> T ShowShadow(bool show) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3E9A960))(this, show);
	}
	template <typename T = void> T UpdateShadowMesh(float deltaTime, bool updateFloor) {
		return ((T (*)(NetWorkAIPawn*, float, bool))(Il2CppBase() + 0x3E9EBD4))(this, deltaTime, updateFloor);
	}
	template <typename T = void> T PostRenderFor(float deltaTime) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3EA1E40))(this, deltaTime);
	}
	template <typename T = void> T PlayElectricEffect(uintptr_t damageInfo) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA1EE0))(this, damageInfo);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3EA22EC))(this, pos, info);
	}
	template <typename T = void> T PlayHurtEffect(uintptr_t damageInfo) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA243C))(this, damageInfo);
	}
	template <typename T = void> T PlayStatusEffect(uintptr_t status, float lifeSpan) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t, float))(Il2CppBase() + 0x3EA26B4))(this, status, lifeSpan);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA2968))(this);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA2ACC))(this, hitObject);
	}
	template <typename T = void> T SetAnimatorCullingMode(uintptr_t cullingMode) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA2CF8))(this, cullingMode);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA2EAC))(this);
	}
	template <typename T = bool> T PlaySpecialSound(uintptr_t damageInfo) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA302C))(this, damageInfo);
	}
	template <typename T = void> T OnRootMotionEnd(bool interrupt) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3EA30D4))(this, interrupt);
	}
	template <typename T = void> T AILog(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(NetWorkAIPawn*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3EA3174))(this, msg, paras);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3228))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanDampAndMagnAssistAim() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA332C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReportHitByLocalPlayer(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA3334))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(NetWorkAIPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3EA333C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA335C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CacheTransform() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA336C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitAnim() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA337C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3EA3384))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA338C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ThirdPersonStartFire(int32_t P0, bool P1, bool P2, int32_t P3, bool P4) {
		return ((T (*)(NetWorkAIPawn*, int32_t, bool, bool, int32_t, bool))(Il2CppBase() + 0x3EA3394))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA33C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(NetWorkAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3EA33C8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(NetWorkAIPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x3EA33D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA33F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3EA33F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickSimulate(float P0) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3EA3400))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CacheColliders(uintptr_t P0, bool P1) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t, bool))(Il2CppBase() + 0x3EA3408))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3410))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCrouchComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3418))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetBloodEffectAsset(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA3420))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3EA3428))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(NetWorkAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3EA3430))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CouldPlaySound() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3438))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitAnim(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA3440))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_DoDestroy() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostRenderFor(float P0) {
		return ((T (*)(NetWorkAIPawn*, float))(Il2CppBase() + 0x3EA3450))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(NetWorkAIPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3EA3458))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHurtEffect(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA347C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3484))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(NetWorkAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA348C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA3494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRootMotionEnd(bool P0) {
		return ((T (*)(NetWorkAIPawn*, bool))(Il2CppBase() + 0x3EA349C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(NetWorkAIPawn*))(Il2CppBase() + 0x3EA34A4))(this);
	}

};

}
