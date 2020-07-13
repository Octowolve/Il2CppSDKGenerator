#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c"));
	}

	template <typename T = uintptr_t> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__4_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T ExecuteFilterb__4_0(Il2CppString* n) {
		return ((T (*)(c*, Il2CppString*))(Il2CppBase() + 0x39660D8))(this, n);
	}

};

}
