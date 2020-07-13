#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class ByteConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "ByteConverter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReverseBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_ReverseEndian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bytes2String() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCharValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_String2Bytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T ReverseBytes(Il2CppArray<uintptr_t>* inArray) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x464F784))(0, inArray);
	}
	template <typename T = int16_t> static T ReverseEndian(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x464F8D4))(0, value);
	}
	template <typename T = uint16_t> static T ReverseEndian_1(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x464FA1C))(0, value);
	}
	template <typename T = int32_t> static T ReverseEndian_2(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x464FB64))(0, value);
	}
	template <typename T = uint32_t> static T ReverseEndian_3(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x464FCAC))(0, value);
	}
	template <typename T = int64_t> static T ReverseEndian_4(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x464FDF4))(0, value);
	}
	template <typename T = uint64_t> static T ReverseEndian_5(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x464FF64))(0, value);
	}
	template <typename T = Il2CppString*> static T Bytes2String(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46500D4))(0, bytes);
	}
	template <typename T = bool> static T IsCharValidate(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x46509B8))(0, ch);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T String2Bytes(Il2CppString* strInput) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4650A68))(0, strInput);
	}

};

}
