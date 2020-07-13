#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class BaseInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "BaseInput"));
	}


	template <typename T = Il2CppString*> T get_compositionString() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CF9DCC))(this);
	}
	template <typename T = uintptr_t> T get_imeCompositionMode() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CF9E64))(this);
	}
	template <typename T = void> T set_imeCompositionMode(uintptr_t value) {
		return ((T (*)(BaseInput*, uintptr_t))(Il2CppBase() + 0x3CF9F04))(this, value);
	}
	template <typename T = Il2CppVector2> T get_compositionCursorPos() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CF9FAC))(this);
	}
	template <typename T = void> T set_compositionCursorPos(Il2CppVector2 value) {
		return ((T (*)(BaseInput*, Il2CppVector2))(Il2CppBase() + 0x3CFA064))(this, value);
	}
	template <typename T = bool> T get_mousePresent() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CFA114))(this);
	}
	template <typename T = bool> T GetMouseButtonDown(int32_t button) {
		return ((T (*)(BaseInput*, int32_t))(Il2CppBase() + 0x3CFA1B4))(this, button);
	}
	template <typename T = bool> T GetMouseButtonUp(int32_t button) {
		return ((T (*)(BaseInput*, int32_t))(Il2CppBase() + 0x3CFA25C))(this, button);
	}
	template <typename T = bool> T GetMouseButton(int32_t button) {
		return ((T (*)(BaseInput*, int32_t))(Il2CppBase() + 0x3CFA304))(this, button);
	}
	template <typename T = Il2CppVector2> T get_mousePosition() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CFA3AC))(this);
	}
	template <typename T = Il2CppVector2> T get_mouseScrollDelta() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CFA488))(this);
	}
	template <typename T = bool> T get_touchSupported() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CFA540))(this);
	}
	template <typename T = int32_t> T get_touchCount() {
		return ((T (*)(BaseInput*))(Il2CppBase() + 0x3CFA5E0))(this);
	}
	template <typename T = uintptr_t> T GetTouch(int32_t index) {
		return ((T (*)(BaseInput*, int32_t))(Il2CppBase() + 0x3CFA680))(this, index);
	}
	template <typename T = float> T GetAxisRaw(Il2CppString* axisName) {
		return ((T (*)(BaseInput*, Il2CppString*))(Il2CppBase() + 0x3CFA770))(this, axisName);
	}
	template <typename T = bool> T GetButtonDown(Il2CppString* buttonName) {
		return ((T (*)(BaseInput*, Il2CppString*))(Il2CppBase() + 0x3CFA818))(this, buttonName);
	}

};

}
