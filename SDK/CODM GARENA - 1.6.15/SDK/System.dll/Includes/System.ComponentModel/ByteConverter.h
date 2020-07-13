#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ByteConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ByteConverter"));
	}


	template <typename T = bool> T get_SupportHex() {
		return ((T (*)(ByteConverter*))(Il2CppBase() + 0x4CA3458))(this);
	}
	template <typename T = Il2CppString*> T ConvertToString(uintptr_t value, uintptr_t format) {
		return ((T (*)(ByteConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA3460))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString(Il2CppString* value, uintptr_t format) {
		return ((T (*)(ByteConverter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CA3520))(this, value, format);
	}
	template <typename T = uintptr_t> T ConvertFromString_1(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(ByteConverter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4CA35D0))(this, value, fromBase);
	}

};

}
