#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRLevelFenceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRLevelFenceConfig"));
	}

	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& VehicleDamageVelocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& FenceAssetId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BrokenEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& ColliderHalfExtent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
