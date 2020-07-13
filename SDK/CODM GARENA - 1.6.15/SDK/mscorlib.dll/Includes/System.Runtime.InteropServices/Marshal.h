#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class Marshal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "Marshal"));
	}

	template <typename T = int32_t> static T& SystemMaxDBCSCharSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SystemDefaultCharSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T AllocCoTaskMem(int32_t cb) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FE0318))(0, cb);
	}
	template <typename T = uintptr_t> static T AllocHGlobal(uintptr_t cb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0320))(0, cb);
	}
	template <typename T = uintptr_t> static T AllocHGlobal_1(int32_t cb) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FE0328))(0, cb);
	}
	template <typename T = void> static T copy_to_unmanaged(uintptr_t source, int32_t startIndex, uintptr_t destination, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4FE03DC))(0, source, startIndex, destination, length);
	}
	template <typename T = void> static T copy_from_unmanaged(uintptr_t source, int32_t startIndex, uintptr_t destination, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4FE03F4))(0, source, startIndex, destination, length);
	}
	template <typename T = void> static T Copy(Il2CppArray<uintptr_t>* source, int32_t startIndex, uintptr_t destination, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4FE040C))(0, source, startIndex, destination, length);
	}
	template <typename T = void> static T Copy_1(Il2CppArray<uintptr_t>* source, int32_t startIndex, uintptr_t destination, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4FE04C4))(0, source, startIndex, destination, length);
	}
	template <typename T = void> static T Copy_2(uintptr_t source, Il2CppArray<uintptr_t>* destination, int32_t startIndex, int32_t length) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4FE057C))(0, source, destination, startIndex, length);
	}
	template <typename T = void> static T Copy_3(uintptr_t source, Il2CppArray<uintptr_t>* destination, int32_t startIndex, int32_t length) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4FE0634))(0, source, destination, startIndex, length);
	}
	template <typename T = void> static T FreeBSTR(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE06EC))(0, ptr);
	}
	template <typename T = void> static T FreeHGlobal(uintptr_t hglobal) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE06F4))(0, hglobal);
	}
	template <typename T = int32_t> static T GetLastWin32Error() {
		return ((T (*)(void *))(Il2CppBase() + 0x4FE06FC))(0);
	}
	template <typename T = Il2CppString*> static T PtrToStringAnsi(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0700))(0, ptr);
	}
	template <typename T = Il2CppString*> static T PtrToStringAnsi_1(uintptr_t ptr, int32_t len) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE0708))(0, ptr, len);
	}
	template <typename T = Il2CppString*> static T PtrToStringUni(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0714))(0, ptr);
	}
	template <typename T = uintptr_t> static T PtrToStructure(uintptr_t ptr, uintptr_t structureType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FE071C))(0, ptr, structureType);
	}
	template <typename T = unsigned char> static T ReadByte(uintptr_t ptr, int32_t ofs) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE0728))(0, ptr, ofs);
	}
	template <typename T = int16_t> static T ReadInt16(uintptr_t ptr, int32_t ofs) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE0734))(0, ptr, ofs);
	}
	template <typename T = int32_t> static T ReadInt32(uintptr_t ptr, int32_t ofs) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE0740))(0, ptr, ofs);
	}
	template <typename T = int64_t> static T ReadInt64(uintptr_t ptr, int32_t ofs) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE074C))(0, ptr, ofs);
	}
	template <typename T = int32_t> static T SizeOf(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0758))(0, t);
	}
	template <typename T = uintptr_t> static T SecureStringToBSTR(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0760))(0, s);
	}
	template <typename T = void> static T WriteByte(uintptr_t ptr, int32_t ofs, unsigned char val) {
		return ((T (*)(void *, uintptr_t, int32_t, unsigned char))(Il2CppBase() + 0x4FE0A98))(0, ptr, ofs, val);
	}
	template <typename T = void> static T WriteInt16(uintptr_t ptr, int16_t val) {
		return ((T (*)(void *, uintptr_t, int16_t))(Il2CppBase() + 0x4FE0AA8))(0, ptr, val);
	}
	template <typename T = void> static T WriteInt16_1(uintptr_t ptr, int32_t ofs, int16_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, int16_t))(Il2CppBase() + 0x4FE0A88))(0, ptr, ofs, val);
	}
	template <typename T = void> static T WriteInt32(uintptr_t ptr, int32_t val) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4FE0B54))(0, ptr, val);
	}
	template <typename T = void> static T WriteInt32_1(uintptr_t ptr, int32_t ofs, int32_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4FE0A78))(0, ptr, ofs, val);
	}
	template <typename T = void> static T WriteIntPtr(uintptr_t ptr, int32_t ofs, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4FE0C00))(0, ptr, ofs, val);
	}
	template <typename T = uintptr_t> static T GetFunctionPointerForDelegateInternal(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0C10))(0, d);
	}
	template <typename T = uintptr_t> static T GetFunctionPointerForDelegate(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE0C18))(0, d);
	}

};

}
