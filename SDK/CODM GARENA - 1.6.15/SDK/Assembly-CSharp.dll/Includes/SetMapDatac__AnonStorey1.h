#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMapDatacAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetMapData>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetMapDatacAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2CD6FC4))(this, it);
	}

};

}
