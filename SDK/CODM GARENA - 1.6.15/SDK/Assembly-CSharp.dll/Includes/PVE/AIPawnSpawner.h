#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawner"));
	}

	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& ShootingAccuracy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& MeshName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& Mesh2Name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& EnableNavAgent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializePawnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(AIPawnSpawner*))(Il2CppBase() + 0x49B04A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InitializePawnData() {
		return ((T (*)(AIPawnSpawner*))(Il2CppBase() + 0x49B07D4))(this);
	}

};

}
