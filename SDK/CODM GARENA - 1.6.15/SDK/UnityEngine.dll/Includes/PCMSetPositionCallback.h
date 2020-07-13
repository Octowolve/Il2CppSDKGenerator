#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PCMSetPositionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "PCMSetPositionCallback"));
	}


	template <typename T = void> T Invoke(int32_t position) {
		return ((T (*)(PCMSetPositionCallback*, int32_t))(Il2CppBase() + 0x469CEAC))(this, position);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t position, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PCMSetPositionCallback*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x469CFA4))(this, position, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PCMSetPositionCallback*, uintptr_t))(Il2CppBase() + 0x469D060))(this, result);
	}

};

}
