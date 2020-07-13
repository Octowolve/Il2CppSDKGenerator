#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StopLocationServiceUpdates
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StopLocationServiceUpdates"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(StopLocationServiceUpdates*))(Il2CppBase() + 0x5033068))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StopLocationServiceUpdates*))(Il2CppBase() + 0x503306C))(this);
	}

};

}
