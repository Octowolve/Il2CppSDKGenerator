#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ICanvasRaycastFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ICanvasRaycastFilter"));
	}


	template <typename T = bool> T IsRaycastLocationValid(Il2CppVector2 sp, uintptr_t eventCamera) {
		return ((T (*)(ICanvasRaycastFilter*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x0))(this, sp, eventCamera);
	}

};

}
