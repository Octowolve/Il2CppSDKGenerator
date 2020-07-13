#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZombieCanisterPileConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZombieCanisterPileConfigPreset"));
	}

	template <typename T = float> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& DamageOverTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
