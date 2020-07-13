#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FinishFSM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FinishFSM"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(FinishFSM*))(Il2CppBase() + 0x504F32C))(this);
	}

};

}
