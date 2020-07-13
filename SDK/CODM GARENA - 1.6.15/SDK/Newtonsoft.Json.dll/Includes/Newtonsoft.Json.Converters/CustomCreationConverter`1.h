#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class CustomCreationConverter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "CustomCreationConverter`1"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(CustomCreationConverter1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B5F030))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(CustomCreationConverter1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B5F0D8))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = uintptr_t> T Create(uintptr_t objectType) {
		return ((T (*)(CustomCreationConverter1*, uintptr_t))(Il2CppBase() + 0x0))(this, objectType);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(CustomCreationConverter1*, uintptr_t))(Il2CppBase() + 0x4B5F210))(this, objectType);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(CustomCreationConverter1*))(Il2CppBase() + 0x4B5F2EC))(this);
	}

};

}
