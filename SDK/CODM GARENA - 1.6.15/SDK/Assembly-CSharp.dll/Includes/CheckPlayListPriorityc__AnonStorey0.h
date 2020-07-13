#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckPlayListPrioritycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckPlayListPriority>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(CheckPlayListPrioritycAnonStorey0*, uintptr_t))(Il2CppBase() + 0xC12F08))(this, it);
	}

};

}
