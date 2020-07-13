#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Scrollbar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Scrollbar"));
	}

	template <typename T = uintptr_t> T& m_HandleRect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_Size() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_NumberOfSteps() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ContainerRect() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector2> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_PointerDownRepeat() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& isPointerDownAndNotDragging() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_handleRect() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2DEFC))(this);
	}
	template <typename T = void> T set_handleRect(uintptr_t value) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2DF04))(this, value);
	}
	template <typename T = uintptr_t> T get_direction() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E358))(this);
	}
	template <typename T = void> T set_direction(uintptr_t value) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2E360))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E400))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(Scrollbar*, float))(Il2CppBase() + 0x4E2E588))(this, value);
	}
	template <typename T = float> T get_size() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E598))(this);
	}
	template <typename T = void> T set_size(float value) {
		return ((T (*)(Scrollbar*, float))(Il2CppBase() + 0x4E2E5A0))(this, value);
	}
	template <typename T = int32_t> T get_numberOfSteps() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E68C))(this);
	}
	template <typename T = void> T set_numberOfSteps(int32_t value) {
		return ((T (*)(Scrollbar*, int32_t))(Il2CppBase() + 0x4E2E694))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChanged() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E744))(this);
	}
	template <typename T = void> T set_onValueChanged(uintptr_t value) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2E74C))(this, value);
	}
	template <typename T = float> T get_stepSize() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E754))(this);
	}
	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2E788))(this, executing);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E78C))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E790))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E794))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2EA0C))(this);
	}
	template <typename T = void> T UpdateCachedReferences() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2DFAC))(this);
	}
	template <typename T = void> T Set(float input) {
		return ((T (*)(Scrollbar*, float))(Il2CppBase() + 0x4E2E590))(this, input);
	}
	template <typename T = void> T Set_1(float input, bool sendCallback) {
		return ((T (*)(Scrollbar*, float, bool))(Il2CppBase() + 0x4E2E8D4))(this, input, sendCallback);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2EB3C))(this);
	}
	template <typename T = uintptr_t> T get_axis() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2EB78))(this);
	}
	template <typename T = bool> T get_reverseValue() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2EB94))(this);
	}
	template <typename T = void> T UpdateVisuals() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2E11C))(this);
	}
	template <typename T = void> T UpdateDrag(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2EBA8))(this, eventData);
	}
	template <typename T = bool> T MayDrag(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2EF7C))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2EFFC))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2F284))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2F364))(this, eventData);
	}
	template <typename T = uintptr_t> T ClickRepeat(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2F5BC))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2F670))(this, eventData);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2F6DC))(this, eventData);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2FA8C))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2FBF0))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2FD3C))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E2FE88))(this);
	}
	template <typename T = void> T OnInitializePotentialDrag(uintptr_t eventData) {
		return ((T (*)(Scrollbar*, uintptr_t))(Il2CppBase() + 0x4E2FFD4))(this, eventData);
	}
	template <typename T = void> T SetDirection(uintptr_t direction, bool includeRectLayouts) {
		return ((T (*)(Scrollbar*, uintptr_t, bool))(Il2CppBase() + 0x4E30004))(this, direction, includeRectLayouts);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(Scrollbar*))(Il2CppBase() + 0x4E3023C))(this);
	}

};

}
