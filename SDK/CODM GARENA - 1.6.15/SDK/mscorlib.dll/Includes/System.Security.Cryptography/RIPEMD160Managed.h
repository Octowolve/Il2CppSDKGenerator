#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RIPEMD160Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RIPEMD160Managed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _ProcessingBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _X() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _HashValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _Length() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _ProcessingBufferCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RIPEMD160Managed*))(Il2CppBase() + 0x307C1C8))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(RIPEMD160Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x307C31C))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(RIPEMD160Managed*))(Il2CppBase() + 0x307C63C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RIPEMD160Managed*))(Il2CppBase() + 0x307C9B0))(this);
	}
	template <typename T = void> T ProcessBlock(Il2CppArray<uintptr_t>* buffer, int32_t offset) {
		return ((T (*)(RIPEMD160Managed*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x307C440))(this, buffer, offset);
	}
	template <typename T = void> T Compress() {
		return ((T (*)(RIPEMD160Managed*))(Il2CppBase() + 0x307CA1C))(this);
	}
	template <typename T = void> T CompressFinal(uint64_t length) {
		return ((T (*)(RIPEMD160Managed*, uint64_t))(Il2CppBase() + 0x307C808))(this, length);
	}
	template <typename T = uint32_t> T ROL(uint32_t x, int32_t n) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, int32_t))(Il2CppBase() + 0x308071C))(this, x, n);
	}
	template <typename T = uint32_t> T F(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x308072C))(this, x, y, z);
	}
	template <typename T = uint32_t> T G(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3080738))(this, x, y, z);
	}
	template <typename T = uint32_t> T H(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3080748))(this, x, y, z);
	}
	template <typename T = uint32_t> T I(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3080758))(this, x, y, z);
	}
	template <typename T = uint32_t> T J(uint32_t x, uint32_t y, uint32_t z) {
		return ((T (*)(RIPEMD160Managed*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3080768))(this, x, y, z);
	}
	template <typename T = void> T FF(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x30803B4))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T GG(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3080400))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T HH(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3080458))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T II(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x30804B4))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T JJ(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x308050C))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T FFF(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x30806D0))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T GGG(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3080678))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T HHH(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x308061C))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T III(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x30805C4))(this, a, b, c, d, e, x, s);
	}
	template <typename T = void> T JJJ(uintptr_t a, uint32_t b, uintptr_t c, uint32_t d, uint32_t e, uint32_t x, int32_t s) {
		return ((T (*)(RIPEMD160Managed*, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3080568))(this, a, b, c, d, e, x, s);
	}

};

}
