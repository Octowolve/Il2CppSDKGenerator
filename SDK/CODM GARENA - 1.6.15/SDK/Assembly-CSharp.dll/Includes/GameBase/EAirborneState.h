#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EAirborneState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EAirborneState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& AirborneState_None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AirborneState_Drop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AirborneState_Lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
