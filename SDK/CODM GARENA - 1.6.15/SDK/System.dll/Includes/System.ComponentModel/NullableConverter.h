#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class NullableConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "NullableConverter"));
	}

	template <typename T = uintptr_t> T& nullableType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& underlyingType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& underlyingTypeConverter() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF5C8))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF60C))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF650))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF894))(this, context, culture, value, destinationType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t context, uintptr_t propertyValues) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF9F4))(this, context, propertyValues);
	}
	template <typename T = bool> T GetCreateInstanceSupported(uintptr_t context) {
		return ((T (*)(NullableConverter*, uintptr_t))(Il2CppBase() + 0x4CAFA1C))(this, context);
	}
	template <typename T = uintptr_t> T GetProperties(uintptr_t context, uintptr_t value, Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CAFA58))(this, context, value, attributes);
	}
	template <typename T = bool> T GetPropertiesSupported(uintptr_t context) {
		return ((T (*)(NullableConverter*, uintptr_t))(Il2CppBase() + 0x4CAFAA0))(this, context);
	}
	template <typename T = uintptr_t> T GetStandardValues(uintptr_t context) {
		return ((T (*)(NullableConverter*, uintptr_t))(Il2CppBase() + 0x4CAFAD4))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive(uintptr_t context) {
		return ((T (*)(NullableConverter*, uintptr_t))(Il2CppBase() + 0x4CAFC28))(this, context);
	}
	template <typename T = bool> T GetStandardValuesSupported(uintptr_t context) {
		return ((T (*)(NullableConverter*, uintptr_t))(Il2CppBase() + 0x4CAFC64))(this, context);
	}
	template <typename T = bool> T IsValid(uintptr_t context, uintptr_t value) {
		return ((T (*)(NullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAFCA0))(this, context, value);
	}

};

}
