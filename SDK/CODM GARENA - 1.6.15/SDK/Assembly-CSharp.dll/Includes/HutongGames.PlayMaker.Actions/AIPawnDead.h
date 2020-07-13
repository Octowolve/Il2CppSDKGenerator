#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIPawnDead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIPawnDead"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(AIPawnDead*))(Il2CppBase() + 0x4F299B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AIPawnDead*))(Il2CppBase() + 0x4F299B4))(this);
	}

};

}
