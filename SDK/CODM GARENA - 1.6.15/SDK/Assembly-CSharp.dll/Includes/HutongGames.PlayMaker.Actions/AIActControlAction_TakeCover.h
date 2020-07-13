#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionTakeCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_TakeCover"));
	}

	template <typename T = uintptr_t> T& TargetCoverSpot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CoverDurationTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionTakeCover*))(Il2CppBase() + 0x4F291B8))(this);
	}

};

}
