#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class KeyValuePairConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "KeyValuePairConverter"));
	}

	template <typename T = void*> static T& ReflectionObjectPerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T InitializeReflectionObject(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4090B40))(0, t);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(KeyValuePairConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4090EDC))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(KeyValuePairConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4091210))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(KeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x40918CC))(this, objectType);
	}

};

}
