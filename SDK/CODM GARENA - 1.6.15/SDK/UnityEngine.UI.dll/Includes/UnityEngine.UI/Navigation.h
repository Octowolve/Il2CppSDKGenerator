#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Navigation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Navigation"));
	}

	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_SelectOnUp() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_SelectOnDown() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SelectOnLeft() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_SelectOnRight() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_mode() {
		return ((T (*)(Navigation*))(Il2CppBase() + 0x3D39458))(this);
	}
	template <typename T = void> T set_mode(uintptr_t value) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D39460))(this, value);
	}
	template <typename T = uintptr_t> T get_selectOnUp() {
		return ((T (*)(Navigation*))(Il2CppBase() + 0x3D39470))(this);
	}
	template <typename T = void> T set_selectOnUp(uintptr_t value) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D39478))(this, value);
	}
	template <typename T = uintptr_t> T get_selectOnDown() {
		return ((T (*)(Navigation*))(Il2CppBase() + 0x3D39488))(this);
	}
	template <typename T = void> T set_selectOnDown(uintptr_t value) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D39490))(this, value);
	}
	template <typename T = uintptr_t> T get_selectOnLeft() {
		return ((T (*)(Navigation*))(Il2CppBase() + 0x3D394A0))(this);
	}
	template <typename T = void> T set_selectOnLeft(uintptr_t value) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D394A8))(this, value);
	}
	template <typename T = uintptr_t> T get_selectOnRight() {
		return ((T (*)(Navigation*))(Il2CppBase() + 0x3D394B8))(this);
	}
	template <typename T = void> T set_selectOnRight(uintptr_t value) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D394C0))(this, value);
	}
	template <typename T = uintptr_t> static T get_defaultNavigation() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D394C8))(0);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Navigation*, uintptr_t))(Il2CppBase() + 0x3D39780))(this, other);
	}

};

}
