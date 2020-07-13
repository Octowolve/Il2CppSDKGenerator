#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketAsyncCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "SocketAsyncCall"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(SocketAsyncCall*))(Il2CppBase() + 0x3E614F0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(SocketAsyncCall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5DEA8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SocketAsyncCall*, uintptr_t))(Il2CppBase() + 0x3E61580))(this, result);
	}

};

}
