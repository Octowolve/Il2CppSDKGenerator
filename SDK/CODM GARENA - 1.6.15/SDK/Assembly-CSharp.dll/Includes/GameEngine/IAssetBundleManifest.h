#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IAssetBundleManifest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IAssetBundleManifest"));
	}


	template <typename T = void> T InitFromAssetBundleManifest(uintptr_t m) {
		return ((T (*)(IAssetBundleManifest*, uintptr_t))(Il2CppBase() + 0x0))(this, m);
	}
	template <typename T = int16_t> T GetIndexFromBundleName(Il2CppString* name) {
		return ((T (*)(IAssetBundleManifest*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppString*> T GetBundleNameFromIndex(int16_t index) {
		return ((T (*)(IAssetBundleManifest*, int16_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
