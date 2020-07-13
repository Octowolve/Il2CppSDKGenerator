#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DamageVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DamageVolume"));
	}

	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& damageTypePlayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& damageValuePlayer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& damageIntervalPlayer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& damageTypeZombie() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& damageValueZombie() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& damageIntervalZombie() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& causeDamageType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
