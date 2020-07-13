#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TouchScreenKeyboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TouchScreenKeyboard"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D34AD8))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D34B70))(this);
	}
	template <typename T = void> T TouchScreenKeyboard_InternalConstructorHelper(uintptr_t arguments, Il2CppString* text, Il2CppString* textPlaceholder) {
		return ((T (*)(TouchScreenKeyboard*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4D34A28))(this, arguments, text, textPlaceholder);
	}
	template <typename T = bool> static T get_isSupported() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D34BD4))(0);
	}
	template <typename T = uintptr_t> static T Open(Il2CppString* text, uintptr_t keyboardType, bool autocorrection, bool multiline, bool secure) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x4D34C44))(0, text, keyboardType, autocorrection, multiline, secure);
	}
	template <typename T = uintptr_t> static T Open_1(Il2CppString* text, uintptr_t keyboardType, bool autocorrection, bool multiline) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, bool))(Il2CppBase() + 0x4D34DE0))(0, text, keyboardType, autocorrection, multiline);
	}
	template <typename T = uintptr_t> static T Open_2(Il2CppString* text, uintptr_t keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, Il2CppString* textPlaceholder) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x4D34CFC))(0, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D34E94))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(TouchScreenKeyboard*, Il2CppString*))(Il2CppBase() + 0x4D34F2C))(this, value);
	}
	template <typename T = void> static T set_hideInput(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4D34FCC))(0, value);
	}
	template <typename T = bool> T get_active() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D35064))(this);
	}
	template <typename T = void> T set_active(bool value) {
		return ((T (*)(TouchScreenKeyboard*, bool))(Il2CppBase() + 0x4D350FC))(this, value);
	}
	template <typename T = bool> T get_done() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D3519C))(this);
	}
	template <typename T = bool> T get_wasCanceled() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D35234))(this);
	}
	template <typename T = bool> T get_canGetSelection() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D352CC))(this);
	}
	template <typename T = uintptr_t> T get_selection() {
		return ((T (*)(TouchScreenKeyboard*))(Il2CppBase() + 0x4D35364))(this);
	}
	template <typename T = void> T GetSelectionInternal(uintptr_t* start, uintptr_t* length) {
		return ((T (*)(TouchScreenKeyboard*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4D353A4))(this, start, length);
	}

};

}
