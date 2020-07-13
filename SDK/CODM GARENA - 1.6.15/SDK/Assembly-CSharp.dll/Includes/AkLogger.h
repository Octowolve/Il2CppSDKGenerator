#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkLogger"));
	}

	template <typename T = uintptr_t> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& errorLoggerDelegate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x49063BC))(0);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkLogger*))(Il2CppBase() + 0x490646C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AkLogger*))(Il2CppBase() + 0x49065FC))(this);
	}
	template <typename T = void> static T WwiseInternalLogError(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4906058))(0, message);
	}
	template <typename T = void> static T Message(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4906600))(0, message);
	}
	template <typename T = void> static T Warning(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4906704))(0, message);
	}
	template <typename T = void> static T Error(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4906808))(0, message);
	}

};

}
