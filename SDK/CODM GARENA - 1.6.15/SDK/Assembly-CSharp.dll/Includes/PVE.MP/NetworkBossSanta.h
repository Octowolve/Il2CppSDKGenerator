#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossSanta
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossSanta"));
	}

	template <typename T = uintptr_t> T& MeshAgent() {
		return *(T*)((uintptr_t)this + 0xADC);
	}
	template <typename T = uintptr_t> T& CarPhysic() {
		return *(T*)((uintptr_t)this + 0xAE0);
	}
	template <typename T = uintptr_t> T& CarAnimator() {
		return *(T*)((uintptr_t)this + 0xAE4);
	}
	template <typename T = uintptr_t> T& SoundComp() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = uintptr_t> T& m_CacheBoxCollider() {
		return *(T*)((uintptr_t)this + 0xAEC);
	}
	template <typename T = bool> T& InSleep() {
		return *(T*)((uintptr_t)this + 0xAF0);
	}
	template <typename T = uintptr_t> T& SleepEffect() {
		return *(T*)((uintptr_t)this + 0xAF4);
	}
	template <typename T = float> T& godEffectTime() {
		return *(T*)((uintptr_t)this + 0xAF8);
	}
	template <typename T = uintptr_t> T& _PawnProps() {
		return *(T*)((uintptr_t)this + 0xAFC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rendererList() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = uintptr_t> T& pickColor() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = float> T& pickIntensity() {
		return *(T*)((uintptr_t)this + 0xB14);
	}
	template <typename T = float> T& pickSpeed() {
		return *(T*)((uintptr_t)this + 0xB18);
	}
	template <typename T = float> T& pickRange() {
		return *(T*)((uintptr_t)this + 0xB1C);
	}
	template <typename T = float> T& timeTriggerSpecialIdleTimeSum() {
		return *(T*)((uintptr_t)this + 0xB20);
	}
	template <typename T = Il2CppVector3> T& m_LastPos() {
		return *(T*)((uintptr_t)this + 0xB24);
	}
	template <typename T = bool> T& m_IsLocalPawnArround() {
		return *(T*)((uintptr_t)this + 0xB30);
	}
	template <typename T = float> static T& CheckPushLocalPawnDistanceSqrt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PushLocalPawnDistanceMargin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& OpenPushLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& LimitCheckFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> T& m_LimitFrameCount() {
		return *(T*)((uintptr_t)this + 0xB34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InBossStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAgent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginThrowProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginSummonZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sleep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AwakeToIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBloodEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerHideGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCarGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCarAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAppear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDisappear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedNormalMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPawnArround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T get_CacheBoxCollider() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB1158))(this);
	}
	template <typename T = bool> T InBossStage() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB1240))(this);
	}
	template <typename T = bool> T get_InSleep() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB1360))(this);
	}
	template <typename T = void> T set_InSleep(bool value) {
		return ((T (*)(NetworkBossSanta*, bool))(Il2CppBase() + 0x3EB1368))(this, value);
	}
	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB1370))(this, info);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB1754))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB1880))(this, info);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB1A58))(this, model);
	}
	template <typename T = uintptr_t> T GetMeshAgent(uintptr_t model) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB1B44))(this, model);
	}
	template <typename T = void> T UpdateRotation(float deltaTime) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB2020))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T get_HeadPosition() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB271C))(this);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB279C))(this);
	}
	template <typename T = void> T OnBeginThrowProp() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB2898))(this);
	}
	template <typename T = void> T OnBeginSummonZombie() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB29CC))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB2B14))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB2B1C))(this, value);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB2D3C))(this);
	}
	template <typename T = void> T Sleep() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB2B84))(this);
	}
	template <typename T = void> T AwakeToIdle() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB2F04))(this);
	}
	template <typename T = int32_t> T GetBloodEffectAsset(uintptr_t info) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB30BC))(this, info);
	}
	template <typename T = void> T PlayCarEffect() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB31E8))(this);
	}
	template <typename T = uintptr_t> T TimerHideGod() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB369C))(this);
	}
	template <typename T = uintptr_t> T get_s_PawnProps() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB37B4))(this);
	}
	template <typename T = void> T SetCarGod(bool enable) {
		return ((T (*)(NetworkBossSanta*, bool))(Il2CppBase() + 0x3EB3318))(this, enable);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB3854))(this);
	}
	template <typename T = void> T PlayCarAudio() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3E8CCD8))(this);
	}
	template <typename T = void> T StopAllAudio() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB3980))(this);
	}
	template <typename T = void> T ShowModel(bool bShow) {
		return ((T (*)(NetworkBossSanta*, bool))(Il2CppBase() + 0x3E8C5E8))(this, bShow);
	}
	template <typename T = void> T PlayAppear() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB3AF0))(this);
	}
	template <typename T = void> T PlayDisappear() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB3C5C))(this);
	}
	template <typename T = void> T PlayDie() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB3DD4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB3FC8))(this, deltaTime);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBossSanta*, bool))(Il2CppBase() + 0x3EB4250))(this, isHeadShot);
	}
	template <typename T = void> T RecvMovePath(uintptr_t moveData) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB442C))(this, moveData);
	}
	template <typename T = void> T SimulatedNormalMove(float deltaTime) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB4528))(this, deltaTime);
	}
	template <typename T = void> T CheckLocalPawnArround() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB46AC))(this);
	}
	template <typename T = void> T PushLocalPawn(float deltaTime) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB4998))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB50C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB5278))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB527C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB5284))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB5288))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetMeshAgent(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB528C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(float P0) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB5290))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB5294))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetBloodEffectAsset(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB5298))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB529C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB52A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBossSanta*, bool))(Il2CppBase() + 0x3EB52A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RecvMovePath(uintptr_t P0) {
		return ((T (*)(NetworkBossSanta*, uintptr_t))(Il2CppBase() + 0x3EB52A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedNormalMove(float P0) {
		return ((T (*)(NetworkBossSanta*, float))(Il2CppBase() + 0x3EB52AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(NetworkBossSanta*))(Il2CppBase() + 0x3EB52B0))(this);
	}

};

}
