#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ScrollRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ScrollRect"));
	}

	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Horizontal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Vertical() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& m_MovementType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Elasticity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Inertia() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_DecelerationRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ScrollSensitivity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Viewport() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_HorizontalScrollbar() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_VerticalScrollbar() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_HorizontalScrollbarVisibility() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_VerticalScrollbarVisibility() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_HorizontalScrollbarSpacing() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_VerticalScrollbarSpacing() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& m_PointerStartLocalCursor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& m_ContentStartPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ViewRect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ContentBounds() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ViewBounds() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_Dragging() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector2> T& m_PrevPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_PrevContentBounds() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_PrevViewBounds() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_HasRebuiltLayout() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_HSliderExpand() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = bool> T& m_VSliderExpand() {
		return *(T*)((uintptr_t)this + 0xD2);
	}
	template <typename T = float> T& m_HSliderHeight() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_VSliderWidth() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_Rect() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_HorizontalScrollbarRect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_VerticalScrollbarRect() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Corners() {
		return *(T*)((uintptr_t)this + 0xEC);
	}

	template <typename T = uintptr_t> T get_content() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3076C))(this);
	}
	template <typename T = void> T set_content(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E30774))(this, value);
	}
	template <typename T = bool> T get_horizontal() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3077C))(this);
	}
	template <typename T = void> T set_horizontal(bool value) {
		return ((T (*)(ScrollRect*, bool))(Il2CppBase() + 0x4E30784))(this, value);
	}
	template <typename T = bool> T get_vertical() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3078C))(this);
	}
	template <typename T = void> T set_vertical(bool value) {
		return ((T (*)(ScrollRect*, bool))(Il2CppBase() + 0x4E30794))(this, value);
	}
	template <typename T = uintptr_t> T get_movementType() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3079C))(this);
	}
	template <typename T = void> T set_movementType(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E307A4))(this, value);
	}
	template <typename T = float> T get_elasticity() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307AC))(this);
	}
	template <typename T = void> T set_elasticity(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E307B4))(this, value);
	}
	template <typename T = bool> T get_inertia() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307BC))(this);
	}
	template <typename T = void> T set_inertia(bool value) {
		return ((T (*)(ScrollRect*, bool))(Il2CppBase() + 0x4E307C4))(this, value);
	}
	template <typename T = float> T get_decelerationRate() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307CC))(this);
	}
	template <typename T = void> T set_decelerationRate(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E307D4))(this, value);
	}
	template <typename T = float> T get_scrollSensitivity() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307DC))(this);
	}
	template <typename T = void> T set_scrollSensitivity(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E307E4))(this, value);
	}
	template <typename T = uintptr_t> T get_viewport() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307EC))(this);
	}
	template <typename T = void> T set_viewport(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E307F4))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbar() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30914))(this);
	}
	template <typename T = void> T set_horizontalScrollbar(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E3091C))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbar() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30B58))(this);
	}
	template <typename T = void> T set_verticalScrollbar(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E30B60))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbarVisibility() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30D9C))(this);
	}
	template <typename T = void> T set_horizontalScrollbarVisibility(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E30DA4))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbarVisibility() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30DAC))(this);
	}
	template <typename T = void> T set_verticalScrollbarVisibility(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E30DB4))(this, value);
	}
	template <typename T = float> T get_horizontalScrollbarSpacing() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30DBC))(this);
	}
	template <typename T = void> T set_horizontalScrollbarSpacing(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E30DC4))(this, value);
	}
	template <typename T = float> T get_verticalScrollbarSpacing() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30E9C))(this);
	}
	template <typename T = void> T set_verticalScrollbarSpacing(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E30EA4))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChanged() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30EAC))(this);
	}
	template <typename T = void> T set_onValueChanged(uintptr_t value) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E30EB4))(this, value);
	}
	template <typename T = uintptr_t> T get_viewRect() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30EBC))(this);
	}
	template <typename T = Il2CppVector2> T get_velocity() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E310F0))(this);
	}
	template <typename T = void> T set_velocity(Il2CppVector2 value) {
		return ((T (*)(ScrollRect*, Il2CppVector2))(Il2CppBase() + 0x4E31104))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E31110))(this);
	}
	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E311F8))(this, executing);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E322A8))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E322AC))(this);
	}
	template <typename T = void> T UpdateCachedData() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E31268))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E322B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3252C))(this);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E32830))(this);
	}
	template <typename T = void> T EnsureLayoutHasRebuilt() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E32900))(this);
	}
	template <typename T = void> T StopMovement() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E329C8))(this);
	}
	template <typename T = void> T OnScroll(uintptr_t data) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E329F8))(this, data);
	}
	template <typename T = void> T OnInitializePotentialDrag(uintptr_t eventData) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E32D20))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E32D78))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E32EFC))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(ScrollRect*, uintptr_t))(Il2CppBase() + 0x4E32F38))(this, eventData);
	}
	template <typename T = void> T SetContentAnchoredPosition(Il2CppVector2 position) {
		return ((T (*)(ScrollRect*, Il2CppVector2))(Il2CppBase() + 0x4E332DC))(this, position);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E333BC))(this);
	}
	template <typename T = void> T UpdatePrevData() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E32174))(this);
	}
	template <typename T = void> T UpdateScrollbars(Il2CppVector2 offset) {
		return ((T (*)(ScrollRect*, Il2CppVector2))(Il2CppBase() + 0x4E31E6C))(this, offset);
	}
	template <typename T = Il2CppVector2> T get_normalizedPosition() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E33C34))(this);
	}
	template <typename T = void> T set_normalizedPosition(Il2CppVector2 value) {
		return ((T (*)(ScrollRect*, Il2CppVector2))(Il2CppBase() + 0x4E33E94))(this, value);
	}
	template <typename T = float> T get_horizontalNormalizedPosition() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E33C8C))(this);
	}
	template <typename T = void> T set_horizontalNormalizedPosition(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E33EDC))(this, value);
	}
	template <typename T = float> T get_verticalNormalizedPosition() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E33D90))(this);
	}
	template <typename T = void> T set_verticalNormalizedPosition(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E33EF0))(this, value);
	}
	template <typename T = void> T SetHorizontalNormalizedPosition(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E33F04))(this, value);
	}
	template <typename T = void> T SetVerticalNormalizedPosition(float value) {
		return ((T (*)(ScrollRect*, float))(Il2CppBase() + 0x4E33F18))(this, value);
	}
	template <typename T = void> T SetNormalizedPosition(float value, int32_t axis) {
		return ((T (*)(ScrollRect*, float, int32_t))(Il2CppBase() + 0x4E33F2C))(this, value, axis);
	}
	template <typename T = float> static T RubberDelta(float overStretching, float viewSize) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4E331EC))(0, overStretching, viewSize);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34238))(this);
	}
	template <typename T = bool> T get_hScrollingNeeded() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3423C))(this);
	}
	template <typename T = bool> T get_vScrollingNeeded() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E342C0))(this);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34344))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34348))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3434C))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34358))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34364))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34370))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3437C))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34388))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34394))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E3439C))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34DA4))(this);
	}
	template <typename T = void> T UpdateScrollbarVisibility() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E33BE0))(this);
	}
	template <typename T = void> static T UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, uintptr_t scrollbarVisibility, uintptr_t scrollbar) {
		return ((T (*)(void *, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E353AC))(0, xScrollingNeeded, xAxisEnabled, scrollbarVisibility, scrollbar);
	}
	template <typename T = void> T UpdateScrollbarLayout() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34F04))(this);
	}
	template <typename T = void> T UpdateBounds() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E317F4))(this);
	}
	template <typename T = void> static T AdjustBounds(uintptr_t viewBounds, uintptr_t contentPivot, uintptr_t contentSize, uintptr_t contentPos) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E354F8))(0, viewBounds, contentPivot, contentSize, contentPos);
	}
	template <typename T = uintptr_t> T GetBounds() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E34B98))(this);
	}
	template <typename T = uintptr_t> static T InternalGetBounds(Il2CppArray<uintptr_t>* corners, uintptr_t viewWorldToLocalMatrix) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E355DC))(0, corners, viewWorldToLocalMatrix);
	}
	template <typename T = Il2CppVector2> T CalculateOffset(Il2CppVector2 delta) {
		return ((T (*)(ScrollRect*, Il2CppVector2))(Il2CppBase() + 0x4E32CD0))(this, delta);
	}
	template <typename T = Il2CppVector2> static T InternalCalculateOffset(uintptr_t viewBounds, uintptr_t contentBounds, bool horizontal, bool vertical, uintptr_t movementType, uintptr_t delta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E35794))(0, viewBounds, contentBounds, horizontal, vertical, movementType, delta);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E30DCC))(this);
	}
	template <typename T = void> T SetDirtyCaching() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E307FC))(this);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(ScrollRect*))(Il2CppBase() + 0x4E35998))(this);
	}

};

}
