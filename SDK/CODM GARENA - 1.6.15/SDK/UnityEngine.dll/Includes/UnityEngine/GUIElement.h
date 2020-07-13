#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIElement"));
	}


	template <typename T = bool> T HitTest(Il2CppVector3 screenPosition, uintptr_t camera) {
		return ((T (*)(GUIElement*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x478B89C))(this, screenPosition, camera);
	}
	template <typename T = bool> T HitTest_1(Il2CppVector3 screenPosition) {
		return ((T (*)(GUIElement*, Il2CppVector3))(Il2CppBase() + 0x478B974))(this, screenPosition);
	}
	template <typename T = bool> static T INTERNAL_CALL_HitTest(uintptr_t self, uintptr_t screenPosition, uintptr_t camera) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x478B8CC))(0, self, screenPosition, camera);
	}
	template <typename T = Il2CppRect> T GetScreenRect() {
		return ((T (*)(GUIElement*))(Il2CppBase() + 0x478B99C))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetScreenRect(uintptr_t self, uintptr_t camera, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x478B9D4))(0, self, camera, value);
	}

};

}
