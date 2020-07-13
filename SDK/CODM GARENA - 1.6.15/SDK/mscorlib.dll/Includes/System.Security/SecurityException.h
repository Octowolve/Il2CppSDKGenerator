#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityException"));
	}

	template <typename T = Il2CppString*> T& permissionState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& permissionType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _granted() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _refused() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _demanded() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _firstperm() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _method() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _evidence() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_Demanded() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x42864F4))(this);
	}
	template <typename T = uintptr_t> T get_FirstPermissionThatFailed() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x42864FC))(this);
	}
	template <typename T = Il2CppString*> T get_PermissionState() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x4286504))(this);
	}
	template <typename T = uintptr_t> T get_PermissionType() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x428650C))(this);
	}
	template <typename T = Il2CppString*> T get_GrantedSet() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x4286514))(this);
	}
	template <typename T = Il2CppString*> T get_RefusedSet() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x428651C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(SecurityException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4286524))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SecurityException*))(Il2CppBase() + 0x4286698))(this);
	}

};

}
