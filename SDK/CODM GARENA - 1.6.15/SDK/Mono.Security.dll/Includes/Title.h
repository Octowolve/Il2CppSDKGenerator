#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Title
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "Title"));
	}



};

}
