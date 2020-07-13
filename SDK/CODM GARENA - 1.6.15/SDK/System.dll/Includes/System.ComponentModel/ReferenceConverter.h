#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ReferenceConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ReferenceConverter"));
	}

	template <typename T = uintptr_t> T& reference_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(ReferenceConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB209C))(this, context, sourceType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(ReferenceConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB2180))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(ReferenceConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB2864))(this, context, culture, value, destinationType);
	}
	template <typename T = uintptr_t> T GetStandardValues(uintptr_t context) {
		return ((T (*)(ReferenceConverter*, uintptr_t))(Il2CppBase() + 0x4CB2E4C))(this, context);
	}
	template <typename T = bool> T GetStandardValuesExclusive(uintptr_t context) {
		return ((T (*)(ReferenceConverter*, uintptr_t))(Il2CppBase() + 0x4CB3690))(this, context);
	}
	template <typename T = bool> T GetStandardValuesSupported(uintptr_t context) {
		return ((T (*)(ReferenceConverter*, uintptr_t))(Il2CppBase() + 0x4CB3698))(this, context);
	}
	template <typename T = bool> T IsValueAllowed(uintptr_t context, uintptr_t value) {
		return ((T (*)(ReferenceConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB36A0))(this, context, value);
	}

};

}
