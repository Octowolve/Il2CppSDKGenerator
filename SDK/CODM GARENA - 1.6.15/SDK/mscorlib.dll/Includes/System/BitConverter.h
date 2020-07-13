#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class BitConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "BitConverter"));
	}

	template <typename T = bool> static T& SwappedWordsInDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsLittleEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename T = bool> static T AmILittleEndian() {
		return ((T (*)(void *))(Il2CppBase() + 0x3628248))(0);
	}
	template <typename T = bool> static T DoubleWordsAreSwapped() {
		return ((T (*)(void *))(Il2CppBase() + 0x362821C))(0);
	}
	template <typename T = int64_t> static T DoubleToInt64Bits(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3628250))(0, value);
	}
	template <typename T = double> static T Int64BitsToDouble(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x36285FC))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes(uintptr_t ptr, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3628AAC))(0, ptr, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_1(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3628B94))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_2(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3628C40))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_3(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3628CEC))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_4(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x36286B8))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_5(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3628D98))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_6(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3628E44))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_7(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3628EF0))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_8(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3628F9C))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_9(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x362830C))(0, value);
	}
	template <typename T = void> static T PutBytes(uintptr_t dst, Il2CppArray<uintptr_t>* src, int32_t start_index, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3629048))(0, dst, src, start_index, count);
	}
	template <typename T = bool> static T ToBoolean(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3629214))(0, value, startIndex);
	}
	template <typename T = int16_t> static T ToInt16(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3629350))(0, value, startIndex);
	}
	template <typename T = int32_t> static T ToInt32(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3629418))(0, value, startIndex);
	}
	template <typename T = int64_t> static T ToInt64(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x362852C))(0, value, startIndex);
	}
	template <typename T = uint16_t> static T ToUInt16(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x36294E0))(0, value, startIndex);
	}
	template <typename T = uint32_t> static T ToUInt32(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x36295A8))(0, value, startIndex);
	}
	template <typename T = uint64_t> static T ToUInt64(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3629670))(0, value, startIndex);
	}
	template <typename T = float> static T ToSingle(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3629740))(0, value, startIndex);
	}
	template <typename T = double> static T ToDouble(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3628764))(0, value, startIndex);
	}
	template <typename T = Il2CppString*> static T ToString(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3629808))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_1(Il2CppArray<uintptr_t>* value, int32_t startIndex, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x362990C))(0, value, startIndex, length);
	}

};

}
