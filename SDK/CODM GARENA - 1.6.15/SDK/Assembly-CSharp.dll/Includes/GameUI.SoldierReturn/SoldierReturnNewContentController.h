#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnNewContentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnNewContentController"));
	}

	template <typename T = bool> T& _isOpened() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _selectIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _preTextureDownloadURL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _infoConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _infoDB() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _rewardListController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _bookmarkListController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _configData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bookmarkData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBookmarkItemClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftNavgationBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightNavgationBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInfoBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyClosePlaylistDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adaptation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBookmark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTextureDownLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBookmarkSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewContentDBInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameUIUtilSwitchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaylistOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CA9F1C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CA9FC0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAA198))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAA4B8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAA7D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAAAB8))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3CAAD18))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CAAEB4))(this, list, userContext);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CAAF68))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnBookmarkItemClicked(int32_t index) {
		return ((T (*)(SoldierReturnNewContentController*, int32_t))(Il2CppBase() + 0x3CAAE04))(this, index);
	}
	template <typename T = void> T OnLeftNavgationBtnClicked() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAB338))(this);
	}
	template <typename T = void> T OnRightNavgationBtnClicked() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAB3E4))(this);
	}
	template <typename T = void> T OnInfoBtnClicked() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAB490))(this);
	}
	template <typename T = void> T OnClaimBtnClicked() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAB770))(this);
	}
	template <typename T = void> T OnNotifyClosePlaylistDetailView(uintptr_t msg) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t))(Il2CppBase() + 0x3CABE54))(this, msg);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAA0D4))(this);
	}
	template <typename T = void> T Adaptation() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CABFB8))(this);
	}
	template <typename T = void> T InitReward() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAC2A8))(this);
	}
	template <typename T = void> T InitBookmark() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAC4C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CACB9C))(this);
	}
	template <typename T = void> T ForceResetSelect() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAB034))(this);
	}
	template <typename T = void> T Reset_1(int32_t index) {
		return ((T (*)(SoldierReturnNewContentController*, int32_t))(Il2CppBase() + 0x3CAB0E4))(this, index);
	}
	template <typename T = void> T Reset_2(uintptr_t config, uintptr_t db) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CAD004))(this, config, db);
	}
	template <typename T = void> T ResetTexture(Il2CppString* cdn, Il2CppString* local) {
		return ((T (*)(SoldierReturnNewContentController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3CAE254))(this, cdn, local);
	}
	template <typename T = void> T DownloadTexture(Il2CppString* url) {
		return ((T (*)(SoldierReturnNewContentController*, Il2CppString*))(Il2CppBase() + 0x3CAA2A0))(this, url);
	}
	template <typename T = void> T CancelDownloadTexture() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAA594))(this);
	}
	template <typename T = void> T OnTextureDownLoad(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(SoldierReturnNewContentController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3CAE488))(this, url, isSuccess, texture);
	}
	template <typename T = bool> T InitData() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAC6DC))(this);
	}
	template <typename T = void> T ResetBookmarkSelected(int32_t index, Il2CppDictionary<int32_t, uintptr_t>* dbInfo) {
		return ((T (*)(SoldierReturnNewContentController*, int32_t, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x3CAD6AC))(this, index, dbInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRewardData(uintptr_t config, uintptr_t db) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CADF38))(this, config, db);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T GetNewContentDBInfo() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CACD9C))(this);
	}
	template <typename T = uintptr_t> T GetGameUIUtilSwitchType(uintptr_t gameType) {
		return ((T (*)(SoldierReturnNewContentController*, uintptr_t))(Il2CppBase() + 0x3CABD9C))(this, gameType);
	}
	template <typename T = bool> T IsPlaylistOpen(int32_t playlistID, int32_t mapID, uintptr_t gameType) {
		return ((T (*)(SoldierReturnNewContentController*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CAE710))(this, playlistID, mapID, gameType);
	}
	template <typename T = Il2CppString*> T GetTitle(int32_t playlistID, Il2CppString* mapID, Il2CppString* locID) {
		return ((T (*)(SoldierReturnNewContentController*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3CADB90))(this, playlistID, mapID, locID);
	}
	template <typename T = int32_t> T get_newContentID() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CABD84))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SoldierReturnNewContentController*))(Il2CppBase() + 0x3CAEA40))(this);
	}

};

}
