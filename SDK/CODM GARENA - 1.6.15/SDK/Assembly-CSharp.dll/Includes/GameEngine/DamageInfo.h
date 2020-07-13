#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DamageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DamageInfo"));
	}

	template <typename T = uint32_t> T& InstigatorPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& DisplayDamage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Penetration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& WeaponSlot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& FireMode() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& IsMeleeWeapon() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& IsSniper() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = bool> T& IsSpecialWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& HitPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& HitNormal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& SourcePos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& HitGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ThroughWallCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ThroughPlayerCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& HitFragCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& AmmoCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& isExplosion() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& bKilledByBossDie() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = uintptr_t> T& DamageBy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& ClientTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int16_t> T& PunchAngleX() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int16_t> T& PunchAngleY() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = int16_t> T& ShotSpreadX() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int16_t> T& ShotSpreadY() {
		return *(T*)((uintptr_t)this + 0x6E);
	}
	template <typename T = uintptr_t> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = unsigned char> T& SpecialFlag() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& Critical() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = Il2CppVector3> T& OutPos() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& Deceleration() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& DecelerationDuration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsLocalInstigator() {
		return ((T (*)(DamageInfo*))(Il2CppBase() + 0x41AE0F0))(this);
	}

};

}
