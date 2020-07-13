#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUISettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUISettings"));
	}

	template <typename T = bool> T& m_DoubleClickSelectsWord() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_TripleClickSelectsLine() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& m_CursorColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_CursorFlashSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_SelectionColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_doubleClickSelectsWord() {
		return ((T (*)(GUISettings*))(Il2CppBase() + 0x477C164))(this);
	}
	template <typename T = bool> T get_tripleClickSelectsLine() {
		return ((T (*)(GUISettings*))(Il2CppBase() + 0x477C16C))(this);
	}
	template <typename T = uintptr_t> T get_cursorColor() {
		return ((T (*)(GUISettings*))(Il2CppBase() + 0x4798A74))(this);
	}
	template <typename T = float> T get_cursorFlashSpeed() {
		return ((T (*)(GUISettings*))(Il2CppBase() + 0x4798A84))(this);
	}
	template <typename T = uintptr_t> T get_selectionColor() {
		return ((T (*)(GUISettings*))(Il2CppBase() + 0x4798B2C))(this);
	}
	template <typename T = float> static T Internal_GetCursorFlashSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x4798A9C))(0);
	}

};

}
