#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class EnumConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "EnumConverter"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& stdValues() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(EnumConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAACD0))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(EnumConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAAE0C))(this, context, culture, value, destinationType);
	}
	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(EnumConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAC0AC))(this, context, sourceType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(EnumConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAC1E8))(this, context, culture, value);
	}
	template <typename T = bool> T IsValid(uintptr_t context, uintptr_t value) {
		return ((T (*)(EnumConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAC7CC))(this, context, value);
	}
	template <typename T = bool> T GetStandardValuesSupported(uintptr_t context) {
		return ((T (*)(EnumConverter*, uintptr_t))(Il2CppBase() + 0x4CAC880))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive(uintptr_t context) {
		return ((T (*)(EnumConverter*, uintptr_t))(Il2CppBase() + 0x4CAC888))(this, context);
	}
	template <typename T = uintptr_t> T GetStandardValues(uintptr_t context) {
		return ((T (*)(EnumConverter*, uintptr_t))(Il2CppBase() + 0x4CAC89C))(this, context);
	}
	template <typename T = uintptr_t> T get_Comparer() {
		return ((T (*)(EnumConverter*))(Il2CppBase() + 0x4CAC9A0))(this);
	}
	template <typename T = uintptr_t> T get_EnumType() {
		return ((T (*)(EnumConverter*))(Il2CppBase() + 0x4CACA34))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(EnumConverter*))(Il2CppBase() + 0x4CACA3C))(this);
	}
	template <typename T = void> T set_Values(uintptr_t value) {
		return ((T (*)(EnumConverter*, uintptr_t))(Il2CppBase() + 0x4CACA44))(this, value);
	}
	template <typename T = uintptr_t> T CreateValueNotValidException(uintptr_t value) {
		return ((T (*)(EnumConverter*, uintptr_t))(Il2CppBase() + 0x4CABC84))(this, value);
	}
	template <typename T = bool> T get_IsFlags() {
		return ((T (*)(EnumConverter*))(Il2CppBase() + 0x4CABB90))(this);
	}

};

}
