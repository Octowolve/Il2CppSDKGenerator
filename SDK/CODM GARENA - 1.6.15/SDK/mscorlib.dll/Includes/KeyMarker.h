#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "KeyMarker"));
	}

	template <typename T = uintptr_t> static T& Removed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
