#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetToBundleManifest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetToBundleManifest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& IdToABName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IdToSceneName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ABIds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SceneABIds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& ABDependencies() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& SceneABDependencies() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int16_t>*> T& m_abNameToId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int16_t>*> T& m_SceneNameToId() {
		return *(T*)((uintptr_t)this + 0x28);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDependentBundleIdsFromAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromAssetBundleManifest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllSceneDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexFromBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexFromSceneName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBundleNameFromIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetToBundleManifest*, uintptr_t))(Il2CppBase() + 0x35CA4AC))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetToBundleManifest*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35CA6D8))(this, bytes, position);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(AssetToBundleManifest*))(Il2CppBase() + 0x35CAB64))(this);
	}
	template <typename T = Il2CppList<int16_t>*> T GetDependentBundleIdsFromAssetPath(Il2CppString* path) {
		return ((T (*)(AssetToBundleManifest*, Il2CppString*))(Il2CppBase() + 0x35CAF90))(this, path);
	}
	template <typename T = void> T InitFromAssetBundleManifest(uintptr_t m) {
		return ((T (*)(AssetToBundleManifest*, uintptr_t))(Il2CppBase() + 0x35CB074))(this, m);
	}
	template <typename T = void> T GetAllDependencies(int32_t assetId, Il2CppList<int16_t>* deps) {
		return ((T (*)(AssetToBundleManifest*, int32_t, Il2CppList<int16_t>*))(Il2CppBase() + 0x35CB114))(this, assetId, deps);
	}
	template <typename T = void> T GetAllSceneDependencies(Il2CppString* sceneName, Il2CppList<int16_t>* deps) {
		return ((T (*)(AssetToBundleManifest*, Il2CppString*, Il2CppList<int16_t>*))(Il2CppBase() + 0x35CB4A8))(this, sceneName, deps);
	}
	template <typename T = int16_t> T GetIndexFromBundleName(Il2CppString* name) {
		return ((T (*)(AssetToBundleManifest*, Il2CppString*))(Il2CppBase() + 0x35CB6A8))(this, name);
	}
	template <typename T = int16_t> T GetIndexFromSceneName(Il2CppString* name) {
		return ((T (*)(AssetToBundleManifest*, Il2CppString*))(Il2CppBase() + 0x35CB818))(this, name);
	}
	template <typename T = Il2CppString*> T GetBundleNameFromIndex(int16_t index) {
		return ((T (*)(AssetToBundleManifest*, int16_t))(Il2CppBase() + 0x35CB988))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(AssetToBundleManifest*))(Il2CppBase() + 0x35CBA74))(this);
	}

};

}
