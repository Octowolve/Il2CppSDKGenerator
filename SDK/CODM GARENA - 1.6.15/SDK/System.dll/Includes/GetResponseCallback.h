#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetResponseCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "GetResponseCallback"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(GetResponseCallback*))(Il2CppBase() + 0x42CA15C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetResponseCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C92EC))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetResponseCallback*, uintptr_t))(Il2CppBase() + 0x42C9648))(this, result);
	}

};

}
