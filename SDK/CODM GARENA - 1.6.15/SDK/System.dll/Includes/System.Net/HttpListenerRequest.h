#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListenerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListenerRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& accept_types() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& content_length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& cl_set() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cookies() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& headers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& input_stream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& query_string() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& raw_url() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& url() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& referrer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& user_languages() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& is_chunked() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _100continue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& no_body_methods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& separators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetRequestLine(Il2CppString* req) {
		return ((T (*)(HttpListenerRequest*, Il2CppString*))(Il2CppBase() + 0x42D6050))(this, req);
	}
	template <typename T = void> T CreateQueryString(Il2CppString* query) {
		return ((T (*)(HttpListenerRequest*, Il2CppString*))(Il2CppBase() + 0x42DAC38))(this, query);
	}
	template <typename T = void> T FinishInitialization() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42D55C4))(this);
	}
	template <typename T = Il2CppString*> static T Unquote(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DAF2C))(0, str);
	}
	template <typename T = void> T AddHeader(Il2CppString* header) {
		return ((T (*)(HttpListenerRequest*, Il2CppString*))(Il2CppBase() + 0x42D64BC))(this, header);
	}
	template <typename T = bool> T FlushInput() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42D7DC4))(this);
	}
	template <typename T = bool> T get_HasEntityBody() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42DAFAC))(this);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42B76FC))(this);
	}
	template <typename T = uintptr_t> T get_InputStream() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42DAFF0))(this);
	}
	template <typename T = bool> T get_IsSecureConnection() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42DAECC))(this);
	}
	template <typename T = uintptr_t> T get_LocalEndPoint() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42DAEFC))(this);
	}
	template <typename T = uintptr_t> T get_ProtocolVersion() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42D7DBC))(this);
	}
	template <typename T = uintptr_t> T get_Url() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42C4148))(this);
	}
	template <typename T = Il2CppString*> T get_UserHostAddress() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42DAE98))(this);
	}
	template <typename T = Il2CppString*> T get_UserHostName() {
		return ((T (*)(HttpListenerRequest*))(Il2CppBase() + 0x42C40AC))(this);
	}

};

}
