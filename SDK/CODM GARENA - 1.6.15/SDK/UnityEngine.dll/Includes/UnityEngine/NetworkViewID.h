#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class NetworkViewID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "NetworkViewID"));
	}

	template <typename T = int32_t> T& a() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& b() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& c() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> static T Internal_GetString(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABD22C))(0, value);
	}
	template <typename T = Il2CppString*> static T INTERNAL_CALL_Internal_GetString(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABD24C))(0, value);
	}
	template <typename T = bool> static T Internal_Compare(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABD2E4))(0, lhs, rhs);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_Compare(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABD324))(0, lhs, rhs);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NetworkViewID*))(Il2CppBase() + 0x4ABD3C4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(NetworkViewID*, uintptr_t))(Il2CppBase() + 0x4ABD4AC))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NetworkViewID*))(Il2CppBase() + 0x4ABD4B4))(this);
	}

};

}
