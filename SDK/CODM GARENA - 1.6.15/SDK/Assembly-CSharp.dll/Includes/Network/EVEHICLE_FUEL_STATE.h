#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EVEHICLEFUELSTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EVEHICLE_FUEL_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eVEHICLE_FUEL_STATE_NO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVEHICLE_FUEL_STATE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eVEHICLE_FUEL_STATE_SPRINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
