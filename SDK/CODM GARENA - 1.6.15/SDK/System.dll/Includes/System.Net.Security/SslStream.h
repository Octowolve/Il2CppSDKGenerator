#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Security {

class SslStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Security", "SslStream"));
	}

	template <typename T = uintptr_t> T& ssl_stream() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& validation_callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& selection_callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E51618))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E5164C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E51680))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E516B4))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E516E8))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(SslStream*, int64_t))(Il2CppBase() + 0x3E5171C))(this, value);
	}
	template <typename T = bool> T get_IsAuthenticated() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E517C4))(this);
	}
	template <typename T = int32_t> T get_ReadTimeout() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E517D4))(this);
	}
	template <typename T = int32_t> T get_WriteTimeout() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E51808))(this);
	}
	template <typename T = uintptr_t> T OnCertificateSelection(uintptr_t clientCerts, uintptr_t serverCert, Il2CppString* targetHost, uintptr_t serverRequestedCerts) {
		return ((T (*)(SslStream*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3E5183C))(this, clientCerts, serverCert, targetHost, serverRequestedCerts);
	}
	template <typename T = uintptr_t> T BeginAuthenticateAsClient(Il2CppString* targetHost, uintptr_t clientCertificates, uintptr_t sslProtocolType, bool checkCertificateRevocation, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(SslStream*, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E51A8C))(this, targetHost, clientCertificates, sslProtocolType, checkCertificateRevocation, asyncCallback, asyncState);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(SslStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E51DF0))(this, buffer, offset, count, asyncCallback, asyncState);
	}
	template <typename T = uintptr_t> T GetMonoSslProtocol(uintptr_t ms) {
		return ((T (*)(SslStream*, uintptr_t))(Il2CppBase() + 0x3E51DC8))(this, ms);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(SslStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E51F24))(this, buffer, offset, count, asyncCallback, asyncState);
	}
	template <typename T = void> T AuthenticateAsClient(Il2CppString* targetHost, uintptr_t clientCertificates, uintptr_t sslProtocolType, bool checkCertificateRevocation) {
		return ((T (*)(SslStream*, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E51F90))(this, targetHost, clientCertificates, sslProtocolType, checkCertificateRevocation);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SslStream*, bool))(Il2CppBase() + 0x3E51FEC))(this, disposing);
	}
	template <typename T = void> T EndAuthenticateAsClient(uintptr_t asyncResult) {
		return ((T (*)(SslStream*, uintptr_t))(Il2CppBase() + 0x3E52050))(this, asyncResult);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(SslStream*, uintptr_t))(Il2CppBase() + 0x3E520C0))(this, asyncResult);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(SslStream*, uintptr_t))(Il2CppBase() + 0x3E52104))(this, asyncResult);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E52148))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(SslStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E52184))(this, buffer, offset, count);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(SslStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3E521D8))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(SslStream*, int64_t))(Il2CppBase() + 0x3E52280))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(SslStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E522C0))(this, buffer, offset, count);
	}
	template <typename T = void> T CheckConnectionAuthenticated() {
		return ((T (*)(SslStream*))(Il2CppBase() + 0x3E51E5C))(this);
	}

};

}
