#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class BooleanConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "BooleanConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(BooleanConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2CB4))(this, context, sourceType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(BooleanConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2D88))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T GetStandardValues(uintptr_t context) {
		return ((T (*)(BooleanConverter*, uintptr_t))(Il2CppBase() + 0x4CA2F98))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive(uintptr_t context) {
		return ((T (*)(BooleanConverter*, uintptr_t))(Il2CppBase() + 0x4CA30AC))(this, context);
	}
	template <typename T = bool> T GetStandardValuesSupported(uintptr_t context) {
		return ((T (*)(BooleanConverter*, uintptr_t))(Il2CppBase() + 0x4CA30B4))(this, context);
	}

};

}
