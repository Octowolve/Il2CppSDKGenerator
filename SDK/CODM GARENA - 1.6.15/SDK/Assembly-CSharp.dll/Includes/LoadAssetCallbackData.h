#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetCallbackData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadAssetCallbackData"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(LoadAssetCallbackData*))(Il2CppBase() + 0x2465870))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(LoadAssetCallbackData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2465900))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LoadAssetCallbackData*, uintptr_t))(Il2CppBase() + 0x246592C))(this, result);
	}

};

}
