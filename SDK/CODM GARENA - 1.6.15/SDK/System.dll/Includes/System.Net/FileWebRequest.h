#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FileWebRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FileWebRequest"));
	}

	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& webHeaders() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& credentials() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& connectionGroup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fileAccess() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& proxy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& preAuthenticate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& timeout() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& requestStream() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& webResponse() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& requestEndEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& requesting() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& asyncResponding() {
		return *(T*)((uintptr_t)this + 0x49);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(FileWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C8304))(this, serializationInfo, streamingContext);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C832C))(this);
	}
	template <typename T = void> T set_ContentLength(int64_t value) {
		return ((T (*)(FileWebRequest*, int64_t))(Il2CppBase() + 0x42C8334))(this, value);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(FileWebRequest*, Il2CppString*))(Il2CppBase() + 0x42C8408))(this, value);
	}
	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C84AC))(this);
	}
	template <typename T = void> T set_Credentials(uintptr_t value) {
		return ((T (*)(FileWebRequest*, uintptr_t))(Il2CppBase() + 0x42C84B4))(this, value);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C84BC))(this);
	}
	template <typename T = Il2CppString*> T get_Method() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C84C4))(this);
	}
	template <typename T = void> T set_Method(Il2CppString* value) {
		return ((T (*)(FileWebRequest*, Il2CppString*))(Il2CppBase() + 0x42C84CC))(this, value);
	}
	template <typename T = uintptr_t> T get_Proxy() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C85AC))(this);
	}
	template <typename T = void> T set_Proxy(uintptr_t value) {
		return ((T (*)(FileWebRequest*, uintptr_t))(Il2CppBase() + 0x42C85B4))(this, value);
	}
	template <typename T = uintptr_t> T get_RequestUri() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C85BC))(this);
	}
	template <typename T = void> T set_Timeout(int32_t value) {
		return ((T (*)(FileWebRequest*, int32_t))(Il2CppBase() + 0x42C85C4))(this, value);
	}
	template <typename T = uintptr_t> static T GetMustImplement() {
		return ((T (*)(void *))(Il2CppBase() + 0x42C8680))(0);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C870C))(this);
	}
	template <typename T = uintptr_t> T BeginGetRequestStream(uintptr_t callback, uintptr_t state) {
		return ((T (*)(FileWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C8724))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetRequestStream(uintptr_t asyncResult) {
		return ((T (*)(FileWebRequest*, uintptr_t))(Il2CppBase() + 0x42C8B28))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetRequestStream() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C8E58))(this);
	}
	template <typename T = uintptr_t> T GetRequestStreamInternal() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C8FFC))(this);
	}
	template <typename T = uintptr_t> T BeginGetResponse(uintptr_t callback, uintptr_t state) {
		return ((T (*)(FileWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C912C))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetResponse(uintptr_t asyncResult) {
		return ((T (*)(FileWebRequest*, uintptr_t))(Il2CppBase() + 0x42C9318))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetResponse() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C9654))(this);
	}
	template <typename T = uintptr_t> T GetResponseInternal() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42C97F8))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(FileWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C9D94))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FileWebRequest*))(Il2CppBase() + 0x42CA014))(this);
	}

};

}
