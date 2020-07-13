#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class StreamReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "StreamReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& input_buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& decoded_buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& decoded_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& buffer_size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& do_checks() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& base_stream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mayBlock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& line_builder() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& foundCR() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Initialize(uintptr_t stream, uintptr_t encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) {
		return ((T (*)(StreamReader*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4003580))(this, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize);
	}
	template <typename T = bool> T get_EndOfStream() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x3FF5CA0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4003C78))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(StreamReader*, bool))(Il2CppBase() + 0x4003C8C))(this, disposing);
	}
	template <typename T = int32_t> T DoChecks(int32_t count) {
		return ((T (*)(StreamReader*, int32_t))(Il2CppBase() + 0x4003D00))(this, count);
	}
	template <typename T = int32_t> T ReadBuffer() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4004278))(this);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4004468))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4004594))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** buffer, int32_t index, int32_t count) {
		return ((T (*)(StreamReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x40046C8))(this, buffer, index, count);
	}
	template <typename T = int32_t> T FindNextEOL() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x400497C))(this);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4004A54))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(StreamReader*))(Il2CppBase() + 0x4004D28))(this);
	}

};

}
