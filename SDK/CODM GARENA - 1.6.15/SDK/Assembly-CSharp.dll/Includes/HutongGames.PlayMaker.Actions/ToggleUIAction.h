#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ToggleUIAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ToggleUIAction"));
	}

	template <typename T = bool> T& ShowMovement() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& ShowFire() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& AutoFinish() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ToggleUIAction*))(Il2CppBase() + 0x4F17CFC))(this);
	}

};

}
