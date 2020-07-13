#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsMapInDownloadListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsMapInDownloadList>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& octMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(IsMapInDownloadListcAnonStorey0*, uint32_t))(Il2CppBase() + 0x44679BC))(this, it);
	}

};

}
