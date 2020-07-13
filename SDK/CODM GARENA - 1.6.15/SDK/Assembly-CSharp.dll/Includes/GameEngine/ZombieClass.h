#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ZombieClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ZombieClass"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ZOMBIE_CLASS_COMMON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ZOMBIE_CLASS_ELITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
