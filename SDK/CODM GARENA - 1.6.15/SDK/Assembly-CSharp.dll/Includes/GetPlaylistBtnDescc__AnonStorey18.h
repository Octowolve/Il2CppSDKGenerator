#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlaylistBtnDesccAnonStorey18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPlaylistBtnDesc>c__AnonStorey18"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetPlaylistBtnDesccAnonStorey18*, uintptr_t))(Il2CppBase() + 0x43188AC))(this, it);
	}

};

}
