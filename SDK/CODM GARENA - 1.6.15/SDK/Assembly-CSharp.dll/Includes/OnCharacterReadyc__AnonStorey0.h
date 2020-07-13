#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCharacterReadycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnCharacterReady>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& tmp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnCharacterReadycAnonStorey0*))(Il2CppBase() + 0x32EAF40))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(OnCharacterReadycAnonStorey0*))(Il2CppBase() + 0x32EAF8C))(this);
	}

};

}
