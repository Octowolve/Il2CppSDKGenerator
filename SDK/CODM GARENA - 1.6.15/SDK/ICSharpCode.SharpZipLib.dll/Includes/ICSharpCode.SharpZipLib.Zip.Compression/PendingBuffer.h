#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class PendingBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "PendingBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& start() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& end() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& bits() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& bitCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PendingBuffer*))(Il2CppBase() + 0x4A6FAC4))(this);
	}
	template <typename T = void> T WriteShort(int32_t value) {
		return ((T (*)(PendingBuffer*, int32_t))(Il2CppBase() + 0x4A745B4))(this, value);
	}
	template <typename T = void> T WriteBlock(Il2CppArray<uintptr_t>* block, int32_t offset, int32_t length) {
		return ((T (*)(PendingBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A74640))(this, block, offset, length);
	}
	template <typename T = int32_t> T get_BitCount() {
		return ((T (*)(PendingBuffer*))(Il2CppBase() + 0x4A7099C))(this);
	}
	template <typename T = void> T AlignToByte() {
		return ((T (*)(PendingBuffer*))(Il2CppBase() + 0x4A70A68))(this);
	}
	template <typename T = void> T WriteBits(int32_t b, int32_t count) {
		return ((T (*)(PendingBuffer*, int32_t, int32_t))(Il2CppBase() + 0x4A709A4))(this, b, count);
	}
	template <typename T = void> T WriteShortMSB(int32_t s) {
		return ((T (*)(PendingBuffer*, int32_t))(Il2CppBase() + 0x4A70698))(this, s);
	}
	template <typename T = bool> T get_IsFlushed() {
		return ((T (*)(PendingBuffer*))(Il2CppBase() + 0x4A6FC30))(this);
	}
	template <typename T = int32_t> T Flush(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t length) {
		return ((T (*)(PendingBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7074C))(this, output, offset, length);
	}

};

}
