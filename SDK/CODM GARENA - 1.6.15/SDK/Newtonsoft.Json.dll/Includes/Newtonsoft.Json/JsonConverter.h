#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(JsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(JsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(JsonConverter*, uintptr_t))(Il2CppBase() + 0x0))(this, objectType);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(JsonConverter*))(Il2CppBase() + 0x40A55A0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(JsonConverter*))(Il2CppBase() + 0x40A55A8))(this);
	}

};

}
