#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReleaseUnusedSceneAssetRefcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReleaseUnusedSceneAssetRef>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& tex() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(ReleaseUnusedSceneAssetRefcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3BF8F9C))(this, x);
	}

};

}
