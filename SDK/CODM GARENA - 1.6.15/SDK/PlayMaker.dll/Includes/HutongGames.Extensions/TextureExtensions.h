#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.Extensions {

class TextureExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.Extensions", "TextureExtensions"));
	}


	template <typename T = void> static T FloodFillArea(uintptr_t aTex, int32_t aX, int32_t aY, uintptr_t aFillColor) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2EC84CC))(0, aTex, aX, aY, aFillColor);
	}

};

}
