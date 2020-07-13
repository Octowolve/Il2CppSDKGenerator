#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshDataByServercAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshDataByServer>c__AnonStoreyC"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$11() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshDataByServercAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x4318C20))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(RefreshDataByServercAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x4318CF4))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(RefreshDataByServercAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x4318DC8))(this, it);
	}

};

}
