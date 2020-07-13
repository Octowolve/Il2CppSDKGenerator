#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class BinaryReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "BinaryReader"));
	}

	template <typename T = int32_t> static T& MaxBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_stream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_encoding() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& charBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE8CBC))(this);
	}
	template <typename T = uintptr_t> T get_BaseStream() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE8CD0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE8CD8))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(BinaryReader*, bool))(Il2CppBase() + 0x3FE8D08))(this, disposing);
	}
	template <typename T = void> T FillBuffer(int32_t numBytes) {
		return ((T (*)(BinaryReader*, int32_t))(Il2CppBase() + 0x3FE8D58))(this, numBytes);
	}
	template <typename T = int32_t> T PeekChar() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE90A8))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE93E4))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(BinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FE94F0))(this, buffer, index, count);
	}
	template <typename T = int32_t> T Read_2(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(BinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FE9760))(this, buffer, index, count);
	}
	template <typename T = int32_t> T ReadCharBytes(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, uintptr_t* bytes_read) {
		return ((T (*)(BinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3FE92C0))(this, buffer, index, count, bytes_read);
	}
	template <typename T = int32_t> T Read7BitEncodedInt() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE99D4))(this);
	}
	template <typename T = bool> T ReadBoolean() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE9AD4))(this);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE9AF8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadBytes(int32_t count) {
		return ((T (*)(BinaryReader*, int32_t))(Il2CppBase() + 0x3FE9C58))(this, count);
	}
	template <typename T = char> T ReadChar() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FE9EB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadChars(int32_t count) {
		return ((T (*)(BinaryReader*, int32_t))(Il2CppBase() + 0x3FE9F68))(this, count);
	}
	template <typename T = uintptr_t> T ReadDecimal() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA148))(this);
	}
	template <typename T = double> T ReadDouble() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA3C8))(this);
	}
	template <typename T = int16_t> T ReadInt16() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA404))(this);
	}
	template <typename T = int32_t> T ReadInt32() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA48C))(this);
	}
	template <typename T = int64_t> T ReadInt64() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA568))(this);
	}
	template <typename T = signed char> T ReadSByte() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA710))(this);
	}
	template <typename T = Il2CppString*> T ReadString() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA730))(this);
	}
	template <typename T = float> T ReadSingle() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA9C0))(this);
	}
	template <typename T = uint16_t> T ReadUInt16() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEA9FC))(this);
	}
	template <typename T = uint32_t> T ReadUInt32() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEAA80))(this);
	}
	template <typename T = uint64_t> T ReadUInt64() {
		return ((T (*)(BinaryReader*))(Il2CppBase() + 0x3FEAB5C))(this);
	}
	template <typename T = void> T CheckBuffer(int32_t length) {
		return ((T (*)(BinaryReader*, int32_t))(Il2CppBase() + 0x3FE8F18))(this, length);
	}

};

}
