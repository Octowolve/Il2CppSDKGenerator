#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BaseAnimationAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BaseAnimationAction"));
	}


	template <typename T = void> T OnActionTargetInvoked(uintptr_t targetObject) {
		return ((T (*)(BaseAnimationAction*, uintptr_t))(Il2CppBase() + 0x4F33158))(this, targetObject);
	}

};

}
