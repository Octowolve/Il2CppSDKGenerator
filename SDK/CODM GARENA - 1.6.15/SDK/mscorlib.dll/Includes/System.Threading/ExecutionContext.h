#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class ExecutionContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "ExecutionContext"));
	}

	template <typename T = uintptr_t> T& _sc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _suppressFlow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _capture() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = uintptr_t> static T Capture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D88114))(0);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ExecutionContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D883F4))(this, info, context);
	}
	template <typename T = uintptr_t> T get_SecurityContext() {
		return ((T (*)(ExecutionContext*))(Il2CppBase() + 0x4D884D8))(this);
	}
	template <typename T = void> T set_SecurityContext(uintptr_t value) {
		return ((T (*)(ExecutionContext*, uintptr_t))(Il2CppBase() + 0x4D883EC))(this, value);
	}
	template <typename T = bool> T get_FlowSuppressed() {
		return ((T (*)(ExecutionContext*))(Il2CppBase() + 0x4D883E4))(this);
	}
	template <typename T = bool> static T IsFlowSuppressed() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D88578))(0);
	}

};

}
