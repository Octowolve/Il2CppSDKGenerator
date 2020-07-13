#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TargetDisplayAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TargetDisplayAction"));
	}

	template <typename T = bool> T& Show() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TargetDisplayAction*))(Il2CppBase() + 0x4F17994))(this);
	}

};

}
