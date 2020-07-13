#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZombieProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZombieProjectile"));
	}

	template <typename T = uintptr_t> T& projectileConfigPreset() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProjectilePreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetProjectilePreset(uintptr_t preset) {
		return ((T (*)(ZombieProjectile*, uintptr_t))(Il2CppBase() + 0x4363CE0))(this, preset);
	}
	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(ZombieProjectile*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4363D88))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(ZombieProjectile*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x436402C))(this, P0, P1, P2, P3);
	}

};

}
