#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LitePackageWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LitePackageWrapper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _interfaceRequest() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& curAssetListTaskIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> static T& NoPufferTaskId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextAssetListTaskId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportLitePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportPufferWithVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDolphinAppVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDolphinDataVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDolphinProductID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLitePackDevDaily() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAllModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetListReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicVideoReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAudioReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultEAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioDynamicLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetAttachedAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportDownloadResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uint32_t> T GetNextAssetListTaskId() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493AB04))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493ABAC))(this);
	}
	template <typename T = void> T ReloadConfig() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493AF1C))(this);
	}
	template <typename T = bool> static T SupportLitePackage() {
		return ((T (*)(void *))(Il2CppBase() + 0x493AE2C))(0);
	}
	template <typename T = bool> static T SupportPufferWithVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x493B06C))(0);
	}
	template <typename T = Il2CppString*> static T PufferDolphinAppVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x493B15C))(0);
	}
	template <typename T = Il2CppString*> static T PufferDolphinDataVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x493B2C8))(0);
	}
	template <typename T = uint32_t> static T PufferDolphinProductID() {
		return ((T (*)(void *))(Il2CppBase() + 0x493B400))(0);
	}
	template <typename T = bool> static T IsLitePackDevDaily() {
		return ((T (*)(void *))(Il2CppBase() + 0x493B50C))(0);
	}
	template <typename T = bool> T get_PufferInitSuccess() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493B5FC))(this);
	}
	template <typename T = void> T StartSystem() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493B6C8))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493B80C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LitePackageWrapper*, float))(Il2CppBase() + 0x493BA38))(this, deltaTime);
	}
	template <typename T = void> T StopSystem() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493BC08))(this);
	}
	template <typename T = void> T SetDownloadSpeed(uint64_t speed) {
		return ((T (*)(LitePackageWrapper*, uint64_t))(Il2CppBase() + 0x493BD88))(this, speed);
	}
	template <typename T = void> T StopDownloadAllModule() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493BED4))(this);
	}
	template <typename T = uintptr_t> T CheckModuleState(Il2CppString* moduleName, uintptr_t readyDownSize, uintptr_t totalDownSize, uintptr_t resQuality) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x493C090))(this, moduleName, readyDownSize, totalDownSize, resQuality);
	}
	template <typename T = uintptr_t> T StartDownloadModule(Il2CppString* moduleName, uintptr_t callback, uintptr_t resQuality) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x493C200))(this, moduleName, callback, resQuality);
	}
	template <typename T = void> T StopDownloadModule(Il2CppString* moduleName, uintptr_t callback, uintptr_t resQuality) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x493C3FC))(this, moduleName, callback, resQuality);
	}
	template <typename T = Il2CppString*> T GetLevelModuleName(Il2CppString* levelName) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*))(Il2CppBase() + 0x493C5F0))(this, levelName);
	}
	template <typename T = uintptr_t> T IsAssetListReady(Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(LitePackageWrapper*, Il2CppList<int32_t>*))(Il2CppBase() + 0x493C76C))(this, assetIDs);
	}
	template <typename T = uint32_t> T StartDownloadAssetList(Il2CppList<int32_t>* assetIDs, uintptr_t callback) {
		return ((T (*)(LitePackageWrapper*, Il2CppList<int32_t>*, uintptr_t))(Il2CppBase() + 0x493C9A4))(this, assetIDs, callback);
	}
	template <typename T = void> T StopDownloadAssetList(uint32_t taskId, uintptr_t callback) {
		return ((T (*)(LitePackageWrapper*, uint32_t, uintptr_t))(Il2CppBase() + 0x493CBA4))(this, taskId, callback);
	}
	template <typename T = uintptr_t> T IsAssetReady(int32_t assetID) {
		return ((T (*)(LitePackageWrapper*, int32_t))(Il2CppBase() + 0x493CD8C))(this, assetID);
	}
	template <typename T = uintptr_t> T StartDownloadAsset(int32_t assetID, uintptr_t callback) {
		return ((T (*)(LitePackageWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x493CF3C))(this, assetID, callback);
	}
	template <typename T = void> T StopDownloadAsset(int32_t assetID, uintptr_t callback) {
		return ((T (*)(LitePackageWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x493D12C))(this, assetID, callback);
	}
	template <typename T = bool> T IsDynamicAssetId(int32_t assetID) {
		return ((T (*)(LitePackageWrapper*, int32_t))(Il2CppBase() + 0x493D314))(this, assetID);
	}
	template <typename T = bool> T IsDynamicVideoReady(Il2CppString* videoName, uintptr_t* dynamicVideoName) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x493D440))(this, videoName, dynamicVideoName);
	}
	template <typename T = bool> T IsAudioReady(Il2CppString* audioName) {
		return ((T (*)(LitePackageWrapper*, Il2CppString*))(Il2CppBase() + 0x493D714))(this, audioName);
	}
	template <typename T = bool> T GetDefaultEAssetID(int32_t assetID, uintptr_t* defaultId) {
		return ((T (*)(LitePackageWrapper*, int32_t, uintptr_t*))(Il2CppBase() + 0x493D8B8))(this, assetID, defaultId);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetAudioDynamicLocation() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493DA00))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAssetAttachedAssetList(int32_t assetID) {
		return ((T (*)(LitePackageWrapper*, int32_t))(Il2CppBase() + 0x493DB20))(this, assetID);
	}
	template <typename T = void> T ReportDownloadResult() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493DC4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493DD64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(LitePackageWrapper*))(Il2CppBase() + 0x493DD6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LitePackageWrapper*, float))(Il2CppBase() + 0x493DD74))(this, P0);
	}

};

}
