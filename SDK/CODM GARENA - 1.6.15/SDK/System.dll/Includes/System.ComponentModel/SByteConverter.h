#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class SByteConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "SByteConverter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(SByteConverter*))(Il2CppBase() + 0x4CB4288))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(SByteConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB4290))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(SByteConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CB4350))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(SByteConverter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CB4400))(this, value, fromBase);
	}

};

}
