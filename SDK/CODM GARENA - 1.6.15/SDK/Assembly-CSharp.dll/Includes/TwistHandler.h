#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TwistHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TwistHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TwistHandler*, uintptr_t))(Il2CppBase() + 0x4BBC42C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TwistHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBF034))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TwistHandler*, uintptr_t))(Il2CppBase() + 0x4BBF060))(this, result);
	}

};

}
