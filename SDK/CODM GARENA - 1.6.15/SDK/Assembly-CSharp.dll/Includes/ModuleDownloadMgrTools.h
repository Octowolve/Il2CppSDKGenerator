#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModuleDownloadMgrTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModuleDownloadMgrTools"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleForceDownloadAssetBundleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMetaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSystemSettingActiveResQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleModuleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppList<Il2CppString*>*> static T GetModuleForceDownloadAssetBundleList(Il2CppString* oneModuleName, uintptr_t moduleResQuality) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3319B78))(0, oneModuleName, moduleResQuality);
	}
	template <typename T = bool> static T IsMultiModule(Il2CppString* moduleName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3319C94))(0, moduleName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetAtomicModuleList(Il2CppString* moduleName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3319DA4))(0, moduleName);
	}
	template <typename T = void> static T GetAssetBundleDependencies(Il2CppString* assetPath, uintptr_t depAssetBundleNames, bool onlyDynamic) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x3317C24))(0, assetPath, depAssetBundleNames, onlyDynamic);
	}
	template <typename T = uintptr_t> static T FindMetaData(int32_t assetID, bool suppressError) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x3318440))(0, assetID, suppressError);
	}
	template <typename T = uintptr_t> static T GetSystemSettingActiveResQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x3313C18))(0);
	}
	template <typename T = uintptr_t> static T GetAssetBundleModuleLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x33164A4))(0);
	}

};

}
