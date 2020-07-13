#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Chain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Chain"));
	}

	template <typename T = uintptr_t> T& location() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& elements() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& policy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& status() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& max_path_length() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& working_issuer_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& working_public_key() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bce_restriction() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& roots() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cas() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& collection() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_ChainPolicy() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E53164))(this);
	}
	template <typename T = void> T set_ChainPolicy(uintptr_t value) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E571E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChainStatus() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E53808))(this);
	}
	template <typename T = bool> T Build(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E53228))(this, certificate);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E83BA0))(this);
	}
	template <typename T = uintptr_t> T get_Roots() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E8419C))(this);
	}
	template <typename T = uintptr_t> T get_CertificateAuthorities() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E84914))(this);
	}
	template <typename T = uintptr_t> T get_CertificateCollection() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E849DC))(this);
	}
	template <typename T = uintptr_t> T BuildChainFrom(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E83C68))(this, certificate);
	}
	template <typename T = uintptr_t> T SelectBestFromCollection(uintptr_t child, uintptr_t c) {
		return ((T (*)(X509Chain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E85198))(this, child, c);
	}
	template <typename T = uintptr_t> T FindParent(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E84CD4))(this, certificate);
	}
	template <typename T = bool> T IsChainComplete(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E84F38))(this, certificate);
	}
	template <typename T = bool> T IsSelfIssued(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E85694))(this, certificate);
	}
	template <typename T = void> T ValidateChain(uintptr_t flag) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E83D58))(this, flag);
	}
	template <typename T = void> T Process(int32_t n) {
		return ((T (*)(X509Chain*, int32_t))(Il2CppBase() + 0x3E8577C))(this, n);
	}
	template <typename T = void> T PrepareForNextCertificate(int32_t n) {
		return ((T (*)(X509Chain*, int32_t))(Il2CppBase() + 0x3E85E64))(this, n);
	}
	template <typename T = void> T WrapUp() {
		return ((T (*)(X509Chain*))(Il2CppBase() + 0x3E8649C))(this);
	}
	template <typename T = void> T ProcessCertificateExtensions(uintptr_t element) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E86574))(this, element);
	}
	template <typename T = bool> T IsSignedWith(uintptr_t signed, uintptr_t pubkey) {
		return ((T (*)(X509Chain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E86534))(this, signed, pubkey);
	}
	template <typename T = Il2CppString*> T GetSubjectKeyIdentifier(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E85490))(this, certificate);
	}
	template <typename T = Il2CppString*> T GetAuthorityKeyIdentifier(uintptr_t certificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E853D8))(this, certificate);
	}
	template <typename T = Il2CppString*> T GetAuthorityKeyIdentifier_1(uintptr_t crl) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E86D74))(this, crl);
	}
	template <typename T = Il2CppString*> T GetAuthorityKeyIdentifier_2(uintptr_t ext) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E86B48))(this, ext);
	}
	template <typename T = void> T CheckRevocationOnChain(uintptr_t flag) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E8624C))(this, flag);
	}
	template <typename T = uintptr_t> T CheckRevocation(uintptr_t certificate, int32_t ca, bool online) {
		return ((T (*)(X509Chain*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3E86E38))(this, certificate, ca, online);
	}
	template <typename T = uintptr_t> T CheckRevocation_1(uintptr_t certificate, uintptr_t ca_cert, bool online) {
		return ((T (*)(X509Chain*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E86EF8))(this, certificate, ca_cert, online);
	}
	template <typename T = uintptr_t> T FindCrl(uintptr_t caCertificate) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E87264))(this, caCertificate);
	}
	template <typename T = bool> T ProcessCrlExtensions(uintptr_t crl) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E87F94))(this, crl);
	}
	template <typename T = bool> T ProcessCrlEntryExtensions(uintptr_t entry) {
		return ((T (*)(X509Chain*, uintptr_t))(Il2CppBase() + 0x3E87A3C))(this, entry);
	}

};

}
