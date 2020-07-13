#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Slot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Slot"));
	}

	template <typename T = int32_t> T& next() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
