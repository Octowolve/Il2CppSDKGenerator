#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SslClientStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SslClientStream"));
	}

	template <typename T = uintptr_t> T& ServerCertValidation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ClientCertSelection() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& PrivateKeySelection() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ServerCertValidation2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T add_ServerCertValidation(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF11FC))(this, value);
	}
	template <typename T = void> T remove_ServerCertValidation(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1388))(this, value);
	}
	template <typename T = void> T add_ClientCertSelection(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1514))(this, value);
	}
	template <typename T = void> T remove_ClientCertSelection(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF16A0))(this, value);
	}
	template <typename T = void> T add_PrivateKeySelection(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF182C))(this, value);
	}
	template <typename T = void> T remove_PrivateKeySelection(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF19B8))(this, value);
	}
	template <typename T = void> T add_ServerCertValidation2(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1B44))(this, value);
	}
	template <typename T = void> T remove_ServerCertValidation2(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1CD0))(this, value);
	}
	template <typename T = uintptr_t> T get_InputBuffer() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1E5C))(this);
	}
	template <typename T = uintptr_t> T get_ClientCertificates() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1E64))(this);
	}
	template <typename T = uintptr_t> T get_SelectedClientCertificate() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1EA0))(this);
	}
	template <typename T = uintptr_t> T get_ServerCertValidationDelegate() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1EDC))(this);
	}
	template <typename T = void> T set_ServerCertValidationDelegate(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1EE4))(this, value);
	}
	template <typename T = uintptr_t> T get_ClientCertSelectionDelegate() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1EEC))(this);
	}
	template <typename T = void> T set_ClientCertSelectionDelegate(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1EF4))(this, value);
	}
	template <typename T = uintptr_t> T get_PrivateKeyCertSelectionDelegate() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1EFC))(this);
	}
	template <typename T = void> T set_PrivateKeyCertSelectionDelegate(uintptr_t value) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF1F04))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF1F0C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SslClientStream*, bool))(Il2CppBase() + 0x4BF21B8))(this, disposing);
	}
	template <typename T = uintptr_t> T OnBeginNegotiateHandshake(uintptr_t callback, uintptr_t state) {
		return ((T (*)(SslClientStream*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BF21E4))(this, callback, state);
	}
	template <typename T = void> T SafeReceiveRecord(uintptr_t s) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF24B8))(this, s);
	}
	template <typename T = void> T OnNegotiateHandshakeCallback(uintptr_t asyncResult) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF264C))(this, asyncResult);
	}
	template <typename T = uintptr_t> T OnLocalCertificateSelection(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(SslClientStream*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4BF2A8C))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = bool> T get_HaveRemoteValidation2Callback() {
		return ((T (*)(SslClientStream*))(Il2CppBase() + 0x4BF2AC8))(this);
	}
	template <typename T = uintptr_t> T OnRemoteCertificateValidation2(uintptr_t collection) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF2AD8))(this, collection);
	}
	template <typename T = bool> T OnRemoteCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* errors) {
		return ((T (*)(SslClientStream*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF2AF0))(this, certificate, errors);
	}
	template <typename T = bool> T RaiseServerCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* certificateErrors) {
		return ((T (*)(SslClientStream*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF2B30))(this, certificate, certificateErrors);
	}
	template <typename T = uintptr_t> T RaiseServerCertificateValidation2(uintptr_t collection) {
		return ((T (*)(SslClientStream*, uintptr_t))(Il2CppBase() + 0x4BF2B50))(this, collection);
	}
	template <typename T = uintptr_t> T RaiseClientCertificateSelection(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(SslClientStream*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4BF2B70))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = uintptr_t> T OnLocalPrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslClientStream*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BF2BC8))(this, certificate, targetHost);
	}
	template <typename T = uintptr_t> T RaisePrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslClientStream*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BF2BE0))(this, certificate, targetHost);
	}

};

}
