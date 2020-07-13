#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Object
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Object"));
	}


	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Object*, uintptr_t))(Il2CppBase() + 0x455DA40))(this, obj);
	}
	template <typename T = bool> static T Equals_1(uintptr_t objA, uintptr_t objB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x455DA54))(0, objA, objB);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Object*))(Il2CppBase() + 0x455DA98))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Object*))(Il2CppBase() + 0x455DA9C))(this);
	}
	template <typename T = uintptr_t> T GetType() {
		return ((T (*)(Object*))(Il2CppBase() + 0x454ECD8))(this);
	}
	template <typename T = uintptr_t> T MemberwiseClone() {
		return ((T (*)(Object*))(Il2CppBase() + 0x455DA28))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Object*))(Il2CppBase() + 0x455DAA8))(this);
	}
	template <typename T = bool> static T ReferenceEquals(uintptr_t objA, uintptr_t objB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x455DADC))(0, objA, objB);
	}
	template <typename T = int32_t> static T InternalGetHashCode(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455DAA0))(0, o);
	}

};

}
