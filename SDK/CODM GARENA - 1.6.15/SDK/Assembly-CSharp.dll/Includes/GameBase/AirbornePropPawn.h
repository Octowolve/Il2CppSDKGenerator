#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirbornePropPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirbornePropPawn"));
	}

	template <typename T = uintptr_t> T& LaunchStation() {
		return *(T*)((uintptr_t)this + 0x9DC);
	}
	template <typename T = uintptr_t> T& m_StationAnimator() {
		return *(T*)((uintptr_t)this + 0x9E0);
	}
	template <typename T = uintptr_t> T& LaunchStationRoot() {
		return *(T*)((uintptr_t)this + 0x9E4);
	}
	template <typename T = uintptr_t> T& LaunchStationModel() {
		return *(T*)((uintptr_t)this + 0x9E8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LaunchParts() {
		return *(T*)((uintptr_t)this + 0x9EC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LaunchTriggers() {
		return *(T*)((uintptr_t)this + 0x9F0);
	}
	template <typename T = Il2CppString*> T& LaunchStationName() {
		return *(T*)((uintptr_t)this + 0x9F4);
	}
	template <typename T = Il2CppString*> T& LaunchStationModelName() {
		return *(T*)((uintptr_t)this + 0x9F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LaunchPartNames() {
		return *(T*)((uintptr_t)this + 0x9FC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LaunchPartMPoint() {
		return *(T*)((uintptr_t)this + 0xA00);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LaunchTriggerNames() {
		return *(T*)((uintptr_t)this + 0xA04);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RocketFireAssetID() {
		return *(T*)((uintptr_t)this + 0xA08);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LightAssetID() {
		return *(T*)((uintptr_t)this + 0xA0C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LightFlashAssetID() {
		return *(T*)((uintptr_t)this + 0xA10);
	}
	template <typename T = int32_t> T& BrokenWhiteSmokeAssetID() {
		return *(T*)((uintptr_t)this + 0xA14);
	}
	template <typename T = int32_t> T& BrokenSmokeAssetID() {
		return *(T*)((uintptr_t)this + 0xA18);
	}
	template <typename T = int32_t> T& BrokenFireAssetID() {
		return *(T*)((uintptr_t)this + 0xA1C);
	}
	template <typename T = int32_t> T& ExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0xA20);
	}
	template <typename T = uintptr_t> T& RootTransform() {
		return *(T*)((uintptr_t)this + 0xA24);
	}
	template <typename T = uintptr_t> T& m_DownSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA28);
	}
	template <typename T = uintptr_t> T& m_BrokenWhiteSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA2C);
	}
	template <typename T = uintptr_t> T& m_BrokenSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA30);
	}
	template <typename T = uintptr_t> T& m_BrokenFireEffect() {
		return *(T*)((uintptr_t)this + 0xA34);
	}
	template <typename T = uintptr_t> T& m_ExplosionEffect() {
		return *(T*)((uintptr_t)this + 0xA38);
	}
	template <typename T = uintptr_t> T& m_FlaresSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xA3C);
	}
	template <typename T = bool> T& m_isPlayWhiteSmoke() {
		return *(T*)((uintptr_t)this + 0xA40);
	}
	template <typename T = bool> T& m_isPlaySmoke() {
		return *(T*)((uintptr_t)this + 0xA41);
	}
	template <typename T = bool> T& m_isPlayFire() {
		return *(T*)((uintptr_t)this + 0xA42);
	}
	template <typename T = bool> T& m_IsPaused() {
		return *(T*)((uintptr_t)this + 0xA43);
	}
	template <typename T = bool> T& m_isSmokeActive() {
		return *(T*)((uintptr_t)this + 0xA44);
	}
	template <typename T = float> T& m_SmokeActiveDuration() {
		return *(T*)((uintptr_t)this + 0xA48);
	}
	template <typename T = bool> T& m_HasPlayLandedSound() {
		return *(T*)((uintptr_t)this + 0xA4C);
	}
	template <typename T = float> static T& m_cfLightFlashLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_fCurrRealLeftLifeTime() {
		return *(T*)((uintptr_t)this + 0xA50);
	}
	template <typename T = bool> T& m_bShowLightFlashEffect() {
		return *(T*)((uintptr_t)this + 0xA54);
	}
	template <typename T = uintptr_t> T& m_CurrState() {
		return *(T*)((uintptr_t)this + 0xA58);
	}
	template <typename T = float> T& m_DesiredReachTime() {
		return *(T*)((uintptr_t)this + 0xA5C);
	}
	template <typename T = float> T& m_RealDesiredReachTime() {
		return *(T*)((uintptr_t)this + 0xA60);
	}
	template <typename T = float> T& m_HeightToGround() {
		return *(T*)((uintptr_t)this + 0xA64);
	}
	template <typename T = Il2CppVector3> T& m_PredictNormal() {
		return *(T*)((uintptr_t)this + 0xA68);
	}
	template <typename T = float> static T& m_cfMildInjuryLeftHealthPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_cfModerateInjuryLeftHealthPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_cfSevereInjuryLeftHealthPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0xA74);
	}
	template <typename T = uint32_t> T& m_SkinID() {
		return *(T*)((uintptr_t)this + 0xA78);
	}
	template <typename T = float> T& m_fClickBoardingBtnTime() {
		return *(T*)((uintptr_t)this + 0xA7C);
	}
	template <typename T = bool> T& isLoading() {
		return *(T*)((uintptr_t)this + 0xA80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableHitCollide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReflashBrokenWhiteSmokeEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReflashBrokenSmokeEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReflashBrokenFireEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFakeDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLauncherPartState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDropActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLockActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLockActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLockActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLockActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDemageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllBrokenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllLightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllLightFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherPartByIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherPartByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchElem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchElemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAccelerateByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropElemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeparatedElemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherActorIdByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTriggerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTriggerByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTriggerActiveByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFinalNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = float> T get_CurrRealLeftLifeTime() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B6FB20))(this);
	}
	template <typename T = void> T set_CurrRealLeftLifeTime(float value) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B6FB28))(this, value);
	}
	template <typename T = float> T get_ClickBoardingBtnTime() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B6FB30))(this);
	}
	template <typename T = void> T set_ClickBoardingBtnTime(float value) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B6E7C0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_PredictNormal() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B6FB38))(this);
	}
	template <typename T = void> T set_PredictNormal(Il2CppVector3 value) {
		return ((T (*)(AirbornePropPawn*, Il2CppVector3))(Il2CppBase() + 0x3B6FB54))(this, value);
	}
	template <typename T = bool> T IsCanUse(uint32_t playerId) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B6FB64))(this, playerId);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B6FCE4))(this);
	}
	template <typename T = void> T InitColliders() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B6FD8C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B6FF6C))(this, info);
	}
	template <typename T = void> T InitState() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B705E4))(this);
	}
	template <typename T = void> T Active() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B708DC))(this);
	}
	template <typename T = void> T EnableHitCollide() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B70974))(this);
	}
	template <typename T = void> T ReflashBrokenWhiteSmokeEffectState(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B70A1C))(this, bShow);
	}
	template <typename T = void> T ReflashBrokenSmokeEffectState(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B70B3C))(this, bShow);
	}
	template <typename T = void> T ReflashBrokenFireEffectState(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B70C5C))(this, bShow);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B70D7C))(this);
	}
	template <typename T = void> T OnFakeDestory() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B70EB8))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B71E54))(this);
	}
	template <typename T = void> T AddSkin() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B70490))(this);
	}
	template <typename T = void> T RemoveSkin() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B71D18))(this);
	}
	template <typename T = void> T CreateParts(Il2CppArray<uintptr_t>* ExtraInfo, unsigned char ExtraLen) {
		return ((T (*)(AirbornePropPawn*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x3B71EFC))(this, ExtraInfo, ExtraLen);
	}
	template <typename T = void> T ChangeLauncherPartState(Il2CppArray<uintptr_t>* ExtraInfo, unsigned char ExtraLen) {
		return ((T (*)(AirbornePropPawn*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x3B72398))(this, ExtraInfo, ExtraLen);
	}
	template <typename T = void> T DoDropActionBegin() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B726B0))(this);
	}
	template <typename T = void> T DoDropActionTick(float deltaTime) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B72924))(this, deltaTime);
	}
	template <typename T = void> T DoDropActionEnd() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B72B98))(this);
	}
	template <typename T = void> T DoLockActionBegin() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B72CB4))(this);
	}
	template <typename T = void> T OnLockActionBegin() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B72E38))(this);
	}
	template <typename T = void> T DoLockActionTick(float deltaTime) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B733AC))(this, deltaTime);
	}
	template <typename T = void> T DoLockActionEnd() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B73658))(this);
	}
	template <typename T = void> T ChangeHealth(float fHealth, float fMaxHealth) {
		return ((T (*)(AirbornePropPawn*, float, float))(Il2CppBase() + 0x3B736F0))(this, fHealth, fMaxHealth);
	}
	template <typename T = void> T ShowExplosionEffect(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B71980))(this, bShow);
	}
	template <typename T = void> T ShowDemageEffect(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B73820))(this, bShow);
	}
	template <typename T = void> T ShowAllBrokenEffect(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B71254))(this, bShow);
	}
	template <typename T = void> T ShowAllLightEffect(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B715B8))(this, bShow);
	}
	template <typename T = void> T ShowAllLightFlashEffect(bool bShow) {
		return ((T (*)(AirbornePropPawn*, bool))(Il2CppBase() + 0x3B7179C))(this, bShow);
	}
	template <typename T = uintptr_t> T GetLauncherPartByIdx(int32_t idx) {
		return ((T (*)(AirbornePropPawn*, int32_t))(Il2CppBase() + 0x3B7437C))(this, idx);
	}
	template <typename T = uintptr_t> T GetLauncherPartByActorId(uint32_t uActorId) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B72558))(this, uActorId);
	}
	template <typename T = void> T LaunchElem(uint32_t uLauncherID) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B744A4))(this, uLauncherID);
	}
	template <typename T = void> T LaunchElemByActorId(uint32_t uActorId, uintptr_t launchParam) {
		return ((T (*)(AirbornePropPawn*, uint32_t, uintptr_t))(Il2CppBase() + 0x3B745D8))(this, uActorId, launchParam);
	}
	template <typename T = void> T ChangeAccelerateByActorId(uint32_t uActorId, float fAccelerateValue) {
		return ((T (*)(AirbornePropPawn*, uint32_t, float))(Il2CppBase() + 0x3B746D0))(this, uActorId, fAccelerateValue);
	}
	template <typename T = void> T DropElemByActorId(uint32_t uActorId) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B747B0))(this, uActorId);
	}
	template <typename T = void> T SeparatedElemByActorId(uint32_t uActorId) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B74874))(this, uActorId);
	}
	template <typename T = int32_t> T GetLauncherActorIdByIndex(int32_t nLauncherIndex) {
		return ((T (*)(AirbornePropPawn*, int32_t))(Il2CppBase() + 0x3B74938))(this, nLauncherIndex);
	}
	template <typename T = void> T BeginState(uintptr_t state) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B74A6C))(this, state);
	}
	template <typename T = void> T EndState(uintptr_t state) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B74B34))(this, state);
	}
	template <typename T = void> T ChangeState(uintptr_t newState) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B70814))(this, newState);
	}
	template <typename T = void> T SetTriggerActive(int32_t nIndex, bool bActive) {
		return ((T (*)(AirbornePropPawn*, int32_t, bool))(Il2CppBase() + 0x3B74BFC))(this, nIndex, bActive);
	}
	template <typename T = uintptr_t> T GetTriggerByActorId(uint32_t uActorId) {
		return ((T (*)(AirbornePropPawn*, uint32_t))(Il2CppBase() + 0x3B74D48))(this, uActorId);
	}
	template <typename T = void> T SetTriggerActiveByActorId(uint32_t uActorId, bool bActive) {
		return ((T (*)(AirbornePropPawn*, uint32_t, bool))(Il2CppBase() + 0x3B74EA0))(this, uActorId, bActive);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B74F80))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetFinalNormal() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75120))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B751D8))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B758FC))(this);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B757EC))(this);
	}
	template <typename T = void> T DoDropActionBeginm__0(uintptr_t eff) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B75A20))(this, eff);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitColliders() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(AirbornePropPawn*, uintptr_t))(Il2CppBase() + 0x3B75BB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Active() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFakeDestory() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickSimulate(float P0) {
		return ((T (*)(AirbornePropPawn*, float))(Il2CppBase() + 0x3B75BDC))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFinalNormal() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(AirbornePropPawn*))(Il2CppBase() + 0x3B75BF8))(this);
	}

};

}
