#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UnhandledExceptionEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UnhandledExceptionEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(UnhandledExceptionEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9BF1C))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnhandledExceptionEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9BFE0))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnhandledExceptionEventHandler*, uintptr_t))(Il2CppBase() + 0x4D9C018))(this, result);
	}

};

}
