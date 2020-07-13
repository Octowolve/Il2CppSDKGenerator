#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpMatchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpMatchController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_safeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_playlistBubble() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& RankMatchTimer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_CloseSpvpPlaylistTimer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_OpenSpvpPlaylistTimer() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsTimer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& m_Tip() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsData() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_RoomSettingChangeReason() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_RankDS() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsDS() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_LastSeasonState() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& b_LastLadderTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_TrainPlaylistInfo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetFtueGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HomeMultiController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataStoreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAnimatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentRoomBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSeasonStatistic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomBtnReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingStatisfyLadderLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUICollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSeasonStisticClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnRoomCreateClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnChangeMatchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnChangeTrainClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnChangeLadderClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnLadderLockClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnLadderTimeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnUpdateReddotDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnUpdateDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnOpenPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBattlePassEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAvatarViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBpTaskTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEventRewardTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityRewardNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadWithFriendsInfoLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMatchServiceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnElectronicSportsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetElectronicSports() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshElectronicSportsCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshElectronicSports() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotityMatchMapNotDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadDialogConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurrentController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlaylistListAndChangeSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLadderPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLadderSelectChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}

	template <typename T = int32_t> T T_GetFtueGame() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210B60C))(this);
	}
	template <typename T = void> T T_MP1_0_Init() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210B708))(this);
	}
	template <typename T = void> T T_HomeMultiController_Go() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210BA8C))(this);
	}
	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210BD7C))(this);
	}
	template <typename T = uintptr_t> T get_RankDS() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210BE2C))(this);
	}
	template <typename T = uintptr_t> T get_ElectronicSportsDS() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210BEDC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210BF8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210C030))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210C3EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210CE4C))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210D444))(this);
	}
	template <typename T = void> T HandleDataStoreUpdate(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x210D4E4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210E04C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210E91C))(this);
	}
	template <typename T = Il2CppString*> T GetOpenAnimatorName() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210F984))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210FA3C))(this);
	}
	template <typename T = uintptr_t> T GetCurrentRoomBtnState() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210FC24))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2110904))(this);
	}
	template <typename T = void> T RefreshSeasonStatistic() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210D61C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2110C48))(this);
	}
	template <typename T = void> T RefreshRankView() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210CD04))(this);
	}
	template <typename T = void> T CheckButtonState(uintptr_t seasonState, bool bLadderTime, int32_t serverTime) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x2110ED4))(this, seasonState, bLadderTime, serverTime);
	}
	template <typename T = void> T RefreshBubble() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2111D94))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211206C))(this);
	}
	template <typename T = void> T UpdateDeviceWarning() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2111B14))(this);
	}
	template <typename T = void> T ResetDeviceWarning() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2110D38))(this);
	}
	template <typename T = void> T _OnBtnLoadoutClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2112240))(this);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2112474))(this);
	}
	template <typename T = bool> T IsRoomSettingStatisfyLadderLimit(uintptr_t targetList, uintptr_t tip) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2112DD8))(this, targetList, tip);
	}
	template <typename T = void> T CancelUICollider() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2112EC0))(this);
	}
	template <typename T = void> T OnBtnSeasonStisticClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2112F84))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2113484))(this);
	}
	template <typename T = void> T _OnBtnRoomCreateClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2113C54))(this);
	}
	template <typename T = void> T CreateRoom(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, int32_t))(Il2CppBase() + 0x2113F68))(this, result, userContext);
	}
	template <typename T = void> T _OnBtnChangeMatchClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x21142B8))(this);
	}
	template <typename T = void> T _OnBtnChangeTrainClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2114AD8))(this);
	}
	template <typename T = void> T _OnBtnChangeLadderClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2114E3C))(this);
	}
	template <typename T = void> T _OnBtnLadderLockClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x21157B0))(this);
	}
	template <typename T = void> T _OnBtnLadderTimeClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2115A3C))(this);
	}
	template <typename T = void> T _OnUpdateReddotDate(uintptr_t obj) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x2115CA8))(this, obj);
	}
	template <typename T = void> T _OnUpdateDeviceWarning(uintptr_t msg) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x2115D60))(this, msg);
	}
	template <typename T = void> T _OnOpenPlaylist(uintptr_t msg) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x2115E0C))(this, msg);
	}
	template <typename T = void> T UpdateBattlePassEntrance() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210EB24))(this);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2116350))(this);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2116424))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x21164F8))(this, state);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomSpvpMatchController*, bool))(Il2CppBase() + 0x2116634))(this, bPreCreate);
	}
	template <typename T = void> T OnBpTaskTipsBtnClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2116828))(this);
	}
	template <typename T = void> T OnEventRewardTipsBtnClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2116B08))(this);
	}
	template <typename T = void> T GetActivityRewardNum() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210EF2C))(this);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210E6DC))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2116F68))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2117608))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2117BE8))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x210E7F4))(this);
	}
	template <typename T = void> T ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2117E7C))(this);
	}
	template <typename T = void> T HandleRoomMatchServiceChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2117F40))(this);
	}
	template <typename T = void> T HandleRoomMemberChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x21181C8))(this);
	}
	template <typename T = void> T OnBtnElectronicSportsClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2118F44))(this);
	}
	template <typename T = void> T SetElectronicSports() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211926C))(this);
	}
	template <typename T = void> T RefreshElectronicSportsCountDown() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x21198C8))(this);
	}
	template <typename T = void> T RefreshElectronicSports() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2119BD4))(this);
	}
	template <typename T = void> T OnNotityMatchMapNotDownload(uintptr_t msg) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x2119EA8))(this, msg);
	}
	template <typename T = void> T OnDownloadDialogConfirm(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, int32_t))(Il2CppBase() + 0x211A1EC))(this, result, userContext);
	}
	template <typename T = bool> T CheckCurrentController() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2119D18))(this);
	}
	template <typename T = void> T CheckPlaylistListAndChangeSetting(uintptr_t Msg) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x21137EC))(this, Msg);
	}
	template <typename T = void> T AddLadderPlaylist(int32_t unlockLadderLevel) {
		return ((T (*)(RoomSpvpMatchController*, int32_t))(Il2CppBase() + 0x210F154))(this, unlockLadderLevel);
	}
	template <typename T = bool> T CheckLadderSelectChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x2112998))(this);
	}
	template <typename T = void> static T T_MP1_0_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x211A9B4))(0, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x211AA54))(this, tutorialType, info);
	}
	template <typename T = bool> static T CheckButtonStatem__2(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x211ABA4))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ABE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ABE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ABEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ABF0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ABF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleDataStoreUpdate(uintptr_t P0, Il2CppString* P1, int32_t P2) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x211AC98))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACBC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetOpenAnimatorName() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshBubble() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomBtnReddot() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlayClick() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACE8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetEAvatarViewType() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ACF0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLadderType() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211AD94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomSpvpMatchController*, uintptr_t))(Il2CppBase() + 0x211AD9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomSpvpMatchController*, bool))(Il2CppBase() + 0x211ADA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ADA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomMatchServiceChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ADB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomMemberChange() {
		return ((T (*)(RoomSpvpMatchController*))(Il2CppBase() + 0x211ADB8))(this);
	}

};

}
