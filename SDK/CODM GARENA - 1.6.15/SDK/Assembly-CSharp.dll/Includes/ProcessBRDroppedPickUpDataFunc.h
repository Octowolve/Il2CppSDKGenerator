#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessBRDroppedPickUpDataFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProcessBRDroppedPickUpDataFunc"));
	}


	template <typename T = bool> T Invoke(uintptr_t data) {
		return ((T (*)(ProcessBRDroppedPickUpDataFunc*, uintptr_t))(Il2CppBase() + 0x18BE7C0))(this, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ProcessBRDroppedPickUpDataFunc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18C7200))(this, data, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(ProcessBRDroppedPickUpDataFunc*, uintptr_t))(Il2CppBase() + 0x18C722C))(this, result);
	}

};

}
