#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA384Managed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA384Managed"));
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
		return ((T (*)(SHA384Managed*, bool))(Il2CppBase() + 0x427755C))(this, reuse);
	}
	template <typename T = void> T Initialize_1() {
		return ((T (*)(SHA384Managed*))(Il2CppBase() + 0x42776EC))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA384Managed*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42776F4))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA384Managed*))(Il2CppBase() + 0x4277A94))(this);
	}
	template <typename T = void> T update(unsigned char input) {
		return ((T (*)(SHA384Managed*, unsigned char))(Il2CppBase() + 0x4277828))(this, input);
	}
	template <typename T = void> T processWord(Il2CppArray<uintptr_t>* input, int32_t inOff) {
		return ((T (*)(SHA384Managed*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42778BC))(this, input, inOff);
	}
	template <typename T = void> T unpackWord(uint64_t word, Il2CppArray<uintptr_t>* output, int32_t outOff) {
		return ((T (*)(SHA384Managed*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x427831C))(this, word, output, outOff);
	}
	template <typename T = void> T adjustByteCounts() {
		return ((T (*)(SHA384Managed*))(Il2CppBase() + 0x4277C78))(this);
	}
	template <typename T = void> T processLength(uint64_t lowW, uint64_t hiW) {
		return ((T (*)(SHA384Managed*, uint64_t, uint64_t))(Il2CppBase() + 0x4277CAC))(this, lowW, hiW);
	}
	template <typename T = void> T processBlock() {
		return ((T (*)(SHA384Managed*))(Il2CppBase() + 0x4277D34))(this);
	}

};

}
