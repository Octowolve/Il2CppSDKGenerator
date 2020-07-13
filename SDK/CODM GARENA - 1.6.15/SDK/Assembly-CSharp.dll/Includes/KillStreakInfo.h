#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KillStreakInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KillStreakInfo"));
	}

	template <typename T = int32_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
