#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetRoot"));
	}

	template <typename T = uintptr_t> T& _houdiniAsset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bakeTargets() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(HEUHoudiniAssetRoot*))(Il2CppBase() + 0x2BD3738))(this);
	}
	template <typename T = void> T RemoveHoudiniEngineAssetData() {
		return ((T (*)(HEUHoudiniAssetRoot*))(Il2CppBase() + 0x2BD3918))(this);
	}
	template <typename T = void> T ClearHoudiniEngineReferences() {
		return ((T (*)(HEUHoudiniAssetRoot*))(Il2CppBase() + 0x2BD3A68))(this);
	}
	template <typename T = void> static T DestroyRootComponent(uintptr_t assetRoot) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BD3B08))(0, assetRoot);
	}

};

}
