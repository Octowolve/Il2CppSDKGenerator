#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkZombieNapalm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkZombieNapalm"));
	}

	template <typename T = float> T& explodeHealthRatio() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = bool> T& explodeAlertEffectOn() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> T& zombieAlertFireEffect() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> T& zombieAlertBlinkEffect() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = uintptr_t> T& defendAnimType() {
		return *(T*)((uintptr_t)this + 0xAC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefendWeakPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAlertEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombieNapalm*, uintptr_t))(Il2CppBase() + 0x3EC24E0))(this, info);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC2904))(this);
	}
	template <typename T = void> T PlayExplosionAnim() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC2DDC))(this);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC2EF0))(this);
	}
	template <typename T = void> T OnDefendWeakPoint(uint32_t bodyPart) {
		return ((T (*)(NetworkZombieNapalm*, uint32_t))(Il2CppBase() + 0x3EC3020))(this, bodyPart);
	}
	template <typename T = void> T PlayAttackAnim() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC3158))(this);
	}
	template <typename T = void> T StopAttackAnim() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC326C))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombieNapalm*, bool))(Il2CppBase() + 0x3EC33D0))(this, isHeadShot);
	}
	template <typename T = void> T ShowAlertEffect(bool show) {
		return ((T (*)(NetworkZombieNapalm*, bool))(Il2CppBase() + 0x3EC2C50))(this, show);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(NetworkZombieNapalm*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3EC351C))(this, pos, info);
	}
	template <typename T = Il2CppVector3> T get_HeadPosition() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC366C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombieNapalm*, uintptr_t))(Il2CppBase() + 0x3EC36F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC36F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombieNapalm*))(Il2CppBase() + 0x3EC36FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombieNapalm*, bool))(Il2CppBase() + 0x3EC3700))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(NetworkZombieNapalm*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3EC3704))(this, P0, P1);
	}

};

}
