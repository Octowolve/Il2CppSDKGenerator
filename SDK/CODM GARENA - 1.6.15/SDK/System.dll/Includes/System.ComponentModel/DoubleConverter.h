#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DoubleConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DoubleConverter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(DoubleConverter*))(Il2CppBase() + 0x4CAA5C4))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(DoubleConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAA5CC))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(DoubleConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CAA690))(this, value, format);
	}

};

}
