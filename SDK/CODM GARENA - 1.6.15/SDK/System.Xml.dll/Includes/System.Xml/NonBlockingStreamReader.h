#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class NonBlockingStreamReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "NonBlockingStreamReader"));
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
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& base_stream() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mayBlock() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& line_builder() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& foundCR() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2A983D0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA100C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(NonBlockingStreamReader*, bool))(Il2CppBase() + 0x2AA1020))(this, disposing);
	}
	template <typename T = int32_t> T ReadBuffer() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA107C))(this);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA1140))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA1278))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** dest_buffer, int32_t index, int32_t count) {
		return ((T (*)(NonBlockingStreamReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2AA13AC))(this, dest_buffer, index, count);
	}
	template <typename T = int32_t> T FindNextEOL() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA1634))(this);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA1704))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(NonBlockingStreamReader*))(Il2CppBase() + 0x2AA19A0))(this);
	}

};

}
