#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIWeapon"));
	}

	template <typename T = float> T& m_LastAttackTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& MinAttackTimeInterval() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AttackRange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_PawnOwner() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRemoteWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanReachTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CanReachTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDoMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBladePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalHitDetectionTraceEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T InitWeapon() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B65E8))(this);
	}
	template <typename T = void> T ConfigProperties() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B66F4))(this);
	}
	template <typename T = bool> T ValidateOwner() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B678C))(this);
	}
	template <typename T = bool> T IsMeleeWeapon() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B682C))(this);
	}
	template <typename T = bool> T IsRemoteWeapon() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B68CC))(this);
	}
	template <typename T = bool> T CanReachTarget(uintptr_t InTarget, int32_t Mode) {
		return ((T (*)(AIWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x49B696C))(this, InTarget, Mode);
	}
	template <typename T = bool> T CanReachTarget_1(float Dist, int32_t Mode) {
		return ((T (*)(AIWeapon*, float, int32_t))(Il2CppBase() + 0x49B6B44))(this, Dist, Mode);
	}
	template <typename T = bool> T CanAttack(uintptr_t InTarget, int32_t Mode) {
		return ((T (*)(AIWeapon*, uintptr_t, int32_t))(Il2CppBase() + 0x49B6C38))(this, InTarget, Mode);
	}
	template <typename T = bool> T CanDoMeleeAttack(uintptr_t InTarget) {
		return ((T (*)(AIWeapon*, uintptr_t))(Il2CppBase() + 0x49B6D14))(this, InTarget);
	}
	template <typename T = void> T OnBeginAttack(int32_t Mode) {
		return ((T (*)(AIWeapon*, int32_t))(Il2CppBase() + 0x49B6FA0))(this, Mode);
	}
	template <typename T = void> T SpawnHitEffect(uintptr_t impactInfo) {
		return ((T (*)(AIWeapon*, uintptr_t))(Il2CppBase() + 0x49B7054))(this, impactInfo);
	}
	template <typename T = bool> T DetectHit(Il2CppVector3 startPos, Il2CppVector3 dir, float distance, uintptr_t impactList) {
		return ((T (*)(AIWeapon*, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x49B70F4))(this, startPos, dir, distance, impactList);
	}
	template <typename T = Il2CppVector3> T GetBladePos() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B7AD8))(this);
	}
	template <typename T = Il2CppVector3> T CalHitDetectionTraceEndPos() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B7BDC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMeleeWeapon() {
		return ((T (*)(AIWeapon*))(Il2CppBase() + 0x49B7CF4))(this);
	}

};

}
