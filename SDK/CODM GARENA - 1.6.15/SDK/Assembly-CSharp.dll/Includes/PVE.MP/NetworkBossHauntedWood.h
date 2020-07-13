#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossHauntedWood
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossHauntedWood"));
	}

	template <typename T = Il2CppString*> T& healthAudioSwitchGroupName() {
		return *(T*)((uintptr_t)this + 0xADC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& healthAudioSwitch() {
		return *(T*)((uintptr_t)this + 0xAE0);
	}
	template <typename T = uintptr_t> T& blueEyes() {
		return *(T*)((uintptr_t)this + 0xAE4);
	}
	template <typename T = uintptr_t> T& orangeEyes() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = int32_t> T& lastSwitchLevel() {
		return *(T*)((uintptr_t)this + 0xAEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadSoundConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleHealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHuntAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEarthquakeAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopHunt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeakAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStartCageAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndCageAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPursueAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySummonAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySummon2Anim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySummon3Anim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLongRangeAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPurseAttackBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPurseAttackEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTreadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateBossStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBossHauntedWood*, uintptr_t))(Il2CppBase() + 0x3EAF15C))(this, info);
	}
	template <typename T = void> T _LoadSoundConfigs() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EAF808))(this);
	}
	template <typename T = void> T HandleHealthChange(uintptr_t damageInfo) {
		return ((T (*)(NetworkBossHauntedWood*, uintptr_t))(Il2CppBase() + 0x3EAF910))(this, damageInfo);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EAFB38))(this);
	}
	template <typename T = void> T PlayHuntAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossHauntedWood*, Il2CppVector3))(Il2CppBase() + 0x3EAFC3C))(this, destPos);
	}
	template <typename T = void> T PlayEarthquakeAnim(Il2CppVector3 destPos) {
		return ((T (*)(NetworkBossHauntedWood*, Il2CppVector3))(Il2CppBase() + 0x3EAFD6C))(this, destPos);
	}
	template <typename T = void> T OnStopHunt() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EAFE9C))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBossHauntedWood*, bool))(Il2CppBase() + 0x3EAFFA0))(this, isHeadShot);
	}
	template <typename T = void> T PlayWeakAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB00BC))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB01D0))(this);
	}
	template <typename T = void> T PlayStartCageAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0328))(this);
	}
	template <typename T = void> T PlayEndCageAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB043C))(this);
	}
	template <typename T = void> T PlayPursueAttackAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0550))(this);
	}
	template <typename T = void> T PlaySummonAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0664))(this);
	}
	template <typename T = void> T PlaySummon2Anim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0778))(this);
	}
	template <typename T = void> T PlaySummon3Anim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB088C))(this);
	}
	template <typename T = void> T PlayLongRangeAttackAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB09A0))(this);
	}
	template <typename T = void> T PlayPurseAttackBegin() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0AB4))(this);
	}
	template <typename T = void> T PlayPurseAttackEnd() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0BC8))(this);
	}
	template <typename T = void> T PlayTreadAnim() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0CDC))(this);
	}
	template <typename T = void> T OnUpdateBossStatus(uint32_t bossStatus) {
		return ((T (*)(NetworkBossHauntedWood*, uint32_t))(Il2CppBase() + 0x3EB0DB8))(this, bossStatus);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBossHauntedWood*, uintptr_t))(Il2CppBase() + 0x3EB0F70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy__LoadSoundConfigs() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0F74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBossHauntedWood*, bool))(Il2CppBase() + 0x3EB0F7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBossHauntedWood*))(Il2CppBase() + 0x3EB0F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateBossStatus(uint32_t P0) {
		return ((T (*)(NetworkBossHauntedWood*, uint32_t))(Il2CppBase() + 0x3EB0F84))(this, P0);
	}

};

}
