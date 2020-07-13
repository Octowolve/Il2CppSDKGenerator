#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class SetPropertyUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "SetPropertyUtility"));
	}


	template <typename T = bool> static T SetColor(uintptr_t currentValue, uintptr_t newValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E3808C))(0, currentValue, newValue);
	}
	template <typename T = bool> static T SetStruct(uintptr_t currentValue, uintptr_t newValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45F0634))(0, currentValue, newValue);
	}
	template <typename T = bool> static T SetClass(uintptr_t currentValue, uintptr_t newValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45F0228))(0, currentValue, newValue);
	}

};

}
