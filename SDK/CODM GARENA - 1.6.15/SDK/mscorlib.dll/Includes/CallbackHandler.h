#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "CallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t context) {
		return ((T (*)(CallbackHandler*, uintptr_t))(Il2CppBase() + 0x3030734))(this, context);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t context, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CallbackHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3030A8C))(this, context, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CallbackHandler*, uintptr_t))(Il2CppBase() + 0x3030B4C))(this, result);
	}

};

}
