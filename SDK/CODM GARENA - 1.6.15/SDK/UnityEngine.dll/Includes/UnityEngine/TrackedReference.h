#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TrackedReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TrackedReference"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> static T op_Equality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D35468))(0, x, y);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D35574))(0, x, y);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(TrackedReference*, uintptr_t))(Il2CppBase() + 0x4D35588))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TrackedReference*))(Il2CppBase() + 0x4D35648))(this);
	}
	template <typename T = bool> static T op_Implicit(uintptr_t exists) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D35658))(0, exists);
	}

};

}
