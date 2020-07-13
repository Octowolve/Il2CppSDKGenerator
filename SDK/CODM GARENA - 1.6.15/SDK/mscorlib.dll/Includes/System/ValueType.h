#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ValueType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ValueType"));
	}


	template <typename T = bool> static T InternalEquals(uintptr_t o1, uintptr_t o2, Il2CppArray<uintptr_t>** fields) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4D9C824))(0, o1, o2, fields);
	}
	template <typename T = bool> static T DefaultEquals(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9C834))(0, o1, o2);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ValueType*, uintptr_t))(Il2CppBase() + 0x4D9C92C))(this, obj);
	}
	template <typename T = int32_t> static T InternalGetHashCode(uintptr_t o, Il2CppArray<uintptr_t>** fields) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4D9C938))(0, o, fields);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ValueType*))(Il2CppBase() + 0x4D9C944))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ValueType*))(Il2CppBase() + 0x4D9CA08))(this);
	}

};

}
