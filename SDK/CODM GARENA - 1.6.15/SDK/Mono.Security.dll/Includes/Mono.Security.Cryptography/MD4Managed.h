#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class MD4Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "MD4Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& x() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& digest() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MD4Managed*))(Il2CppBase() + 0x47CF58C))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(MD4Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47CF6E4))(this, array, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(MD4Managed*))(Il2CppBase() + 0x47D080C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Padding(int32_t nLength) {
		return ((T (*)(MD4Managed*, int32_t))(Il2CppBase() + 0x47D0ABC))(this, nLength);
	}
	template <typename T = uint32_t> T F(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(MD4Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x47D0B90))(this, x, y, z);
	}
	template <typename T = uint32_t> T G(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(MD4Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x47D0BA0))(this, x, y, z);
	}
	template <typename T = uint32_t> T H(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(MD4Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x47D0BB4))(this, x, y, z);
	}
	template <typename T = uint32_t> T ROL(uint32_t x, unsigned char n) {
		return ((T (*)(MD4Managed*, uint32_t, unsigned char))(Il2CppBase() + 0x47D0BC0))(this, x, n);
	}
	template <typename T = void> T FF(uintptr_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, unsigned char s) {
		return ((T (*)(MD4Managed*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x47D0BD0))(this, a, b, c, d, x, s);
	}
	template <typename T = void> T GG(uintptr_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, unsigned char s) {
		return ((T (*)(MD4Managed*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x47D0C0C))(this, a, b, c, d, x, s);
	}
	template <typename T = void> T HH(uintptr_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, unsigned char s) {
		return ((T (*)(MD4Managed*, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x47D0C58))(this, a, b, c, d, x, s);
	}
	template <typename T = void> T Encode(Il2CppArray<uintptr_t>* output, Il2CppArray<uintptr_t>* input) {
		return ((T (*)(MD4Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D096C))(this, output, input);
	}
	template <typename T = void> T Decode(Il2CppArray<uintptr_t>* output, Il2CppArray<uintptr_t>* input, int32_t index) {
		return ((T (*)(MD4Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47D0C9C))(this, output, input, index);
	}
	template <typename T = void> T MD4Transform(Il2CppArray<uintptr_t>* state, Il2CppArray<uintptr_t>* block, int32_t index) {
		return ((T (*)(MD4Managed*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CF8D8))(this, state, block, index);
	}

};

}
