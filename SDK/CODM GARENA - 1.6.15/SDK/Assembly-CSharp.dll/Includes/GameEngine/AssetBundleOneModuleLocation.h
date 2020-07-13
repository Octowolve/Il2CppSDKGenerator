#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleOneModuleLocation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleOneModuleLocation"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& DynamicAssetList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& SilentDynamicAssetList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& MidDynamicAssetList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& MidSilentDynamicAssetList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& LowDynamicAssetList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& LowSilentDynamicAssetList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitForEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetBundleOneModuleLocation*, uintptr_t))(Il2CppBase() + 0x2B7B370))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetBundleOneModuleLocation*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B7B9DC))(this, bytes, position);
	}
	template <typename T = void> T InitForEditor() {
		return ((T (*)(AssetBundleOneModuleLocation*))(Il2CppBase() + 0x2B7BB60))(this);
	}

};

}
