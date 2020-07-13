#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Handheld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Handheld"));
	}


	template <typename T = bool> static T PlayFullScreenMovie(Il2CppString* path, uintptr_t bgColor, uintptr_t controlMode, uintptr_t scalingMode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A152C))(0, path, bgColor, controlMode, scalingMode);
	}
	template <typename T = bool> static T INTERNAL_CALL_PlayFullScreenMovie(Il2CppString* path, uintptr_t bgColor, uintptr_t controlMode, uintptr_t scalingMode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A1568))(0, path, bgColor, controlMode, scalingMode);
	}

};

}
