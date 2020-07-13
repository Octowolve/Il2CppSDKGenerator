#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class Win32Exception
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "Win32Exception"));
	}

	template <typename T = int32_t> T& native_error_code() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_NativeErrorCode() {
		return ((T (*)(Win32Exception*))(Il2CppBase() + 0x4CBAF5C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Win32Exception*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CBAF64))(this, info, context);
	}
	template <typename T = Il2CppString*> static T W32ErrorMessage(int32_t error_code) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4CBAE30))(0, error_code);
	}

};

}
