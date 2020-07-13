#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class StringEnumConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "StringEnumConverter"));
	}

	template <typename T = bool> T& CamelCaseText() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& AllowIntegerValues() {
		return *(T*)((uintptr_t)this + 0x9);
	}

	template <typename T = bool> T get_CamelCaseText() {
		return ((T (*)(StringEnumConverter*))(Il2CppBase() + 0x4092B5C))(this);
	}
	template <typename T = bool> T get_AllowIntegerValues() {
		return ((T (*)(StringEnumConverter*))(Il2CppBase() + 0x4092B64))(this);
	}
	template <typename T = void> T set_AllowIntegerValues(bool value) {
		return ((T (*)(StringEnumConverter*, bool))(Il2CppBase() + 0x4092B6C))(this, value);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(StringEnumConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4092B94))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(StringEnumConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4092DCC))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(StringEnumConverter*, uintptr_t))(Il2CppBase() + 0x40934AC))(this, objectType);
	}

};

}
