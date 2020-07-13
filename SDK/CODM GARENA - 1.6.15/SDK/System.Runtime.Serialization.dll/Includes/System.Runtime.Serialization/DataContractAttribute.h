#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class DataContractAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Runtime.Serialization.dll", "System.Runtime.Serialization", "DataContractAttribute"));
	}

	template <typename T = bool> T& IsReference() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_IsReference() {
		return ((T (*)(DataContractAttribute*))(Il2CppBase() + 0x52DB3A8))(this);
	}

};

}
