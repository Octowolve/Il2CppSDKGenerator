#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenWorldSOCStreamingManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWorldSOCStreamingManager"));
	}

	template <typename T = Il2CppString*> T& resourceBasePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& assetBundleBasePath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CamTrans() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_LastCamPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LastCheckPosTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CurrentActiveTileIDs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ToAddTileIDs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ToRemoveTileIDs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& m_ForceCheckData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsReady() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_WorldInfo() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> static T& m_UseAssetBundleSOCTileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedToCheckData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateSOCData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDepartedSOCTiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNewSOCTiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrytoLoadAndUnLoadOcData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTileOccluders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadTileOccluderCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceOccluderToTmpBufferAsync_AssetBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceOccluderToTmpBufferAsync_ResFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadAllTileOccluders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init(Il2CppString* persistentScenePath) {
		return ((T (*)(OpenWorldSOCStreamingManager*, Il2CppString*))(Il2CppBase() + 0x3EED6E0))(this, persistentScenePath);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EED9F8))(this);
	}
	template <typename T = void> T Tick(uintptr_t cam) {
		return ((T (*)(OpenWorldSOCStreamingManager*, uintptr_t))(Il2CppBase() + 0x3EEDCFC))(this, cam);
	}
	template <typename T = void> T DrawDebug() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEE2B8))(this);
	}
	template <typename T = bool> T NeedToCheckData() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEDED0))(this);
	}
	template <typename T = void> static T ForceUpdateSOCData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EEE380))(0);
	}
	template <typename T = void> T RemoveDepartedSOCTiles() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEE514))(this);
	}
	template <typename T = void> T AddNewSOCTiles() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEE728))(this);
	}
	template <typename T = void> T TrytoLoadAndUnLoadOcData() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEE154))(this);
	}
	template <typename T = void> T RequestTileOccluders(int32_t key) {
		return ((T (*)(OpenWorldSOCStreamingManager*, int32_t))(Il2CppBase() + 0x3EEE8C4))(this, key);
	}
	template <typename T = void> T LoadTileOccluderCallback(int32_t key, uintptr_t sobj) {
		return ((T (*)(OpenWorldSOCStreamingManager*, int32_t, uintptr_t))(Il2CppBase() + 0x3EEEE30))(this, key, sobj);
	}
	template <typename T = void> T ProduceOccluderToTmpBufferAsync_AssetBundle(int32_t key) {
		return ((T (*)(OpenWorldSOCStreamingManager*, int32_t))(Il2CppBase() + 0x3EEEAD4))(this, key);
	}
	template <typename T = uintptr_t> T ProduceOccluderToTmpBufferAsync_ResFolder(int32_t key) {
		return ((T (*)(OpenWorldSOCStreamingManager*, int32_t))(Il2CppBase() + 0x3EEED14))(this, key);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 unusedShift) {
		return ((T (*)(OpenWorldSOCStreamingManager*, Il2CppVector3))(Il2CppBase() + 0x3EEF104))(this, unusedShift);
	}
	template <typename T = void> T ReloadAllTileOccluders() {
		return ((T (*)(OpenWorldSOCStreamingManager*))(Il2CppBase() + 0x3EEF200))(this);
	}

};

}
