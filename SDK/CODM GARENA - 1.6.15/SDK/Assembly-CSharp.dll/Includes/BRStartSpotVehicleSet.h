#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRStartSpotVehicleSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRStartSpotVehicleSet"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRStartSpotVehicleSet*))(Il2CppBase() + 0x52FB248))(this);
	}

};

}
