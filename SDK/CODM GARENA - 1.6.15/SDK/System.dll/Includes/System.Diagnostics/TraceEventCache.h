#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceEventCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceEventCache"));
	}

	template <typename T = uintptr_t> T& started() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& callstack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& thread() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& process() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& timestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T get_Callstack() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B04FC))(this);
	}
	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B0504))(this);
	}
	template <typename T = uintptr_t> T get_LogicalOperationStack() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B0514))(this);
	}
	template <typename T = int32_t> T get_ProcessId() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B0538))(this);
	}
	template <typename T = Il2CppString*> T get_ThreadId() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B0540))(this);
	}
	template <typename T = int64_t> T get_Timestamp() {
		return ((T (*)(TraceEventCache*))(Il2CppBase() + 0x42B0548))(this);
	}

};

}
