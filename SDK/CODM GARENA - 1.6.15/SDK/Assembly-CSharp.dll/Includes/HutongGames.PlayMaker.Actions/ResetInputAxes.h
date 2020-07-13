#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ResetInputAxes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ResetInputAxes"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(ResetInputAxes*))(Il2CppBase() + 0x4D840F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ResetInputAxes*))(Il2CppBase() + 0x4D840F4))(this);
	}

};

}
