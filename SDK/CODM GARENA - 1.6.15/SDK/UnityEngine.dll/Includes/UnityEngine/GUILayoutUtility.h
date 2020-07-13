#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayoutUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayoutUtility"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& s_StoredLayouts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& s_StoredWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppRect> static T& kDummyRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& s_SpaceStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T SelectIDList(int32_t instanceID, bool isWindow) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x47829E0))(0, instanceID, isWindow);
	}
	template <typename T = void> static T Begin(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4796AD8))(0, instanceID);
	}
	template <typename T = void> static T BeginWindow(int32_t windowID, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4782DEC))(0, windowID, style, options);
	}
	template <typename T = void> static T Layout() {
		return ((T (*)(void *))(Il2CppBase() + 0x4789938))(0);
	}
	template <typename T = void> static T LayoutFromEditorWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x4797338))(0);
	}
	template <typename T = void> static T LayoutFreeGroup(uintptr_t toplevel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4796E38))(0, toplevel);
	}
	template <typename T = void> static T LayoutSingleGroup(uintptr_t i) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4797014))(0, i);
	}
	template <typename T = uintptr_t> static T CreateGUILayoutGroupInstanceOfType(uintptr_t LayoutType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4797714))(0, LayoutType);
	}
	template <typename T = uintptr_t> static T BeginLayoutGroup(uintptr_t style, Il2CppArray<uintptr_t>* options, uintptr_t layoutType) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x478F950))(0, style, options, layoutType);
	}
	template <typename T = void> static T EndLayoutGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x478FDAC))(0);
	}
	template <typename T = uintptr_t> static T BeginLayoutArea(uintptr_t style, uintptr_t layoutType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47908EC))(0, style, layoutType);
	}
	template <typename T = Il2CppRect> static T GetRect(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D0FC))(0, content, style, options);
	}
	template <typename T = Il2CppRect> static T DoGetRect(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4797884))(0, content, style, options);
	}
	template <typename T = Il2CppRect> static T GetRect_1(float width, float height, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E600))(0, width, height, style, options);
	}
	template <typename T = Il2CppRect> static T DoGetRect_1(float minWidth, float maxWidth, float minHeight, float maxHeight, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, float, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4797F70))(0, minWidth, maxWidth, minHeight, maxHeight, style, options);
	}
	template <typename T = uintptr_t> static T get_spaceStyle() {
		return ((T (*)(void *))(Il2CppBase() + 0x478F0BC))(0);
	}
	template <typename T = Il2CppRect> static T Internal_GetWindowRect(int32_t windowID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4797594))(0, windowID);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_GetWindowRect(int32_t windowID, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x4798298))(0, windowID, value);
	}
	template <typename T = void> static T Internal_MoveWindow(int32_t windowID, Il2CppRect r) {
		return ((T (*)(void *, int32_t, Il2CppRect))(Il2CppBase() + 0x4797658))(0, windowID, r);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_MoveWindow(int32_t windowID, uintptr_t r) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4798338))(0, windowID, r);
	}

};

}
