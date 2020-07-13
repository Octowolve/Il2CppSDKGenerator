#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class HashSetConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "HashSetConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(HashSetConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408F0B8))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(HashSetConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408F0BC))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(HashSetConverter*, uintptr_t))(Il2CppBase() + 0x408F474))(this, objectType);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(HashSetConverter*))(Il2CppBase() + 0x408F58C))(this);
	}

};

}
