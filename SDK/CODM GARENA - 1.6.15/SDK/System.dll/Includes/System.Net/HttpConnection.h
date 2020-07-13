#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpConnection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpConnection"));
	}

	template <typename T = uintptr_t> T& sock() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& epl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ms() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& current_line() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& prefix() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& i_stream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& o_stream() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& chunked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& chunked_uses() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& context_bound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& secure() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& input_state() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& line_state() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T OnPVKSelection(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(HttpConnection*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42D40E0))(this, certificate, targetHost);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D4008))(this);
	}
	template <typename T = int32_t> T get_ChunkedUses() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D41B8))(this);
	}
	template <typename T = uintptr_t> T get_LocalEndPoint() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D41C0))(this);
	}
	template <typename T = bool> T get_IsSecure() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D4260))(this);
	}
	template <typename T = void> T set_Prefix(uintptr_t value) {
		return ((T (*)(HttpConnection*, uintptr_t))(Il2CppBase() + 0x42C4B70))(this, value);
	}
	template <typename T = void> T BeginReadRequest() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42C3E3C))(this);
	}
	template <typename T = uintptr_t> T GetRequestStream(bool chunked, int64_t contentlength) {
		return ((T (*)(HttpConnection*, bool, int64_t))(Il2CppBase() + 0x42D43D4))(this, chunked, contentlength);
	}
	template <typename T = uintptr_t> T GetResponseStream() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D46D4))(this);
	}
	template <typename T = void> T OnRead(uintptr_t ares) {
		return ((T (*)(HttpConnection*, uintptr_t))(Il2CppBase() + 0x42D47D4))(this, ares);
	}
	template <typename T = bool> T ProcessInput(uintptr_t ms) {
		return ((T (*)(HttpConnection*, uintptr_t))(Il2CppBase() + 0x42D50D0))(this, ms);
	}
	template <typename T = Il2CppString*> T ReadLine(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t len, uintptr_t used) {
		return ((T (*)(HttpConnection*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x42D5EA0))(this, buffer, offset, len, used);
	}
	template <typename T = void> T SendError(Il2CppString* msg, int32_t status) {
		return ((T (*)(HttpConnection*, Il2CppString*, int32_t))(Il2CppBase() + 0x42B8224))(this, msg, status);
	}
	template <typename T = void> T SendError_1() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D50A0))(this);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D7D68))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D7DAC))(this);
	}
	template <typename T = void> T CloseSocket() {
		return ((T (*)(HttpConnection*))(Il2CppBase() + 0x42D4268))(this);
	}
	template <typename T = void> T Close_1(bool force_close) {
		return ((T (*)(HttpConnection*, bool))(Il2CppBase() + 0x42D4D0C))(this, force_close);
	}

};

}
