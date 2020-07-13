#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SpriteRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SpriteRenderer"));
	}


	template <typename T = void> T set_sprite(uintptr_t value) {
		return ((T (*)(SpriteRenderer*, uintptr_t))(Il2CppBase() + 0x4E86038))(this, value);
	}
	template <typename T = Il2CppVector2> T get_size() {
		return ((T (*)(SpriteRenderer*))(Il2CppBase() + 0x4E860DC))(this);
	}
	template <typename T = void> T set_size(Il2CppVector2 value) {
		return ((T (*)(SpriteRenderer*, Il2CppVector2))(Il2CppBase() + 0x4E861B8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_size(uintptr_t* value) {
		return ((T (*)(SpriteRenderer*, uintptr_t*))(Il2CppBase() + 0x4E86118))(this, value);
	}
	template <typename T = void> T INTERNAL_set_size(uintptr_t value) {
		return ((T (*)(SpriteRenderer*, uintptr_t))(Il2CppBase() + 0x4E861D4))(this, value);
	}
	template <typename T = void> T SetSprite_INTERNAL(uintptr_t sprite) {
		return ((T (*)(SpriteRenderer*, uintptr_t))(Il2CppBase() + 0x4E8603C))(this, sprite);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(SpriteRenderer*))(Il2CppBase() + 0x4E86274))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(SpriteRenderer*, uintptr_t))(Il2CppBase() + 0x4E8634C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_color(uintptr_t* value) {
		return ((T (*)(SpriteRenderer*, uintptr_t*))(Il2CppBase() + 0x4E862AC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_color(uintptr_t value) {
		return ((T (*)(SpriteRenderer*, uintptr_t))(Il2CppBase() + 0x4E86370))(this, value);
	}

};

}
