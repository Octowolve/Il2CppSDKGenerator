#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Jce {

class JceOutputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Jce", "JceOutputStream"));
	}

	template <typename T = uintptr_t> T& ms() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& bw() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& sServerEncoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T getMemoryStream() {
		return ((T (*)(JceOutputStream*))(Il2CppBase() + 0x4F8FF88))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T toByteArray() {
		return ((T (*)(JceOutputStream*))(Il2CppBase() + 0x4F8FF90))(this);
	}
	template <typename T = void> T reserve(int32_t len) {
		return ((T (*)(JceOutputStream*, int32_t))(Il2CppBase() + 0x4F90108))(this, len);
	}
	template <typename T = void> T writeHead(unsigned char type, int32_t tag) {
		return ((T (*)(JceOutputStream*, unsigned char, int32_t))(Il2CppBase() + 0x4F901AC))(this, type, tag);
	}
	template <typename T = void> T Write(bool b, int32_t tag) {
		return ((T (*)(JceOutputStream*, bool, int32_t))(Il2CppBase() + 0x4F90560))(this, b, tag);
	}
	template <typename T = void> T Write_1(unsigned char b, int32_t tag) {
		return ((T (*)(JceOutputStream*, unsigned char, int32_t))(Il2CppBase() + 0x4F90564))(this, b, tag);
	}
	template <typename T = void> T Write_2(int16_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, int16_t, int32_t))(Il2CppBase() + 0x4F90700))(this, n, tag);
	}
	template <typename T = void> T Write_3(uint16_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, uint16_t, int32_t))(Il2CppBase() + 0x4F90930))(this, n, tag);
	}
	template <typename T = void> T Write_4(int32_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, int32_t, int32_t))(Il2CppBase() + 0x4F90938))(this, n, tag);
	}
	template <typename T = void> T Write_5(uint32_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, uint32_t, int32_t))(Il2CppBase() + 0x4F90AE8))(this, n, tag);
	}
	template <typename T = void> T Write_6(uint64_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, uint64_t, int32_t))(Il2CppBase() + 0x4F90CD8))(this, n, tag);
	}
	template <typename T = void> T Write_7(int64_t n, int32_t tag) {
		return ((T (*)(JceOutputStream*, int64_t, int32_t))(Il2CppBase() + 0x4F90B0C))(this, n, tag);
	}
	template <typename T = void> T Write_8(float n, int32_t tag) {
		return ((T (*)(JceOutputStream*, float, int32_t))(Il2CppBase() + 0x4F90CF8))(this, n, tag);
	}
	template <typename T = void> T Write_9(double n, int32_t tag) {
		return ((T (*)(JceOutputStream*, double, int32_t))(Il2CppBase() + 0x4F90E84))(this, n, tag);
	}
	template <typename T = void> T writeStringByte(Il2CppString* s, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppString*, int32_t))(Il2CppBase() + 0x4F9102C))(this, s, tag);
	}
	template <typename T = void> T writeByteString(Il2CppString* s, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppString*, int32_t))(Il2CppBase() + 0x4F91334))(this, s, tag);
	}
	template <typename T = void> T Write_10(Il2CppString* s, int32_t tag, bool IsLocalString) {
		return ((T (*)(JceOutputStream*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4F9164C))(this, s, tag, IsLocalString);
	}
	template <typename T = void> T write(Il2CppDictionary<uintptr_t, uintptr_t>* m, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppDictionary<uintptr_t, uintptr_t>*, int32_t))(Il2CppBase() + 0x283131C))(this, m, tag);
	}
	template <typename T = void> T Write_11(uintptr_t m, int32_t tag) {
		return ((T (*)(JceOutputStream*, uintptr_t, int32_t))(Il2CppBase() + 0x4F91B34))(this, m, tag);
	}
	template <typename T = void> T Write_12(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F928E8))(this, l, tag);
	}
	template <typename T = void> T Write_13(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F929AC))(this, l, tag);
	}
	template <typename T = void> T Write_14(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92B98))(this, l, tag);
	}
	template <typename T = void> T Write_15(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92C5C))(this, l, tag);
	}
	template <typename T = void> T Write_16(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92D20))(this, l, tag);
	}
	template <typename T = void> T Write_17(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92DF8))(this, l, tag);
	}
	template <typename T = void> T Write_18(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92EBC))(this, l, tag);
	}
	template <typename T = void> T write_1(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x28315D8))(this, l, tag);
	}
	template <typename T = void> T writeArray(Il2CppArray<uintptr_t>* l, int32_t tag) {
		return ((T (*)(JceOutputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F92F98))(this, l, tag);
	}
	template <typename T = void> T writeList(uintptr_t l, int32_t tag) {
		return ((T (*)(JceOutputStream*, uintptr_t, int32_t))(Il2CppBase() + 0x4F9305C))(this, l, tag);
	}
	template <typename T = void> T Write_19(uintptr_t o, int32_t tag) {
		return ((T (*)(JceOutputStream*, uintptr_t, int32_t))(Il2CppBase() + 0x4F9334C))(this, o, tag);
	}
	template <typename T = void> T Write_20(uintptr_t o, int32_t tag) {
		return ((T (*)(JceOutputStream*, uintptr_t, int32_t))(Il2CppBase() + 0x4F9203C))(this, o, tag);
	}
	template <typename T = int32_t> T setServerEncoding(Il2CppString* se) {
		return ((T (*)(JceOutputStream*, Il2CppString*))(Il2CppBase() + 0x4F933BC))(this, se);
	}

};

}
