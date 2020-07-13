#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UnhandledExceptionEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UnhandledExceptionEventArgs"));
	}

	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_isTerminating() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ExceptionObject() {
		return ((T (*)(UnhandledExceptionEventArgs*))(Il2CppBase() + 0x4D9BEF8))(this);
	}
	template <typename T = bool> T get_IsTerminating() {
		return ((T (*)(UnhandledExceptionEventArgs*))(Il2CppBase() + 0x4D9BF00))(this);
	}

};

}
