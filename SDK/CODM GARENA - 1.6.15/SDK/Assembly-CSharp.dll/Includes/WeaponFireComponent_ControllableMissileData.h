#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentControllableMissileData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_ControllableMissileData"));
	}

	template <typename T = float> T& InitialSpeed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& LaunchSpeed() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& AutoLaunchTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& InitialMaxAngle() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& InitialControlAngle() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& LaunchControlAngle() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& SelfMinDamage() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& SelfMaxDamage() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& LifeSpan() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& ExplosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& FlightAssetID() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& ExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& InitialControlScale() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& LaunchControlScale() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& SpawnCircleHeight() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& SpawnCircleRadius() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentControllableMissileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489F170))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentControllableMissileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489FA24))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
