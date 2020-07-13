#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ElectricShockCarPawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ElectricShockCarPawnInitializeData"));
	}

	template <typename T = uint64_t> T& ElectricShockCarNPCID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& AliveTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& actorRoot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& MaxAcceleration() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
