#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class StandaloneInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "StandaloneInputModule"));
	}

	template <typename T = float> T& m_PrevActionTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& m_LastMoveVector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ConsecutiveMoveCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& m_LastMousePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& m_MousePosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentFocusedGameObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_HorizontalAxis() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_VerticalAxis() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& m_SubmitButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& m_CancelButton() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_InputActionsPerSecond() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_RepeatDelay() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_ForceModuleActive() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_inputMode() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05AF4))(this);
	}
	template <typename T = bool> T get_allowActivationOnMobileDevice() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05AFC))(this);
	}
	template <typename T = void> T set_allowActivationOnMobileDevice(bool value) {
		return ((T (*)(StandaloneInputModule*, bool))(Il2CppBase() + 0x3D05B04))(this, value);
	}
	template <typename T = bool> T get_forceModuleActive() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B0C))(this);
	}
	template <typename T = void> T set_forceModuleActive(bool value) {
		return ((T (*)(StandaloneInputModule*, bool))(Il2CppBase() + 0x3D05B14))(this, value);
	}
	template <typename T = float> T get_inputActionsPerSecond() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B1C))(this);
	}
	template <typename T = void> T set_inputActionsPerSecond(float value) {
		return ((T (*)(StandaloneInputModule*, float))(Il2CppBase() + 0x3D05B24))(this, value);
	}
	template <typename T = float> T get_repeatDelay() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B2C))(this);
	}
	template <typename T = void> T set_repeatDelay(float value) {
		return ((T (*)(StandaloneInputModule*, float))(Il2CppBase() + 0x3D05B34))(this, value);
	}
	template <typename T = Il2CppString*> T get_horizontalAxis() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B3C))(this);
	}
	template <typename T = void> T set_horizontalAxis(Il2CppString* value) {
		return ((T (*)(StandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x3D05B44))(this, value);
	}
	template <typename T = Il2CppString*> T get_verticalAxis() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B4C))(this);
	}
	template <typename T = void> T set_verticalAxis(Il2CppString* value) {
		return ((T (*)(StandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x3D05B54))(this, value);
	}
	template <typename T = Il2CppString*> T get_submitButton() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B5C))(this);
	}
	template <typename T = void> T set_submitButton(Il2CppString* value) {
		return ((T (*)(StandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x3D05B64))(this, value);
	}
	template <typename T = Il2CppString*> T get_cancelButton() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B6C))(this);
	}
	template <typename T = void> T set_cancelButton(Il2CppString* value) {
		return ((T (*)(StandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x3D05B74))(this, value);
	}
	template <typename T = void> T UpdateModule() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05B7C))(this);
	}
	template <typename T = bool> T IsModuleSupported() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05C34))(this);
	}
	template <typename T = bool> T ShouldActivateModule() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05CB0))(this);
	}
	template <typename T = void> T ActivateModule() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D05F14))(this);
	}
	template <typename T = void> T DeactivateModule() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D060DC))(this);
	}
	template <typename T = void> T Process() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D060E0))(this);
	}
	template <typename T = bool> T ProcessTouchEvents() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D06920))(this);
	}
	template <typename T = void> T ProcessTouchPress(uintptr_t pointerEvent, bool pressed, bool released) {
		return ((T (*)(StandaloneInputModule*, uintptr_t, bool, bool))(Il2CppBase() + 0x3D06B24))(this, pointerEvent, pressed, released);
	}
	template <typename T = bool> T SendSubmitEventToSelectedObject() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D066B4))(this);
	}
	template <typename T = Il2CppVector2> T GetRawMoveVector() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D07440))(this);
	}
	template <typename T = bool> T SendMoveEventToSelectedObject() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D06370))(this);
	}
	template <typename T = void> T ProcessMouseEvent() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D06B1C))(this);
	}
	template <typename T = bool> T ForceAutoSelect() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D0784C))(this);
	}
	template <typename T = void> T ProcessMouseEvent_1(int32_t id) {
		return ((T (*)(StandaloneInputModule*, int32_t))(Il2CppBase() + 0x3D0756C))(this, id);
	}
	template <typename T = bool> T SendUpdateEventToSelectedObject() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D061D8))(this);
	}
	template <typename T = void> T ProcessMousePress(uintptr_t data) {
		return ((T (*)(StandaloneInputModule*, uintptr_t))(Il2CppBase() + 0x3D07854))(this, data);
	}
	template <typename T = uintptr_t> T GetCurrentFocusedGameObject() {
		return ((T (*)(StandaloneInputModule*))(Il2CppBase() + 0x3D08040))(this);
	}

};

}
