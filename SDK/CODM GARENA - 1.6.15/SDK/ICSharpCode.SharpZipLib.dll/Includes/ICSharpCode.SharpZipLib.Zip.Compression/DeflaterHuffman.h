#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class DeflaterHuffman
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterHuffman"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& BL_ORDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& bit4Reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& staticLCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& staticLLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& staticDCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& staticDLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& pending() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& literalTree() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& distTree() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& blTree() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& d_buf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l_buf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& last_lit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& extra_bits() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DeflaterHuffman*))(Il2CppBase() + 0x4A71778))(this);
	}
	template <typename T = void> T SendAllTrees(int32_t blTreeCodes) {
		return ((T (*)(DeflaterHuffman*, int32_t))(Il2CppBase() + 0x4A73B4C))(this, blTreeCodes);
	}
	template <typename T = void> T CompressBlock() {
		return ((T (*)(DeflaterHuffman*))(Il2CppBase() + 0x4A7423C))(this);
	}
	template <typename T = void> T FlushStoredBlock(Il2CppArray<uintptr_t>* stored, int32_t storedOffset, int32_t storedLength, bool lastBlock) {
		return ((T (*)(DeflaterHuffman*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x4A717CC))(this, stored, storedOffset, storedLength, lastBlock);
	}
	template <typename T = void> T FlushBlock(Il2CppArray<uintptr_t>* stored, int32_t storedOffset, int32_t storedLength, bool lastBlock) {
		return ((T (*)(DeflaterHuffman*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x4A71914))(this, stored, storedOffset, storedLength, lastBlock);
	}
	template <typename T = bool> T IsFull() {
		return ((T (*)(DeflaterHuffman*))(Il2CppBase() + 0x4A73214))(this);
	}
	template <typename T = bool> T TallyLit(int32_t literal) {
		return ((T (*)(DeflaterHuffman*, int32_t))(Il2CppBase() + 0x4A71E70))(this, literal);
	}
	template <typename T = bool> T TallyDist(int32_t distance, int32_t length) {
		return ((T (*)(DeflaterHuffman*, int32_t, int32_t))(Il2CppBase() + 0x4A72FBC))(this, distance, length);
	}
	template <typename T = int16_t> static T BitReverse(int32_t toReverse) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A7380C))(0, toReverse);
	}
	template <typename T = int32_t> static T Lcode(int32_t length) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A744D0))(0, length);
	}
	template <typename T = int32_t> static T Dcode(int32_t distance) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A74590))(0, distance);
	}

};

}
