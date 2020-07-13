#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class SslStreamBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "SslStreamBase"));
	}

	template <typename T = int32_t> static T& WaitTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& record_processing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& innerStream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& inputBuffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& protocol() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ownsStream() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& checkCertRevocationStatus() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& negotiate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& read() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& write() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& negotiationComplete() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& recbuf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& recordStream() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T AsyncHandshakeCallback(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF405C))(this, asyncResult);
	}
	template <typename T = bool> T get_MightNeedHandshake() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF4E7C))(this);
	}
	template <typename T = void> T NegotiateHandshake() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF4F54))(this);
	}
	template <typename T = uintptr_t> T OnBeginNegotiateHandshake(uintptr_t callback, uintptr_t state) {
		return ((T (*)(SslStreamBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, callback, state);
	}
	template <typename T = void> T OnNegotiateHandshakeCallback(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x0))(this, asyncResult);
	}
	template <typename T = uintptr_t> T OnLocalCertificateSelection(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(SslStreamBase*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = bool> T OnRemoteCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* errors) {
		return ((T (*)(SslStreamBase*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, certificate, errors);
	}
	template <typename T = uintptr_t> T OnRemoteCertificateValidation2(uintptr_t collection) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x0))(this, collection);
	}
	template <typename T = bool> T get_HaveRemoteValidation2Callback() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T OnLocalPrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslStreamBase*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, certificate, targetHost);
	}
	template <typename T = uintptr_t> T RaiseLocalCertificateSelection(uintptr_t certificates, uintptr_t remoteCertificate, Il2CppString* targetHost, uintptr_t requestedCertificates) {
		return ((T (*)(SslStreamBase*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4BF2B9C))(this, certificates, remoteCertificate, targetHost, requestedCertificates);
	}
	template <typename T = bool> T RaiseRemoteCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* errors) {
		return ((T (*)(SslStreamBase*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF2B40))(this, certificate, errors);
	}
	template <typename T = uintptr_t> T RaiseRemoteCertificateValidation2(uintptr_t collection) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF2B60))(this, collection);
	}
	template <typename T = uintptr_t> T RaiseLocalPrivateKeySelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(SslStreamBase*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4BF2BF0))(this, certificate, targetHost);
	}
	template <typename T = bool> T get_CheckCertRevocationStatus() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5508))(this);
	}
	template <typename T = void> T set_CheckCertRevocationStatus(bool value) {
		return ((T (*)(SslStreamBase*, bool))(Il2CppBase() + 0x4BF5510))(this, value);
	}
	template <typename T = uintptr_t> T get_CipherAlgorithm() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5518))(this);
	}
	template <typename T = int32_t> T get_CipherStrength() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5588))(this);
	}
	template <typename T = uintptr_t> T get_HashAlgorithm() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5600))(this);
	}
	template <typename T = int32_t> T get_HashStrength() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5670))(this);
	}
	template <typename T = int32_t> T get_KeyExchangeStrength() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF56E8))(this);
	}
	template <typename T = uintptr_t> T get_KeyExchangeAlgorithm() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5840))(this);
	}
	template <typename T = uintptr_t> T get_SecurityProtocol() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF58B0))(this);
	}
	template <typename T = uintptr_t> T get_ServerCertificate() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5900))(this);
	}
	template <typename T = uintptr_t> T get_ServerCertificates() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5A6C))(this);
	}
	template <typename T = bool> T BeginNegotiateHandshake(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF5160))(this, asyncResult);
	}
	template <typename T = void> T EndNegotiateHandshake(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF5478))(this, asyncResult);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t state) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BF5C4C))(this, buffer, offset, count, callback, state);
	}
	template <typename T = void> T InternalBeginRead(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF4888))(this, asyncResult);
	}
	template <typename T = void> T InternalReadCallback(uintptr_t result) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF6018))(this, result);
	}
	template <typename T = void> T InternalBeginWrite(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF4524))(this, asyncResult);
	}
	template <typename T = void> T InternalWriteCallback(uintptr_t ar) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF6B88))(this, ar);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t state) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BF6DB8))(this, buffer, offset, count, callback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF702C))(this, asyncResult);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(SslStreamBase*, uintptr_t))(Il2CppBase() + 0x4BF72CC))(this, asyncResult);
	}
	template <typename T = void> T Close() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF74F4))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF74FC))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF7538))(this, buffer);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4BF757C))(this, buffer, offset, count);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(SslStreamBase*, int64_t, uintptr_t))(Il2CppBase() + 0x4BF8364))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(SslStreamBase*, int64_t))(Il2CppBase() + 0x4BF83F8))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BF848C))(this, buffer);
	}
	template <typename T = void> T Write_1(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(SslStreamBase*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4BF84D0))(this, buffer, offset, count);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF89AC))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF89E0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF89E8))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF8A1C))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF8AB0))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(SslStreamBase*, int64_t))(Il2CppBase() + 0x4BF8B44))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF214C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SslStreamBase*, bool))(Il2CppBase() + 0x4BF1F60))(this, disposing);
	}
	template <typename T = void> T resetBuffer() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5F88))(this);
	}
	template <typename T = void> T checkDisposed() {
		return ((T (*)(SslStreamBase*))(Il2CppBase() + 0x4BF5EC4))(this);
	}

};

}
