#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetListModuleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetListModuleInfo"));
	}

	template <typename T = uint32_t> T& _taskId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int32_t>*> T& _assetList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& assetListDownloadCBList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneModuleFileListWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecResultCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T GetOneModuleFileListWrapper(Il2CppString* oneModuleName, uintptr_t moduleResQuality) {
		return ((T (*)(AssetListModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3318C34))(this, oneModuleName, moduleResQuality);
	}
	template <typename T = bool> T IsMultiModule() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3318FDC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAtomicModuleList() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x331907C))(this);
	}
	template <typename T = void> T ExecResultCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x331911C))(this);
	}
	template <typename T = void> T ExecProgressCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x331939C))(this);
	}
	template <typename T = void> T ClearAllCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3319598))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetOneModuleFileListWrapper(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(AssetListModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x331966C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMultiModule() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3319670))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetAtomicModuleList() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3319674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecResultCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3319678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecProgressCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x331967C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearAllCallBack() {
		return ((T (*)(AssetListModuleInfo*))(Il2CppBase() + 0x3319680))(this);
	}

};

}
