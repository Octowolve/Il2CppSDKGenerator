#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SantaSpawnZombieRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SantaSpawnZombieRole"));
	}

	template <typename T = uintptr_t> T& preset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_RoleId() {
		return ((T (*)(SantaSpawnZombieRole*))(Il2CppBase() + 0x4359220))(this);
	}

};

}
