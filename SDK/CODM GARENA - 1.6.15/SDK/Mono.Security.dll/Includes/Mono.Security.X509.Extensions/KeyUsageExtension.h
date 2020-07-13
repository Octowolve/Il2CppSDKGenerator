#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class KeyUsageExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "KeyUsageExtension"));
	}

	template <typename T = int32_t> T& kubits() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(KeyUsageExtension*))(Il2CppBase() + 0x4BFEB90))(this);
	}
	template <typename T = void> T Encode() {
		return ((T (*)(KeyUsageExtension*))(Il2CppBase() + 0x4BFED20))(this);
	}
	template <typename T = bool> T Support(uintptr_t usage) {
		return ((T (*)(KeyUsageExtension*, uintptr_t))(Il2CppBase() + 0x4BFEFF0))(this, usage);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(KeyUsageExtension*))(Il2CppBase() + 0x4BFF128))(this);
	}

};

}
