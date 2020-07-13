#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkZombie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkZombie"));
	}

	template <typename T = uintptr_t> T& m_dismember() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& m_dismemberState() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = float> T& spawnTime() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> T& animOverrideController() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = Il2CppString*> T& kDefaultStateName() {
		return *(T*)((uintptr_t)this + 0xAC8);
	}
	template <typename T = float> T& BloodSplashTriggerRange() {
		return *(T*)((uintptr_t)this + 0xACC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOverrideController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceAnimInAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreReplaceAnims() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSprintAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControlledByMonkey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBodyFragment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBloodSplashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T get_dismemberState() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBD960))(this);
	}
	template <typename T = bool> T get_bRiserZombie() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBD968))(this);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBD994))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBDB34))(this);
	}
	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombie*, uintptr_t))(Il2CppBase() + 0x3EBE280))(this, info);
	}
	template <typename T = void> T CreateOverrideController() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBDF40))(this);
	}
	template <typename T = void> T ReplaceAnimInAnimator(uintptr_t originalClip, uintptr_t clip) {
		return ((T (*)(NetworkZombie*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EBE6A0))(this, originalClip, clip);
	}
	template <typename T = void> T PreReplaceAnims() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBE804))(this);
	}
	template <typename T = void> T InitAudio() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBEA04))(this);
	}
	template <typename T = void> T ShutdownAudio() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBEBAC))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBECD0))(this);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBED94))(this);
	}
	template <typename T = void> T EnableSprintAnim(bool enable) {
		return ((T (*)(NetworkZombie*, bool))(Il2CppBase() + 0x3EBF214))(this, enable);
	}
	template <typename T = void> T ControlledByMonkey(bool bControlled) {
		return ((T (*)(NetworkZombie*, bool))(Il2CppBase() + 0x3EBF31C))(this, bControlled);
	}
	template <typename T = void> T PlayAttackAnim() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBF448))(this);
	}
	template <typename T = void> T StopAttackAnim() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBF6F8))(this);
	}
	template <typename T = void> T OnBodyFragment(unsigned char bodyPart, Il2CppVector3 attackDir) {
		return ((T (*)(NetworkZombie*, unsigned char, Il2CppVector3))(Il2CppBase() + 0x3EBF80C))(this, bodyPart, attackDir);
	}
	template <typename T = bool> T get_crawling() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC00B0))(this);
	}
	template <typename T = void> T PlayHitAnim(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(NetworkZombie*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EC00C4))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombie*, bool))(Il2CppBase() + 0x3EC0190))(this, isHeadShot);
	}
	template <typename T = void> T PlayBloodSplashEffect() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EBFD70))(this);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0874))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLogicalComponents() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC092C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombie*, uintptr_t))(Il2CppBase() + 0x3EC0930))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitAudio() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutdownAudio() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC093C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0944))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitAnim(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NetworkZombie*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EC0948))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombie*, bool))(Il2CppBase() + 0x3EC094C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(NetworkZombie*))(Il2CppBase() + 0x3EC0950))(this);
	}

};

}
