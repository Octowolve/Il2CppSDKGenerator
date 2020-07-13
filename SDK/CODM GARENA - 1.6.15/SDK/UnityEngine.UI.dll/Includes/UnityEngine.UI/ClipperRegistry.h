#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ClipperRegistry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ClipperRegistry"));
	}

	template <typename T = uintptr_t> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Clippers() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D0C69C))(0);
	}
	template <typename T = void> T Cull() {
		return ((T (*)(ClipperRegistry*))(Il2CppBase() + 0x3D0C75C))(this);
	}
	template <typename T = void> static T Register(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0D854))(0, c);
	}
	template <typename T = void> static T Unregister(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0D900))(0, c);
	}

};

}
