#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponStatus"));
	}

	template <typename T = bool> T& Order() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Current() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& Other() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
