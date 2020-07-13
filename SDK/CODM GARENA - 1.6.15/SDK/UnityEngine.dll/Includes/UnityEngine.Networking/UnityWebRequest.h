#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class UnityWebRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "UnityWebRequest"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& disposeDownloadHandlerOnDispose() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& disposeUploadHandlerOnDispose() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = uintptr_t> static T Get(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4ABBE90))(0, uri);
	}
	template <typename T = uintptr_t> static T Head(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4ABBF70))(0, uri);
	}
	template <typename T = bool> T get_disposeDownloadHandlerOnDispose() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC014))(this);
	}
	template <typename T = void> T set_disposeDownloadHandlerOnDispose(bool value) {
		return ((T (*)(UnityWebRequest*, bool))(Il2CppBase() + 0x4ABC01C))(this, value);
	}
	template <typename T = bool> T get_disposeUploadHandlerOnDispose() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC024))(this);
	}
	template <typename T = void> T set_disposeUploadHandlerOnDispose(bool value) {
		return ((T (*)(UnityWebRequest*, bool))(Il2CppBase() + 0x4ABC02C))(this, value);
	}
	template <typename T = void> T InternalCreate() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABB864))(this);
	}
	template <typename T = void> T InternalDestroy() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC034))(this);
	}
	template <typename T = void> T InternalSetDefaults() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABB8FC))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC0CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC1BC))(this);
	}
	template <typename T = void> T DisposeHandlers() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC138))(this);
	}
	template <typename T = uintptr_t> T InternalBegin() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC3CC))(this);
	}
	template <typename T = void> T InternalAbort() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC464))(this);
	}
	template <typename T = uintptr_t> T Send() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC4FC))(this);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC500))(this);
	}
	template <typename T = void> T InternalSetMethod(uintptr_t methodType) {
		return ((T (*)(UnityWebRequest*, uintptr_t))(Il2CppBase() + 0x4ABC504))(this, methodType);
	}
	template <typename T = void> T InternalSetCustomMethod(Il2CppString* customMethodName) {
		return ((T (*)(UnityWebRequest*, Il2CppString*))(Il2CppBase() + 0x4ABC5A4))(this, customMethodName);
	}
	template <typename T = void> T set_method(Il2CppString* value) {
		return ((T (*)(UnityWebRequest*, Il2CppString*))(Il2CppBase() + 0x4ABB9D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_error() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC644))(this);
	}
	template <typename T = void> T set_useHttpContinue(bool value) {
		return ((T (*)(UnityWebRequest*, bool))(Il2CppBase() + 0x4ABC6DC))(this, value);
	}
	template <typename T = void> T set_url(Il2CppString* value) {
		return ((T (*)(UnityWebRequest*, Il2CppString*))(Il2CppBase() + 0x4ABB908))(this, value);
	}
	template <typename T = void> T InternalSetUrl(Il2CppString* url) {
		return ((T (*)(UnityWebRequest*, Il2CppString*))(Il2CppBase() + 0x4ABC77C))(this, url);
	}
	template <typename T = int64_t> T get_responseCode() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC81C))(this);
	}
	template <typename T = bool> T get_isDone() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC8B4))(this);
	}
	template <typename T = bool> T get_isError() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC94C))(this);
	}
	template <typename T = void> T set_chunkedTransfer(bool value) {
		return ((T (*)(UnityWebRequest*, bool))(Il2CppBase() + 0x4ABC9E4))(this, value);
	}
	template <typename T = Il2CppString*> T GetResponseHeader(Il2CppString* name) {
		return ((T (*)(UnityWebRequest*, Il2CppString*))(Il2CppBase() + 0x4ABCA84))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalGetResponseHeaderKeys() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABCB24))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetResponseHeaders() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABCBBC))(this);
	}
	template <typename T = uintptr_t> T GetUploadHandler() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC310))(this);
	}
	template <typename T = void> T set_uploadHandler(uintptr_t value) {
		return ((T (*)(UnityWebRequest*, uintptr_t))(Il2CppBase() + 0x4ABBDF0))(this, value);
	}
	template <typename T = uintptr_t> T GetDownloadHandler() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABC278))(this);
	}
	template <typename T = uintptr_t> T get_downloadHandler() {
		return ((T (*)(UnityWebRequest*))(Il2CppBase() + 0x4ABCD64))(this);
	}
	template <typename T = void> T set_downloadHandler(uintptr_t value) {
		return ((T (*)(UnityWebRequest*, uintptr_t))(Il2CppBase() + 0x4ABBD50))(this, value);
	}
	template <typename T = void> T set_timeout(int32_t value) {
		return ((T (*)(UnityWebRequest*, int32_t))(Il2CppBase() + 0x4ABCDFC))(this, value);
	}

};

}
