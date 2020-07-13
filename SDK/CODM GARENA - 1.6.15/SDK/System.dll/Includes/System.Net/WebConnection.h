#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebConnection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebConnection"));
	}

	template <typename T = uintptr_t> T& sPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& nstream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& socket() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& socketLock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& initConn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& keepAlive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& readDoneDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& abortHandler() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& abortHelper() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& readState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& chunkedRead() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& chunkStream() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& queue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& reused() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& busy() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& priority_request() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ntlm_credentials() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ntlm_authenticated() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& unsafe_sharing() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& ssl() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = bool> T& certsAvailable() {
		return *(T*)((uintptr_t)this + 0x5B);
	}
	template <typename T = uintptr_t> T& connect_exception() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& classLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& sslStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& piClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& piServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& piTrustFailure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& method_GetSecurityPolicyFromNonMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T CanReuse() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E65B8C))(this);
	}
	template <typename T = void> T LoggedThrow(uintptr_t e) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E65BC0))(this, e);
	}
	template <typename T = void> T CheckUnityWebSecurity(uintptr_t request) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E65CD0))(this, request);
	}
	template <typename T = void> T Connect(uintptr_t request) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E667F0))(this, request);
	}
	template <typename T = void> static T EnsureSSLStreamAvailable() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E66EA8))(0);
	}
	template <typename T = bool> T CreateTunnel(uintptr_t request, uintptr_t stream, Il2CppArray<uintptr_t>** buffer) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3E672C0))(this, request, stream, buffer);
	}
	template <typename T = uintptr_t> T ReadHeaders(uintptr_t request, uintptr_t stream, Il2CppArray<uintptr_t>** retBuffer, uintptr_t* status) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x3E679D8))(this, request, stream, retBuffer, status);
	}
	template <typename T = bool> T CreateStream(uintptr_t request) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E68484))(this, request);
	}
	template <typename T = void> T HandleError(uintptr_t st, uintptr_t e, Il2CppString* where) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E67E14))(this, st, e, where);
	}
	template <typename T = void> static T ReadDone(uintptr_t result) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E68D48))(0, result);
	}
	template <typename T = bool> static T ExpectContent(int32_t statusCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3E6A750))(0, statusCode);
	}
	template <typename T = void> T GetCertificates() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6A7CC))(this);
	}
	template <typename T = void> static T InitRead(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E6A178))(0, state);
	}
	template <typename T = int32_t> T GetResponse(Il2CppArray<uintptr_t>* buffer, int32_t max) {
		return ((T (*)(WebConnection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3E6954C))(this, buffer, max);
	}
	template <typename T = void> T InitConnection(uintptr_t state) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E6AA64))(this, state);
	}
	template <typename T = uintptr_t> T SendRequest(uintptr_t request) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E54834))(this, request);
	}
	template <typename T = void> T SendNext() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6AE10))(this);
	}
	template <typename T = void> T NextRead() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6AF58))(this);
	}
	template <typename T = bool> static T ReadLine(Il2CppArray<uintptr_t>* buffer, uintptr_t start, int32_t max, uintptr_t output) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E68234))(0, buffer, start, max, output);
	}
	template <typename T = uintptr_t> T BeginRead(uintptr_t request, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(WebConnection*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6B27C))(this, request, buffer, offset, size, cb, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t request, uintptr_t result) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6B650))(this, request, result);
	}
	template <typename T = int32_t> T EnsureRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(WebConnection*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E6BD48))(this, buffer, offset, size);
	}
	template <typename T = bool> T CompleteChunkedRead() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E66DEC))(this);
	}
	template <typename T = uintptr_t> T BeginWrite(uintptr_t request, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(WebConnection*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6BF28))(this, request, buffer, offset, size, cb, state);
	}
	template <typename T = void> T EndWrite2(uintptr_t request, uintptr_t result) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6C1FC))(this, request, result);
	}
	template <typename T = bool> T EndWrite(uintptr_t request, uintptr_t result) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6C5BC))(this, request, result);
	}
	template <typename T = int32_t> T Read(uintptr_t request, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(WebConnection*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E6C94C))(this, request, buffer, offset, size);
	}
	template <typename T = bool> T Write(uintptr_t request, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t err_msg) {
		return ((T (*)(WebConnection*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E6CEB8))(this, request, buffer, offset, size, err_msg);
	}
	template <typename T = void> T Close(bool sendNext) {
		return ((T (*)(WebConnection*, bool))(Il2CppBase() + 0x3E68AAC))(this, sendNext);
	}
	template <typename T = void> T Abort(uintptr_t sender, uintptr_t args) {
		return ((T (*)(WebConnection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6D354))(this, sender, args);
	}
	template <typename T = void> T ResetNtlm() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6D838))(this);
	}
	template <typename T = bool> T get_Busy() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6D84C))(this);
	}
	template <typename T = void> T set_PriorityRequest(uintptr_t value) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E6D884))(this, value);
	}
	template <typename T = bool> T get_NtlmAuthenticated() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6D88C))(this);
	}
	template <typename T = void> T set_NtlmAuthenticated(bool value) {
		return ((T (*)(WebConnection*, bool))(Il2CppBase() + 0x3E6D894))(this, value);
	}
	template <typename T = uintptr_t> T get_NtlmCredential() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6D89C))(this);
	}
	template <typename T = void> T set_NtlmCredential(uintptr_t value) {
		return ((T (*)(WebConnection*, uintptr_t))(Il2CppBase() + 0x3E6D8A4))(this, value);
	}
	template <typename T = bool> T get_UnsafeAuthenticatedConnectionSharing() {
		return ((T (*)(WebConnection*))(Il2CppBase() + 0x3E6D8AC))(this);
	}
	template <typename T = void> T set_UnsafeAuthenticatedConnectionSharing(bool value) {
		return ((T (*)(WebConnection*, bool))(Il2CppBase() + 0x3E6D8B4))(this, value);
	}

};

}
