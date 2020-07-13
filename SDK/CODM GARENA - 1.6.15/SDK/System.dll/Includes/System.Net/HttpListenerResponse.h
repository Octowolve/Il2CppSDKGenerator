#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpListenerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpListenerResponse"));
	}

	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& content_encoding() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& content_length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& cl_set() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& content_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cookies() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& headers() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& keep_alive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& output_stream() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& location() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& status_code() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& status_description() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& chunked() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& HeadersSent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& force_close_chunked() {
		return *(T*)((uintptr_t)this + 0x49);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42DAFF8))(this);
	}
	template <typename T = bool> T get_ForceCloseChunked() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42D7FC0))(this);
	}
	template <typename T = uintptr_t> T get_ContentEncoding() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42D7B78))(this);
	}
	template <typename T = void> T set_ContentLength64(int64_t value) {
		return ((T (*)(HttpListenerResponse*, int64_t))(Il2CppBase() + 0x42DB038))(this, value);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(HttpListenerResponse*, Il2CppString*))(Il2CppBase() + 0x42D7310))(this, value);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42DB1E4))(this);
	}
	template <typename T = uintptr_t> T get_OutputStream() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42DB1EC))(this);
	}
	template <typename T = bool> T get_SendChunked() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42DB230))(this);
	}
	template <typename T = void> T set_SendChunked(bool value) {
		return ((T (*)(HttpListenerResponse*, bool))(Il2CppBase() + 0x42D4594))(this, value);
	}
	template <typename T = int32_t> T get_StatusCode() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42D7DB4))(this);
	}
	template <typename T = void> T set_StatusCode(int32_t value) {
		return ((T (*)(HttpListenerResponse*, int32_t))(Il2CppBase() + 0x42D7170))(this, value);
	}
	template <typename T = Il2CppString*> static T GetStatusDescription(int32_t code) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42D7450))(0, code);
	}
	template <typename T = void> T Close(bool force) {
		return ((T (*)(HttpListenerResponse*, bool))(Il2CppBase() + 0x42DB000))(this, force);
	}
	template <typename T = void> T Close_1() {
		return ((T (*)(HttpListenerResponse*))(Il2CppBase() + 0x42DB238))(this);
	}
	template <typename T = void> T Close_2(Il2CppArray<uintptr_t>* responseEntity, bool willBlock) {
		return ((T (*)(HttpListenerResponse*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x42D7C2C))(this, responseEntity, willBlock);
	}
	template <typename T = void> T SendHeaders(bool closing, uintptr_t ms) {
		return ((T (*)(HttpListenerResponse*, bool, uintptr_t))(Il2CppBase() + 0x42DB24C))(this, closing, ms);
	}

};

}
