#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpWebRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpWebRequest"));
	}

	template <typename T = uintptr_t> T& requestUri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& actualUri() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hostChanged() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& allowAutoRedirect() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& allowBuffering() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& certificates() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& connectionGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& continueDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cookieContainer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& credentials() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& haveResponse() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& haveRequest() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& requestSent() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = uintptr_t> T& webHeaders() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& keepAlive() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& maxAutoRedirect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mediaType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& initialMethod() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& pipelined() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& preAuthenticate() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& usedPreAuth() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& actualVersion() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& proxy() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& sendChunked() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& servicePoint() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& timeout() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& writeStream() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& webResponse() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& asyncWrite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& asyncRead() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& abortHandler() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& aborted() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& gotRequestStream() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& redirects() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& expectContinue() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& authCompleted() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bodyBuffer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& bodyBufferLength() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& getResponseCalled() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& saved_exc() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& is_ntlm_auth() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& finished_reading() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = uintptr_t> T& WebConnection() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& auto_decomp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> static T& defaultMaxResponseHeadersLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& readWriteTimeout() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& unsafe_auth_blah() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42DCFFC))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T set_Accept(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DD024))(this, value);
	}
	template <typename T = uintptr_t> T get_Address() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42BFA48))(this);
	}
	template <typename T = uintptr_t> T get_AutomaticDecompression() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD188))(this);
	}
	template <typename T = bool> T get_InternalAllowBuffering() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD190))(this);
	}
	template <typename T = uintptr_t> T get_ClientCertificates() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD48C))(this);
	}
	template <typename T = void> T set_Connection(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DD52C))(this, value);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD800))(this);
	}
	template <typename T = void> T set_ContentLength(int64_t value) {
		return ((T (*)(HttpWebRequest*, int64_t))(Il2CppBase() + 0x42DD808))(this, value);
	}
	template <typename T = void> T set_InternalContentLength(int64_t value) {
		return ((T (*)(HttpWebRequest*, int64_t))(Il2CppBase() + 0x42DD8E4))(this, value);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DD8F4))(this, value);
	}
	template <typename T = void> T set_CookieContainer(uintptr_t value) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DD9F4))(this, value);
	}
	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD9FC))(this);
	}
	template <typename T = void> T set_Credentials(uintptr_t value) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DDA04))(this, value);
	}
	template <typename T = void> T set_Expect(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DDA0C))(this, value);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDBF8))(this);
	}
	template <typename T = void> T set_Headers(uintptr_t value) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DDC00))(this, value);
	}
	template <typename T = bool> T get_KeepAlive() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDD44))(this);
	}
	template <typename T = void> T set_KeepAlive(bool value) {
		return ((T (*)(HttpWebRequest*, bool))(Il2CppBase() + 0x42DDD4C))(this, value);
	}
	template <typename T = int32_t> T get_ReadWriteTimeout() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDD54))(this);
	}
	template <typename T = Il2CppString*> T get_Method() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDD5C))(this);
	}
	template <typename T = void> T set_Method(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DDD64))(this, value);
	}
	template <typename T = uintptr_t> T get_Proxy() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDE9C))(this);
	}
	template <typename T = void> T set_Proxy(uintptr_t value) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DDEA4))(this, value);
	}
	template <typename T = void> T set_Referer(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DDEC8))(this, value);
	}
	template <typename T = uintptr_t> T get_RequestUri() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDFD0))(this);
	}
	template <typename T = bool> T get_SendChunked() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDFD8))(this);
	}
	template <typename T = uintptr_t> T get_ServicePoint() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDFE0))(this);
	}
	template <typename T = void> T set_Timeout(int32_t value) {
		return ((T (*)(HttpWebRequest*, int32_t))(Il2CppBase() + 0x42DE120))(this, value);
	}
	template <typename T = Il2CppString*> T get_TransferEncoding() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DE1DC))(this);
	}
	template <typename T = void> T set_UserAgent(Il2CppString* value) {
		return ((T (*)(HttpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42DE278))(this, value);
	}
	template <typename T = bool> T get_UnsafeAuthenticatedConnectionSharing() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DE31C))(this);
	}
	template <typename T = bool> T get_ExpectContinue() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DE324))(this);
	}
	template <typename T = void> T set_ExpectContinue(bool value) {
		return ((T (*)(HttpWebRequest*, bool))(Il2CppBase() + 0x42DE32C))(this, value);
	}
	template <typename T = uintptr_t> T get_AuthUri() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42B73A0))(this);
	}
	template <typename T = bool> T get_ProxyQuery() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DE334))(this);
	}
	template <typename T = uintptr_t> T GetServicePoint() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DDFE4))(this);
	}
	template <typename T = void> T AddRange(int32_t range) {
		return ((T (*)(HttpWebRequest*, int32_t))(Il2CppBase() + 0x42DE38C))(this, range);
	}
	template <typename T = void> T AddRange_1(Il2CppString* rangeSpecifier, int32_t range) {
		return ((T (*)(HttpWebRequest*, Il2CppString*, int32_t))(Il2CppBase() + 0x42DE418))(this, rangeSpecifier, range);
	}
	template <typename T = uintptr_t> T BeginGetRequestStream(uintptr_t callback, uintptr_t state) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42DE790))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetRequestStream(uintptr_t asyncResult) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DEE60))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetRequestStream() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DEFD4))(this);
	}
	template <typename T = void> T CheckIfForceWrite() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DF23C))(this);
	}
	template <typename T = uintptr_t> T BeginGetResponse(uintptr_t callback, uintptr_t state) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42DF2D4))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetResponse(uintptr_t asyncResult) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42DF69C))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetResponse() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DF89C))(this);
	}
	template <typename T = bool> T get_FinishedReading() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DF950))(this);
	}
	template <typename T = void> T set_FinishedReading(bool value) {
		return ((T (*)(HttpWebRequest*, bool))(Il2CppBase() + 0x42DF958))(this, value);
	}
	template <typename T = bool> T get_Aborted() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DEE28))(this);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DF960))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42DFEC4))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T CheckRequestStarted() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42DD0D0))(this);
	}
	template <typename T = void> T DoContinueDelegate(int32_t statusCode, uintptr_t headers) {
		return ((T (*)(HttpWebRequest*, int32_t, uintptr_t))(Il2CppBase() + 0x42E02C8))(this, statusCode, headers);
	}
	template <typename T = bool> T Redirect(uintptr_t result, uintptr_t code) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E02DC))(this, result, code);
	}
	template <typename T = Il2CppString*> T GetHeaders() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42E0908))(this);
	}
	template <typename T = void> T DoPreAuthenticate() {
		return ((T (*)(HttpWebRequest*))(Il2CppBase() + 0x42E0FC4))(this);
	}
	template <typename T = void> T SetWriteStreamError(uintptr_t status, uintptr_t exc) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E1280))(this, status, exc);
	}
	template <typename T = void> T SendRequestHeaders(bool propagate_error) {
		return ((T (*)(HttpWebRequest*, bool))(Il2CppBase() + 0x42E14E4))(this, propagate_error);
	}
	template <typename T = void> T SetWriteStream(uintptr_t stream) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42E1CEC))(this, stream);
	}
	template <typename T = void> T SetResponseError(uintptr_t status, uintptr_t e, Il2CppString* where) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42E2148))(this, status, e, where);
	}
	template <typename T = void> T CheckSendError(uintptr_t data) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42E23E8))(this, data);
	}
	template <typename T = void> T HandleNtlmAuth(uintptr_t r) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42E2664))(this, r);
	}
	template <typename T = void> T SetResponseData(uintptr_t data) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42E297C))(this, data);
	}
	template <typename T = bool> T CheckAuthorization(uintptr_t response, uintptr_t code) {
		return ((T (*)(HttpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E3EB4))(this, response, code);
	}
	template <typename T = bool> T CheckFinalStatus(uintptr_t result) {
		return ((T (*)(HttpWebRequest*, uintptr_t))(Il2CppBase() + 0x42E3850))(this, result);
	}

};

}
