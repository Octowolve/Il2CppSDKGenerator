#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityContext"));
	}

	template <typename T = bool> T& _capture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _winid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _stack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _suppressFlowWindowsIdentity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _suppressFlow() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = uintptr_t> static T Capture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4283360))(0);
	}
	template <typename T = bool> T get_FlowSuppressed() {
		return ((T (*)(SecurityContext*))(Il2CppBase() + 0x42834D4))(this);
	}
	template <typename T = uintptr_t> T get_CompressedStack() {
		return ((T (*)(SecurityContext*))(Il2CppBase() + 0x42834DC))(this);
	}

};

}
