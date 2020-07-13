#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllScrollViewPlayTabscAnonStorey13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllScrollViewPlayTabs>c__AnonStorey13"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetAllScrollViewPlayTabscAnonStorey13*, uintptr_t))(Il2CppBase() + 0x3531730))(this, it);
	}

};

}
