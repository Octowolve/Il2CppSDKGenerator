#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StrByteCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StrByteCount"));
	}


	template <typename T = int32_t> T Invoke(Il2CppString* str) {
		return ((T (*)(StrByteCount*, Il2CppString*))(Il2CppBase() + 0x39F61DC))(this, str);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* str, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StrByteCount*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39FB9B4))(this, str, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(StrByteCount*, uintptr_t))(Il2CppBase() + 0x39FB9E0))(this, result);
	}

};

}
