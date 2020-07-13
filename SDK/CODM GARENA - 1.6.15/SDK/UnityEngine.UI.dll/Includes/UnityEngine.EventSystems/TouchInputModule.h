#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class TouchInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "TouchInputModule"));
	}

	template <typename T = Il2CppVector2> T& m_LastMousePosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& m_MousePosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_ForceModuleActive() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_allowActivationOnStandalone() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0804C))(this);
	}
	template <typename T = void> T set_allowActivationOnStandalone(bool value) {
		return ((T (*)(TouchInputModule*, bool))(Il2CppBase() + 0x3D08054))(this, value);
	}
	template <typename T = bool> T get_forceModuleActive() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0805C))(this);
	}
	template <typename T = void> T set_forceModuleActive(bool value) {
		return ((T (*)(TouchInputModule*, bool))(Il2CppBase() + 0x3D08064))(this, value);
	}
	template <typename T = void> T UpdateModule() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0806C))(this);
	}
	template <typename T = bool> T IsModuleSupported() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D080D0))(this);
	}
	template <typename T = bool> T ShouldActivateModule() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0811C))(this);
	}
	template <typename T = bool> T UseFakeInput() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D08204))(this);
	}
	template <typename T = void> T Process() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0823C))(this);
	}
	template <typename T = void> T FakeTouches() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D0826C))(this);
	}
	template <typename T = void> T ProcessTouchEvents() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D08384))(this);
	}
	template <typename T = void> T ProcessTouchPress(uintptr_t pointerEvent, bool pressed, bool released) {
		return ((T (*)(TouchInputModule*, uintptr_t, bool, bool))(Il2CppBase() + 0x3D08554))(this, pointerEvent, pressed, released);
	}
	template <typename T = void> T DeactivateModule() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D08E70))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TouchInputModule*))(Il2CppBase() + 0x3D08E74))(this);
	}

};

}
