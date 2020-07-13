#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Button
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Button"));
	}

	template <typename T = uintptr_t> T& m_OnClick() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = uintptr_t> T get_onClick() {
		return ((T (*)(Button*))(Il2CppBase() + 0x3D0A4FC))(this);
	}
	template <typename T = void> T set_onClick(uintptr_t value) {
		return ((T (*)(Button*, uintptr_t))(Il2CppBase() + 0x3D0A504))(this, value);
	}
	template <typename T = void> T Press() {
		return ((T (*)(Button*))(Il2CppBase() + 0x3D0A50C))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(Button*, uintptr_t))(Il2CppBase() + 0x3D0A578))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(Button*, uintptr_t))(Il2CppBase() + 0x3D0A5A8))(this, eventData);
	}
	template <typename T = uintptr_t> T OnFinishSubmit() {
		return ((T (*)(Button*))(Il2CppBase() + 0x3D0A62C))(this);
	}

};

}
