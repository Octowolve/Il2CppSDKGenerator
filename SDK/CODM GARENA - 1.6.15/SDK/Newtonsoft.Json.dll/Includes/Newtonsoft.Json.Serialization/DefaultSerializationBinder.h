#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class DefaultSerializationBinder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "DefaultSerializationBinder"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _typeCache() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T GetTypeFromTypeNameKey(uintptr_t typeNameKey) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39878C8))(0, typeNameKey);
	}
	template <typename T = uintptr_t> T BindToType(Il2CppString* assemblyName, Il2CppString* typeName) {
		return ((T (*)(DefaultSerializationBinder*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3987C38))(this, assemblyName, typeName);
	}

};

}
