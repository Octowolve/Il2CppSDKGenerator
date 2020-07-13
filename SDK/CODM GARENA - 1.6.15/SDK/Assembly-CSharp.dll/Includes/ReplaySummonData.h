#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplaySummonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplaySummonData"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& DestoryCB() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
