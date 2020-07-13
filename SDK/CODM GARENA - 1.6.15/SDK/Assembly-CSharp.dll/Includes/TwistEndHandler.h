#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TwistEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TwistEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TwistEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBC4C4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TwistEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEFE8))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TwistEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBF014))(this, result);
	}

};

}
