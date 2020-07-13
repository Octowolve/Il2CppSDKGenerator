#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Permissions {

class SecurityPermission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Permissions", "SecurityPermission"));
	}

	template <typename T = uintptr_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_Flags(uintptr_t value) {
		return ((T (*)(SecurityPermission*, uintptr_t))(Il2CppBase() + 0x427F7BC))(this, value);
	}
	template <typename T = bool> T IsUnrestricted() {
		return ((T (*)(SecurityPermission*))(Il2CppBase() + 0x427F914))(this);
	}
	template <typename T = bool> T IsSubsetOf(uintptr_t target) {
		return ((T (*)(SecurityPermission*, uintptr_t))(Il2CppBase() + 0x427F92C))(this, target);
	}
	template <typename T = uintptr_t> T ToXml() {
		return ((T (*)(SecurityPermission*))(Il2CppBase() + 0x427FAB8))(this);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(SecurityPermission*))(Il2CppBase() + 0x427FAA4))(this);
	}
	template <typename T = uintptr_t> T Cast(uintptr_t target) {
		return ((T (*)(SecurityPermission*, uintptr_t))(Il2CppBase() + 0x427F98C))(this, target);
	}

};

}
