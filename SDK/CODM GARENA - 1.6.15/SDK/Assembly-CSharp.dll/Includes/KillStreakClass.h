#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KillStreakClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KillStreakClass"));
	}

	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& StreakItemsGO() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& StreakLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& StreakBar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& StreakTweenObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& StreakAlpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
