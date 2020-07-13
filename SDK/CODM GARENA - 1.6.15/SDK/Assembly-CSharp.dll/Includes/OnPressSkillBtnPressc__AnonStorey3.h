#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPressSkillBtnPresscAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPressSkillBtnPress>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnPressSkillBtnPresscAnonStorey3*))(Il2CppBase() + 0x27DBA48))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(OnPressSkillBtnPresscAnonStorey3*))(Il2CppBase() + 0x27DBA7C))(this);
	}

};

}
