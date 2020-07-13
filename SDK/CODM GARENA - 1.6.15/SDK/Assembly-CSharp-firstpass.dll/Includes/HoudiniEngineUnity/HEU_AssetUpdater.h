#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAssetUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AssetUpdater"));
	}


	template <typename T = void> static T Update() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C651C4))(0);
	}
	template <typename T = void> static T AddAssetForUpdate(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C651C8))(0, asset);
	}
	template <typename T = void> static T RemoveAsset(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C651CC))(0, asset);
	}

};

}
