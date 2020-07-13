#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class RegexConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "RegexConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4091B68))(this, writer, value, serializer);
	}
	template <typename T = bool> T HasFlag(uintptr_t options, uintptr_t flag) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40921C4))(this, options, flag);
	}
	template <typename T = void> T WriteBson(uintptr_t writer, uintptr_t regex) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4091C64))(this, writer, regex);
	}
	template <typename T = void> T WriteJson_1(uintptr_t writer, uintptr_t regex, uintptr_t serializer) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4091F8C))(this, writer, regex, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4092204))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = uintptr_t> T ReadRegexString(uintptr_t reader) {
		return ((T (*)(RegexConverter*, uintptr_t))(Il2CppBase() + 0x40927FC))(this, reader);
	}
	template <typename T = uintptr_t> T ReadRegexObject(uintptr_t reader, uintptr_t serializer) {
		return ((T (*)(RegexConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4092308))(this, reader, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(RegexConverter*, uintptr_t))(Il2CppBase() + 0x4092A84))(this, objectType);
	}

};

}
