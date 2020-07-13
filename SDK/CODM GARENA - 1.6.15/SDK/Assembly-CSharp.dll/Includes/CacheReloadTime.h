#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CacheReloadTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CacheReloadTime"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& CacheTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& ReloadTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
