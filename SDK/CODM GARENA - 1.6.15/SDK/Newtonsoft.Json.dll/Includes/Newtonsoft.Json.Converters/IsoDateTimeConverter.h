#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IsoDateTimeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IsoDateTimeConverter"));
	}

	template <typename T = uintptr_t> T& _dateTimeStyles() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _dateTimeFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _culture() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Culture() {
		return ((T (*)(IsoDateTimeConverter*))(Il2CppBase() + 0x408F59C))(this);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(IsoDateTimeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408F64C))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(IsoDateTimeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408F964))(this, reader, objectType, existingValue, serializer);
	}

};

}
