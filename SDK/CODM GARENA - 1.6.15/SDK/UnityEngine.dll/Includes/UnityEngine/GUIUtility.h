#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIUtility"));
	}

	template <typename T = int32_t> static T& s_SkinMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& s_OriginalID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& guiIsExiting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector2> static T& s_EditorScreenPointOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> static T get_pixelsPerPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x4796DA0))(0);
	}
	template <typename T = int32_t> static T GetControlID(uintptr_t focus) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x477A7A4))(0, focus);
	}
	template <typename T = int32_t> static T GetControlID_1(uintptr_t focus, Il2CppRect position) {
		return ((T (*)(void *, uintptr_t, Il2CppRect))(Il2CppBase() + 0x477AB70))(0, focus, position);
	}
	template <typename T = int32_t> static T GetControlID_2(int32_t hint, uintptr_t focus, Il2CppRect position) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppRect))(Il2CppBase() + 0x477A00C))(0, hint, focus, position);
	}
	template <typename T = uintptr_t> static T GetStateObject(uintptr_t t, int32_t controlID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x477AFD4))(0, t, controlID);
	}
	template <typename T = void> static T set_guiIsExiting(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x479F5B4))(0, value);
	}
	template <typename T = int32_t> static T get_hotControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x477A178))(0);
	}
	template <typename T = void> static T set_hotControl(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x477A0D8))(0, value);
	}
	template <typename T = int32_t> static T get_keyboardControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x477BED0))(0);
	}
	template <typename T = void> static T set_keyboardControl(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x477BF68))(0, value);
	}
	template <typename T = void> static T ExitGUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x479F8B8))(0);
	}
	template <typename T = uintptr_t> static T GetDefaultSkin() {
		return ((T (*)(void *))(Il2CppBase() + 0x4777C08))(0);
	}
	template <typename T = bool> static T ProcessEvent(int32_t instanceID, uintptr_t nativeEventPtr) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x479FA24))(0, instanceID, nativeEventPtr);
	}
	template <typename T = void> static T BeginGUI(int32_t skinMode, int32_t instanceID, int32_t useGUILayout) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x479FA2C))(0, skinMode, instanceID, useGUILayout);
	}
	template <typename T = void> static T EndGUI(int32_t layoutType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x479FBC0))(0, layoutType);
	}
	template <typename T = bool> static T EndGUIFromException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x479FEBC))(0, exception);
	}
	template <typename T = bool> static T EndContainerGUIFromException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A0058))(0, exception);
	}
	template <typename T = bool> static T ShouldRethrowException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x479FF60))(0, exception);
	}
	template <typename T = void> static T CheckOnGUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x47778D0))(0);
	}
	template <typename T = void> static T RotateAroundPivot(float angle, Il2CppVector2 pivotPoint) {
		return ((T (*)(void *, float, Il2CppVector2))(Il2CppBase() + 0x47A0188))(0, angle, pivotPoint);
	}
	template <typename T = void> static T ScaleAroundPivot(Il2CppVector2 scale, Il2CppVector2 pivotPoint) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x47A083C))(0, scale, pivotPoint);
	}
	template <typename T = float> static T Internal_GetPixelsPerPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x479F454))(0);
	}
	template <typename T = int32_t> static T GetControlID_3(int32_t hint, uintptr_t focus) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x47797BC))(0, hint, focus);
	}
	template <typename T = int32_t> static T Internal_GetNextControlID2(int32_t hint, uintptr_t focusType, Il2CppRect rect) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppRect))(Il2CppBase() + 0x479F4E4))(0, hint, focusType, rect);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_Internal_GetNextControlID2(int32_t hint, uintptr_t focusType, uintptr_t rect) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A0E60))(0, hint, focusType, rect);
	}
	template <typename T = int32_t> static T Internal_GetHotControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x479F668))(0);
	}
	template <typename T = void> static T Internal_SetHotControl(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x479F6F8))(0, value);
	}
	template <typename T = int32_t> static T Internal_GetKeyboardControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x479F790))(0);
	}
	template <typename T = void> static T Internal_SetKeyboardControl(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x479F820))(0, value);
	}
	template <typename T = Il2CppString*> static T get_systemCopyBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A0F08))(0);
	}
	template <typename T = void> static T set_systemCopyBuffer(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A0F98))(0, value);
	}
	template <typename T = uintptr_t> static T Internal_GetDefaultSkin(int32_t skinMode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x479F98C))(0, skinMode);
	}
	template <typename T = void> static T Internal_ExitGUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x479FE2C))(0);
	}
	template <typename T = int32_t> static T Internal_GetGUIDepth() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A00F8))(0);
	}
	template <typename T = bool> static T get_mouseUsed() {
		return ((T (*)(void *))(Il2CppBase() + 0x477EAB4))(0);
	}
	template <typename T = void> static T set_mouseUsed(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x477EB44))(0, value);
	}
	template <typename T = void> static T set_textFieldInput(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x477C210))(0, value);
	}

};

}
