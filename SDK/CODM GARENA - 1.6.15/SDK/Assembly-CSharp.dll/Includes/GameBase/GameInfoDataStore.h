#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameInfoDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameInfoDataStore"));
	}

	template <typename T = int32_t> T& m_ActualMapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_DSEntryMapID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ServerNotifyPreloadMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& NeedReconnectToDS() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IsReconnectForbidVoiceTip() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = Il2CppString*> T& EncryptKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsDSConnected() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsAssetPreloaded() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& m_CurrenGameType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_LastPkType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MapId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DSInfoList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsHalfwayJoinLadderMatch() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsHalfwayJoinMatch() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ModuleOpenFlag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_SkyPlatformAssetId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_SkyPlatformPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_SkyPlatformAngleY() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DsIpGroupList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_DirectConnectDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_Ip() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint16_t> T& m_Port() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint64_t> T& m_RoomGuid() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_GroupRoomId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& m_GroupRoomBusId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& m_ISP() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& m_RoundTripTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PPMode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_MatchServiceModule() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GuarderPlayers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TraitorPlayers() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& PlayerBagInfoDic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModuleOpenFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleOpenFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkyPlatformInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDspIpList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillDsPingResultToProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPlayerCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDistinguishCampMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRoomMatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomMatchJoinNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatchPlayerInfoExisted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordReconnectInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearReconnectInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = int32_t> T get_ActualMapId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x31FC1DC))(this);
	}
	template <typename T = void> T set_ActualMapId(int32_t value) {
		return ((T (*)(GameInfoDataStore*, int32_t))(Il2CppBase() + 0x321CE48))(this, value);
	}
	template <typename T = int32_t> T get_DSEntryMapID() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321CE50))(this);
	}
	template <typename T = void> T set_DSEntryMapID(int32_t value) {
		return ((T (*)(GameInfoDataStore*, int32_t))(Il2CppBase() + 0x321CE58))(this, value);
	}
	template <typename T = bool> T get_NeedPreloadMap() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321CE60))(this);
	}
	template <typename T = uintptr_t> T get_CurrentGameType() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321CF1C))(this);
	}
	template <typename T = void> T set_CurrentGameType(uintptr_t value) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x321CF24))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D0A0))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(GameInfoDataStore*, int32_t))(Il2CppBase() + 0x321D0E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DSInfoList() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D180))(this);
	}
	template <typename T = void> T set_DSInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x321D188))(this, value);
	}
	template <typename T = bool> T get_IsHalfwayJoinLadderMatch() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D190))(this);
	}
	template <typename T = void> T set_IsHalfwayJoinLadderMatch(bool value) {
		return ((T (*)(GameInfoDataStore*, bool))(Il2CppBase() + 0x321D198))(this, value);
	}
	template <typename T = bool> T get_IsHalfwayJoinMatch() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D1A0))(this);
	}
	template <typename T = void> T set_IsHalfwayJoinMatch(bool value) {
		return ((T (*)(GameInfoDataStore*, bool))(Il2CppBase() + 0x321D1A8))(this, value);
	}
	template <typename T = void> T SetModuleOpenFlag(Il2CppArray<uintptr_t>* flagArr) {
		return ((T (*)(GameInfoDataStore*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x321D1B0))(this, flagArr);
	}
	template <typename T = int32_t> T GetModuleOpenFlag(uintptr_t flagType) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x321D308))(this, flagType);
	}
	template <typename T = int32_t> T get_SkyPlatformAssetId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D3E4))(this);
	}
	template <typename T = Il2CppVector3> T get_SkyPlatformPos() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D3EC))(this);
	}
	template <typename T = float> T get_SkyPlatformAngleY() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D400))(this);
	}
	template <typename T = void> T SetSkyPlatformInfo(uint32_t id, uint32_t angleY, uintptr_t pos) {
		return ((T (*)(GameInfoDataStore*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x321D408))(this, id, angleY, pos);
	}
	template <typename T = void> T UpdateDspIpList(Il2CppList<uintptr_t>* ipList) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x321D550))(this, ipList);
	}
	template <typename T = void> T FillDsPingResultToProtocol(Il2CppList<uintptr_t>* ping_info) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x321D80C))(this, ping_info);
	}
	template <typename T = bool> T get_DirectConnectDS() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D8FC))(this);
	}
	template <typename T = void> T set_DirectConnectDS(bool value) {
		return ((T (*)(GameInfoDataStore*, bool))(Il2CppBase() + 0x321D904))(this, value);
	}
	template <typename T = Il2CppString*> T get_Ip() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x31FC1E4))(this);
	}
	template <typename T = void> T set_Ip(Il2CppString* value) {
		return ((T (*)(GameInfoDataStore*, Il2CppString*))(Il2CppBase() + 0x321D90C))(this, value);
	}
	template <typename T = uint16_t> T get_Port() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x31FC1EC))(this);
	}
	template <typename T = void> T set_Port(uint16_t value) {
		return ((T (*)(GameInfoDataStore*, uint16_t))(Il2CppBase() + 0x321D914))(this, value);
	}
	template <typename T = uint32_t> T get_RoomId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x31FC1D4))(this);
	}
	template <typename T = void> T set_RoomId(uint32_t value) {
		return ((T (*)(GameInfoDataStore*, uint32_t))(Il2CppBase() + 0x31FBF0C))(this, value);
	}
	template <typename T = uint64_t> T get_RoomGuid() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D91C))(this);
	}
	template <typename T = void> T set_RoomGuid(uint64_t value) {
		return ((T (*)(GameInfoDataStore*, uint64_t))(Il2CppBase() + 0x321D924))(this, value);
	}
	template <typename T = uint32_t> T get_GroupRoomId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D934))(this);
	}
	template <typename T = void> T set_GroupRoomId(uint32_t value) {
		return ((T (*)(GameInfoDataStore*, uint32_t))(Il2CppBase() + 0x31FBF14))(this, value);
	}
	template <typename T = uint32_t> T get_GroupRoomBusId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D93C))(this);
	}
	template <typename T = void> T set_GroupRoomBusId(uint32_t value) {
		return ((T (*)(GameInfoDataStore*, uint32_t))(Il2CppBase() + 0x31FBF1C))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerId() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x31FC1F4))(this);
	}
	template <typename T = void> T set_PlayerId(uint64_t value) {
		return ((T (*)(GameInfoDataStore*, uint64_t))(Il2CppBase() + 0x321D944))(this, value);
	}
	template <typename T = uint32_t> T get_ISP() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D954))(this);
	}
	template <typename T = void> T set_ISP(uint32_t value) {
		return ((T (*)(GameInfoDataStore*, uint32_t))(Il2CppBase() + 0x321D95C))(this, value);
	}
	template <typename T = bool> T get_IsLadder() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D964))(this);
	}
	template <typename T = int64_t> T get_RoundTripTime() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D984))(this);
	}
	template <typename T = void> T set_RoundTripTime(int64_t value) {
		return ((T (*)(GameInfoDataStore*, int64_t))(Il2CppBase() + 0x321D98C))(this, value);
	}
	template <typename T = uintptr_t> T get_PPMode() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D99C))(this);
	}
	template <typename T = void> T set_PPMode(uintptr_t value) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x321D9A4))(this, value);
	}
	template <typename T = int32_t> T get_MatchServiceModule() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D9AC))(this);
	}
	template <typename T = void> T set_MatchServiceModule(int32_t value) {
		return ((T (*)(GameInfoDataStore*, int32_t))(Il2CppBase() + 0x321D9B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GuarderPlayers() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D9BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TraitorPlayers() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321D9C4))(this);
	}
	template <typename T = void> T AddStreakInfo(uintptr_t content) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x321D9CC))(this, content);
	}
	template <typename T = void> T AddBagInfo(uint32_t bagPlayerID, uintptr_t bagInfo) {
		return ((T (*)(GameInfoDataStore*, uint32_t, uintptr_t))(Il2CppBase() + 0x321E2E0))(this, bagPlayerID, bagInfo);
	}
	template <typename T = void> T PreloadAsset(uint32_t localPlayerID, uintptr_t localCamp) {
		return ((T (*)(GameInfoDataStore*, uint32_t, uintptr_t))(Il2CppBase() + 0x321E4F4))(this, localPlayerID, localCamp);
	}
	template <typename T = void> T GetPreloadAssets(Il2CppList<uintptr_t>* players, Il2CppList<int32_t>* weapList, Il2CppList<int32_t>* avatarList) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*, Il2CppList<int32_t>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x321F37C))(this, players, weapList, avatarList);
	}
	template <typename T = void> T SetPlayers(Il2CppList<uintptr_t>* players, bool preDownloadAvatarImage) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x321F728))(this, players, preDownloadAvatarImage);
	}
	template <typename T = uintptr_t> T GetLocalPlayerCamp() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x321FE38))(this);
	}
	template <typename T = bool> T IsDistinguishCampMode() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x32201C0))(this);
	}
	template <typename T = int32_t> T AddRoomMatchJoin(uintptr_t matchPlayerInfo) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x322026C))(this, matchPlayerInfo);
	}
	template <typename T = void> T RoomMatchJoinNotify(uintptr_t NewMatchPlayerInfo) {
		return ((T (*)(GameInfoDataStore*, uintptr_t))(Il2CppBase() + 0x3220700))(this, NewMatchPlayerInfo);
	}
	template <typename T = bool> T IsMatchPlayerInfoExisted(Il2CppList<uintptr_t>* inPlayersInfoList, uintptr_t inLoginMatchPlayerInfo) {
		return ((T (*)(GameInfoDataStore*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x321FCB4))(this, inPlayersInfoList, inLoginMatchPlayerInfo);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x3220974))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x3220A80))(this);
	}
	template <typename T = void> T RecordReconnectInfo(uint64_t playerid, Il2CppString* cryptKey, Il2CppString* domain, uint32_t dsIP, uint32_t dsPort, uint32_t mapID, uint32_t roomID, uint64_t roomGuid, uint32_t groupRoomID, uint32_t groupRoomBusID) {
		return ((T (*)(GameInfoDataStore*, uint64_t, Il2CppString*, Il2CppString*, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t, uint32_t))(Il2CppBase() + 0x3220B40))(this, playerid, cryptKey, domain, dsIP, dsPort, mapID, roomID, roomGuid, groupRoomID, groupRoomBusID);
	}
	template <typename T = void> T ClearReconnectInfo() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x3220D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x3220DDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GameInfoDataStore*))(Il2CppBase() + 0x3220DE4))(this);
	}

};

}
