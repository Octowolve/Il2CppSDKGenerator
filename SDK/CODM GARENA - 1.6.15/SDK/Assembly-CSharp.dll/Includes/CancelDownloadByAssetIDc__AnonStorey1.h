#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelDownloadByAssetIDcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CancelDownloadByAssetID>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CancelDownloadByAssetIDcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4467838))(this, x);
	}

};

}
