#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpWebResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpWebResponse"));
	}

	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& webHeaders() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cookieCollection() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& statusCode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& statusDescription() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& contentType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cookie_container() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cookieExpiresFormats() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(HttpWebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E4A88))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4AB0))(this);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4B38))(this);
	}
	template <typename T = void> T set_Cookies(uintptr_t value) {
		return ((T (*)(HttpWebResponse*, uintptr_t))(Il2CppBase() + 0x42E4B40))(this, value);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4C38))(this);
	}
	template <typename T = uintptr_t> T get_ResponseUri() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4C40))(this);
	}
	template <typename T = uintptr_t> T get_StatusCode() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E3EAC))(this);
	}
	template <typename T = Il2CppString*> T get_StatusDescription() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E42F4))(this);
	}
	template <typename T = void> T ReadAll() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E2510))(this);
	}
	template <typename T = uintptr_t> T GetResponseStream() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4C58))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(HttpWebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E4DE8))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T Close() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4F98))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(HttpWebResponse*, bool))(Il2CppBase() + 0x42E4AD8))(this, disposing);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E4B5C))(this);
	}
	template <typename T = void> T FillCookies() {
		return ((T (*)(HttpWebResponse*))(Il2CppBase() + 0x42E430C))(this);
	}
	template <typename T = void> T SetCookie(Il2CppString* header) {
		return ((T (*)(HttpWebResponse*, Il2CppString*))(Il2CppBase() + 0x42E5074))(this, header);
	}
	template <typename T = void> T SetCookie2(Il2CppString* cookies_str) {
		return ((T (*)(HttpWebResponse*, Il2CppString*))(Il2CppBase() + 0x42E5BE4))(this, cookies_str);
	}
	template <typename T = uintptr_t> T TryParseCookieExpires(Il2CppString* value) {
		return ((T (*)(HttpWebResponse*, Il2CppString*))(Il2CppBase() + 0x42E5D0C))(this, value);
	}

};

}
