#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIAttackVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIAttackVolume"));
	}

	template <typename T = bool> T& OnlyDamgeOpponent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& CanDamageStaticActor() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = float> T& HitBackAngle() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& MultiPlyDamage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uint64_t>*> T& PawnIDDamaged() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Discharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AIAttackVolume*))(Il2CppBase() + 0x4CE2E84))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(AIAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE2F58))(this, other);
	}
	template <typename T = void> T Recharge(uintptr_t owner, float damage) {
		return ((T (*)(AIAttackVolume*, uintptr_t, float))(Il2CppBase() + 0x4CDFF38))(this, owner, damage);
	}
	template <typename T = void> T Discharge() {
		return ((T (*)(AIAttackVolume*))(Il2CppBase() + 0x4CDF6E4))(this);
	}
	template <typename T = bool> T CanDamage(uintptr_t P) {
		return ((T (*)(AIAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE3330))(this, P);
	}
	template <typename T = void> T DoDamage(uintptr_t P) {
		return ((T (*)(AIAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE3440))(this, P);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AIAttackVolume*))(Il2CppBase() + 0x4CE3710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(AIAttackVolume*, uintptr_t))(Il2CppBase() + 0x4CE3718))(this, P0);
	}

};

}
