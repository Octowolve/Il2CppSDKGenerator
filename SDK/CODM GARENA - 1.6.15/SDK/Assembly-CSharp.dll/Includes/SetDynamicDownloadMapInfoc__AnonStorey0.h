#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDynamicDownloadMapInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetDynamicDownloadMapInfo>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& questId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetDynamicDownloadMapInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x43190B4))(this, it);
	}

};

}
