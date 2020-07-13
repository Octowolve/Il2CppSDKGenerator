#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class CorrelationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "CorrelationManager"));
	}

	template <typename T = uintptr_t> T& op_stack() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_LogicalOperationStack() {
		return ((T (*)(CorrelationManager*))(Il2CppBase() + 0x42AB3A0))(this);
	}

};

}
