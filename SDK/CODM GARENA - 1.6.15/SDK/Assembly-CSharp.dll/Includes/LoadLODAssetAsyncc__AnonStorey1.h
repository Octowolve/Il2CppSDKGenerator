#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadLODAssetAsynccAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadLODAssetAsync>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& assetName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t i) {
		return ((T (*)(LoadLODAssetAsynccAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3F258C8))(this, i);
	}

};

}
