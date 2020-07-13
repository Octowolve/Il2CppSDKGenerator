#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetElapsedTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetElapsedTime"));
	}


	template <typename T = float> T Invoke() {
		return ((T (*)(GetElapsedTime*))(Il2CppBase() + 0x343ADE0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetElapsedTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x343B16C))(this, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetElapsedTime*, uintptr_t))(Il2CppBase() + 0x343B198))(this, result);
	}

};

}
