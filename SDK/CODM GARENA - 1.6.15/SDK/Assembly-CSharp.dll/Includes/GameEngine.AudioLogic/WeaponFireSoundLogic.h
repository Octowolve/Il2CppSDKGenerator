#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class WeaponFireSoundLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "WeaponFireSoundLogic"));
	}

	template <typename T = float> T& LOW_AMMO_COUNT() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LastNormalFireSound() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& mFireLevelExtend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsSingleShot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsFireOnSkill() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& mMainCate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mSubCate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mWeaponName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mFireVoiceTypeL() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _mWeaponSndCfg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mWeaponSndCfgL() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& kMaxFireSoundInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PawnData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_WeaponData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_PawnSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mIsZooming() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mWeaponSoundComp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mWeaponSoundCompL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_fFootStepSoundPlayRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> static T& LengthToPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mNextImpactPlayTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& mSqrtLongDistanceFireVault() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& mIsFireSndPlaying() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mStartFireSoundTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mSqrtImpactPlayRange3P() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& mLastFlybyPlayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& mFlybyPlaySpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& SqrtFlyBySoundPlayRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& mLastFlybyVoxTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& mFlybyVoxSpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& SqrtFlyByVoxPlayRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& RTPCFlybySoundDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> T& mfLastPlayFireSndTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mLastFireSoundType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSoundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAudioComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsValidFireVoiceType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNoAmmoSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverHotSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__NotifyPawnSEZoomingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeZoomFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlybySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyFlybyVoxPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__BeginFire_FirstBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdateFireIntervalRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireSoundExtend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeFirePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireSoundVolumeUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireSoundVolumeAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlaySingleFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__NotInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsNearByFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsFarFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ParseFireSoundType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = void> T PlayWeaponSound(uintptr_t pType, int32_t iID) {
		return ((T (*)(WeaponFireSoundLogic*, uintptr_t, int32_t))(Il2CppBase() + 0x35D3F9C))(this, pType, iID);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type, uintptr_t weaponData, uintptr_t pawnData, uintptr_t pawnSoundEmitter) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D52CC))(0, type, weaponData, pawnData, pawnSoundEmitter);
	}
	template <typename T = void> T InitSoundConfig(uintptr_t weaponData, uintptr_t pawnData, uintptr_t pawnSoundEmitter) {
		return ((T (*)(WeaponFireSoundLogic*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D546C))(this, weaponData, pawnData, pawnSoundEmitter);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D576C))(this);
	}
	template <typename T = void> T BeginFire(bool isSingleShot, int32_t currentAmmoCount, int32_t totalAmmoCount) {
		return ((T (*)(WeaponFireSoundLogic*, bool, int32_t, int32_t))(Il2CppBase() + 0x35D584C))(this, isSingleShot, currentAmmoCount, totalAmmoCount);
	}
	template <typename T = void> T StopFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D77F4))(this);
	}
	template <typename T = void> T CancelFire() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D7B40))(this);
	}
	template <typename T = bool> T IsSameCamp(uint32_t playerID, uintptr_t camp) {
		return ((T (*)(WeaponFireSoundLogic*, uint32_t, uintptr_t))(Il2CppBase() + 0x35D7EAC))(this, playerID, camp);
	}
	template <typename T = void> T CreateAudioComponents(int32_t iMeshID, uintptr_t eWhichHand, uintptr_t pTargetAsset) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D81E0))(this, iMeshID, eWhichHand, pTargetAsset);
	}
	template <typename T = bool> T _IsValidFireVoiceType(int32_t iWeaponSpecialType) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t))(Il2CppBase() + 0x35D885C))(this, iWeaponSpecialType);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D8A68))(this);
	}
	template <typename T = void> T DeActivate() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D8C04))(this);
	}
	template <typename T = void> T PlayNoAmmoSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D8DA0))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D90C8))(this);
	}
	template <typename T = void> T PlayOverHotSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D9374))(this);
	}
	template <typename T = void> T GotoState(uintptr_t stateType) {
		return ((T (*)(WeaponFireSoundLogic*, uintptr_t))(Il2CppBase() + 0x35D9488))(this, stateType);
	}
	template <typename T = void> T SetRTPC(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(WeaponFireSoundLogic*, Il2CppString*, float))(Il2CppBase() + 0x35D9944))(this, strRTPCName, fValue);
	}
	template <typename T = void> T _NotifyPawnSEZoomingStatus() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D97D4))(this);
	}
	template <typename T = void> T ChangeZoomFov(bool isDoubleFov) {
		return ((T (*)(WeaponFireSoundLogic*, bool))(Il2CppBase() + 0x35D9AC4))(this, isDoubleFov);
	}
	template <typename T = void> T SwitchFireMode(uintptr_t gotoState) {
		return ((T (*)(WeaponFireSoundLogic*, uintptr_t))(Il2CppBase() + 0x35D9D2C))(this, gotoState);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D9DFC))(this);
	}
	template <typename T = void> T PlaySound(Il2CppString* strEventName) {
		return ((T (*)(WeaponFireSoundLogic*, Il2CppString*))(Il2CppBase() + 0x35D9EC4))(this, strEventName);
	}
	template <typename T = void> T PlayImpact(Il2CppVector3 vecPos, uintptr_t pPhyType) {
		return ((T (*)(WeaponFireSoundLogic*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x35DA05C))(this, vecPos, pPhyType);
	}
	template <typename T = bool> T get_ShouldPlayFlyBySound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DA628))(this);
	}
	template <typename T = void> T PlayFlybySound(Il2CppVector3 vecPos) {
		return ((T (*)(WeaponFireSoundLogic*, Il2CppVector3))(Il2CppBase() + 0x35DA88C))(this, vecPos);
	}
	template <typename T = Il2CppString*> T get_FlyByVox() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DABE0))(this);
	}
	template <typename T = bool> T get_ShouldPlayFlyByVox() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DABF4))(this);
	}
	template <typename T = void> T NotifyFlybyVoxPlayed() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DADC0))(this);
	}
	template <typename T = bool> T get_IsSilencerInstalled() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D897C))(this);
	}
	template <typename T = bool> T get_Is3P() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D8FD0))(this);
	}
	template <typename T = bool> T get_IsSnipingRifle() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DAEF8))(this);
	}
	template <typename T = bool> T get_IsDeadReplaySlowDown() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DAF0C))(this);
	}
	template <typename T = Il2CppString*> T get_DeadReplaySlowDownSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D7044))(this);
	}
	template <typename T = void> T _BeginFire_FirstBullet() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D65C0))(this);
	}
	template <typename T = void> T _UpdateFireIntervalRTPC() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D60F8))(this);
	}
	template <typename T = uintptr_t> T get_mWeaponSndCfg() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D8974))(this);
	}
	template <typename T = void> T set_mWeaponSndCfg(uintptr_t value) {
		return ((T (*)(WeaponFireSoundLogic*, uintptr_t))(Il2CppBase() + 0x35D8940))(this, value);
	}
	template <typename T = Il2CppString*> T GetFireSoundExtend() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D2B38))(this);
	}
	template <typename T = bool> T IsChangeFirePlace() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D2A64))(this);
	}
	template <typename T = void> T UpdateFireSoundVolumeUnderWater() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D2768))(this);
	}
	template <typename T = void> T UpdateFireSoundVolumeAmmoCount(int32_t currentAmmoCount, int32_t totalAmmoCount) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t, int32_t))(Il2CppBase() + 0x35DB344))(this, currentAmmoCount, totalAmmoCount);
	}
	template <typename T = Il2CppString*> T get_NormalFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D6EB0))(this);
	}
	template <typename T = Il2CppString*> T get_FarFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D647C))(this);
	}
	template <typename T = Il2CppString*> T get_FireLevelExtend() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB76C))(this);
	}
	template <typename T = void> T set_FireLevelExtend(Il2CppString* value) {
		return ((T (*)(WeaponFireSoundLogic*, Il2CppString*))(Il2CppBase() + 0x35DB774))(this, value);
	}
	template <typename T = Il2CppString*> T get_FirstFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D6B4C))(this);
	}
	template <typename T = Il2CppString*> T get_FirstFireSound2() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB034))(this);
	}
	template <typename T = Il2CppString*> T get_FriendWarnSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB2F4))(this);
	}
	template <typename T = Il2CppString*> T get_EnemyWarnSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB31C))(this);
	}
	template <typename T = bool> T ShouldPlaySingleFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D28F0))(this);
	}
	template <typename T = Il2CppString*> T get_StopSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D7434))(this);
	}
	template <typename T = Il2CppString*> T get_StopSound2() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D76D0))(this);
	}
	template <typename T = Il2CppString*> T get_CancelFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D7D54))(this);
	}
	template <typename T = Il2CppString*> T get_m_WeaponIdleSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB77C))(this);
	}
	template <typename T = bool> T get_UsingLoopFireSound() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D6E0C))(this);
	}
	template <typename T = Il2CppString*> T get_m_FireingVoicePrefix() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB7A4))(this);
	}
	template <typename T = uintptr_t> T get_mFireVoiceType() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35D9320))(this);
	}
	template <typename T = bool> T get_IsFireOnSkill() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB764))(this);
	}
	template <typename T = void> T set_IsFireOnSkill(bool value) {
		return ((T (*)(WeaponFireSoundLogic*, bool))(Il2CppBase() + 0x35DB7CC))(this, value);
	}
	template <typename T = uintptr_t> T get_PawnData() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB75C))(this);
	}
	template <typename T = float> T get_StartFireSoundTime() {
		return ((T (*)(WeaponFireSoundLogic*))(Il2CppBase() + 0x35DB7F8))(this);
	}
	template <typename T = bool> T _NotInitialized(int32_t iSoundType) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t))(Il2CppBase() + 0x35D7190))(this, iSoundType);
	}
	template <typename T = bool> T _IsNearByFireSound(int32_t iSoundType) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t))(Il2CppBase() + 0x35D7270))(this, iSoundType);
	}
	template <typename T = bool> T _IsFarFireSound(int32_t iSoundType) {
		return ((T (*)(WeaponFireSoundLogic*, int32_t))(Il2CppBase() + 0x35D7350))(this, iSoundType);
	}
	template <typename T = int32_t> T _ParseFireSoundType(float fSqrtDistance) {
		return ((T (*)(WeaponFireSoundLogic*, float))(Il2CppBase() + 0x35D70A4))(this, fSqrtDistance);
	}

};

}
