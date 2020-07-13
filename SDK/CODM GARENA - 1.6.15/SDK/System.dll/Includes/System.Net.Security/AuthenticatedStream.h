#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Security {

class AuthenticatedStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Security", "AuthenticatedStream"));
	}

	template <typename T = uintptr_t> T& innerStream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& leaveStreamOpen() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_InnerStream() {
		return ((T (*)(AuthenticatedStream*))(Il2CppBase() + 0x3E51224))(this);
	}
	template <typename T = bool> T get_IsAuthenticated() {
		return ((T (*)(AuthenticatedStream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_LeaveInnerStreamOpen() {
		return ((T (*)(AuthenticatedStream*))(Il2CppBase() + 0x3E5122C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(AuthenticatedStream*, bool))(Il2CppBase() + 0x3E51234))(this, disposing);
	}

};

}
