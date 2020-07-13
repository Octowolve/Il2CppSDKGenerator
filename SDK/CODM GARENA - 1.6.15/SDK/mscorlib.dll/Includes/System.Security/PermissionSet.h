#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class PermissionSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "PermissionSet"));
	}

	template <typename T = uintptr_t> T& Resolver() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& DeclarativeSecurity() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T SetReadOnly(bool value) {
		return ((T (*)(PermissionSet*, bool))(Il2CppBase() + 0x427FEFC))(this, value);
	}
	template <typename T = void> T set_DeclarativeSecurity(bool value) {
		return ((T (*)(PermissionSet*, bool))(Il2CppBase() + 0x427FF00))(this, value);
	}
	template <typename T = uintptr_t> static T CreateFromBinaryFormat(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427FF08))(0, data);
	}

};

}
