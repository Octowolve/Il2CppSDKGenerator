#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ColorUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ColorUtility"));
	}


	template <typename T = bool> static T DoTryParseHtmlColor(Il2CppString* htmlString, uintptr_t* color) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4DA08CC))(0, htmlString, color);
	}
	template <typename T = bool> static T TryParseHtmlString(Il2CppString* htmlString, uintptr_t* color) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4DA096C))(0, htmlString, color);
	}
	template <typename T = Il2CppString*> static T ToHtmlStringRGB(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA09F0))(0, color);
	}

};

}
