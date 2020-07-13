#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonObjectId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonObjectId"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Value() {
		return ((T (*)(BsonObjectId*))(Il2CppBase() + 0x40890D0))(this);
	}
	template <typename T = void> T set_Value(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BsonObjectId*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40890D8))(this, value);
	}

};

}
