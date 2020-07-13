#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePadButtonCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePadButtonCallback"));
	}


	template <typename T = bool> T Invoke() {
		return ((T (*)(GamePadButtonCallback*))(Il2CppBase() + 0x2452F7C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GamePadButtonCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2456D1C))(this, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GamePadButtonCallback*, uintptr_t))(Il2CppBase() + 0x2456D48))(this, result);
	}

};

}
