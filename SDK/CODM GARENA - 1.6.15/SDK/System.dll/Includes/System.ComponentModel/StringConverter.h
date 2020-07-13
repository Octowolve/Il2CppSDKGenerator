#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class StringConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "StringConverter"));
	}


	template <typename T = bool> T CanConvertFrom(uintptr_t context, uintptr_t sourceType) {
		return ((T (*)(StringConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB4730))(this, context, sourceType);
	}
	template <typename T = uintptr_t> T ConvertFrom(uintptr_t context, uintptr_t culture, uintptr_t value) {
		return ((T (*)(StringConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB4804))(this, context, culture, value);
	}

};

}
