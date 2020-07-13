#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class LayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "LayoutGroup"));
	}

	template <typename T = uintptr_t> T& m_Padding() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ChildAlignment() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Rect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Tracker() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_TotalMinSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& m_TotalPreferredSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& m_TotalFlexibleSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RectChildren() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_padding() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D1BAC4))(this);
	}
	template <typename T = void> T set_padding(uintptr_t value) {
		return ((T (*)(LayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D323BC))(this, value);
	}
	template <typename T = uintptr_t> T get_childAlignment() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D3244C))(this);
	}
	template <typename T = void> T set_childAlignment(uintptr_t value) {
		return ((T (*)(LayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D32454))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D1BDD8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_rectChildren() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D1BABC))(this);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D1B600))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D324E4))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D324F4))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32504))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32514))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32524))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32534))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32544))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D3254C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D3267C))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32734))(this);
	}
	template <typename T = float> T GetTotalMinSize(int32_t axis) {
		return ((T (*)(LayoutGroup*, int32_t))(Il2CppBase() + 0x3D1DCA8))(this, axis);
	}
	template <typename T = float> T GetTotalPreferredSize(int32_t axis) {
		return ((T (*)(LayoutGroup*, int32_t))(Il2CppBase() + 0x3D1DC9C))(this, axis);
	}
	template <typename T = float> T GetTotalFlexibleSize(int32_t axis) {
		return ((T (*)(LayoutGroup*, int32_t))(Il2CppBase() + 0x3D1DC90))(this, axis);
	}
	template <typename T = float> T GetStartOffset(int32_t axis, float requiredSpaceWithoutPadding) {
		return ((T (*)(LayoutGroup*, int32_t, float))(Il2CppBase() + 0x3D1C8C8))(this, axis, requiredSpaceWithoutPadding);
	}
	template <typename T = float> T GetAlignmentOnAxis(int32_t axis) {
		return ((T (*)(LayoutGroup*, int32_t))(Il2CppBase() + 0x3D1DAEC))(this, axis);
	}
	template <typename T = void> T SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int32_t axis) {
		return ((T (*)(LayoutGroup*, float, float, float, int32_t))(Il2CppBase() + 0x3D1BACC))(this, totalMin, totalPreferred, totalFlexible, axis);
	}
	template <typename T = void> T SetChildAlongAxis(uintptr_t rect, int32_t axis, float pos) {
		return ((T (*)(LayoutGroup*, uintptr_t, int32_t, float))(Il2CppBase() + 0x3D1DB3C))(this, rect, axis, pos);
	}
	template <typename T = void> T SetChildAlongAxis_1(uintptr_t rect, int32_t axis, float pos, float size) {
		return ((T (*)(LayoutGroup*, uintptr_t, int32_t, float, float))(Il2CppBase() + 0x3D1CA20))(this, rect, axis, pos, size);
	}
	template <typename T = bool> T get_isRootLayoutGroup() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32738))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32900))(this);
	}
	template <typename T = void> T OnTransformChildrenChanged() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32924))(this);
	}
	template <typename T = void> T SetProperty(uintptr_t currentValue, uintptr_t newValue) {
		return ((T (*)(LayoutGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x283042C))(this, currentValue, newValue);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(LayoutGroup*))(Il2CppBase() + 0x3D32550))(this);
	}
	template <typename T = uintptr_t> T DelayedSetDirty(uintptr_t rectTransform) {
		return ((T (*)(LayoutGroup*, uintptr_t))(Il2CppBase() + 0x3D32928))(this, rectTransform);
	}

};

}
