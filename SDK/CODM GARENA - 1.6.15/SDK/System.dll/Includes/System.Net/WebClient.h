#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebClient"));
	}

	template <typename T = Il2CppString*> static T& urlEncodedCType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& hexBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& credentials() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& headers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& responseHeaders() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& baseAddress() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& queryString() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& is_busy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& async() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& proxy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& DownloadProgressChanged() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(WebClient*))(Il2CppBase() + 0x3E63420))(this);
	}
	template <typename T = uintptr_t> T get_Proxy() {
		return ((T (*)(WebClient*))(Il2CppBase() + 0x3E634C8))(this);
	}
	template <typename T = bool> T get_IsBusy() {
		return ((T (*)(WebClient*))(Il2CppBase() + 0x3E634D0))(this);
	}
	template <typename T = void> T CheckBusy() {
		return ((T (*)(WebClient*))(Il2CppBase() + 0x3E634D8))(this);
	}
	template <typename T = void> T SetBusy() {
		return ((T (*)(WebClient*))(Il2CppBase() + 0x3E63590))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DownloadData(uintptr_t address) {
		return ((T (*)(WebClient*, uintptr_t))(Il2CppBase() + 0x3E6360C))(this, address);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DownloadDataCore(uintptr_t address, uintptr_t userToken) {
		return ((T (*)(WebClient*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E63774))(this, address, userToken);
	}
	template <typename T = uintptr_t> T OpenWrite(Il2CppString* address, Il2CppString* method) {
		return ((T (*)(WebClient*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E64144))(this, address, method);
	}
	template <typename T = uintptr_t> T OpenWrite_1(uintptr_t address, Il2CppString* method) {
		return ((T (*)(WebClient*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E64224))(this, address, method);
	}
	template <typename T = Il2CppString*> T DetermineMethod(uintptr_t address, Il2CppString* method, bool is_upload) {
		return ((T (*)(WebClient*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3E64598))(this, address, method, is_upload);
	}
	template <typename T = Il2CppString*> T DownloadString(Il2CppString* address) {
		return ((T (*)(WebClient*, Il2CppString*))(Il2CppBase() + 0x3E64724))(this, address);
	}
	template <typename T = uintptr_t> T CreateUri(Il2CppString* address) {
		return ((T (*)(WebClient*, Il2CppString*))(Il2CppBase() + 0x3E64220))(this, address);
	}
	template <typename T = Il2CppString*> T GetQueryString(bool add_qmark) {
		return ((T (*)(WebClient*, bool))(Il2CppBase() + 0x3E64D2C))(this, add_qmark);
	}
	template <typename T = uintptr_t> T MakeUri(Il2CppString* path) {
		return ((T (*)(WebClient*, Il2CppString*))(Il2CppBase() + 0x3E64828))(this, path);
	}
	template <typename T = uintptr_t> T SetupRequest(uintptr_t uri) {
		return ((T (*)(WebClient*, uintptr_t))(Il2CppBase() + 0x3E63A00))(this, uri);
	}
	template <typename T = uintptr_t> T SetupRequest_1(uintptr_t uri, Il2CppString* method, bool is_upload) {
		return ((T (*)(WebClient*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3E64530))(this, uri, method, is_upload);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAll(uintptr_t stream, int32_t length, uintptr_t userToken) {
		return ((T (*)(WebClient*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E63EF8))(this, stream, length, userToken);
	}
	template <typename T = Il2CppString*> T UrlEncode(Il2CppString* str) {
		return ((T (*)(WebClient*, Il2CppString*))(Il2CppBase() + 0x3E6523C))(this, str);
	}
	template <typename T = void> T OnDownloadProgressChanged(uintptr_t e) {
		return ((T (*)(WebClient*, uintptr_t))(Il2CppBase() + 0x3E655A0))(this, e);
	}
	template <typename T = uintptr_t> T GetWebRequest(uintptr_t address) {
		return ((T (*)(WebClient*, uintptr_t))(Il2CppBase() + 0x3E655BC))(this, address);
	}
	template <typename T = uintptr_t> T GetWebResponse(uintptr_t request) {
		return ((T (*)(WebClient*, uintptr_t))(Il2CppBase() + 0x3E65850))(this, request);
	}

};

}
