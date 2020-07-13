#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionRootMotionFireFromCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_RootMotionFireFromCover"));
	}

	template <typename T = uintptr_t> T& TargetCoverSpot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& FireMaxTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionRootMotionFireFromCover*))(Il2CppBase() + 0x4F28C2C))(this);
	}

};

}
