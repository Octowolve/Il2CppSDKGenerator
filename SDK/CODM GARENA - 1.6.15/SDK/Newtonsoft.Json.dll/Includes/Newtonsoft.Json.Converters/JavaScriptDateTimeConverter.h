#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class JavaScriptDateTimeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "JavaScriptDateTimeConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(JavaScriptDateTimeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40901BC))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(JavaScriptDateTimeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4090494))(this, reader, objectType, existingValue, serializer);
	}

};

}
