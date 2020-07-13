#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RestartLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RestartLevel"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(RestartLevel*))(Il2CppBase() + 0x4D841AC))(this);
	}

};

}
