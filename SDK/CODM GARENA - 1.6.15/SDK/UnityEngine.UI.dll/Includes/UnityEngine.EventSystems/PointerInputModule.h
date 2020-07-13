#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class PointerInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "PointerInputModule"));
	}

	template <typename T = int32_t> static T& kMouseLeftId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMouseRightId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMouseMiddleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kFakeTouchesId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_PointerData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_MouseState() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T GetPointerData(int32_t id, uintptr_t* data, bool create) {
		return ((T (*)(PointerInputModule*, int32_t, uintptr_t*, bool))(Il2CppBase() + 0x3D03E64))(this, id, data, create);
	}
	template <typename T = void> T RemovePointerData(uintptr_t data) {
		return ((T (*)(PointerInputModule*, uintptr_t))(Il2CppBase() + 0x3D03F98))(this, data);
	}
	template <typename T = uintptr_t> T GetTouchPointerEventData(uintptr_t input, uintptr_t* pressed, uintptr_t* released) {
		return ((T (*)(PointerInputModule*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3D0403C))(this, input, pressed, released);
	}
	template <typename T = void> T CopyFromTo(uintptr_t from, uintptr_t to) {
		return ((T (*)(PointerInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D04348))(this, from, to);
	}
	template <typename T = uintptr_t> T StateForMouseButton(int32_t buttonId) {
		return ((T (*)(PointerInputModule*, int32_t))(Il2CppBase() + 0x3D0443C))(this, buttonId);
	}
	template <typename T = uintptr_t> T GetMousePointerEventData() {
		return ((T (*)(PointerInputModule*))(Il2CppBase() + 0x3D044C4))(this);
	}
	template <typename T = uintptr_t> T GetMousePointerEventData_1(int32_t id) {
		return ((T (*)(PointerInputModule*, int32_t))(Il2CppBase() + 0x3D044D8))(this, id);
	}
	template <typename T = uintptr_t> T GetLastPointerEventData(int32_t id) {
		return ((T (*)(PointerInputModule*, int32_t))(Il2CppBase() + 0x3D04938))(this, id);
	}
	template <typename T = bool> static T ShouldStartDrag(Il2CppVector2 pressPos, Il2CppVector2 currentPos, float threshold, bool useDragThreshold) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, bool))(Il2CppBase() + 0x3D04964))(0, pressPos, currentPos, threshold, useDragThreshold);
	}
	template <typename T = void> T ProcessMove(uintptr_t pointerEvent) {
		return ((T (*)(PointerInputModule*, uintptr_t))(Il2CppBase() + 0x3D049EC))(this, pointerEvent);
	}
	template <typename T = void> T ProcessDrag(uintptr_t pointerEvent) {
		return ((T (*)(PointerInputModule*, uintptr_t))(Il2CppBase() + 0x3D04A38))(this, pointerEvent);
	}
	template <typename T = bool> T IsPointerOverGameObject(int32_t pointerId) {
		return ((T (*)(PointerInputModule*, int32_t))(Il2CppBase() + 0x3D04D74))(this, pointerId);
	}
	template <typename T = void> T ClearSelection() {
		return ((T (*)(PointerInputModule*))(Il2CppBase() + 0x3D04E60))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PointerInputModule*))(Il2CppBase() + 0x3D05068))(this);
	}
	template <typename T = void> T DeselectIfSelectionChanged(uintptr_t currentOverGo, uintptr_t pointerEvent) {
		return ((T (*)(PointerInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D0543C))(this, currentOverGo, pointerEvent);
	}

};

}
