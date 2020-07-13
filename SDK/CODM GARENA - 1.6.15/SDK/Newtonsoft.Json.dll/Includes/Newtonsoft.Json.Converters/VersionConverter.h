#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class VersionConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "VersionConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(VersionConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40946C4))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(VersionConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4094804))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(VersionConverter*, uintptr_t))(Il2CppBase() + 0x4094C2C))(this, objectType);
	}

};

}
