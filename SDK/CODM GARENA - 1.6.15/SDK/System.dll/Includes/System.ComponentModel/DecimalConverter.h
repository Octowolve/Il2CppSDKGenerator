#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DecimalConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DecimalConverter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(DecimalConverter*))(Il2CppBase() + 0x4CA7C44))(this);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(DecimalConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA7C4C))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(DecimalConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA7D34))(this, context, culture, value, destinationType);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(DecimalConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA80AC))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(DecimalConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CA8170))(this, value, format);
	}

};

}
