#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class UInt16Converter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "UInt16Converter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(UInt16Converter*))(Il2CppBase() + 0x4CBA3DC))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(UInt16Converter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CBA3E4))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(UInt16Converter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CBA4A4))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(UInt16Converter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CBA554))(this, value, fromBase);
	}

};

}
