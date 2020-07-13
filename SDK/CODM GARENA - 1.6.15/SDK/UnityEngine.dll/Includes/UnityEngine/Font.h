#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Font
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Font"));
	}

	template <typename T = void*> static T& textureRebuilt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FontTextureRebuildCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Font*))(Il2CppBase() + 0x476DBC0))(this);
	}
	template <typename T = bool> T HasCharacter(char c) {
		return ((T (*)(Font*, char))(Il2CppBase() + 0x476DC58))(this, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_fontNames() {
		return ((T (*)(Font*))(Il2CppBase() + 0x476DCF8))(this);
	}
	template <typename T = void> T RequestCharactersInTexture(Il2CppString* characters, int32_t size, uintptr_t style) {
		return ((T (*)(Font*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x476DD90))(this, characters, size, style);
	}
	template <typename T = void> static T add_textureRebuilt(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x476DE40))(0, value);
	}
	template <typename T = void> static T remove_textureRebuilt(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x476E018))(0, value);
	}
	template <typename T = void> static T InvokeTextureRebuilt_Internal(uintptr_t font) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x476E1F8))(0, font);
	}
	template <typename T = bool> T GetCharacterInfo(char ch, uintptr_t* info, int32_t size, uintptr_t style) {
		return ((T (*)(Font*, char, uintptr_t*, int32_t, uintptr_t))(Il2CppBase() + 0x476E360))(this, ch, info, size, style);
	}
	template <typename T = bool> T get_dynamic() {
		return ((T (*)(Font*))(Il2CppBase() + 0x476E410))(this);
	}
	template <typename T = int32_t> T get_fontSize() {
		return ((T (*)(Font*))(Il2CppBase() + 0x476E4A8))(this);
	}

};

}
