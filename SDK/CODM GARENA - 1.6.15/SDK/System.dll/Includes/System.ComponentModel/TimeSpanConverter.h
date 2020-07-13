#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class TimeSpanConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "TimeSpanConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(TimeSpanConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB48F8))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(TimeSpanConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB49CC))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(TimeSpanConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB4B08))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(TimeSpanConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB4EB4))(this, context, culture, value, destinationType);
	}

};

}
