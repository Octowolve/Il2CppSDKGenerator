#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsGetInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsGetInt"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsGetInt*))(Il2CppBase() + 0x4D7C9AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsGetInt*))(Il2CppBase() + 0x4D7CA68))(this);
	}

};

}
