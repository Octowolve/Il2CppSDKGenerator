#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class TlsStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "TlsStream"));
	}

	template <typename T = bool> T& canRead() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& canWrite() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& temp() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_EOF() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA748))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA7A8))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA7B0))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA7B8))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA7EC))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(TlsStream*, int64_t))(Il2CppBase() + 0x4BFA820))(this, value);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFA860))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadSmallValue(int32_t length) {
		return ((T (*)(TlsStream*, int32_t))(Il2CppBase() + 0x4BFA894))(this, length);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFAA88))(this);
	}
	template <typename T = int16_t> T ReadInt16() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFAACC))(this);
	}
	template <typename T = int32_t> T ReadInt24() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFAB30))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadBytes(int32_t count) {
		return ((T (*)(TlsStream*, int32_t))(Il2CppBase() + 0x4BF0990))(this, count);
	}
	template <typename T = void> T Write(unsigned char value) {
		return ((T (*)(TlsStream*, unsigned char))(Il2CppBase() + 0x4BFABB0))(this, value);
	}
	template <typename T = void> T Write_1(int16_t value) {
		return ((T (*)(TlsStream*, int16_t))(Il2CppBase() + 0x4BFACB0))(this, value);
	}
	template <typename T = void> T WriteInt24(int32_t value) {
		return ((T (*)(TlsStream*, int32_t))(Il2CppBase() + 0x4BFADDC))(this, value);
	}
	template <typename T = void> T Write_2(int32_t value) {
		return ((T (*)(TlsStream*, int32_t))(Il2CppBase() + 0x4BFAF2C))(this, value);
	}
	template <typename T = void> T Write_3(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(TlsStream*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BEFB4C))(this, buffer);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BF0AAC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BEFB90))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(TlsStream*))(Il2CppBase() + 0x4BFB0A4))(this);
	}
	template <typename T = void> T SetLength(int64_t length) {
		return ((T (*)(TlsStream*, int64_t))(Il2CppBase() + 0x4BFB0D8))(this, length);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t loc) {
		return ((T (*)(TlsStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4BFB118))(this, offset, loc);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(TlsStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4BFB160))(this, buffer, offset, count);
	}
	template <typename T = void> T Write_4(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(TlsStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4BFB268))(this, buffer, offset, count);
	}

};

}
