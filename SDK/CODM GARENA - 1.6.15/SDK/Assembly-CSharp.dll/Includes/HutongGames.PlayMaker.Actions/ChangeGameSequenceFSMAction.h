#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ChangeGameSequenceFSMAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ChangeGameSequenceFSMAction"));
	}

	template <typename T = uintptr_t> T& SequenceFSM() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ChangeGameSequenceFSMAction*))(Il2CppBase() + 0x4F3A1B4))(this);
	}

};

}
