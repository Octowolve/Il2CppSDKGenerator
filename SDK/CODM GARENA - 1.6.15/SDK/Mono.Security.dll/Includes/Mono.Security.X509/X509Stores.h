#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Stores
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Stores"));
	}

	template <typename T = Il2CppString*> T& _storePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _trusted() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_TrustedRoot() {
		return ((T (*)(X509Stores*))(Il2CppBase() + 0x4C147A0))(this);
	}
	template <typename T = uintptr_t> T Open(Il2CppString* storeName, bool create) {
		return ((T (*)(X509Stores*, Il2CppString*, bool))(Il2CppBase() + 0x4C148AC))(this, storeName, create);
	}

};

}
