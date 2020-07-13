#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup {

class ByteConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup", "ByteConverter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T ReverseBytes(Il2CppArray<uintptr_t>* inArray) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F82F28))(0, inArray);
	}
	template <typename T = int16_t> static T ReverseEndian(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x4F82FE8))(0, value);
	}
	template <typename T = uint16_t> static T ReverseEndian_1(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x4F830AC))(0, value);
	}
	template <typename T = int32_t> static T ReverseEndian_2(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4F83170))(0, value);
	}
	template <typename T = uint32_t> static T ReverseEndian_3(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4F83234))(0, value);
	}
	template <typename T = int64_t> static T ReverseEndian_4(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4F832F8))(0, value);
	}
	template <typename T = uint64_t> static T ReverseEndian_5(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4F833D0))(0, value);
	}
	template <typename T = float> static T ReverseEndian_6(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4F834A8))(0, value);
	}
	template <typename T = double> static T ReverseEndian_7(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4F8356C))(0, value);
	}
	template <typename T = Il2CppString*> static T Bytes2String(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F83644))(0, bytes);
	}
	template <typename T = bool> static T IsCharValidate(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4F83EE8))(0, ch);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T String2Bytes(Il2CppString* strInput, bool IsLocalString) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4F83F00))(0, strInput, IsLocalString);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T String2Bytes_1(Il2CppString* strInput) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F83FE4))(0, strInput);
	}

};

}
