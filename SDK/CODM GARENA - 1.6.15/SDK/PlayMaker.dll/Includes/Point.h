#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Point
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "Point"));
	}

	template <typename T = int16_t> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& y() {
		return *(T*)((uintptr_t)this + 0x2);
	}


};

}
