#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PerspectiveItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PerspectiveItemInfo"));
	}

	template <typename T = uintptr_t> T& OwnerPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
