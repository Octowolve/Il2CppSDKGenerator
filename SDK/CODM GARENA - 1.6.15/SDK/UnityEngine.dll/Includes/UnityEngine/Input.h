#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Input
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Input"));
	}

	template <typename T = uintptr_t> static T& m_MainGyro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& compassInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T mainGyroIndex_Internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A1F1C))(0);
	}
	template <typename T = bool> static T GetKeyInt(int32_t key) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A1FAC))(0, key);
	}
	template <typename T = bool> static T GetKeyUpInt(int32_t key) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A2044))(0, key);
	}
	template <typename T = bool> static T GetKeyDownInt(int32_t key) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A20DC))(0, key);
	}
	template <typename T = float> static T GetAxis(Il2CppString* axisName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A2174))(0, axisName);
	}
	template <typename T = float> static T GetAxisRaw(Il2CppString* axisName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A220C))(0, axisName);
	}
	template <typename T = bool> static T GetButton(Il2CppString* buttonName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A22A4))(0, buttonName);
	}
	template <typename T = uintptr_t> static T get_gyro() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A233C))(0);
	}
	template <typename T = bool> static T GetButtonDown(Il2CppString* buttonName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A2494))(0, buttonName);
	}
	template <typename T = bool> static T GetButtonUp(Il2CppString* buttonName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A252C))(0, buttonName);
	}
	template <typename T = bool> static T GetKey(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A25C4))(0, key);
	}
	template <typename T = bool> static T GetKeyDown(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A2664))(0, key);
	}
	template <typename T = bool> static T GetKeyUp(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A2704))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetJoystickNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A27A4))(0);
	}
	template <typename T = bool> static T GetMouseButton(int32_t button) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A2834))(0, button);
	}
	template <typename T = bool> static T GetMouseButtonDown(int32_t button) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A28CC))(0, button);
	}
	template <typename T = bool> static T GetMouseButtonUp(int32_t button) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A2964))(0, button);
	}
	template <typename T = void> static T ResetInputAxes() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A29FC))(0);
	}
	template <typename T = Il2CppVector3> static T get_mousePosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2A8C))(0);
	}
	template <typename T = void> static T INTERNAL_get_mousePosition(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x47A2B54))(0, value);
	}
	template <typename T = Il2CppVector2> static T get_mouseScrollDelta() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2BEC))(0);
	}
	template <typename T = void> static T INTERNAL_get_mouseScrollDelta(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x47A2CA8))(0, value);
	}
	template <typename T = bool> static T get_mousePresent() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2D40))(0);
	}
	template <typename T = bool> static T get_anyKeyDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2DD0))(0);
	}
	template <typename T = Il2CppString*> static T get_inputString() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2E60))(0);
	}
	template <typename T = Il2CppVector3> static T get_acceleration() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A2EF0))(0);
	}
	template <typename T = void> static T INTERNAL_get_acceleration(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x47A2FB8))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_touches() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A3050))(0);
	}
	template <typename T = uintptr_t> static T GetTouch(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A3254))(0, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetTouch(int32_t index, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x47A3328))(0, index, value);
	}
	template <typename T = int32_t> static T get_touchCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A31C4))(0);
	}
	template <typename T = bool> static T get_touchSupported() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A33C8))(0);
	}
	template <typename T = uintptr_t> static T get_compass() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A3458))(0);
	}
	template <typename T = uintptr_t> static T get_deviceOrientation() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A35C8))(0);
	}
	template <typename T = uintptr_t> static T get_imeCompositionMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A3658))(0);
	}
	template <typename T = void> static T set_imeCompositionMode(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A36E8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_compositionString() {
		return ((T (*)(void *))(Il2CppBase() + 0x477C180))(0);
	}
	template <typename T = Il2CppVector2> static T get_compositionCursorPos() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A3780))(0);
	}
	template <typename T = void> static T set_compositionCursorPos(Il2CppVector2 value) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x47A38D4))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_compositionCursorPos(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x47A383C))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_compositionCursorPos(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A397C))(0, value);
	}

};

}
