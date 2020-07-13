#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GL"));
	}


	template <typename T = void> static T Vertex3(float x, float y, float z) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4771518))(0, x, y, z);
	}
	template <typename T = void> static T Vertex(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x47715C0))(0, v);
	}
	template <typename T = void> static T INTERNAL_CALL_Vertex(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47715E0))(0, v);
	}
	template <typename T = void> static T TexCoord2(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4771678))(0, x, y);
	}
	template <typename T = void> static T MultiTexCoord2(int32_t unit, float x, float y) {
		return ((T (*)(void *, int32_t, float, float))(Il2CppBase() + 0x4771718))(0, unit, x, y);
	}
	template <typename T = void> static T BeginInternal(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47717C0))(0, mode);
	}
	template <typename T = void> static T Begin(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4771858))(0, mode);
	}
	template <typename T = void> static T End() {
		return ((T (*)(void *))(Il2CppBase() + 0x477185C))(0);
	}
	template <typename T = void> static T PushMatrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x47718EC))(0);
	}
	template <typename T = void> static T PopMatrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x477197C))(0);
	}
	template <typename T = void> static T LoadOrtho() {
		return ((T (*)(void *))(Il2CppBase() + 0x4771A0C))(0);
	}
	template <typename T = void> static T LoadPixelMatrixArgs(float left, float right, float bottom, float top) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4771A9C))(0, left, right, bottom, top);
	}
	template <typename T = void> static T LoadPixelMatrix(float left, float right, float bottom, float top) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4771B54))(0, left, right, bottom, top);
	}
	template <typename T = void> static T LoadProjectionMatrix(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771B74))(0, mat);
	}
	template <typename T = void> static T INTERNAL_CALL_LoadProjectionMatrix(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4771BEC))(0, mat);
	}
	template <typename T = void> static T set_invertCulling(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4771C84))(0, value);
	}
	template <typename T = void> static T Clear(bool clearDepth, bool clearColor, uintptr_t backgroundColor) {
		return ((T (*)(void *, bool, bool, uintptr_t))(Il2CppBase() + 0x4771D1C))(0, clearDepth, clearColor, backgroundColor);
	}
	template <typename T = void> static T Clear_1(bool clearDepth, bool clearColor, uintptr_t backgroundColor, float depth) {
		return ((T (*)(void *, bool, bool, uintptr_t, float))(Il2CppBase() + 0x4771D5C))(0, clearDepth, clearColor, backgroundColor, depth);
	}
	template <typename T = void> static T Internal_Clear(bool clearDepth, bool clearColor, uintptr_t backgroundColor, float depth) {
		return ((T (*)(void *, bool, bool, uintptr_t, float))(Il2CppBase() + 0x4771D9C))(0, clearDepth, clearColor, backgroundColor, depth);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_Clear(bool clearDepth, bool clearColor, uintptr_t backgroundColor, float depth) {
		return ((T (*)(void *, bool, bool, uintptr_t, float))(Il2CppBase() + 0x4771DDC))(0, clearDepth, clearColor, backgroundColor, depth);
	}
	template <typename T = void> static T InvalidateState() {
		return ((T (*)(void *))(Il2CppBase() + 0x4771E94))(0);
	}
	template <typename T = void> static T IssuePluginEvent(uintptr_t callback, int32_t eventID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4771F24))(0, callback, eventID);
	}
	template <typename T = void> static T IssuePluginEventInternal(uintptr_t callback, int32_t eventID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4772020))(0, callback, eventID);
	}

};

}
