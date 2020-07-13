#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnloadRawAssetscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnloadRawAssets>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& lightMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(UnloadRawAssetscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x48041E4))(this, x);
	}

};

}
