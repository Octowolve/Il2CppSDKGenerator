#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionChooseTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_ChooseTarget"));
	}

	template <typename T = uintptr_t> T& TargetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionChooseTarget*))(Il2CppBase() + 0x476D6F4))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AIActControlActionChooseTarget*))(Il2CppBase() + 0x476D810))(this);
	}

};

}
