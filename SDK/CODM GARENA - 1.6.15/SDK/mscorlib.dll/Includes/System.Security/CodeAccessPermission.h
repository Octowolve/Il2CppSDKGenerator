#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class CodeAccessPermission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "CodeAccessPermission"));
	}


	template <typename T = void> T Demand() {
		return ((T (*)(CodeAccessPermission*))(Il2CppBase() + 0x3034D1C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(CodeAccessPermission*, uintptr_t))(Il2CppBase() + 0x3034D20))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CodeAccessPermission*))(Il2CppBase() + 0x3034E5C))(this);
	}
	template <typename T = bool> T IsSubsetOf(uintptr_t target) {
		return ((T (*)(CodeAccessPermission*, uintptr_t))(Il2CppBase() + 0x0))(this, target);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CodeAccessPermission*))(Il2CppBase() + 0x3034E64))(this);
	}
	template <typename T = uintptr_t> T ToXml() {
		return ((T (*)(CodeAccessPermission*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Element(int32_t version) {
		return ((T (*)(CodeAccessPermission*, int32_t))(Il2CppBase() + 0x3034E9C))(this, version);
	}
	template <typename T = uintptr_t> static T CheckPermissionState(uintptr_t state, bool allowUnrestricted) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x303509C))(0, state, allowUnrestricted);
	}
	template <typename T = void> static T ThrowInvalidPermission(uintptr_t target, uintptr_t expected) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x30351F0))(0, target, expected);
	}

};

}
