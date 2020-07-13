#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionRootMotionTakeCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_RootMotionTakeCover"));
	}

	template <typename T = uintptr_t> T& TargetCoverSpot() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionRootMotionTakeCover*))(Il2CppBase() + 0x4F28D90))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AIActControlActionRootMotionTakeCover*))(Il2CppBase() + 0x4F28EE4))(this);
	}

};

}
