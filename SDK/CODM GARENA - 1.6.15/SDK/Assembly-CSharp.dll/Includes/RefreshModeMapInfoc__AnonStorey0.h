#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshModeMapInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshModeMapInfo>c__AnonStorey0"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& mapIds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshModeMapInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2132C74))(this, it);
	}

};

}
