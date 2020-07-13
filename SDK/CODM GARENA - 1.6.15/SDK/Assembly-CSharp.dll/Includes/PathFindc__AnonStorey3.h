#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PathFindcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PathFind>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& sbOpenList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& sbCloseList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t x) {
		return ((T (*)(PathFindcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x44EDDAC))(this, x);
	}
	template <typename T = void> T m__1(uintptr_t x) {
		return ((T (*)(PathFindcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x44EDEBC))(this, x);
	}

};

}
