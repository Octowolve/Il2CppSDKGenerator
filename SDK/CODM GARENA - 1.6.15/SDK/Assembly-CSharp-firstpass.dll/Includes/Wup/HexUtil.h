#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup {

class HexUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup", "HexUtil"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& digits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& emptybytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T byte2HexStr(unsigned char b) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x4F8474C))(0, b);
	}
	template <typename T = Il2CppString*> static T bytes2HexStr(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F848E8))(0, bytes);
	}
	template <typename T = unsigned char> static T hexStr2Byte(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F84B24))(0, str);
	}
	template <typename T = unsigned char> static T char2Byte(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4F88BB0))(0, ch);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T hexStr2Bytes(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F88BFC))(0, str);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReverseBytes(Il2CppArray<uintptr_t>* inArray) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F88EBC))(0, inArray);
	}

};

}
