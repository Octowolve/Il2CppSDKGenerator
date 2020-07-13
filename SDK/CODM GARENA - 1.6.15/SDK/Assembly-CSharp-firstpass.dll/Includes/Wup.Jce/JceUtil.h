#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Jce {

class JceUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Jce", "JceUtil"));
	}

	template <typename T = int32_t> static T& iConstant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& iTotal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T Equals(bool l, bool r) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x4F93460))(0, l, r);
	}
	template <typename T = bool> static T Equals_1(unsigned char l, unsigned char r) {
		return ((T (*)(void *, unsigned char, unsigned char))(Il2CppBase() + 0x4F9346C))(0, l, r);
	}
	template <typename T = bool> static T Equals_2(char l, char r) {
		return ((T (*)(void *, char, char))(Il2CppBase() + 0x4F9347C))(0, l, r);
	}
	template <typename T = bool> static T Equals_3(int16_t l, int16_t r) {
		return ((T (*)(void *, int16_t, int16_t))(Il2CppBase() + 0x4F9348C))(0, l, r);
	}
	template <typename T = bool> static T Equals_4(int32_t l, int32_t r) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4F9349C))(0, l, r);
	}
	template <typename T = bool> static T Equals_5(int64_t l, int64_t r) {
		return ((T (*)(void *, int64_t, int64_t))(Il2CppBase() + 0x4F934AC))(0, l, r);
	}
	template <typename T = bool> static T Equals_6(float l, float r) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4F934C8))(0, l, r);
	}
	template <typename T = bool> static T Equals_7(double l, double r) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x4F934E4))(0, l, r);
	}
	template <typename T = bool> static T Equals_8(uintptr_t l, uintptr_t r) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F93500))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo(bool l, bool r) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x4F9353C))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_1(unsigned char l, unsigned char r) {
		return ((T (*)(void *, unsigned char, unsigned char))(Il2CppBase() + 0x4F9354C))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_2(char l, char r) {
		return ((T (*)(void *, char, char))(Il2CppBase() + 0x4F93564))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_3(int16_t l, int16_t r) {
		return ((T (*)(void *, int16_t, int16_t))(Il2CppBase() + 0x4F9357C))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_4(int32_t l, int32_t r) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4F93594))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_5(int64_t l, int64_t r) {
		return ((T (*)(void *, int64_t, int64_t))(Il2CppBase() + 0x4F935AC))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_6(float l, float r) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4F93604))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_7(double l, double r) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x4F93628))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_8(uintptr_t l, uintptr_t r) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E64460))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_9(Il2CppList<uintptr_t>* l, Il2CppList<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E6415C))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_10(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E64558))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_11(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F9364C))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_12(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F937D4))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_13(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F93968))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_14(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F93B04))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_15(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F93CA0))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_16(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F93E34))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_17(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F94014))(0, l, r);
	}
	template <typename T = int32_t> static T compareTo_18(Il2CppArray<uintptr_t>* l, Il2CppArray<uintptr_t>* r) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F941B0))(0, l, r);
	}
	template <typename T = int32_t> static T hashCode(bool o) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4F9434C))(0, o);
	}
	template <typename T = int32_t> static T hashCode_1(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F94410))(0, array);
	}
	template <typename T = int32_t> static T hashCode_2(unsigned char o) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x4F945A8))(0, o);
	}
	template <typename T = int32_t> static T hashCode_3(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F94664))(0, array);
	}
	template <typename T = int32_t> static T hashCode_4(char o) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4F947F8))(0, o);
	}
	template <typename T = int32_t> static T hashCode_5(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F948B4))(0, array);
	}
	template <typename T = int32_t> static T hashCode_6(double o) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4F94A48))(0, o);
	}
	template <typename T = int32_t> static T hashCode_7(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F94C14))(0, array);
	}
	template <typename T = int32_t> static T hashCode_8(float o) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4F94E5C))(0, o);
	}
	template <typename T = int32_t> static T hashCode_9(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F94F5C))(0, array);
	}
	template <typename T = int32_t> static T hashCode_10(int16_t o) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x4F95154))(0, o);
	}
	template <typename T = int32_t> static T hashCode_11(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F95210))(0, array);
	}
	template <typename T = int32_t> static T hashCode_12(int32_t o) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4F953A4))(0, o);
	}
	template <typename T = int32_t> static T hashCode_13(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F95460))(0, array);
	}
	template <typename T = int32_t> static T hashCode_14(int64_t o) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4F94B50))(0, o);
	}
	template <typename T = int32_t> static T hashCode_15(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F955F4))(0, array);
	}
	template <typename T = int32_t> static T hashCode_16(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F957B0))(0, array);
	}
	template <typename T = int32_t> static T hashCode_17(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F95964))(0, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getJceBufArray(uintptr_t ms) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F960D0))(0, ms);
	}

};

}
