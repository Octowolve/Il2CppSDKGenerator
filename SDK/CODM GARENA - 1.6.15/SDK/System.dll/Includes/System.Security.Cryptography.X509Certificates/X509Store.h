#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Store
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Store"));
	}

	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _location() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _flags() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Certificates() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x3E84B54))(this);
	}
	template <typename T = uintptr_t> T get_Factory() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x3E8A3BC))(this);
	}
	template <typename T = uintptr_t> T get_Store() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x3E88530))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(X509Store*))(Il2CppBase() + 0x3E84180))(this);
	}
	template <typename T = void> T Open(uintptr_t flags) {
		return ((T (*)(X509Store*, uintptr_t))(Il2CppBase() + 0x3E843F0))(this, flags);
	}

};

}
