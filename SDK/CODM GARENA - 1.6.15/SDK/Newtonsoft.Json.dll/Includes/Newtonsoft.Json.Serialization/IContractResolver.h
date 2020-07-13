#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class IContractResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "IContractResolver"));
	}


	template <typename T = uintptr_t> T ResolveContract(uintptr_t type) {
		return ((T (*)(IContractResolver*, uintptr_t))(Il2CppBase() + 0x0))(this, type);
	}

};

}
