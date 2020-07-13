#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnValidate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnValidate"));
	}


	template <typename T = char> T Invoke(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(OnValidate*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x39F63B4))(this, text, charIndex, addedChar);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* text, int32_t charIndex, char addedChar, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnValidate*, Il2CppString*, int32_t, char, uintptr_t, uintptr_t))(Il2CppBase() + 0x39FB854))(this, text, charIndex, addedChar, callback, object);
	}
	template <typename T = char> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnValidate*, uintptr_t))(Il2CppBase() + 0x39FB938))(this, result);
	}

};

}
