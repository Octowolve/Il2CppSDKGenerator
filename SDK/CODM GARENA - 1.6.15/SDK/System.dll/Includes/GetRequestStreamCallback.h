#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetRequestStreamCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "GetRequestStreamCallback"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(GetRequestStreamCallback*))(Il2CppBase() + 0x42CA0CC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetRequestStreamCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C8AFC))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetRequestStreamCallback*, uintptr_t))(Il2CppBase() + 0x42C8E4C))(this, result);
	}

};

}
