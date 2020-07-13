#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIPawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIPawnInitializeData"));
	}

	template <typename T = uintptr_t> T& InitActionMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& InitActionParam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Mesh2AssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpecialProperty() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& VisionDist() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ShootingAccuracy() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& EnableNavAgent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& MaxMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& WeaponConfig() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& SpawnPoint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
