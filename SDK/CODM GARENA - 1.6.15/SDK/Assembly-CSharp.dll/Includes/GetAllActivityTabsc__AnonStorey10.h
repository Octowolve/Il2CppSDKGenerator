#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllActivityTabscAnonStorey10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllActivityTabs>c__AnonStorey10"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$15() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetAllActivityTabscAnonStorey10*, uintptr_t))(Il2CppBase() + 0x3531430))(this, it);
	}

};

}
