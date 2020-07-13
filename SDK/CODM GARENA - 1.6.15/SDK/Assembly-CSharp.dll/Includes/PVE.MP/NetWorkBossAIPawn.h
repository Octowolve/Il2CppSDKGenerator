#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetWorkBossAIPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetWorkBossAIPawn"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mBossSoundEmitter() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& mAudioPlayer() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& PhysicsCollider() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bodyMat() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = float> T& cacheHealthRatio() {
		return *(T*)((uintptr_t)this + 0xAC8);
	}
	template <typename T = float> T& BossHealthUpdateTime() {
		return *(T*)((uintptr_t)this + 0xACC);
	}
	template <typename T = bool> T& bGotoCombat() {
		return *(T*)((uintptr_t)this + 0xAD0);
	}
	template <typename T = uintptr_t> T& timingSoundCoroutine() {
		return *(T*)((uintptr_t)this + 0xAD4);
	}
	template <typename T = float> T& currentMatRimVal() {
		return *(T*)((uintptr_t)this + 0xAD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBossPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProtectShowBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGodFlagChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayKillZombiePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadSoundConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveCombat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DieDissolveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoundLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoundPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetImmuneEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImmuneFadeCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAudioResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateBossStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IData_BossInstance_Handler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uintptr_t> T get_ZombieType() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA61D0))(this);
	}
	template <typename T = bool> T get_CanBeAssistAimed() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA61D8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BossHealthPlayerSoundList() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA61E0))(this);
	}
	template <typename T = void> T InitPawnProperty(uintptr_t info) {
		return ((T (*)(NetWorkBossAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA630C))(this, info);
	}
	template <typename T = void> T StopCutScene() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA661C))(this);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(NetWorkBossAIPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x3EA6710))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA6888))(this);
	}
	template <typename T = bool> T IsBossPawn() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA692C))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA69CC))(this);
	}
	template <typename T = uintptr_t> T ProtectShowBoss() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA7024))(this);
	}
	template <typename T = void> T OnGodFlagChange(bool newFlag) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA710C))(this, newFlag);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA71D0))(this);
	}
	template <typename T = void> T PlayKillZombiePlayer(bool isHeadShot, uint32_t inKillerID) {
		return ((T (*)(NetWorkBossAIPawn*, bool, uint32_t))(Il2CppBase() + 0x3EA72CC))(this, isHeadShot, inKillerID);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetWorkBossAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3EA7380))(this, isHeadShot, damageType);
	}
	template <typename T = void> T _LoadSoundConfigs() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA778C))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA7AA4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetWorkBossAIPawn*, float))(Il2CppBase() + 0x3EA7BBC))(this, deltaTime);
	}
	template <typename T = void> T GotoCombat() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA7F8C))(this);
	}
	template <typename T = void> T LeaveCombat() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA8030))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA80D4))(this, isHeadShot);
	}
	template <typename T = uintptr_t> T DieDissolveEffect(Il2CppArray<uintptr_t>* skinnedMeshRenderers) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3EA8580))(this, skinnedMeshRenderers);
	}
	template <typename T = void> T BeginSound() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA6D54))(this);
	}
	template <typename T = uintptr_t> T TimingSound(Il2CppString* bankName, Il2CppString* eventName) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3EA8764))(this, bankName, eventName);
	}
	template <typename T = void> T EndSound() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA7598))(this);
	}
	template <typename T = void> T SoundLoadBank(Il2CppString* bankName) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppString*))(Il2CppBase() + 0x3EA8674))(this, bankName);
	}
	template <typename T = void> T SoundPlayEvent(Il2CppString* eventName) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppString*))(Il2CppBase() + 0x3EA8874))(this, eventName);
	}
	template <typename T = void> T SetImmuneEffect(bool enable) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA8964))(this, enable);
	}
	template <typename T = uintptr_t> T ImmuneFadeCoroutine(float destMatRimVal) {
		return ((T (*)(NetWorkBossAIPawn*, float))(Il2CppBase() + 0x3EA8A38))(this, destMatRimVal);
	}
	template <typename T = void> T UnloadAudioResources() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA8B3C))(this);
	}
	template <typename T = void> T LoadAudioResources(bool load) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA8BE4))(this, load);
	}
	template <typename T = void> T OnUpdateBossStatus(uint32_t bossStatus) {
		return ((T (*)(NetWorkBossAIPawn*, uint32_t))(Il2CppBase() + 0x3EA8D80))(this, bossStatus);
	}
	template <typename T = void> T BeginFightOff(Il2CppVector3 impluse) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3EA8E20))(this, impluse);
	}
	template <typename T = void> T SwitchStage(int32_t stageIndex) {
		return ((T (*)(NetWorkBossAIPawn*, int32_t))(Il2CppBase() + 0x3EA8EDC))(this, stageIndex);
	}
	template <typename T = void> static T IData_BossInstance_Handler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EA8F7C))(0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawnProperty(uintptr_t P0) {
		return ((T (*)(NetWorkBossAIPawn*, uintptr_t))(Il2CppBase() + 0x3EA9148))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(NetWorkBossAIPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x3EA914C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_DoDestroy() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA9164))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBossPawn() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA9168))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA9170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGodFlagChange(bool P0) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA9174))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA917C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayKillZombiePlayer(bool P0, uint32_t P1) {
		return ((T (*)(NetWorkBossAIPawn*, bool, uint32_t))(Il2CppBase() + 0x3EA9180))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(NetWorkBossAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3EA9184))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(NetWorkBossAIPawn*))(Il2CppBase() + 0x3EA9188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetWorkBossAIPawn*, float))(Il2CppBase() + 0x3EA918C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetWorkBossAIPawn*, bool))(Il2CppBase() + 0x3EA9190))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFightOff(Il2CppVector3 P0) {
		return ((T (*)(NetWorkBossAIPawn*, Il2CppVector3))(Il2CppBase() + 0x3EA9194))(this, P0);
	}

};

}
