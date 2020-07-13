#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetSortingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetSortingInfo"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& sqrDis() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
