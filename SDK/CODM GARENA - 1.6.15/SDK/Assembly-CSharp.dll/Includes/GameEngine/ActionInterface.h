#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ActionInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ActionInterface"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ActionInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
