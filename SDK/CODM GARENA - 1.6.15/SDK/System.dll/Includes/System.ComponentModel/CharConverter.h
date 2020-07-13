#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class CharConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "CharConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(CharConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA36B8))(this, context, sourceType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(CharConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA378C))(this, context, culture, value);
	}
	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(CharConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA3990))(this, context, culture, value, destinationType);
	}

};

}
