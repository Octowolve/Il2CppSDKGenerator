#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FsmStateActionWithFinishEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FsmStateActionWithFinishEvent"));
	}

	template <typename T = uintptr_t> T& FinishEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FsmStateActionWithFinishEvent*))(Il2CppBase() + 0x5052B34))(this);
	}
	template <typename T = void> T FinishAction() {
		return ((T (*)(FsmStateActionWithFinishEvent*))(Il2CppBase() + 0x5052B54))(this);
	}

};

}
