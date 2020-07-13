#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class PolicyStatement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "PolicyStatement"));
	}

	template <typename T = uintptr_t> T& perms() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_PermissionSet() {
		return ((T (*)(PolicyStatement*))(Il2CppBase() + 0x4281D80))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PolicyStatement*, uintptr_t))(Il2CppBase() + 0x4281E34))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PolicyStatement*))(Il2CppBase() + 0x42806EC))(this);
	}

};

}
