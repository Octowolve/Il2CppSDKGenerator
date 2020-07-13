#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveConfigFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveConfigFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(SaveConfigFunc*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x49911D4))(this, callback, bufferSize, configBuffer);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint32_t bufferSize, uintptr_t configBuffer, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(SaveConfigFunc*, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x499127C))(this, callback, bufferSize, configBuffer, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SaveConfigFunc*, uintptr_t))(Il2CppBase() + 0x499136C))(this, result);
	}

};

}
