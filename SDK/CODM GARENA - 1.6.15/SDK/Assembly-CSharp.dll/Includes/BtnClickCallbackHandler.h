#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BtnClickCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BtnClickCallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t subType) {
		return ((T (*)(BtnClickCallbackHandler*, uintptr_t))(Il2CppBase() + 0x4DDFA78))(this, subType);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t subType, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BtnClickCallbackHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DDFB1C))(this, subType, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BtnClickCallbackHandler*, uintptr_t))(Il2CppBase() + 0x4DDFBD8))(this, result);
	}

};

}
