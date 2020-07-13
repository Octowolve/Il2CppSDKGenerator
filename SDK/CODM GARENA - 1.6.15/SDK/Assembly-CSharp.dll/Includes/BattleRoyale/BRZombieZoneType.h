#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZombieZoneType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZombieZoneType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& BRZombieZoneUnknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BRZombieZoneZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BRZombieZoneBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
