#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AssetBundleManifest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AssetBundleManifest"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetAllAssetBundles() {
		return ((T (*)(AssetBundleManifest*))(Il2CppBase() + 0x469B6F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllDependencies(Il2CppString* assetBundleName) {
		return ((T (*)(AssetBundleManifest*, Il2CppString*))(Il2CppBase() + 0x469B78C))(this, assetBundleName);
	}

};

}
