#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Locale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Locale"));
	}


	template <typename T = Il2CppString*> static T GetText_5(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C96C78))(0, msg);
	}
	template <typename T = Il2CppString*> static T GetText_6(Il2CppString* fmt, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C96C80))(0, fmt, args);
	}

};

}
