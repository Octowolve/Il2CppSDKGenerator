#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ActivateCheckerControllerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ActivateCheckerControllerAction"));
	}

	template <typename T = uintptr_t> T& CheckerController() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& IsDeactivate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& IsSpawnImmediately() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ActivateCheckerControllerAction*))(Il2CppBase() + 0x476B328))(this);
	}

};

}
