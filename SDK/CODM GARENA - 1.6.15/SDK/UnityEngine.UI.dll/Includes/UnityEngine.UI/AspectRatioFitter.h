#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class AspectRatioFitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "AspectRatioFitter"));
	}

	template <typename T = uintptr_t> T& m_AspectMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AspectRatio() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Rect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_aspectMode() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D092FC))(this);
	}
	template <typename T = void> T set_aspectMode(uintptr_t value) {
		return ((T (*)(AspectRatioFitter*, uintptr_t))(Il2CppBase() + 0x3D09304))(this, value);
	}
	template <typename T = float> T get_aspectRatio() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D093A8))(this);
	}
	template <typename T = void> T set_aspectRatio(float value) {
		return ((T (*)(AspectRatioFitter*, float))(Il2CppBase() + 0x3D093B0))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09450))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09538))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D0953C))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D0993C))(this);
	}
	template <typename T = void> T UpdateRect() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09940))(this);
	}
	template <typename T = float> T GetSizeDeltaToProduceSize(float size, int32_t axis) {
		return ((T (*)(AspectRatioFitter*, float, int32_t))(Il2CppBase() + 0x3D09DD8))(this, size, axis);
	}
	template <typename T = Il2CppVector2> T GetParentSize() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09C5C))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09ED8))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D09EDC))(this);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(AspectRatioFitter*))(Il2CppBase() + 0x3D093A4))(this);
	}

};

}
