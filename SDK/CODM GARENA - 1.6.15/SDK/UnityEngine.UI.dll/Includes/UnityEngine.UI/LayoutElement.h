#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class LayoutElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "LayoutElement"));
	}

	template <typename T = bool> T& m_IgnoreLayout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_MinWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MinHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_PreferredWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_PreferredHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FlexibleWidth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_FlexibleHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_ignoreLayout() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D31DFC))(this);
	}
	template <typename T = void> T set_ignoreLayout(bool value) {
		return ((T (*)(LayoutElement*, bool))(Il2CppBase() + 0x3D31E04))(this, value);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D31FA8))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D31FAC))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D31FB0))(this);
	}
	template <typename T = void> T set_minWidth(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D31FB8))(this, value);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D32058))(this);
	}
	template <typename T = void> T set_minHeight(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D32060))(this, value);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D32100))(this);
	}
	template <typename T = void> T set_preferredWidth(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D32108))(this, value);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D321A8))(this);
	}
	template <typename T = void> T set_preferredHeight(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D321B0))(this, value);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D32250))(this);
	}
	template <typename T = void> T set_flexibleWidth(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D32258))(this, value);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D322F8))(this);
	}
	template <typename T = void> T set_flexibleHeight(float value) {
		return ((T (*)(LayoutElement*, float))(Il2CppBase() + 0x3D32300))(this, value);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323A0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323A8))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323AC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323B0))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323B4))(this);
	}
	template <typename T = void> T OnBeforeTransformParentChanged() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D323B8))(this);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(LayoutElement*))(Il2CppBase() + 0x3D31EA4))(this);
	}

};

}
