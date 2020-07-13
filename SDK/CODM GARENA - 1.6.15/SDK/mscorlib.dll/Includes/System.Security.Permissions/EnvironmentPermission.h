#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Permissions {

class EnvironmentPermission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Permissions", "EnvironmentPermission"));
	}

	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& readList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& writeList() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetPathList(uintptr_t flag) {
		return ((T (*)(EnvironmentPermission*, uintptr_t))(Il2CppBase() + 0x427E088))(this, flag);
	}
	template <typename T = bool> T IsSubsetOf(uintptr_t target) {
		return ((T (*)(EnvironmentPermission*, uintptr_t))(Il2CppBase() + 0x427E7B0))(this, target);
	}
	template <typename T = bool> T IsUnrestricted() {
		return ((T (*)(EnvironmentPermission*))(Il2CppBase() + 0x427F0D4))(this);
	}
	template <typename T = uintptr_t> T ToXml() {
		return ((T (*)(EnvironmentPermission*))(Il2CppBase() + 0x427F0E4))(this);
	}
	template <typename T = uintptr_t> T Cast(uintptr_t target) {
		return ((T (*)(EnvironmentPermission*, uintptr_t))(Il2CppBase() + 0x427EFBC))(this, target);
	}
	template <typename T = void> T ThrowInvalidFlag(uintptr_t flag, bool context) {
		return ((T (*)(EnvironmentPermission*, uintptr_t, bool))(Il2CppBase() + 0x427E0E8))(this, flag, context);
	}
	template <typename T = Il2CppString*> T GetPathList_1(uintptr_t list) {
		return ((T (*)(EnvironmentPermission*, uintptr_t))(Il2CppBase() + 0x427E254))(this, list);
	}

};

}
