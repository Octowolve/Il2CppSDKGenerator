#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Handler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Handler"));
	}


	template <typename T = Il2CppString*> T Invoke(Il2CppString* jsonRequest) {
		return ((T (*)(Handler*, Il2CppString*))(Il2CppBase() + 0x4883E9C))(this, jsonRequest);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* jsonRequest, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Handler*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4883F8C))(this, jsonRequest, callback, object);
	}
	template <typename T = Il2CppString*> T EndInvoke(uintptr_t result) {
		return ((T (*)(Handler*, uintptr_t))(Il2CppBase() + 0x4883FB8))(this, result);
	}

};

}
