#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AssetBundleCreateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AssetBundleCreateRequest"));
	}


	template <typename T = uintptr_t> T get_assetBundle() {
		return ((T (*)(AssetBundleCreateRequest*))(Il2CppBase() + 0x469B5C4))(this);
	}
	template <typename T = void> T DisableCompatibilityChecks() {
		return ((T (*)(AssetBundleCreateRequest*))(Il2CppBase() + 0x469B65C))(this);
	}

};

}
