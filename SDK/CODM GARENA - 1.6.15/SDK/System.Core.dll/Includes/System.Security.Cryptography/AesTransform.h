#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AesTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Security.Cryptography", "AesTransform"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& expandedKey() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Nk() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Nr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& Rcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& iSBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& T0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& T1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& T2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& T3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& iT0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& iT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& iT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& iT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(AesTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC8EF0))(this, input, output);
	}
	template <typename T = uint32_t> T SubByte(uint32_t a) {
		return ((T (*)(AesTransform*, uint32_t))(Il2CppBase() + 0x4EC896C))(this, a);
	}
	template <typename T = void> T Encrypt128(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(AesTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC8F24))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Decrypt128(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(AesTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ECE730))(this, indata, outdata, ekey);
	}

};

}
