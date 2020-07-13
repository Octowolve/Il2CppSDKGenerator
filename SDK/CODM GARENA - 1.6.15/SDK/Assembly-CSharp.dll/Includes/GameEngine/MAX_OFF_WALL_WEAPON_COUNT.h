#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MAXOFFWALLWEAPONCOUNT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MAX_OFF_WALL_WEAPON_COUNT"));
	}

	template <typename T = int32_t> static T& VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
