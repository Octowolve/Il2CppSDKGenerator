#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncReadHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "AsyncReadHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(AsyncReadHandler*))(Il2CppBase() + 0x42AF6D8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(AsyncReadHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42AF768))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AsyncReadHandler*, uintptr_t))(Il2CppBase() + 0x42AF794))(this, result);
	}

};

}
