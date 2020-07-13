#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Locale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "Locale"));
	}


	template <typename T = Il2CppString*> static T GetText_3(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4EC0318))(0, msg);
	}
	template <typename T = Il2CppString*> static T GetText_4(Il2CppString* fmt, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC0320))(0, fmt, args);
	}

};

}
