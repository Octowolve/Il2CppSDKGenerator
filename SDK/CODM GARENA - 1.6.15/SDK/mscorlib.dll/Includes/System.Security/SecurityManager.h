#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityManager"));
	}

	template <typename T = uintptr_t> static T& _lockObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _declsecCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _execution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T get_SecurityEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x4287E70))(0);
	}
	template <typename T = uintptr_t> static T Decode(uintptr_t permissions, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4287528))(0, permissions, length);
	}
	template <typename T = uintptr_t> static T Decode_1(Il2CppArray<uintptr_t>* encodedPermissions) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4287E74))(0, encodedPermissions);
	}

};

}
