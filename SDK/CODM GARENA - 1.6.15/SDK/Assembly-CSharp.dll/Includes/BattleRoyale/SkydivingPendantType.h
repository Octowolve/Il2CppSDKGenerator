#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SkydivingPendantType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SkydivingPendantType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Wingsuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Parachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
