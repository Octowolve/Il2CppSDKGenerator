#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Utility {

class Util
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Utility", "Util"));
	}

	template <typename T = uintptr_t> static T& rand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T Random() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F971A8))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CharArray2Bytes(Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F9727C))(0, chars);
	}
	template <typename T = Il2CppString*> static T Bytes2String(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F973B4))(0, bytes);
	}
	template <typename T = Il2CppString*> static T Hex2String(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F97A7C))(0, buffer);
	}

};

}
