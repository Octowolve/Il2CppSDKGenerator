#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EAirCraftType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EAirCraftType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EAIRCRAFT_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EAIRCRAFT_AIRPLANE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EAIRCRAFT_DRONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EAIRCRAFT_REVIVAL_AIRPLANE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EAIRCRAFT_INTERFER_DRONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
