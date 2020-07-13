#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class SingleConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "SingleConverter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(SingleConverter*))(Il2CppBase() + 0x4CB45B0))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(SingleConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB45B8))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(SingleConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CB4678))(this, value, format);
	}

};

}
