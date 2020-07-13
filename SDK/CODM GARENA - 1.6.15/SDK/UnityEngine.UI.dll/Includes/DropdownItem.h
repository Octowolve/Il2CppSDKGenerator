#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DropdownItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "DropdownItem"));
	}

	template <typename T = uintptr_t> T& m_Text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Image() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_RectTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Toggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0x3D128DC))(this);
	}
	template <typename T = void> T set_text(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D10A1C))(this, value);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0x3D128E4))(this);
	}
	template <typename T = void> T set_image(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D10A24))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0x3D11C58))(this);
	}
	template <typename T = void> T set_rectTransform(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D10A34))(this, value);
	}
	template <typename T = uintptr_t> T get_toggle() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0x3D120AC))(this);
	}
	template <typename T = void> T set_toggle(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D10A2C))(this, value);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D1315C))(this, eventData);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0x3D13238))(this, eventData);
	}

};

}
