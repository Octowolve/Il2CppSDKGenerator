#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIContent"));
	}

	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Image() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_Tooltip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& s_Text() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_Image() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& s_TextImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& none() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(GUIContent*))(Il2CppBase() + 0x477AD28))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(GUIContent*, Il2CppString*))(Il2CppBase() + 0x477AFCC))(this, value);
	}
	template <typename T = void> T set_image(uintptr_t value) {
		return ((T (*)(GUIContent*, uintptr_t))(Il2CppBase() + 0x478B1F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_tooltip() {
		return ((T (*)(GUIContent*))(Il2CppBase() + 0x477ED74))(this);
	}
	template <typename T = void> T set_tooltip(Il2CppString* value) {
		return ((T (*)(GUIContent*, Il2CppString*))(Il2CppBase() + 0x478B1F8))(this, value);
	}
	template <typename T = uintptr_t> static T Temp(Il2CppString* t) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x477843C))(0, t);
	}
	template <typename T = uintptr_t> static T Temp_1(uintptr_t i) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478B310))(0, i);
	}
	template <typename T = void> static T ClearStaticCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x478B458))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Temp_2(Il2CppArray<uintptr_t>* texts) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478B638))(0, texts);
	}

};

}
