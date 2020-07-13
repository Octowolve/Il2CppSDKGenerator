#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HandleRequestcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HandleRequest>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& handler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& jsonRequest() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& req() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(HandleRequestcAnonStorey0*))(Il2CppBase() + 0x4883C30))(this);
	}

};

}
