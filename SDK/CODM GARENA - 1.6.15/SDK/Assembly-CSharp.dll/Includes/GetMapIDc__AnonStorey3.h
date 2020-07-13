#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapIDcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapID>c__AnonStorey3"));
	}

	template <typename T = Il2CppString*> T& mapName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMapIDcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4AA7E30))(this, e);
	}

};

}
