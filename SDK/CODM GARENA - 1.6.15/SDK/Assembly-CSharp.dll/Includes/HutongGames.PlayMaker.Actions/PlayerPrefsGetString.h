#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsGetString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsGetString"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsGetString*))(Il2CppBase() + 0x4D7CCFC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsGetString*))(Il2CppBase() + 0x4D7CDAC))(this);
	}

};

}
