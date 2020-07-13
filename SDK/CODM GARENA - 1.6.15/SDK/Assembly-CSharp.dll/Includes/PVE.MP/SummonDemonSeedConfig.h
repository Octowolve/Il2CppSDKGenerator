#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SummonDemonSeedConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SummonDemonSeedConfig"));
	}

	template <typename T = uintptr_t> T& projectilePreset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& summonCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& fireOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& summonAnim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& summonTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& seedSpawnSpotParentName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& BossRunToCenterSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& MoveCenterSpotName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_animDuration() {
		return ((T (*)(SummonDemonSeedConfig*))(Il2CppBase() + 0x435B0AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_seedSpawnPoints() {
		return ((T (*)(SummonDemonSeedConfig*))(Il2CppBase() + 0x435B0BC))(this);
	}
	template <typename T = Il2CppVector3> T get_MoveCenterSpotLocation() {
		return ((T (*)(SummonDemonSeedConfig*))(Il2CppBase() + 0x435B4E0))(this);
	}

};

}
