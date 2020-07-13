#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class NetscapeCertTypeExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "NetscapeCertTypeExtension"));
	}

	template <typename T = int32_t> T& ctbits() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(NetscapeCertTypeExtension*))(Il2CppBase() + 0x4BFF6DC))(this);
	}
	template <typename T = bool> T Support(uintptr_t usage) {
		return ((T (*)(NetscapeCertTypeExtension*, uintptr_t))(Il2CppBase() + 0x4BFF86C))(this, usage);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NetscapeCertTypeExtension*))(Il2CppBase() + 0x4BFF9A4))(this);
	}

};

}
