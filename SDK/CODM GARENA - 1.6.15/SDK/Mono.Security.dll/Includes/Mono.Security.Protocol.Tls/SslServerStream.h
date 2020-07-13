#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SslServerStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SslServerStream"));
	}

	template <typename T = uintptr_t> T& ClientCertValidation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& PrivateKeySelection() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ClientCertValidation2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T get_PrivateKeyCertSelectionDelegate() {
		return ((T (*)(SslServerStream*))(Il2CppBase() + 0x4BF3814))(this);
	}
	template <typename T = void> T set_PrivateKeyCertSelectionDelegate(uintptr_t value) {
		return ((T (*)(SslServerStream*, uintptr_t))(Il2CppBase() + 0x4BF381C))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SslServerStream*))(Il2CppBase() + 0x4BF3824))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SslServerStream*, bool))(Il2CppBase() + 0x4BF3898))(this, disposing);
	}
	template <typename T = uintptr_t> T OnBeginNegotiateHandshake(uintptr_t callback, uintptr_t state) {
		return ((T (*)(SslServerStream*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BF38C0))(this, callback, state);
	}
	template <typename T = void> T OnNegotiateHandshakeCallback(uintptr_t asyncResult) {
		return ((T (*)(SslServerStream*, uintptr_t))(Il2CppBase() + 0x4BF3998))(this, asyncResult);
	}
	template <typename T = uintptr_t> T OnLocalCertificateSelection(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(SslServerStream*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4BF3E94))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = bool> T OnRemoteCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* errors) {
		return ((T (*)(SslServerStream*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF3F28))(this, certificate, errors);
	}
	template <typename T = bool> T get_HaveRemoteValidation2Callback() {
		return ((T (*)(SslServerStream*))(Il2CppBase() + 0x4BF3F68))(this);
	}
	template <typename T = uintptr_t> T OnRemoteCertificateValidation2(uintptr_t collection) {
		return ((T (*)(SslServerStream*, uintptr_t))(Il2CppBase() + 0x4BF3F78))(this, collection);
	}
	template <typename T = bool> T RaiseClientCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* certificateErrors) {
		return ((T (*)(SslServerStream*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF3E84))(this, certificate, certificateErrors);
	}
	template <typename T = uintptr_t> T OnLocalPrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslServerStream*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BF3F90))(this, certificate, targetHost);
	}
	template <typename T = uintptr_t> T RaisePrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslServerStream*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BF3FA8))(this, certificate, targetHost);
	}

};

}
