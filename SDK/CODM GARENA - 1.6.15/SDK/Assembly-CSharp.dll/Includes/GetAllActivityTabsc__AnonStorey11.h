#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllActivityTabscAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllActivityTabs>c__AnonStorey11"));
	}

	template <typename T = uintptr_t> T& dataA() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dataB() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetAllActivityTabscAnonStorey11*, uintptr_t))(Il2CppBase() + 0x353150C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetAllActivityTabscAnonStorey11*, uintptr_t))(Il2CppBase() + 0x3531564))(this, it);
	}

};

}
