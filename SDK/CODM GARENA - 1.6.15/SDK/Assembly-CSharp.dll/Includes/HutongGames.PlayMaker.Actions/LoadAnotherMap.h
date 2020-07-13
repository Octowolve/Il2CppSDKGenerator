#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LoadAnotherMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LoadAnotherMap"));
	}

	template <typename T = Il2CppString*> T& LoadMapVarName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadAnotherMap*))(Il2CppBase() + 0x4D75644))(this);
	}

};

}
