#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DateTimeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DateTimeConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(DateTimeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA6C70))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(DateTimeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA6D44))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(DateTimeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA6E18))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(DateTimeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA7308))(this, context, culture, value, destinationType);
	}

};

}
