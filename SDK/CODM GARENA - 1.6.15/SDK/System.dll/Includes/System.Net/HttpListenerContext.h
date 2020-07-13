#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListenerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListenerContext"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& user() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cnc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& error() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& err_status() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Listener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_ErrorStatus() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42D7D60))(this);
	}
	template <typename T = void> T set_ErrorStatus(int32_t value) {
		return ((T (*)(HttpListenerContext*, int32_t))(Il2CppBase() + 0x42D6048))(this, value);
	}
	template <typename T = Il2CppString*> T get_ErrorMessage() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42D7D58))(this);
	}
	template <typename T = void> T set_ErrorMessage(Il2CppString* value) {
		return ((T (*)(HttpListenerContext*, Il2CppString*))(Il2CppBase() + 0x42D6040))(this, value);
	}
	template <typename T = bool> T get_HaveError() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42D55B4))(this);
	}
	template <typename T = uintptr_t> T get_Connection() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42B821C))(this);
	}
	template <typename T = uintptr_t> T get_Request() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42B76F4))(this);
	}
	template <typename T = uintptr_t> T get_Response() {
		return ((T (*)(HttpListenerContext*))(Il2CppBase() + 0x42D458C))(this);
	}
	template <typename T = void> T ParseAuthentication(uintptr_t expectedSchemes) {
		return ((T (*)(HttpListenerContext*, uintptr_t))(Il2CppBase() + 0x42D999C))(this, expectedSchemes);
	}
	template <typename T = uintptr_t> T ParseBasicAuthentication(Il2CppString* authData) {
		return ((T (*)(HttpListenerContext*, Il2CppString*))(Il2CppBase() + 0x42D9F94))(this, authData);
	}

};

}
