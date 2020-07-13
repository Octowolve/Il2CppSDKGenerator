#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA512Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA512Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& xBuf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& xBufOff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& byteCount1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& byteCount2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& H1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& H2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& H3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& H4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& H5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& H6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint64_t> T& H7() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& H8() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& W() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& wOff() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T Initialize(bool reuse) {
		return ((T (*)(SHA512Managed*, bool))(Il2CppBase() + 0x4278760))(this, reuse);
	}
	template <typename T = void> T Initialize_1() {
		return ((T (*)(SHA512Managed*))(Il2CppBase() + 0x42788F0))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA512Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42788F8))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA512Managed*))(Il2CppBase() + 0x4278C98))(this);
	}
	template <typename T = void> T update(unsigned char input) {
		return ((T (*)(SHA512Managed*, unsigned char))(Il2CppBase() + 0x4278A2C))(this, input);
	}
	template <typename T = void> T processWord(Il2CppArray<uintptr_t>* input, int32_t inOff) {
		return ((T (*)(SHA512Managed*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4278AC0))(this, input, inOff);
	}
	template <typename T = void> T unpackWord(uint64_t word, Il2CppArray<uintptr_t>* output, int32_t outOff) {
		return ((T (*)(SHA512Managed*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4279598))(this, word, output, outOff);
	}
	template <typename T = void> T adjustByteCounts() {
		return ((T (*)(SHA512Managed*))(Il2CppBase() + 0x4278EB4))(this);
	}
	template <typename T = void> T processLength(uint64_t lowW, uint64_t hiW) {
		return ((T (*)(SHA512Managed*, uint64_t, uint64_t))(Il2CppBase() + 0x4278EE8))(this, lowW, hiW);
	}
	template <typename T = void> T processBlock() {
		return ((T (*)(SHA512Managed*))(Il2CppBase() + 0x4278F70))(this);
	}
	template <typename T = uint64_t> T rotateRight(uint64_t x, int32_t n) {
		return ((T (*)(SHA512Managed*, uint64_t, int32_t))(Il2CppBase() + 0x427984C))(this, x, n);
	}
	template <typename T = uint64_t> T Ch(uint64_t x, uint64_t y, uint64_t z) {
		return ((T (*)(SHA512Managed*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x42797A0))(this, x, y, z);
	}
	template <typename T = uint64_t> T Maj(uint64_t x, uint64_t y, uint64_t z) {
		return ((T (*)(SHA512Managed*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4279814))(this, x, y, z);
	}
	template <typename T = uint64_t> T Sum0(uint64_t x) {
		return ((T (*)(SHA512Managed*, uint64_t))(Il2CppBase() + 0x42797D0))(this, x);
	}
	template <typename T = uint64_t> T Sum1(uint64_t x) {
		return ((T (*)(SHA512Managed*, uint64_t))(Il2CppBase() + 0x427975C))(this, x);
	}
	template <typename T = uint64_t> T Sigma0(uint64_t x) {
		return ((T (*)(SHA512Managed*, uint64_t))(Il2CppBase() + 0x4279724))(this, x);
	}
	template <typename T = uint64_t> T Sigma1(uint64_t x) {
		return ((T (*)(SHA512Managed*, uint64_t))(Il2CppBase() + 0x42796E8))(this, x);
	}

};

}
