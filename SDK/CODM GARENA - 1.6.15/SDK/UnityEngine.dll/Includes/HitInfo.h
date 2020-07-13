#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "HitInfo"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T SendMessage(Il2CppString* name) {
		return ((T (*)(HitInfo*, Il2CppString*))(Il2CppBase() + 0x4E80690))(this, name);
	}
	template <typename T = bool> static T op_Implicit(uintptr_t exists) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7FE98))(0, exists);
	}
	template <typename T = bool> static T Compare(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7FFE0))(0, lhs, rhs);
	}

};

}
