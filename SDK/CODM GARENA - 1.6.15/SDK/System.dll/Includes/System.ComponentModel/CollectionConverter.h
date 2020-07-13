#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class CollectionConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "CollectionConverter"));
	}


	template <typename T = uintptr_t> T ConvertTo(uintptr_t context, uintptr_t culture, uintptr_t value, uintptr_t destinationType) {
		return ((T (*)(CollectionConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA0F04))(this, context, culture, value, destinationType);
	}
	template <typename T = uintptr_t> T GetProperties(uintptr_t context, uintptr_t value, Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(CollectionConverter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CA3B30))(this, context, value, attributes);
	}
	template <typename T = bool> T GetPropertiesSupported(uintptr_t context) {
		return ((T (*)(CollectionConverter*, uintptr_t))(Il2CppBase() + 0x4CA3B38))(this, context);
	}

};

}
