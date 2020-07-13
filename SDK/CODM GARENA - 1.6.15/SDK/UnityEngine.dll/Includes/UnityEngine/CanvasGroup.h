#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CanvasGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CanvasGroup"));
	}


	template <typename T = float> T get_alpha() {
		return ((T (*)(CanvasGroup*))(Il2CppBase() + 0x46A5DE4))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(CanvasGroup*, float))(Il2CppBase() + 0x46A5E7C))(this, value);
	}
	template <typename T = bool> T get_interactable() {
		return ((T (*)(CanvasGroup*))(Il2CppBase() + 0x46A5F1C))(this);
	}
	template <typename T = bool> T get_blocksRaycasts() {
		return ((T (*)(CanvasGroup*))(Il2CppBase() + 0x46A5FB4))(this);
	}
	template <typename T = bool> T get_ignoreParentGroups() {
		return ((T (*)(CanvasGroup*))(Il2CppBase() + 0x46A604C))(this);
	}
	template <typename T = bool> T IsRaycastLocationValid(Il2CppVector2 sp, uintptr_t eventCamera) {
		return ((T (*)(CanvasGroup*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x46A60E4))(this, sp, eventCamera);
	}

};

}
