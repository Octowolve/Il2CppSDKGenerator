#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RectTransformUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RectTransformUtility"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& s_Corners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T ScreenPointToWorldPointInRectangle(uintptr_t rect, Il2CppVector2 screenPoint, uintptr_t cam, uintptr_t* worldPoint) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACE828))(0, rect, screenPoint, cam, worldPoint);
	}
	template <typename T = bool> static T ScreenPointToLocalPointInRectangle(uintptr_t rect, Il2CppVector2 screenPoint, uintptr_t cam, uintptr_t* localPoint) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACEC14))(0, rect, screenPoint, cam, localPoint);
	}
	template <typename T = uintptr_t> static T ScreenPointToRay(uintptr_t cam, Il2CppVector2 screenPos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x4ACEA44))(0, cam, screenPos);
	}
	template <typename T = void> static T FlipLayoutOnAxis(uintptr_t rect, int32_t axis, bool keepPositioning, bool recursive) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, bool))(Il2CppBase() + 0x4ACED78))(0, rect, axis, keepPositioning, recursive);
	}
	template <typename T = void> static T FlipLayoutAxes(uintptr_t rect, bool keepPositioning, bool recursive) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x4ACF168))(0, rect, keepPositioning, recursive);
	}
	template <typename T = Il2CppVector2> static T GetTransposed(Il2CppVector2 input) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4ACF54C))(0, input);
	}
	template <typename T = bool> static T RectangleContainsScreenPoint(uintptr_t rect, Il2CppVector2 screenPoint, uintptr_t cam) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x4ACF588))(0, rect, screenPoint, cam);
	}
	template <typename T = bool> static T INTERNAL_CALL_RectangleContainsScreenPoint(uintptr_t rect, uintptr_t screenPoint, uintptr_t cam) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ACF644))(0, rect, screenPoint, cam);
	}
	template <typename T = Il2CppVector2> static T PixelAdjustPoint(Il2CppVector2 point, uintptr_t elementTransform, uintptr_t canvas) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ACF6EC))(0, point, elementTransform, canvas);
	}
	template <typename T = void> static T INTERNAL_CALL_PixelAdjustPoint(uintptr_t point, uintptr_t elementTransform, uintptr_t canvas, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACF7CC))(0, point, elementTransform, canvas, value);
	}
	template <typename T = Il2CppRect> static T PixelAdjustRect(uintptr_t rectTransform, uintptr_t canvas) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ACF87C))(0, rectTransform, canvas);
	}
	template <typename T = void> static T INTERNAL_CALL_PixelAdjustRect(uintptr_t rectTransform, uintptr_t canvas, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4ACF948))(0, rectTransform, canvas, value);
	}

};

}
