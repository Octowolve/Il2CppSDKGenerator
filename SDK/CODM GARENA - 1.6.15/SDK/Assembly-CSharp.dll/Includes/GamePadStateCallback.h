#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePadStateCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePadStateCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(GamePadStateCallback*))(Il2CppBase() + 0x244D57C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GamePadStateCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2456D9C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GamePadStateCallback*, uintptr_t))(Il2CppBase() + 0x2456DC8))(this, result);
	}

};

}
