#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AssetBundleRequest"));
	}


	template <typename T = uintptr_t> T get_asset() {
		return ((T (*)(AssetBundleRequest*))(Il2CppBase() + 0x469B850))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allAssets() {
		return ((T (*)(AssetBundleRequest*))(Il2CppBase() + 0x469B8E8))(this);
	}

};

}
