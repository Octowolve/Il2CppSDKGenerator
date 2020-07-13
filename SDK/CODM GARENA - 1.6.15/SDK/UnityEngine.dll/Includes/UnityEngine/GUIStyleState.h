#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIStyleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIStyleState"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SourceStyle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Background() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T ProduceGUIStyleStateFromDeserialization(uintptr_t sourceStyle, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x479AAFC))(0, sourceStyle, source);
	}
	template <typename T = uintptr_t> static T GetGUIStyleState(uintptr_t sourceStyle, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x479ABB8))(0, sourceStyle, source);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(GUIStyleState*))(Il2CppBase() + 0x479EBC8))(this);
	}
	template <typename T = void> T set_background(uintptr_t value) {
		return ((T (*)(GUIStyleState*, uintptr_t))(Il2CppBase() + 0x479ECD4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GUIStyleState*))(Il2CppBase() + 0x479E9D8))(this);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(GUIStyleState*))(Il2CppBase() + 0x479EC3C))(this);
	}
	template <typename T = void> T SetBackgroundInternal(uintptr_t value) {
		return ((T (*)(GUIStyleState*, uintptr_t))(Il2CppBase() + 0x479ECF0))(this, value);
	}
	template <typename T = uintptr_t> T GetBackgroundInternalFromDeserialization() {
		return ((T (*)(GUIStyleState*))(Il2CppBase() + 0x479EA98))(this);
	}
	template <typename T = uintptr_t> T GetBackgroundInternal() {
		return ((T (*)(GUIStyleState*))(Il2CppBase() + 0x479EB30))(this);
	}
	template <typename T = void> T set_textColor(uintptr_t value) {
		return ((T (*)(GUIStyleState*, uintptr_t))(Il2CppBase() + 0x479A0C0))(this, value);
	}
	template <typename T = void> T INTERNAL_set_textColor(uintptr_t value) {
		return ((T (*)(GUIStyleState*, uintptr_t))(Il2CppBase() + 0x479ED90))(this, value);
	}

};

}
