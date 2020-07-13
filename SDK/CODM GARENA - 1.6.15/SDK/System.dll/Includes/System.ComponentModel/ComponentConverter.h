#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ComponentConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ComponentConverter"));
	}


	template <typename T = uintptr_t> T GetProperties(uintptr_t context, uintptr_t value, Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(ComponentConverter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CA49D4))(this, context, value, attributes);
	}
	template <typename T = bool> T GetPropertiesSupported(uintptr_t context) {
		return ((T (*)(ComponentConverter*, uintptr_t))(Il2CppBase() + 0x4CA4B30))(this, context);
	}

};

}
