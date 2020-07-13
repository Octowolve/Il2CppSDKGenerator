#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceImpl"));
	}

	template <typename T = uintptr_t> static T& initLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& autoFlush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& indentLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& indentSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& listeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& correlation_manager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T get_AutoFlush() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B0014))(0);
	}
	template <typename T = int32_t> static T get_IndentLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B0918))(0);
	}
	template <typename T = int32_t> static T get_IndentSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B09D0))(0);
	}
	template <typename T = uintptr_t> static T get_Listeners() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B0160))(0);
	}
	template <typename T = uintptr_t> static T get_CorrelationManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B02AC))(0);
	}
	template <typename T = void> static T InitOnce() {
		return ((T (*)(void *))(Il2CppBase() + 0x42B062C))(0);
	}

};

}
