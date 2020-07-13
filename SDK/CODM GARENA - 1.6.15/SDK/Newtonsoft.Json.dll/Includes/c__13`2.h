#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c132
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__13`2"));
	}

	template <typename T = void*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
