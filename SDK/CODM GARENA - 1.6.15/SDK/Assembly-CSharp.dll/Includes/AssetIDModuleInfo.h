#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetIDModuleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetIDModuleInfo"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& assetIdModuleDownloadCBList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneAssetFileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneModuleFileListWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecResultCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetPathByAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppList<Il2CppString*>*> static T GetOneAssetFileList(int32_t AssetID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x331784C))(0, AssetID);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetOneModuleFileListWrapper(Il2CppString* oneModuleName, uintptr_t moduleResQuality) {
		return ((T (*)(AssetIDModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3317D68))(this, oneModuleName, moduleResQuality);
	}
	template <typename T = bool> T IsMultiModule() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3317E2C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAtomicModuleList() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3317ECC))(this);
	}
	template <typename T = void> T ExecResultCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3317F6C))(this);
	}
	template <typename T = void> T ExecProgressCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3318180))(this);
	}
	template <typename T = void> T ClearAllCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x331836C))(this);
	}
	template <typename T = Il2CppString*> static T GetAssetPathByAssetId(uintptr_t assetID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3317A14))(0, assetID);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetOneModuleFileListWrapper(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(AssetIDModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x331852C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMultiModule() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x33185F8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetAtomicModuleList() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x33186A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecResultCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3318748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecProgressCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x331895C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearAllCallBack() {
		return ((T (*)(AssetIDModuleInfo*))(Il2CppBase() + 0x3318B5C))(this);
	}

};

}
