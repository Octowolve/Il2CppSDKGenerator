#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateSessionFromTypeDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "CreateSessionFromTypeDelegate"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t type) {
		return ((T (*)(CreateSessionFromTypeDelegate*, uintptr_t))(Il2CppBase() + 0x2BF0BCC))(this, type);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t type, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CreateSessionFromTypeDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BF0C64))(this, type, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(CreateSessionFromTypeDelegate*, uintptr_t))(Il2CppBase() + 0x2BF0C90))(this, result);
	}

};

}
