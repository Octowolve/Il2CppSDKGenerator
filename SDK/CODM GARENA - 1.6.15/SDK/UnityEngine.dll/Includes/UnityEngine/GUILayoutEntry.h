#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayoutEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayoutEntry"));
	}

	template <typename T = float> T& minWidth() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& maxWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& minHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppRect> T& rect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& stretchWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& stretchHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Style() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppRect> static T& kDummyRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& indent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_style() {
		return ((T (*)(GUILayoutEntry*))(Il2CppBase() + 0x4791F04))(this);
	}
	template <typename T = void> T set_style(uintptr_t value) {
		return ((T (*)(GUILayoutEntry*, uintptr_t))(Il2CppBase() + 0x4791D7C))(this, value);
	}
	template <typename T = uintptr_t> T get_margin() {
		return ((T (*)(GUILayoutEntry*))(Il2CppBase() + 0x4791F0C))(this);
	}
	template <typename T = void> T CalcWidth() {
		return ((T (*)(GUILayoutEntry*))(Il2CppBase() + 0x4791F34))(this);
	}
	template <typename T = void> T CalcHeight() {
		return ((T (*)(GUILayoutEntry*))(Il2CppBase() + 0x4791F38))(this);
	}
	template <typename T = void> T SetHorizontal(float x, float width) {
		return ((T (*)(GUILayoutEntry*, float, float))(Il2CppBase() + 0x4791F3C))(this, x, width);
	}
	template <typename T = void> T SetVertical(float y, float height) {
		return ((T (*)(GUILayoutEntry*, float, float))(Il2CppBase() + 0x4791F6C))(this, y, height);
	}
	template <typename T = void> T ApplyStyleSettings(uintptr_t style) {
		return ((T (*)(GUILayoutEntry*, uintptr_t))(Il2CppBase() + 0x4791F9C))(this, style);
	}
	template <typename T = void> T ApplyOptions(Il2CppArray<uintptr_t>* options) {
		return ((T (*)(GUILayoutEntry*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4792170))(this, options);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GUILayoutEntry*))(Il2CppBase() + 0x4792478))(this);
	}

};

}
