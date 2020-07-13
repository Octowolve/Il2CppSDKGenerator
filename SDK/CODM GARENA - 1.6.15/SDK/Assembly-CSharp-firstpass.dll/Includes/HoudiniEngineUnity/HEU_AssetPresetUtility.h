#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAssetPresetUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AssetPresetUtility"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& PRESET_IDENTIFIER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PRESET_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T SaveAssetPresetToFile(uintptr_t asset, Il2CppString* filePath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C63998))(0, asset, filePath);
	}
	template <typename T = void> static T LoadPresetFileIntoAssetAndCook(uintptr_t asset, Il2CppString* filePath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C63E80))(0, asset, filePath);
	}

};

}
