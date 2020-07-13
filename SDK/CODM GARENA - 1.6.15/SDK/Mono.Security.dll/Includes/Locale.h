#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Locale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "Locale"));
	}


	template <typename T = Il2CppString*> static T GetText(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47C2008))(0, msg);
	}

};

}
