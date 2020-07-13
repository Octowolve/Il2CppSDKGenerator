#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowBoxScenecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowBoxScene>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& shack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(ShowBoxScenecAnonStorey0*))(Il2CppBase() + 0x4356F90))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(ShowBoxScenecAnonStorey0*))(Il2CppBase() + 0x435707C))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(ShowBoxScenecAnonStorey0*))(Il2CppBase() + 0x43571F4))(this);
	}

};

}
