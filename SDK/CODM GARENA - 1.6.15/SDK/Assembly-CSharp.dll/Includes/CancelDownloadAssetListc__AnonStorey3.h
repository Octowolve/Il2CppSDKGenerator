#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelDownloadAssetListcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CancelDownloadAssetList>c__AnonStorey3"));
	}

	template <typename T = Il2CppList<int32_t>*> T& cancelList() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CancelDownloadAssetListcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4467758))(this, x);
	}

};

}
