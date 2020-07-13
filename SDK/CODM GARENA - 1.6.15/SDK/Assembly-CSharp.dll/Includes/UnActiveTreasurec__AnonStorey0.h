#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnActiveTreasurecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnActiveTreasure>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& actorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(UnActiveTreasurecAnonStorey0*))(Il2CppBase() + 0x263CA2C))(this);
	}

};

}
