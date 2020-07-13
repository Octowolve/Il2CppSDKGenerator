#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EUseRevivalReson
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EUseRevivalReson"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TEAMMATE_ALL_ALIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TEAMMATE_DIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TEAMMATE_ALL_DIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
