#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Chain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Chain"));
	}

	template <typename T = uintptr_t> T& roots() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& certs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _root() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _chain() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x4C107E4))(this);
	}
	template <typename T = uintptr_t> T get_TrustAnchors() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x4C107EC))(this);
	}
	template <typename T = bool> T Build(uintptr_t leaf) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x4C109D8))(this, leaf);
	}
	template <typename T = bool> T IsValid(uintptr_t cert) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x4C11364))(this, cert);
	}
	template <typename T = uintptr_t> T FindCertificateParent(uintptr_t child) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x4C10D78))(this, child);
	}
	template <typename T = uintptr_t> T FindCertificateRoot(uintptr_t potentialRoot) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x4C10F50))(this, potentialRoot);
	}
	template <typename T = bool> T IsTrusted(uintptr_t potentialTrusted) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x4C11444))(this, potentialTrusted);
	}
	template <typename T = bool> T IsParent(uintptr_t child, uintptr_t parent) {
		return ((T (*)(X509Chain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C11180))(this, child, parent);
	}

};

}
