#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ColorBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ColorBlock"));
	}

	template <typename T = uintptr_t> T& m_NormalColor() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_HighlightedColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_PressedColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_DisabledColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ColorMultiplier() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_FadeDuration() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T get_normalColor() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E080))(this);
	}
	template <typename T = uintptr_t> T get_highlightedColor() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E0A0))(this);
	}
	template <typename T = uintptr_t> T get_pressedColor() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E0C0))(this);
	}
	template <typename T = uintptr_t> T get_disabledColor() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E0E0))(this);
	}
	template <typename T = float> T get_colorMultiplier() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E0F8))(this);
	}
	template <typename T = void> T set_colorMultiplier(float value) {
		return ((T (*)(ColorBlock*, float))(Il2CppBase() + 0x3D0E100))(this, value);
	}
	template <typename T = float> T get_fadeDuration() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E108))(this);
	}
	template <typename T = void> T set_fadeDuration(float value) {
		return ((T (*)(ColorBlock*, float))(Il2CppBase() + 0x3D0E110))(this, value);
	}
	template <typename T = uintptr_t> static T get_defaultColorBlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D0E118))(0);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ColorBlock*, uintptr_t))(Il2CppBase() + 0x3D0E5B0))(this, obj);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ColorBlock*, uintptr_t))(Il2CppBase() + 0x3D0E5B8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ColorBlock*))(Il2CppBase() + 0x3D0E730))(this);
	}

};

}
