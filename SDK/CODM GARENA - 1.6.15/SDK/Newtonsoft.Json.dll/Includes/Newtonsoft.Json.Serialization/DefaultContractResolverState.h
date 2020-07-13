#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class DefaultContractResolverState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "DefaultContractResolverState"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& ContractCache() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& NameTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
