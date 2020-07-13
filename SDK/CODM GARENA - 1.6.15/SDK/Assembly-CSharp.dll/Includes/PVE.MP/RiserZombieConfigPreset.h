#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class RiserZombieConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "RiserZombieConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& dieInsideAnimTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomSpawnAnimGroup() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(RiserZombieConfigPreset*))(Il2CppBase() + 0x3EC0760))(this);
	}

};

}
