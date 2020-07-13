#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomDataPersistent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomDataPersistent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseZombieMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& curSelectMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& Key_SpvpPlaylistDetailIsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& Key_FeatureModeIsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseMapId_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseTeamType_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePPMode_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseMapId_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Key_LastChooseTeamMatchType_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePPMode_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& Key_BubbleShowNum_Br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePlaylistInfo_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePlaylistInfo_SpvpMatch_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> T& Key_LastChooseType_SpvpMatch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePlaylistInfo_SpvpPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& Key_BubbleShowNum_Spvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& Key_LastChoosePlaylistInfo_SpvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& Key_SpvpPlaylistMultipleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppString*> static T& Key_SpvpPlaylistMultipleInstruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& Key_IgnorePlayerNumCheckThisRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& Key_LastSaveDropsAvailableNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& Key_LastSaveDropsAvailableInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseInstanceId_ZombieMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseInstanceId_ZombieMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseInstanceId_ZombieMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMode_MapKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseMapPVP_Match_WithMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLastChooseMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSpvpPlaylistDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSpvpPlaylistDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFeatureModeIsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFeatureModeIsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseMapId_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseMapId_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseMapId_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseTeamType_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseTeamType_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseTeamType_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePPMode_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePPMode_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChoosePPMode_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseMapId_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseMapId_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseMapId_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseTeamMatchType_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseTeamMatchType_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChooseTeamMatchType_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePPMode_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePPMode_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChoosePPMode_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBubbleShowNum_Br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveBubbleShowNum_Br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBubbleShowNum_Br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePlaylistInfo_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePlaylistInfo_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChoosePlaylistInfo_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePlaylistInfo_SpvpMatch_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePlaylistInfo_SpvpMatch_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChooseType_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChooseType_SpvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePlaylistInfo_SpvpPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePlaylistInfo_SpvpPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChoosePlaylistInfo_SpvpPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBubbleShowNum_Spvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveBubbleShowNum_Spvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBubbleShowNum_Spvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastChoosePlaylistInfo_SpvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastChoosePlaylsitInfo_SpvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastChoosePlaylistInfo_SpvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSpvpPlaylistMultipleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSpvpPlaylistMultipleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSpvpPlaylistMultiInstructShown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSpvpPlaylistMultiInstructShown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveIgnorePlayerNumCheckThisRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentRoomIgnorePlayerNumCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastSaveDropsAvailableNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastSaveDropsAvailableNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLastSaveDropsAvailableNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastDropsAvailableInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastSaveDropsAvailableInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}

	template <typename T = bool> T HasLastChooseInstanceId_ZombieMatch() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D13738))(this);
	}
	template <typename T = void> T SaveLastChooseInstanceId_ZombieMatch(int32_t instanceId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D138B8))(this, instanceId);
	}
	template <typename T = int32_t> T GetLastChooseInstanceId_ZombieMatch() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D13A58))(this);
	}
	template <typename T = Il2CppString*> T GetMode_MapKey(uintptr_t mode) {
		return ((T (*)(RoomDataPersistent*, uintptr_t))(Il2CppBase() + 0x2D13BDC))(this, mode);
	}
	template <typename T = void> T SaveLastChooseMapPVP_Match_WithMode(uintptr_t mode, int32_t MapId) {
		return ((T (*)(RoomDataPersistent*, uintptr_t, int32_t))(Il2CppBase() + 0x2D13D70))(this, mode, MapId);
	}
	template <typename T = uintptr_t> T GetLastChooseMode() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D13EE0))(this);
	}
	template <typename T = void> T ChangeLastChooseMode(uintptr_t mode) {
		return ((T (*)(RoomDataPersistent*, uintptr_t))(Il2CppBase() + 0x2CEC29C))(this, mode);
	}
	template <typename T = void> T SaveLastChooseMode() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2CEC374))(this);
	}
	template <typename T = bool> T HasSpvpPlaylistDetailClick(int32_t playlistType, int32_t playlistId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2CDE770))(this, playlistType, playlistId);
	}
	template <typename T = void> T SaveSpvpPlaylistDetailClick(int32_t playlistType, int32_t playlistId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2CDE198))(this, playlistType, playlistId);
	}
	template <typename T = bool> T HasFeatureModeIsClick(uint32_t modeCategory, uint32_t playlistId) {
		return ((T (*)(RoomDataPersistent*, uint32_t, uint32_t))(Il2CppBase() + 0x2CE859C))(this, modeCategory, playlistId);
	}
	template <typename T = void> T SaveFeatureModeIsClick(uint32_t modeCategory, uint32_t playlistId) {
		return ((T (*)(RoomDataPersistent*, uint32_t, uint32_t))(Il2CppBase() + 0x2CE87C0))(this, modeCategory, playlistId);
	}
	template <typename T = void> T SaveLastChooseMapId_BrMatchLadder(int32_t playlistId, int32_t mapId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D14064))(this, playlistId, mapId);
	}
	template <typename T = Il2CppString*> T GetLastChooseMapId_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D142A8))(this);
	}
	template <typename T = bool> T HasLastChooseMapId_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D14428))(this);
	}
	template <typename T = void> T SaveLastChooseTeamType_BrMatchLadder(int32_t teamType) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D145A8))(this, teamType);
	}
	template <typename T = int32_t> T GetLastChooseTeamType_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D14748))(this);
	}
	template <typename T = bool> T HasLastChooseTeamType_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D148CC))(this);
	}
	template <typename T = void> T SaveLastChoosePPMode_BrMatchLadder(int32_t ppMode) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D14A4C))(this, ppMode);
	}
	template <typename T = int32_t> T GetLastChoosePPMode_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D14BEC))(this);
	}
	template <typename T = bool> T HasLastChoosePPMode_BrMatchLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D14D70))(this);
	}
	template <typename T = void> T SaveLastChooseMapId_BrPrivate(int32_t playlistId, int32_t mapId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D14EF0))(this, playlistId, mapId);
	}
	template <typename T = Il2CppString*> T GetLastChooseMapId_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D15134))(this);
	}
	template <typename T = bool> T HasLastChooseMapId_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D152B4))(this);
	}
	template <typename T = void> T SaveLastChooseTeamMatchType_BrPrivate(int32_t teamMatchType) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D15434))(this, teamMatchType);
	}
	template <typename T = int32_t> T GetLastChooseTeamMatchType_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D155D4))(this);
	}
	template <typename T = bool> T HasLastChooseTeamMatchType_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D15758))(this);
	}
	template <typename T = void> T SaveLastChoosePPMode_BrPrivate(int32_t ppMode) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D158D8))(this, ppMode);
	}
	template <typename T = int32_t> T GetLastChoosePPMode_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D15A78))(this);
	}
	template <typename T = bool> T HasLastChoosePPMode_BrPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D15BFC))(this);
	}
	template <typename T = bool> T HasBubbleShowNum_Br(int32_t mapId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D15D7C))(this, mapId);
	}
	template <typename T = void> T SaveBubbleShowNum_Br(int32_t mapId, int32_t num) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D15F7C))(this, mapId, num);
	}
	template <typename T = int32_t> T GetBubbleShowNum_Br(int32_t mapId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D16198))(this, mapId);
	}
	template <typename T = void> T SaveLastChoosePlaylistInfo_SpvpMatch(int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomDataPersistent*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D163A0))(this, playlistId, mapIds);
	}
	template <typename T = bool> T GetLastChoosePlaylistInfo_SpvpMatch(uintptr_t playlistId, uintptr_t mapIds) {
		return ((T (*)(RoomDataPersistent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D16814))(this, playlistId, mapIds);
	}
	template <typename T = bool> T HasLastChoosePlaylistInfo_SpvpMatch() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D16BE8))(this);
	}
	template <typename T = void> T SaveLastChoosePlaylistInfo_SpvpMatch_Multiple(Il2CppList<uint32_t>* PlaylistList, bool bJoinMatch) {
		return ((T (*)(RoomDataPersistent*, Il2CppList<uint32_t>*, bool))(Il2CppBase() + 0x2D16D68))(this, PlaylistList, bJoinMatch);
	}
	template <typename T = bool> T GetLastChoosePlaylistInfo_SpvpMatch_Multiple(uintptr_t PlaylistList) {
		return ((T (*)(RoomDataPersistent*, uintptr_t))(Il2CppBase() + 0x2D1703C))(this, PlaylistList);
	}
	template <typename T = void> T SaveLastChooseType_SpvpMatch(uintptr_t chooseType) {
		return ((T (*)(RoomDataPersistent*, uintptr_t))(Il2CppBase() + 0x2D16664))(this, chooseType);
	}
	template <typename T = bool> T GetLastChooseType_SpvpMatch(uintptr_t chooseType) {
		return ((T (*)(RoomDataPersistent*, uintptr_t))(Il2CppBase() + 0x2D173E0))(this, chooseType);
	}
	template <typename T = void> T SaveLastChoosePlaylistInfo_SpvpPrivate(int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomDataPersistent*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D17590))(this, playlistId, mapIds);
	}
	template <typename T = bool> T GetLastChoosePlaylistInfo_SpvpPrivate(uintptr_t playlistId, uintptr_t mapIds) {
		return ((T (*)(RoomDataPersistent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D17840))(this, playlistId, mapIds);
	}
	template <typename T = bool> T HasLastChoosePlaylistInfo_SpvpPrivate() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D17C14))(this);
	}
	template <typename T = bool> T HasBubbleShowNum_Spvp(int32_t matchType, int32_t spvpPlaylistId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D17D94))(this, matchType, spvpPlaylistId);
	}
	template <typename T = void> T SaveBubbleShowNum_Spvp(int32_t matchType, int32_t spvpPlaylistId, int32_t num) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2D17FB8))(this, matchType, spvpPlaylistId, num);
	}
	template <typename T = int32_t> T GetBubbleShowNum_Spvp(int32_t matchType, int32_t spvpPlaylsitId) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D181F4))(this, matchType, spvpPlaylsitId);
	}
	template <typename T = void> T SaveLastChoosePlaylistInfo_SpvpLadder(int32_t modeId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D18420))(this, modeId);
	}
	template <typename T = bool> T HasLastChoosePlaylsitInfo_SpvpLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D185C0))(this);
	}
	template <typename T = int32_t> T GetLastChoosePlaylistInfo_SpvpLadder() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D18740))(this);
	}
	template <typename T = bool> T HasSpvpPlaylistMultipleClick() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D188C4))(this);
	}
	template <typename T = void> T SaveSpvpPlaylistMultipleClick() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D18A48))(this);
	}
	template <typename T = bool> T HasSpvpPlaylistMultiInstructShown() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D18BE0))(this);
	}
	template <typename T = void> T SaveSpvpPlaylistMultiInstructShown() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D18D64))(this);
	}
	template <typename T = void> T SaveIgnorePlayerNumCheckThisRoom(uint32_t roomID) {
		return ((T (*)(RoomDataPersistent*, uint32_t))(Il2CppBase() + 0x2D18EFC))(this, roomID);
	}
	template <typename T = bool> T IsCurrentRoomIgnorePlayerNumCheck(uint32_t roomID) {
		return ((T (*)(RoomDataPersistent*, uint32_t))(Il2CppBase() + 0x2D190B0))(this, roomID);
	}
	template <typename T = void> T SaveLastSaveDropsAvailableNum(int32_t instanceId, int32_t num) {
		return ((T (*)(RoomDataPersistent*, int32_t, int32_t))(Il2CppBase() + 0x2D192BC))(this, instanceId, num);
	}
	template <typename T = int32_t> T GetLastSaveDropsAvailableNum(int32_t instanceId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D194F4))(this, instanceId);
	}
	template <typename T = bool> T HasLastSaveDropsAvailableNum(int32_t instanceId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D1971C))(this, instanceId);
	}
	template <typename T = void> T SaveLastDropsAvailableInstanceId(int32_t instanceId) {
		return ((T (*)(RoomDataPersistent*, int32_t))(Il2CppBase() + 0x2D1993C))(this, instanceId);
	}
	template <typename T = int32_t> T GetLastSaveDropsAvailableInstanceId() {
		return ((T (*)(RoomDataPersistent*))(Il2CppBase() + 0x2D19ADC))(this);
	}

};

}
