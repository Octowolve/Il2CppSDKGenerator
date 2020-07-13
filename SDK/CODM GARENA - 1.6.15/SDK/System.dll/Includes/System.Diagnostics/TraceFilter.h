#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceFilter"));
	}


	template <typename T = bool> T ShouldTrace(uintptr_t cache, Il2CppString* source, uintptr_t eventType, int32_t id, Il2CppString* formatOrMessage, Il2CppArray<uintptr_t>* args, uintptr_t data1, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(TraceFilter*, uintptr_t, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, cache, source, eventType, id, formatOrMessage, args, data1, data);
	}

};

}
