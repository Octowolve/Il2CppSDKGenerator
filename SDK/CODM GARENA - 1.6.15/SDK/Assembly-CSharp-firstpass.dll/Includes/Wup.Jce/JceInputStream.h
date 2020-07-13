#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Jce {

class JceInputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Jce", "JceInputStream"));
	}

	template <typename T = uintptr_t> T& ms() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& br() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& sServerEncoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T wrap(Il2CppArray<uintptr_t>* bs, int32_t index) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F8A7EC))(this, bs, index);
	}
	template <typename T = int32_t> static T readHead(uintptr_t hd, uintptr_t bb) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F8A948))(0, hd, bb);
	}
	template <typename T = int32_t> T readHead_1(uintptr_t hd) {
		return ((T (*)(JceInputStream*, uintptr_t))(Il2CppBase() + 0x4F8A9CC))(this, hd);
	}
	template <typename T = int32_t> T peakHead(uintptr_t hd) {
		return ((T (*)(JceInputStream*, uintptr_t))(Il2CppBase() + 0x4F8A9D4))(this, hd);
	}
	template <typename T = void> T skip(int32_t len) {
		return ((T (*)(JceInputStream*, int32_t))(Il2CppBase() + 0x4F8AA5C))(this, len);
	}
	template <typename T = bool> T skipToTag(int32_t tag) {
		return ((T (*)(JceInputStream*, int32_t))(Il2CppBase() + 0x4F8AAC0))(this, tag);
	}
	template <typename T = void> T skipToStructEnd() {
		return ((T (*)(JceInputStream*))(Il2CppBase() + 0x4F8B6A8))(this);
	}
	template <typename T = void> T skipField() {
		return ((T (*)(JceInputStream*))(Il2CppBase() + 0x4F8B76C))(this);
	}
	template <typename T = void> T skipField_1(unsigned char type) {
		return ((T (*)(JceInputStream*, unsigned char))(Il2CppBase() + 0x4F8AC98))(this, type);
	}
	template <typename T = bool> T Read(bool b, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, bool, int32_t, bool))(Il2CppBase() + 0x4F8BA28))(this, b, tag, isRequire);
	}
	template <typename T = char> T Read_1(char c, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, char, int32_t, bool))(Il2CppBase() + 0x4F8BBDC))(this, c, tag, isRequire);
	}
	template <typename T = unsigned char> T Read_2(unsigned char c, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, unsigned char, int32_t, bool))(Il2CppBase() + 0x4F8BA4C))(this, c, tag, isRequire);
	}
	template <typename T = int16_t> T Read_3(int16_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, int16_t, int32_t, bool))(Il2CppBase() + 0x4F8BBF8))(this, n, tag, isRequire);
	}
	template <typename T = uint16_t> T Read_4(uint16_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uint16_t, int32_t, bool))(Il2CppBase() + 0x4F8BDB8))(this, n, tag, isRequire);
	}
	template <typename T = int32_t> T Read_5(int32_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, int32_t, int32_t, bool))(Il2CppBase() + 0x4F8B824))(this, n, tag, isRequire);
	}
	template <typename T = uint32_t> T Read_6(uint32_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uint32_t, int32_t, bool))(Il2CppBase() + 0x4F8BF74))(this, n, tag, isRequire);
	}
	template <typename T = int64_t> T Read_7(int64_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, int64_t, int32_t, bool))(Il2CppBase() + 0x4F8BF98))(this, n, tag, isRequire);
	}
	template <typename T = uint64_t> T Read_8(uint64_t n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uint64_t, int32_t, bool))(Il2CppBase() + 0x4F8C1E4))(this, n, tag, isRequire);
	}
	template <typename T = float> T Read_9(float n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, float, int32_t, bool))(Il2CppBase() + 0x4F8C428))(this, n, tag, isRequire);
	}
	template <typename T = double> T Read_10(double n, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, double, int32_t, bool))(Il2CppBase() + 0x4F8C5C8))(this, n, tag, isRequire);
	}
	template <typename T = Il2CppString*> T readByteString(Il2CppString* s, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4F8C7B0))(this, s, tag, isRequire);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T ReadByteStringList(Il2CppList<Il2CppString*>* stringList, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppList<Il2CppString*>*, int32_t, bool))(Il2CppBase() + 0x4F8CB80))(this, stringList, tag, isRequire);
	}
	template <typename T = Il2CppString*> T readString1() {
		return ((T (*)(JceInputStream*))(Il2CppBase() + 0x4F8D1A0))(this);
	}
	template <typename T = Il2CppString*> T readString4() {
		return ((T (*)(JceInputStream*))(Il2CppBase() + 0x4F8D284))(this);
	}
	template <typename T = Il2CppString*> T Read_11(Il2CppString* s, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4F8D498))(this, s, tag, isRequire);
	}
	template <typename T = Il2CppString*> T readString(int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, int32_t, bool))(Il2CppBase() + 0x4F8D614))(this, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_12(Il2CppArray<uintptr_t>* s, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8D78C))(this, s, tag, isRequire);
	}
	template <typename T = uintptr_t> T readMap(int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, int32_t, bool))(Il2CppBase() + 0x21D95AC))(this, tag, isRequire);
	}
	template <typename T = uintptr_t> T readMap_1(uintptr_t arg, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x21D963C))(this, arg, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_13(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8D834))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_14(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8DB1C))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_15(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8E688))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_16(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8E968))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_17(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8EC48))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_18(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8EF40))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_19(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8F228))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T readArray(Il2CppArray<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4E44200))(this, l, tag, isRequire);
	}
	template <typename T = uintptr_t> T readList(uintptr_t l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x21DD2D0))(this, l, tag, isRequire);
	}
	template <typename T = Il2CppList<uintptr_t>*> T readArray_1(Il2CppList<uintptr_t>* l, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppList<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x21D40A0))(this, l, tag, isRequire);
	}
	template <typename T = uintptr_t> T readArrayImpl(uintptr_t mt, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1B7C4C8))(this, mt, tag, isRequire);
	}
	template <typename T = uintptr_t> T directRead(uintptr_t o, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4F8F520))(this, o, tag, isRequire);
	}
	template <typename T = uintptr_t> T Read_20(uintptr_t o, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4F8F7F0))(this, o, tag, isRequire);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Read_21(Il2CppArray<uintptr_t>* o, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4F8FAC0))(this, o, tag, isRequire);
	}
	template <typename T = uintptr_t> T Read_22(uintptr_t o, int32_t tag, bool isRequire) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1E750F0))(this, o, tag, isRequire);
	}
	template <typename T = int32_t> T setServerEncoding(Il2CppString* se) {
		return ((T (*)(JceInputStream*, Il2CppString*))(Il2CppBase() + 0x4F8FB68))(this, se);
	}
	template <typename T = uintptr_t> T read(uintptr_t proxy, int32_t tag, bool isRequired) {
		return ((T (*)(JceInputStream*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4F8FB74))(this, proxy, tag, isRequired);
	}

};

}
