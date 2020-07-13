#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsSetFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsSetFloat"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsSetFloat*))(Il2CppBase() + 0x4D7D310))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsSetFloat*))(Il2CppBase() + 0x4D7D3CC))(this);
	}

};

}
