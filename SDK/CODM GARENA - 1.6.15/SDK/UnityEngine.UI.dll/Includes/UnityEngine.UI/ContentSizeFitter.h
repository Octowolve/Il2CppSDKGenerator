#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ContentSizeFitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ContentSizeFitter"));
	}

	template <typename T = uintptr_t> T& m_HorizontalFit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_VerticalFit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Rect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_horizontalFit() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0E748))(this);
	}
	template <typename T = void> T set_horizontalFit(uintptr_t value) {
		return ((T (*)(ContentSizeFitter*, uintptr_t))(Il2CppBase() + 0x3D0E750))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalFit() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0E8B8))(this);
	}
	template <typename T = void> T set_verticalFit(uintptr_t value) {
		return ((T (*)(ContentSizeFitter*, uintptr_t))(Il2CppBase() + 0x3D0E8C0))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0E960))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0EA48))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0EA4C))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0EB04))(this);
	}
	template <typename T = void> T HandleSelfFittingAlongAxis(int32_t axis) {
		return ((T (*)(ContentSizeFitter*, int32_t))(Il2CppBase() + 0x3D0EB08))(this, axis);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0EBF0))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0EC18))(this);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(ContentSizeFitter*))(Il2CppBase() + 0x3D0E7F0))(this);
	}

};

}
