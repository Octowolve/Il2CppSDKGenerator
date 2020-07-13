#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Slider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Slider"));
	}

	template <typename T = uintptr_t> T& m_FillRect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_HandleRect() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_MinValue() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_MaxValue() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_WholeNumbers() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_Value() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_FillImage() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_FillTransform() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_FillContainerRect() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_HandleTransform() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_HandleContainerRect() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T get_fillRect() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E38E20))(this);
	}
	template <typename T = void> T set_fillRect(uintptr_t value) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E38E28))(this, value);
	}
	template <typename T = uintptr_t> T get_handleRect() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3954C))(this);
	}
	template <typename T = void> T set_handleRect(uintptr_t value) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E39554))(this, value);
	}
	template <typename T = uintptr_t> T get_direction() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E395FC))(this);
	}
	template <typename T = void> T set_direction(uintptr_t value) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E39604))(this, value);
	}
	template <typename T = float> T get_minValue() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E396A4))(this);
	}
	template <typename T = void> T set_minValue(float value) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E396AC))(this, value);
	}
	template <typename T = float> T get_maxValue() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3977C))(this);
	}
	template <typename T = void> T set_maxValue(float value) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E39784))(this, value);
	}
	template <typename T = bool> T get_wholeNumbers() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39840))(this);
	}
	template <typename T = void> T set_wholeNumbers(bool value) {
		return ((T (*)(Slider*, bool))(Il2CppBase() + 0x4E39848))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39904))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E39A68))(this, value);
	}
	template <typename T = float> T get_normalizedValue() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39A7C))(this);
	}
	template <typename T = void> T set_normalizedValue(float value) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E39BBC))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChanged() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39CA4))(this);
	}
	template <typename T = void> T set_onValueChanged(uintptr_t value) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E39CAC))(this, value);
	}
	template <typename T = float> T get_stepSize() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39CB4))(this);
	}
	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E39CE8))(this, executing);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39CEC))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39CF0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39CF4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39D34))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39D58))(this);
	}
	template <typename T = void> T UpdateCachedReferences() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E38ED0))(this);
	}
	template <typename T = float> T ClampValue(float input) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E3A0B4))(this, input);
	}
	template <typename T = void> T Set(float input) {
		return ((T (*)(Slider*, float))(Il2CppBase() + 0x4E39768))(this, input);
	}
	template <typename T = void> T Set_1(float input, bool sendCallback) {
		return ((T (*)(Slider*, float, bool))(Il2CppBase() + 0x4E3A2A0))(this, input, sendCallback);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3A380))(this);
	}
	template <typename T = uintptr_t> T get_axis() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3A284))(this);
	}
	template <typename T = bool> T get_reverseValue() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3A270))(this);
	}
	template <typename T = void> T UpdateVisuals() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E39198))(this);
	}
	template <typename T = void> T UpdateDrag(uintptr_t eventData, uintptr_t cam) {
		return ((T (*)(Slider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E3A3BC))(this, eventData, cam);
	}
	template <typename T = bool> T MayDrag(uintptr_t eventData) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E3A750))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E3A7D0))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E3AA24))(this, eventData);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E3AA74))(this, eventData);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3AD94))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3ADF4))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3AE54))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3AEB4))(this);
	}
	template <typename T = void> T OnInitializePotentialDrag(uintptr_t eventData) {
		return ((T (*)(Slider*, uintptr_t))(Il2CppBase() + 0x4E3AF14))(this, eventData);
	}
	template <typename T = void> T SetDirection(uintptr_t direction, bool includeRectLayouts) {
		return ((T (*)(Slider*, uintptr_t, bool))(Il2CppBase() + 0x4E3AF44))(this, direction, includeRectLayouts);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(Slider*))(Il2CppBase() + 0x4E3B17C))(this);
	}

};

}
