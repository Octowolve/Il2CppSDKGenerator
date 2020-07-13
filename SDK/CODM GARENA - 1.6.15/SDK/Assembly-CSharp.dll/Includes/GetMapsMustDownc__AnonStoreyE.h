#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapsMustDowncAnonStoreyE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapsMustDown>c__AnonStoreyE"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$13() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(GetMapsMustDowncAnonStoreyE*, uint32_t))(Il2CppBase() + 0x2D23A38))(this, it);
	}

};

}
