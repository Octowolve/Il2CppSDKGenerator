#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.Utility {

class ColorUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.Utility", "ColorUtils"));
	}


	template <typename T = bool> static T Approximately(uintptr_t color1, uintptr_t color2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F23994))(0, color1, color2);
	}
	template <typename T = uintptr_t> static T FromIntRGBA(int32_t r, int32_t g, int32_t b, int32_t a) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2F23B5C))(0, r, g, b, a);
	}

};

}
