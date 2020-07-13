#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAxisFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetAxisFunc"));
	}


	template <typename T = float> T Invoke(Il2CppString* name) {
		return ((T (*)(GetAxisFunc*, Il2CppString*))(Il2CppBase() + 0x39B8F58))(this, name);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* name, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetAxisFunc*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C4088))(this, name, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetAxisFunc*, uintptr_t))(Il2CppBase() + 0x39C40B4))(this, result);
	}

};

}
