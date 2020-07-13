#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GCAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GCAction"));
	}

	template <typename T = int32_t> T& Reference() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsDelegate() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
