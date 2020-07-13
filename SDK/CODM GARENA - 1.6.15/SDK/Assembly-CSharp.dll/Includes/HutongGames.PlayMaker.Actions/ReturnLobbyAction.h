#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ReturnLobbyAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ReturnLobbyAction"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(ReturnLobbyAction*))(Il2CppBase() + 0x4D84208))(this);
	}

};

}
