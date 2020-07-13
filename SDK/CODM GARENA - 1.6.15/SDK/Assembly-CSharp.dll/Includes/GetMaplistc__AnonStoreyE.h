#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMaplistcAnonStoreyE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMaplist>c__AnonStoreyE"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$13() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMaplistcAnonStoreyE*, uintptr_t))(Il2CppBase() + 0x43187D8))(this, it);
	}

};

}
