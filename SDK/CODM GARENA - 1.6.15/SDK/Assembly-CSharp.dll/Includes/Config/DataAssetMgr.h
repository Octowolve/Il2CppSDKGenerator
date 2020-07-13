#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataAssetMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataAssetMgr"));
	}

	template <typename T = Il2CppString*> static T& AssetStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetStoreUIAtlasConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WeaponSocketConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UIAtlasSpriteListDataName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BundleMappingName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleLocationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleManifestDataName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetToBundleManifestDataName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetModuleStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapModuleStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AudioModuleStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VideoModuleStoreConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetIDModuleDataConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleModuleLocationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VideoAndAudioDynamicLocationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AttachIDDataConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AttachStoreDataConfigName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseDataAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetStoreUIAtlasData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMapStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponSocketConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadUIAtlasSpriteListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBundleMapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetBundleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetBundleManifestData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetToBundleManifestData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMapModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVideoModuleStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetIDModuleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetBundleModuleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVideoAndAudioDynamicLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAttachIDData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAttachIDStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = bool> static T UseDataAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D308))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D3E4))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetStoreUIAtlasData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D4AC))(0);
	}
	template <typename T = uintptr_t> static T LoadMapStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D574))(0);
	}
	template <typename T = uintptr_t> static T LoadWeaponSocketConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D63C))(0);
	}
	template <typename T = uintptr_t> static T LoadUIAtlasSpriteListData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D704))(0);
	}
	template <typename T = uintptr_t> static T LoadBundleMapping() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D7CC))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetBundleLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D894))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetBundleManifestData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463D95C))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetToBundleManifestData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DA24))(0);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* fileNameNoExt) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3349038))(0, fileNameNoExt);
	}
	template <typename T = uintptr_t> static T LoadAssetModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DAEC))(0);
	}
	template <typename T = uintptr_t> static T LoadMapModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DBB4))(0);
	}
	template <typename T = uintptr_t> static T LoadAudioModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DC7C))(0);
	}
	template <typename T = uintptr_t> static T LoadVideoModuleStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DD44))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetIDModuleData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DE0C))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetBundleModuleLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DED4))(0);
	}
	template <typename T = uintptr_t> static T LoadVideoAndAudioDynamicLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x463DF9C))(0);
	}
	template <typename T = uintptr_t> static T LoadAttachIDData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463E064))(0);
	}
	template <typename T = uintptr_t> static T LoadAttachIDStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x463E12C))(0);
	}

};

}
