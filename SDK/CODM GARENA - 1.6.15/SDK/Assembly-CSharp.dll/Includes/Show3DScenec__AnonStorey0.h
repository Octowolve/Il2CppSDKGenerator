#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Show3DScenecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Show3DScene>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& scene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(Show3DScenecAnonStorey0*))(Il2CppBase() + 0x29E1C4C))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(Show3DScenecAnonStorey0*))(Il2CppBase() + 0x29E1D14))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(Show3DScenecAnonStorey0*))(Il2CppBase() + 0x29E1DDC))(this);
	}
	template <typename T = void> T m__3() {
		return ((T (*)(Show3DScenecAnonStorey0*))(Il2CppBase() + 0x29E1EA4))(this);
	}

};

}
