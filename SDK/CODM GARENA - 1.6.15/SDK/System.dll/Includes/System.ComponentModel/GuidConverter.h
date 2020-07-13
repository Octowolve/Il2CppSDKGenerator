#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class GuidConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "GuidConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(GuidConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CACC5C))(this, context, sourceType);
	}
	template <typename T = bool> T CanConvertTo(uintptr_t context, uintptr_t destinationType) {
		return ((T (*)(GuidConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CACD30))(this, context, destinationType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(GuidConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CACE6C))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(GuidConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAD1E8))(this, context, culture, value, destinationType);
	}

};

}
