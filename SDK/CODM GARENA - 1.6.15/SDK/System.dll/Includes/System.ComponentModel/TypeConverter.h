#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class TypeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "TypeConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t sourceType) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB5274))(this, sourceType);
	}
	template <typename T = bool> T CanConvertFrom_1(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA1F54))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t destinationType) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB528C))(this, destinationType);
	}
	template <typename T = bool> T CanConvertTo_1(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2068))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t o) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB52A4))(this, o);
	}
	template <typename T = uintptr_t> T ConvertFrom_1(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA266C))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertFromInvariantString(Il2CppString* text) {
		return ((T (*)(TypeConverter*, Il2CppString*))(Il2CppBase() + 0x4CB5608))(this, text);
	}
	template <typename T = uintptr_t> T ConvertFromInvariantString_1(uintptr_t context, Il2CppString* text) {
		return ((T (*)(TypeConverter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CB5614))(this, context, text);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* text) {
		return ((T (*)(TypeConverter*, Il2CppString*))(Il2CppBase() + 0x4CB5714))(this, text);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(uintptr_t context, Il2CppString* text) {
		return ((T (*)(TypeConverter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CB5718))(this, context, text);
	}
	template <typename T = uintptr_t> T ConvertFromString_2(uintptr_t context, uintptr_t culture, Il2CppString* text) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CB56EC))(this, context, culture, text);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB57F0))(this, value, destinationType);
	}
	template <typename T = uintptr_t> T ConvertTo_1(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2A18))(this, context, culture, value, destinationType);
	}
	template <typename T = Il2CppString*> T ConvertToInvariantString(uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB5B1C))(this, value);
	}
	template <typename T = Il2CppString*> T ConvertToInvariantString_1(uintptr_t context, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB5B28))(this, context, value);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB5D60))(this, value);
	}
	template <typename T = Il2CppString*> T ConvertToString_1(uintptr_t context, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB5F94))(this, context, value);
	}
	template <typename T = Il2CppString*> T ConvertToString_2(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CABEB8))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T GetConvertFromException(uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB5378))(this, value);
	}
	template <typename T = uintptr_t> T GetConvertToException(uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB5828))(this, value, destinationType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t propertyValues) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB61CC))(this, propertyValues);
	}
	template <typename T = uintptr_t> T CreateInstance_1(uintptr_t context, uintptr_t propertyValues) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAFA14))(this, context, propertyValues);
	}
	template <typename T = bool> T GetCreateInstanceSupported() {
		return ((T (*)(TypeConverter*))(Il2CppBase() + 0x4CB61E4))(this);
	}
	template <typename T = bool> T GetCreateInstanceSupported_1(uintptr_t context) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CAFA50))(this, context);
	}
	template <typename T = uintptr_t> T GetProperties(uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB61F8))(this, value);
	}
	template <typename T = uintptr_t> T GetProperties_1(uintptr_t context, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB6204))(this, context, value);
	}
	template <typename T = uintptr_t> T GetProperties_2(uintptr_t context, uintptr_t value, Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CAFA98))(this, context, value, attributes);
	}
	template <typename T = bool> T GetPropertiesSupported() {
		return ((T (*)(TypeConverter*))(Il2CppBase() + 0x4CB6368))(this);
	}
	template <typename T = bool> T GetPropertiesSupported_1(uintptr_t context) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB637C))(this, context);
	}
	template <typename T = uintptr_t> T GetStandardValues() {
		return ((T (*)(TypeConverter*))(Il2CppBase() + 0x4CB6384))(this);
	}
	template <typename T = uintptr_t> T GetStandardValues_1(uintptr_t context) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CAFC20))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive() {
		return ((T (*)(TypeConverter*))(Il2CppBase() + 0x4CB6398))(this);
	}
	template <typename T = bool> T GetStandardValuesExclusive_1(uintptr_t context) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CAFC5C))(this, context);
	}
	template <typename T = bool> T GetStandardValuesSupported() {
		return ((T (*)(TypeConverter*))(Il2CppBase() + 0x4CB63AC))(this);
	}
	template <typename T = bool> T GetStandardValuesSupported_1(uintptr_t context) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CAFC98))(this, context);
	}
	template <typename T = bool> T IsValid(uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t))(Il2CppBase() + 0x4CB63C0))(this, value);
	}
	template <typename T = bool> T IsValid_1(uintptr_t context, uintptr_t value) {
		return ((T (*)(TypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAFCD4))(this, context, value);
	}
	template <typename T = uintptr_t> T SortProperties(uintptr_t props, Il2CppArray<uintptr_t>* names) {
		return ((T (*)(TypeConverter*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CB63D8))(this, props, names);
	}

};

}
