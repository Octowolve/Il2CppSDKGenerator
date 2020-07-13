#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class CultureInfoConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "CultureInfoConverter"));
	}

	template <typename T = uintptr_t> T& _standardValues() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(CultureInfoConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA5DB0))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(CultureInfoConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA5E84))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(CultureInfoConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA5FC0))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(CultureInfoConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA6380))(this, context, culture, value, destinationType);
	}
	template <typename T = uintptr_t> T GetStandardValues(uintptr_t context) {
		return ((T (*)(CultureInfoConverter*, uintptr_t))(Il2CppBase() + 0x4CA688C))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive(uintptr_t context) {
		return ((T (*)(CultureInfoConverter*, uintptr_t))(Il2CppBase() + 0x4CA6A98))(this, context);
	}
	template <typename T = bool> T GetStandardValuesSupported(uintptr_t context) {
		return ((T (*)(CultureInfoConverter*, uintptr_t))(Il2CppBase() + 0x4CA6AA0))(this, context);
	}

};

}
