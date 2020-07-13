#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ReflectionAttributeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider"));
	}

	template <typename T = uintptr_t> T& _attributeProvider() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
