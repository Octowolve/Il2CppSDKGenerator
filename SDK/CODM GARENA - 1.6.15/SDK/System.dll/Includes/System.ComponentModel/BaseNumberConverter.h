#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class BaseNumberConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "BaseNumberConverter"));
	}

	template <typename T = uintptr_t> T& InnerType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(BaseNumberConverter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(BaseNumberConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA1E80))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t t) {
		return ((T (*)(BaseNumberConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2024))(this, context, t);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(BaseNumberConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2138))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(BaseNumberConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA2718))(this, context, culture, value, destinationType);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(BaseNumberConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(BaseNumberConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(BaseNumberConverter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CA2BC8))(this, value, fromBase);
	}

};

}
