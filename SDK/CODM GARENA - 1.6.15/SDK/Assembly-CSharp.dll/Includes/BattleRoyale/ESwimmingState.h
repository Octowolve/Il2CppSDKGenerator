#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ESwimmingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ESwimmingState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SwimmingState_Idle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SwimmingState_Sprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SwimmingState_TranstionToSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SwimmingState_TranstionToIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
