#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpUtility"));
	}


	template <typename T = Il2CppString*> static T UrlDecode(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42C4F68))(0, s);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetChars(uintptr_t b, uintptr_t e) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42DC73C))(0, b, e);
	}
	template <typename T = Il2CppString*> static T UrlDecode_1(Il2CppString* s, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42DC2F8))(0, s, e);
	}

};

}
