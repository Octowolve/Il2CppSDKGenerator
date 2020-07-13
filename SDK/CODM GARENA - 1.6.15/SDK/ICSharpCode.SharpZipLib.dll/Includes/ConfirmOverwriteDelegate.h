#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfirmOverwriteDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "ConfirmOverwriteDelegate"));
	}


	template <typename T = bool> T Invoke(Il2CppString* fileName) {
		return ((T (*)(ConfirmOverwriteDelegate*, Il2CppString*))(Il2CppBase() + 0x4A7E930))(this, fileName);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* fileName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ConfirmOverwriteDelegate*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A7F248))(this, fileName, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(ConfirmOverwriteDelegate*, uintptr_t))(Il2CppBase() + 0x4A7F274))(this, result);
	}

};

}
