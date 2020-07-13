#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.ConstrainedExecution {

class ReliabilityContractAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute"));
	}

	template <typename T = uintptr_t> T& consistency() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& cer() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
