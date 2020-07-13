#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Initialization {

class ContextInitializer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Initialization", "ContextInitializer`1"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(ContextInitializer1*))(Il2CppBase() + 0x518EDB8))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(ContextInitializer1*, uintptr_t))(Il2CppBase() + 0x518EDC0))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ContextInitializer1*))(Il2CppBase() + 0x518EDC8))(this);
	}
	template <typename T = void> T Ready() {
		return ((T (*)(ContextInitializer1*))(Il2CppBase() + 0x518EEC4))(this);
	}
	template <typename T = void> T SetContext(uintptr_t context) {
		return ((T (*)(ContextInitializer1*, uintptr_t))(Il2CppBase() + 0x518EF6C))(this, context);
	}

};

}
