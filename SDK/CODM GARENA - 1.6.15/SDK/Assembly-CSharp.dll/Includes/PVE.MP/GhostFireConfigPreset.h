#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class GhostFireConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "GhostFireConfigPreset"));
	}

	template <typename T = float> T& minSeperationDistance() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& minAttackDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& maxAttackDistance() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& minHeight() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& attackMode() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& tracingGhostFirePreset() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& fireOffset() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& explosionTriggerRadius() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& ExplosionMaxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& ExplosionMinDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& ExplosionAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& ExplosionDamageRadius() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& explosionDelayTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& attackCD() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_AttackMode() {
		return ((T (*)(GhostFireConfigPreset*))(Il2CppBase() + 0x45FF8F0))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(GhostFireConfigPreset*))(Il2CppBase() + 0x45FF8F8))(this);
	}
	template <typename T = void> T GetRelevantPreset(uintptr_t relevantPresetList) {
		return ((T (*)(GhostFireConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FF908))(this, relevantPresetList);
	}
	template <typename T = void> T xLuaBaseProxy_GetRelevantPreset(uintptr_t P0) {
		return ((T (*)(GhostFireConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FFA40))(this, P0);
	}

};

}
