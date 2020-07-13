#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Locale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Locale"));
	}


	template <typename T = Il2CppString*> static T GetText_1(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F7E0C8))(0, msg);
	}
	template <typename T = Il2CppString*> static T GetText_2(Il2CppString* fmt, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F7E0D0))(0, fmt, args);
	}

};

}
