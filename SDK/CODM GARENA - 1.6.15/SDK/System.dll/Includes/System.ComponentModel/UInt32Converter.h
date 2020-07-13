#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class UInt32Converter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "UInt32Converter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(UInt32Converter*))(Il2CppBase() + 0x4CBA704))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(UInt32Converter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CBA70C))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(UInt32Converter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CBA7CC))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(UInt32Converter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CBA87C))(this, value, fromBase);
	}

};

}
