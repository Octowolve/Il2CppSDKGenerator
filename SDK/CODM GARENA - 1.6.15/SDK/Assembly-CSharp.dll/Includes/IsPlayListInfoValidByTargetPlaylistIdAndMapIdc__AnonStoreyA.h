#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsPlayListInfoValidByTargetPlaylistIdAndMapIdcAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsPlayListInfoValidByTargetPlaylistIdAndMapId>c__AnonStoreyA"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& targetMapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsPlayListInfoValidByTargetPlaylistIdAndMapIdcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x4318B7C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(IsPlayListInfoValidByTargetPlaylistIdAndMapIdcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x4318BB0))(this, it);
	}

};

}