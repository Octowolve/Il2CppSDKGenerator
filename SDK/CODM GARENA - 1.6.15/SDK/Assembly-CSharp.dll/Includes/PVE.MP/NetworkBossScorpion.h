#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossScorpion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossScorpion"));
	}

	template <typename T = int32_t> T& currentStage() {
		return *(T*)((uintptr_t)this + 0xADC);
	}
	template <typename T = uintptr_t> T& stoneLevel1() {
		return *(T*)((uintptr_t)this + 0xAE0);
	}
	template <typename T = uintptr_t> T& stoneLevel2() {
		return *(T*)((uintptr_t)this + 0xAE4);
	}
	template <typename T = uintptr_t> T& defaultBodyMat() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& angryEffects() {
		return *(T*)((uintptr_t)this + 0xAEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& attackAnimStateIDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0xAF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Mutate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySummonAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHuntAnimSlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHuntAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopHunt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateBossStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleAngryEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeBodyColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBloodEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleTurnLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBossScorpion*, uintptr_t))(Il2CppBase() + 0x3EB5704))(this, info);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB5B80))(this);
	}
	template <typename T = void> T Mutate(int32_t stage) {
		return ((T (*)(NetworkBossScorpion*, int32_t))(Il2CppBase() + 0x3EB6048))(this, stage);
	}
	template <typename T = void> T HideStone(int32_t stage) {
		return ((T (*)(NetworkBossScorpion*, int32_t))(Il2CppBase() + 0x3EB61D4))(this, stage);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB64E0))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBossScorpion*, bool))(Il2CppBase() + 0x3EB65DC))(this, isHeadShot);
	}
	template <typename T = void> T PlaySummonAnim() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB6728))(this);
	}
	template <typename T = void> T PlayHuntAnimSlow(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossScorpion*, Il2CppVector3))(Il2CppBase() + 0x3EB686C))(this, destPos);
	}
	template <typename T = void> T PlayHuntAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossScorpion*, Il2CppVector3))(Il2CppBase() + 0x3EB6A1C))(this, destPos);
	}
	template <typename T = void> T OnStopHunt() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB6D24))(this);
	}
	template <typename T = void> T OnUpdateBossStatus(uint32_t bossStatus) {
		return ((T (*)(NetworkBossScorpion*, uint32_t))(Il2CppBase() + 0x3EB6E58))(this, bossStatus);
	}
	template <typename T = void> T ToggleAngryEffect(bool show) {
		return ((T (*)(NetworkBossScorpion*, bool))(Il2CppBase() + 0x3EB71E4))(this, show);
	}
	template <typename T = uintptr_t> T FadeBodyColor(uintptr_t destColor) {
		return ((T (*)(NetworkBossScorpion*, uintptr_t))(Il2CppBase() + 0x3EB709C))(this, destColor);
	}
	template <typename T = int32_t> T GetBloodEffectAsset(uintptr_t info) {
		return ((T (*)(NetworkBossScorpion*, uintptr_t))(Il2CppBase() + 0x3EB73E4))(this, info);
	}
	template <typename T = void> T SwitchStage(int32_t stageIndex) {
		return ((T (*)(NetworkBossScorpion*, int32_t))(Il2CppBase() + 0x3EB74F0))(this, stageIndex);
	}
	template <typename T = void> T ToggleTurnLayer(bool enable) {
		return ((T (*)(NetworkBossScorpion*, bool))(Il2CppBase() + 0x3E911A8))(this, enable);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBossScorpion*, uintptr_t))(Il2CppBase() + 0x3EB77F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB77F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBossScorpion*))(Il2CppBase() + 0x3EB77F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBossScorpion*, bool))(Il2CppBase() + 0x3EB77FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateBossStatus(uint32_t P0) {
		return ((T (*)(NetworkBossScorpion*, uint32_t))(Il2CppBase() + 0x3EB7800))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetBloodEffectAsset(uintptr_t P0) {
		return ((T (*)(NetworkBossScorpion*, uintptr_t))(Il2CppBase() + 0x3EB7804))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchStage(int32_t P0) {
		return ((T (*)(NetworkBossScorpion*, int32_t))(Il2CppBase() + 0x3EB7808))(this, P0);
	}

};

}
