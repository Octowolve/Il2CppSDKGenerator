#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonPrimitiveContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonPrimitiveContract"));
	}

	template <typename T = uintptr_t> T& TypeCode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& ReadTypeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(JsonPrimitiveContract*))(Il2CppBase() + 0x398C0A4))(this);
	}
	template <typename T = void> T set_TypeCode(uintptr_t value) {
		return ((T (*)(JsonPrimitiveContract*, uintptr_t))(Il2CppBase() + 0x398C0AC))(this, value);
	}

};

}
