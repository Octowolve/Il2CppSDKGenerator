#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleSpawnSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleSpawnSpot"));
	}

	template <typename T = uintptr_t> T& spotType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isRandomDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& dropMethodID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(VehicleSpawnSpot*))(Il2CppBase() + 0x4887CF0))(this);
	}

};

}
