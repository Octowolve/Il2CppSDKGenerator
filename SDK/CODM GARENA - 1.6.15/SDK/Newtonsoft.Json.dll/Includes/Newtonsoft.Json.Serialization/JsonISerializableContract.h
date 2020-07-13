#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonISerializableContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonISerializableContract"));
	}

	template <typename T = void*> T& ISerializableCreator() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void*> T get_ISerializableCreator() {
		return ((T (*)(JsonISerializableContract*))(Il2CppBase() + 0x398B8B8))(this);
	}
	template <typename T = void> T set_ISerializableCreator(void* value) {
		return ((T (*)(JsonISerializableContract*, void*))(Il2CppBase() + 0x3983B0C))(this, value);
	}

};

}
