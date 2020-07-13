#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRVehicleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRVehicleConfig"));
	}

	template <typename T = uint32_t> T& VehicleSpawnCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRVehicleConfig*))(Il2CppBase() + 0x52FBA8C))(this);
	}

};

}
