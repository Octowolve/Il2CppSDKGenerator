#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapsMustDowncAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapsMustDown>c__AnonStoreyC"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$11() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(GetMapsMustDowncAnonStoreyC*, uint32_t))(Il2CppBase() + 0x2D2396C))(this, it);
	}

};

}
