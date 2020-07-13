#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RijndaelTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RijndaelTransform"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& expandedKey() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Nb() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Nk() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Nr() {
		return *(T*)((uintptr_t)this + 0x40);
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

	template <typename T = void> T Clear() {
		return ((T (*)(RijndaelTransform*))(Il2CppBase() + 0x304A254))(this);
	}
	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x304A94C))(this, input, output);
	}
	template <typename T = uint32_t> T SubByte(uint32_t a) {
		return ((T (*)(RijndaelTransform*, uint32_t))(Il2CppBase() + 0x304A3C8))(this, a);
	}
	template <typename T = void> T Encrypt128(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x304A9E4))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Encrypt192(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30501F0))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Encrypt256(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3058724))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Decrypt128(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3063250))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Decrypt192(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3068AE0))(this, indata, outdata, ekey);
	}
	template <typename T = void> T Decrypt256(Il2CppArray<uintptr_t>* indata, Il2CppArray<uintptr_t>* outdata, Il2CppArray<uintptr_t>* ekey) {
		return ((T (*)(RijndaelTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3070FDC))(this, indata, outdata, ekey);
	}

};

}
