#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnValidateInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "OnValidateInput"));
	}


	template <typename T = char> T Invoke(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(OnValidateInput*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3D26D0C))(this, text, charIndex, addedChar);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* text, int32_t charIndex, char addedChar, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnValidateInput*, Il2CppString*, int32_t, char, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D31CB8))(this, text, charIndex, addedChar, callback, object);
	}
	template <typename T = char> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnValidateInput*, uintptr_t))(Il2CppBase() + 0x3D31D9C))(this, result);
	}

};

}
