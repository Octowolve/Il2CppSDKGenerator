#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUISkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUISkin"));
	}

	template <typename T = uintptr_t> T& m_Font() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_box() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_button() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_toggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_label() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_textField() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_textArea() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_horizontalSlider() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_horizontalSliderThumb() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_verticalSlider() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_verticalSliderThumb() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_horizontalScrollbar() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_horizontalScrollbarThumb() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_horizontalScrollbarLeftButton() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_horizontalScrollbarRightButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_verticalScrollbar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_verticalScrollbarThumb() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_verticalScrollbarUpButton() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_verticalScrollbarDownButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ScrollView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CustomStyles() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_Settings() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& ms_Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_Styles() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& m_SkinChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798C04))(this);
	}
	template <typename T = void> static T CleanupRoots() {
		return ((T (*)(void *))(Il2CppBase() + 0x4798CDC))(0);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x477C178))(this);
	}
	template <typename T = void> T set_font(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798D6C))(this, value);
	}
	template <typename T = uintptr_t> T get_box() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x477954C))(this);
	}
	template <typename T = void> T set_box(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F24))(this, value);
	}
	template <typename T = uintptr_t> T get_label() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4778584))(this);
	}
	template <typename T = void> T set_label(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F2C))(this, value);
	}
	template <typename T = uintptr_t> T get_textField() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478D984))(this);
	}
	template <typename T = void> T set_textField(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F34))(this, value);
	}
	template <typename T = uintptr_t> T get_textArea() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x477AEC4))(this);
	}
	template <typename T = void> T set_textArea(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F3C))(this, value);
	}
	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x47799D0))(this);
	}
	template <typename T = void> T set_button(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F44))(this, value);
	}
	template <typename T = uintptr_t> T get_toggle() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478E0E0))(this);
	}
	template <typename T = void> T set_toggle(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F4C))(this, value);
	}
	template <typename T = uintptr_t> T get_window() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4791698))(this);
	}
	template <typename T = void> T set_window(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F54))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalSlider() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478E9E4))(this);
	}
	template <typename T = void> T set_horizontalSlider(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F5C))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalSliderThumb() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478E9EC))(this);
	}
	template <typename T = void> T set_horizontalSliderThumb(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F64))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalSlider() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478EC78))(this);
	}
	template <typename T = void> T set_verticalSlider(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F6C))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalSliderThumb() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x478EC80))(this);
	}
	template <typename T = void> T set_verticalSliderThumb(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F74))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbar() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4790F44))(this);
	}
	template <typename T = void> T set_horizontalScrollbar(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F7C))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbarThumb() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798F84))(this);
	}
	template <typename T = void> T set_horizontalScrollbarThumb(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F8C))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbarLeftButton() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798F94))(this);
	}
	template <typename T = void> T set_horizontalScrollbarLeftButton(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798F9C))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalScrollbarRightButton() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798FA4))(this);
	}
	template <typename T = void> T set_horizontalScrollbarRightButton(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FAC))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbar() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4790F4C))(this);
	}
	template <typename T = void> T set_verticalScrollbar(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FB4))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbarThumb() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798FBC))(this);
	}
	template <typename T = void> T set_verticalScrollbarThumb(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FC4))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbarUpButton() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798FCC))(this);
	}
	template <typename T = void> T set_verticalScrollbarUpButton(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FD4))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalScrollbarDownButton() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798FDC))(this);
	}
	template <typename T = void> T set_verticalScrollbarDownButton(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FE4))(this, value);
	}
	template <typename T = uintptr_t> T get_scrollView() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4790F54))(this);
	}
	template <typename T = void> T set_scrollView(uintptr_t value) {
		return ((T (*)(GUISkin*, uintptr_t))(Il2CppBase() + 0x4798FEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_customStyles() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798FF4))(this);
	}
	template <typename T = void> T set_customStyles(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GUISkin*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4798FFC))(this, value);
	}
	template <typename T = uintptr_t> T get_settings() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x477C15C))(this);
	}
	template <typename T = uintptr_t> static T get_error() {
		return ((T (*)(void *))(Il2CppBase() + 0x4799004))(0);
	}
	template <typename T = void> T Apply() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4798C08))(this);
	}
	template <typename T = void> T BuildStyleCache() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x47990DC))(this);
	}
	template <typename T = uintptr_t> T GetStyle(Il2CppString* styleName) {
		return ((T (*)(GUISkin*, Il2CppString*))(Il2CppBase() + 0x477F3F4))(this, styleName);
	}
	template <typename T = uintptr_t> T FindStyle(Il2CppString* styleName) {
		return ((T (*)(GUISkin*, Il2CppString*))(Il2CppBase() + 0x477DB68))(this, styleName);
	}
	template <typename T = void> T MakeCurrent() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x4777CBC))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(GUISkin*))(Il2CppBase() + 0x479A174))(this);
	}

};

}
