#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Sprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Sprite"));
	}


	template <typename T = Il2CppRect> T get_rect() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85A7C))(this);
	}
	template <typename T = void> T INTERNAL_get_rect(uintptr_t* value) {
		return ((T (*)(Sprite*, uintptr_t*))(Il2CppBase() + 0x4E85AB4))(this, value);
	}
	template <typename T = float> T get_pixelsPerUnit() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85B54))(this);
	}
	template <typename T = uintptr_t> T get_texture() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85BEC))(this);
	}
	template <typename T = uintptr_t> T get_associatedAlphaSplitTexture() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85C84))(this);
	}
	template <typename T = Il2CppRect> T get_textureRect() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85D1C))(this);
	}
	template <typename T = void> T INTERNAL_get_textureRect(uintptr_t* value) {
		return ((T (*)(Sprite*, uintptr_t*))(Il2CppBase() + 0x4E85D54))(this, value);
	}
	template <typename T = Il2CppVector2> T get_textureRectOffset() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85DF4))(this);
	}
	template <typename T = bool> T get_packed() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85EC8))(this);
	}
	template <typename T = void> static T Internal_GetTextureRectOffset(uintptr_t sprite, uintptr_t* output) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E85E28))(0, sprite, output);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x4E85F60))(this);
	}
	template <typename T = void> T INTERNAL_get_border(uintptr_t* value) {
		return ((T (*)(Sprite*, uintptr_t*))(Il2CppBase() + 0x4E85F98))(this, value);
	}

};

}
