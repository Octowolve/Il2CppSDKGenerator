#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetModuleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetModuleManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_levelName2Module() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_id2DefaultID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_dynamicAssetIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AssetBundleModuleLocation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_dynamicVideoDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_dynamicAudioSet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<Il2CppString*>*>*> T& m_dynamicAudioFileListDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_AssetModuleStoreData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_mapModuleStoreData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_audioModuleStoreData() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_AssetIDModuleData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_videoModuleStoreData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_videoAndAudioDynamicLocation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_AttachIDData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_AttachIDStoreData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleModuleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAssetBundleModuleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModuleDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLevelModuleDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioDynamicLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelName2ModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultEAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDynamicVideoDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDynamicAudioDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDynamicAudioFileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleForceDownloadAssetBundleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachedAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAssetModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeMapModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAudioModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAssetIDModuleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeVideoModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideoAndAudioDynamicLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAttachIDData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAttachIDStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetAssetBundleModuleLocation() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B99664))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B99734))(this);
	}
	template <typename T = void> T ReloadConfig() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B9AE94))(this);
	}
	template <typename T = void> T InitAssetBundleModuleLocation() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B99C0C))(this);
	}
	template <typename T = void> T InitModuleDic() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B99CE8))(this);
	}
	template <typename T = void> T InitLevelModuleDic() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B9A008))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetAudioDynamicLocation() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B9B02C))(this);
	}
	template <typename T = Il2CppString*> T LevelName2ModuleName(Il2CppString* levelName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*))(Il2CppBase() + 0x2B9B10C))(this, levelName);
	}
	template <typename T = bool> T GetDefaultEAssetID(int32_t assetID, uintptr_t* defaultId) {
		return ((T (*)(AssetModuleManager*, int32_t, uintptr_t*))(Il2CppBase() + 0x2B93C28))(this, assetID, defaultId);
	}
	template <typename T = bool> T IsDynamicAssetId(int32_t assetID) {
		return ((T (*)(AssetModuleManager*, int32_t))(Il2CppBase() + 0x2B93B18))(this, assetID);
	}
	template <typename T = void> T InitDynamicVideoDic() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B9A400))(this);
	}
	template <typename T = bool> T IsDynamicVideo(Il2CppString* videoName, uintptr_t* dynamicVideoName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2B9B240))(this, videoName, dynamicVideoName);
	}
	template <typename T = void> T InitDynamicAudioDic() {
		return ((T (*)(AssetModuleManager*))(Il2CppBase() + 0x2B9A780))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetDynamicAudioFileList(Il2CppString* audioName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*))(Il2CppBase() + 0x2B9B368))(this, audioName);
	}
	template <typename T = bool> T IsDynamicAudio(Il2CppString* audioName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*))(Il2CppBase() + 0x2B9B49C))(this, audioName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetModuleForceDownloadAssetBundleList(Il2CppString* moduleName, uintptr_t resQuality) {
		return ((T (*)(AssetModuleManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2B9B5AC))(this, moduleName, resQuality);
	}
	template <typename T = bool> T IsMultiModule(Il2CppString* moduleName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*))(Il2CppBase() + 0x2B9B74C))(this, moduleName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAtomicModuleList(Il2CppString* multiModuleName) {
		return ((T (*)(AssetModuleManager*, Il2CppString*))(Il2CppBase() + 0x2B9B8BC))(this, multiModuleName);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAttachedAssetList(int32_t assetId) {
		return ((T (*)(AssetModuleManager*, int32_t))(Il2CppBase() + 0x2B9BBE0))(this, assetId);
	}
	template <typename T = uintptr_t> static T InitializeAssetModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9BD1C))(0);
	}
	template <typename T = uintptr_t> static T InitializeMapModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B998CC))(0);
	}
	template <typename T = uintptr_t> static T InitializeAudioModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9BDEC))(0);
	}
	template <typename T = uintptr_t> static T InitializeAssetIDModuleData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9999C))(0);
	}
	template <typename T = uintptr_t> static T InitializeVideoModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9BEBC))(0);
	}
	template <typename T = uintptr_t> static T InitVideoAndAudioDynamicLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B99A6C))(0);
	}
	template <typename T = uintptr_t> static T InitializeAttachIDData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B99B3C))(0);
	}
	template <typename T = uintptr_t> static T InitializeAttachIDStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9BF8C))(0);
	}

};

}
