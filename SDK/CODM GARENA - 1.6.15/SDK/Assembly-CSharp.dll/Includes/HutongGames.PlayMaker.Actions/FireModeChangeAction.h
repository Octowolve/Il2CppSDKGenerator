#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FireModeChangeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FireModeChangeAction"));
	}

	template <typename T = uintptr_t> T& FireMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AutoFinish() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(FireModeChangeAction*))(Il2CppBase() + 0x504FBC4))(this);
	}

};

}
