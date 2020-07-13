#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GotoPreviousState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GotoPreviousState"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GotoPreviousState*))(Il2CppBase() + 0x4F014F8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GotoPreviousState*))(Il2CppBase() + 0x4F014FC))(this);
	}

};

}
