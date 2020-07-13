#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUITexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUITexture"));
	}


	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(GUITexture*))(Il2CppBase() + 0x479F140))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(GUITexture*, uintptr_t))(Il2CppBase() + 0x479F218))(this, value);
	}
	template <typename T = void> T INTERNAL_get_color(uintptr_t* value) {
		return ((T (*)(GUITexture*, uintptr_t*))(Il2CppBase() + 0x479F178))(this, value);
	}
	template <typename T = void> T INTERNAL_set_color(uintptr_t value) {
		return ((T (*)(GUITexture*, uintptr_t))(Il2CppBase() + 0x479F23C))(this, value);
	}
	template <typename T = void> T set_texture(uintptr_t value) {
		return ((T (*)(GUITexture*, uintptr_t))(Il2CppBase() + 0x479F2DC))(this, value);
	}
	template <typename T = Il2CppRect> T get_pixelInset() {
		return ((T (*)(GUITexture*))(Il2CppBase() + 0x479F37C))(this);
	}
	template <typename T = void> T INTERNAL_get_pixelInset(uintptr_t* value) {
		return ((T (*)(GUITexture*, uintptr_t*))(Il2CppBase() + 0x479F3B4))(this, value);
	}

};

}
