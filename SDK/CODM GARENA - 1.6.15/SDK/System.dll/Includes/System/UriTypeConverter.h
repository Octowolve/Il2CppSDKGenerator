#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UriTypeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System", "UriTypeConverter"));
	}


	template <typename T = bool> T CanConvert(uintptr_t type) {
		return ((T (*)(UriTypeConverter*, uintptr_t))(Il2CppBase() + 0x4AF5778))(this, type);
	}
	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(UriTypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF58AC))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(UriTypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF596C))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(UriTypeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF5988))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(UriTypeConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF5B90))(this, context, culture, value, destinationType);
	}

};

}
