#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleEffect"));
	}

	template <typename T = bool> T& autoDespawn() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& lifeSpanForAutoDespawn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& OriginalLifeSpanForAutoDespawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& particles() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& StartSizeCurves() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& StartSpeedCurves() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tweeners() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& EffectStartEvent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& EffectStopEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& EffectUnderWaterStartEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& EffectUnderWaterEndEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& StopSoundWhenEffectStops() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mAudioPlayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ByPassSoundRangeCheck() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_RequireLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isLoop() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_Light() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_LightAnimator() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_LightDuration() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& LightAnimName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_EffectLength() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_CurScale() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CurLengthRatio() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& autoPlay() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& playSubAnimators() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uintptr_t> T& shakePlayer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> static T& MAX_UNDERWATER_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLoopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectByActiveGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectByLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInWaterDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InitSoundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayInLandSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayInWaterSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTimerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = Il2CppString*> T get_EffectStartSoundEvent() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x27288D0))(this);
	}
	template <typename T = Il2CppString*> T get_EffectEndSoundEvent() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x2728B38))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x2728CA8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x2728D64))(this);
	}
	template <typename T = void> T InitResource() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272910C))(this);
	}
	template <typename T = void> T FirstInit() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x27291C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x2729394))(this);
	}
	template <typename T = bool> T HasAnimator() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272A20C))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272A414))(this);
	}
	template <typename T = void> T PlayLoopEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272A4B4))(this);
	}
	template <typename T = void> T PlayEffectByActiveGameObject() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272A56C))(this);
	}
	template <typename T = void> T SetEffectScale(float scale) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x2729764))(this, scale);
	}
	template <typename T = void> T RecoveEffectScale() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272A654))(this);
	}
	template <typename T = void> T PlayEffectScale(float scale) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x272A6FC))(this, scale);
	}
	template <typename T = void> T SetEffectLength(float ratio) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x2729CB8))(this, ratio);
	}
	template <typename T = void> T PlayEffectByLength(float distance) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x272A974))(this, distance);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272ACB4))(this);
	}
	template <typename T = float> T GetInWaterDepth() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B0B4))(this);
	}
	template <typename T = void> T DisableLight() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B154))(this);
	}
	template <typename T = void> T PauseEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B288))(this);
	}
	template <typename T = void> T ResumeEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B400))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B578))(this);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B930))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B9FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272BB70))(this);
	}
	template <typename T = void> T _InitSoundConfig() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x2729654))(this);
	}
	template <typename T = void> T _PlaySound(Il2CppString* eventName) {
		return ((T (*)(ParticleEffect*, Il2CppString*))(Il2CppBase() + 0x2728E70))(this, eventName);
	}
	template <typename T = void> T _PlayInLandSound(Il2CppString* eventName) {
		return ((T (*)(ParticleEffect*, Il2CppString*))(Il2CppBase() + 0x272BC14))(this, eventName);
	}
	template <typename T = void> T _PlayInWaterSound(Il2CppString* eventName, float depth) {
		return ((T (*)(ParticleEffect*, Il2CppString*, float))(Il2CppBase() + 0x272BF60))(this, eventName, depth);
	}
	template <typename T = void> T _SetState(float depth) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x272C2E4))(this, depth);
	}
	template <typename T = void> T _SetRTPC(float depth) {
		return ((T (*)(ParticleEffect*, float))(Il2CppBase() + 0x272C174))(this, depth);
	}
	template <typename T = void> T _StopSound() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272B7F0))(this);
	}
	template <typename T = uintptr_t> T SetTimer(float interval, bool loop, uintptr_t action, bool autoStart) {
		return ((T (*)(ParticleEffect*, float, bool, uintptr_t, bool))(Il2CppBase() + 0x272C64C))(this, interval, loop, action, autoStart);
	}
	template <typename T = bool> T IsTimerActive(uintptr_t action) {
		return ((T (*)(ParticleEffect*, uintptr_t))(Il2CppBase() + 0x272C790))(this, action);
	}
	template <typename T = void> T ClearTimer(uint32_t timerID) {
		return ((T (*)(ParticleEffect*, uint32_t))(Il2CppBase() + 0x272C854))(this, timerID);
	}
	template <typename T = void> T ClearTimer_1(uintptr_t action) {
		return ((T (*)(ParticleEffect*, uintptr_t))(Il2CppBase() + 0x272C910))(this, action);
	}
	template <typename T = void> T ClearAllTimers() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272C9CC))(this);
	}
	template <typename T = void> T UpdateTimers() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CA7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitResource() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FirstInit() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyEffect() {
		return ((T (*)(ParticleEffect*))(Il2CppBase() + 0x272CB54))(this);
	}

};

}
