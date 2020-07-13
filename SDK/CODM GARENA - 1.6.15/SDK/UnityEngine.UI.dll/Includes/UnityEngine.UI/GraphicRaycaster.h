#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class GraphicRaycaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "GraphicRaycaster"));
	}

	template <typename T = int32_t> static T& kNoEventMaskSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IgnoreReversedGraphics() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BlockingObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BlockingMask() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Canvas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RaycastResults() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_SortedGraphics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_sortOrderPriority() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D18B60))(this);
	}
	template <typename T = int32_t> T get_renderOrderPriority() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D18C9C))(this);
	}
	template <typename T = bool> T get_ignoreReversedGraphics() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D18D00))(this);
	}
	template <typename T = void> T set_ignoreReversedGraphics(bool value) {
		return ((T (*)(GraphicRaycaster*, bool))(Il2CppBase() + 0x3D18D08))(this, value);
	}
	template <typename T = uintptr_t> T get_blockingObjects() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D18D10))(this);
	}
	template <typename T = void> T set_blockingObjects(uintptr_t value) {
		return ((T (*)(GraphicRaycaster*, uintptr_t))(Il2CppBase() + 0x3D18D18))(this, value);
	}
	template <typename T = uintptr_t> T get_canvas() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D18BB4))(this);
	}
	template <typename T = void> T Raycast(uintptr_t eventData, Il2CppList<uintptr_t>* resultAppendList) {
		return ((T (*)(GraphicRaycaster*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D18D20))(this, eventData, resultAppendList);
	}
	template <typename T = uintptr_t> T get_eventCamera() {
		return ((T (*)(GraphicRaycaster*))(Il2CppBase() + 0x3D1A81C))(this);
	}
	template <typename T = void> static T Raycast_1(uintptr_t canvas, uintptr_t eventCamera, Il2CppVector2 pointerPosition, void* foundGraphics, Il2CppList<uintptr_t>* results) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector2, void*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D1A1FC))(0, canvas, eventCamera, pointerPosition, foundGraphics, results);
	}
	template <typename T = int32_t> static T Raycastm__0(uintptr_t g1, uintptr_t g2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D1AA84))(0, g1, g2);
	}

};

}
