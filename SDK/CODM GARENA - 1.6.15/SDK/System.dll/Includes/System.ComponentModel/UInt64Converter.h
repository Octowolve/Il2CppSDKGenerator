#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class UInt64Converter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "UInt64Converter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(UInt64Converter*))(Il2CppBase() + 0x4CBAA2C))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(UInt64Converter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CBAA34))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(UInt64Converter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CBAAF8))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(UInt64Converter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CBABAC))(this, value, fromBase);
	}

};

}
