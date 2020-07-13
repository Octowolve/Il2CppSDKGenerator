#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetMetaDataExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetMetaDataExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SafeGetAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T SafeGetAssetPath(uintptr_t metaData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B8313C))(0, metaData);
	}

};

}
