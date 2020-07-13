#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ChainStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ChainStatus"));
	}

	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(X509ChainStatus*))(Il2CppBase() + 0x3E89034))(this);
	}
	template <typename T = void> T set_Status(uintptr_t value) {
		return ((T (*)(X509ChainStatus*, uintptr_t))(Il2CppBase() + 0x3E8903C))(this, value);
	}
	template <typename T = void> T set_StatusInformation(Il2CppString* value) {
		return ((T (*)(X509ChainStatus*, Il2CppString*))(Il2CppBase() + 0x3E89044))(this, value);
	}
	template <typename T = Il2CppString*> static T GetInformation(uintptr_t flags) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E886B8))(0, flags);
	}

};

}
