#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsGetFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsGetFloat"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsGetFloat*))(Il2CppBase() + 0x4D7C63C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsGetFloat*))(Il2CppBase() + 0x4D7C6F8))(this);
	}

};

}
