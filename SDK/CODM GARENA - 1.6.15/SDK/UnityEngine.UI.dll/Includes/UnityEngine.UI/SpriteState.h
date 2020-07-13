#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class SpriteState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "SpriteState"));
	}

	template <typename T = uintptr_t> T& m_HighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_PressedSprite() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_DisabledSprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_highlightedSprite() {
		return ((T (*)(SpriteState*))(Il2CppBase() + 0x4E3B1E8))(this);
	}
	template <typename T = uintptr_t> T get_pressedSprite() {
		return ((T (*)(SpriteState*))(Il2CppBase() + 0x4E3B1F0))(this);
	}
	template <typename T = uintptr_t> T get_disabledSprite() {
		return ((T (*)(SpriteState*))(Il2CppBase() + 0x4E3B1F8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SpriteState*, uintptr_t))(Il2CppBase() + 0x4E3B374))(this, other);
	}

};

}
