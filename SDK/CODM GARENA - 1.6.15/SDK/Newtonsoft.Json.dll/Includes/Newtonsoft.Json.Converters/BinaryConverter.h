#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class BinaryConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "BinaryConverter"));
	}

	template <typename T = uintptr_t> T& _reflectionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(BinaryConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408DE04))(this, writer, value, serializer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetByteArray(uintptr_t value) {
		return ((T (*)(BinaryConverter*, uintptr_t))(Il2CppBase() + 0x408DE70))(this, value);
	}
	template <typename T = void> T EnsureReflectionObject(uintptr_t t) {
		return ((T (*)(BinaryConverter*, uintptr_t))(Il2CppBase() + 0x408E050))(this, t);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(BinaryConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x408E294))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadByteArray(uintptr_t reader) {
		return ((T (*)(BinaryConverter*, uintptr_t))(Il2CppBase() + 0x408E758))(this, reader);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(BinaryConverter*, uintptr_t))(Il2CppBase() + 0x408EA54))(this, objectType);
	}

};

}
