#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreviousInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "PreviousInfo"));
	}

	template <typename T = int32_t> T& Code() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& SortKey() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
