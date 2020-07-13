#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapStoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapStoreHelper"));
	}

	template <typename T = Il2CppString*> static T& MapName_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_NoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_Login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_Loading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_FrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_WinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_SeasonSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MapName_Prologue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& MapDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RUNTIME_INFO_EACH_MAP_ID_ARRAY_FIRST_EDITION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RUNTIME_INFO_EACH_MAP_ID_ARRAY_SECOND_EDITION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGameModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatchMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVPMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVPTutorialGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameType_Server() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameConstructInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRGameModeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamPVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSinglePVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScoreFFAGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTDMGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is1V1GameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is3V3GameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is2V2GameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = int32_t> static T get_MAPID_NOLOGIN() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AA7018))(0);
	}
	template <typename T = int32_t> static T get_MAPID_LOGIN() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A9D4BC))(0);
	}
	template <typename T = int32_t> static T get_MAPID_LOADING() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A9D730))(0);
	}
	template <typename T = int32_t> static T get_MAPID_FRONTEND() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A9D590))(0);
	}
	template <typename T = int32_t> static T get_MAPID_WINNERCIRCLE() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AA8124))(0);
	}
	template <typename T = int32_t> static T get_MAPID_SEASONSWITCH() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AA81F8))(0);
	}
	template <typename T = uintptr_t> static T GetGameModeCategory(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA82CC))(0, gameMode);
	}
	template <typename T = uintptr_t> static T GetGameModeCategory_1(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA83A8))(0, mapID);
	}
	template <typename T = uintptr_t> static T GetNetMode(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA0250))(0, mapID);
	}
	template <typename T = bool> static T IsMatchMap(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA0154))(0, mapID);
	}
	template <typename T = bool> static T IsPVPMap(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA84A4))(0, mapID);
	}
	template <typename T = bool> static T IsPVPTutorialGame(int32_t nMapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA85A0))(0, nMapId);
	}
	template <typename T = uintptr_t> static T GetGameType_Server(uintptr_t modeName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8670))(0, modeName);
	}
	template <typename T = uintptr_t> static T GetGameConstructInfo(uintptr_t modeName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8754))(0, modeName);
	}
	template <typename T = uintptr_t> static T GetGameMode(int32_t inMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A9D8D8))(0, inMapID);
	}
	template <typename T = bool> static T IsBRGameModeMap(int32_t inMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA08B4))(0, inMapID);
	}
	template <typename T = bool> static T IsBrGame(int32_t mapId, int32_t modeId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4AA8A78))(0, mapId, modeId);
	}
	template <typename T = bool> static T IsPVEGame(int32_t inMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA8BB8))(0, inMapID);
	}
	template <typename T = bool> static T IsPVEGame_1(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8CB4))(0, gameMode);
	}
	template <typename T = bool> static T IsTeamPVPGame(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8D98))(0, mode);
	}
	template <typename T = bool> static T IsSinglePVPGame(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8EF0))(0, mode);
	}
	template <typename T = bool> static T IsScoreFFAGame(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA9004))(0, mode);
	}
	template <typename T = bool> static T IsBRGameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA8980))(0, inMode);
	}
	template <typename T = bool> static T IsPVEGameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA90E0))(0, inMode);
	}
	template <typename T = bool> static T IsBRTDMGameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA91B4))(0, inMode);
	}
	template <typename T = bool> static T Is1V1GameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA9290))(0, inMode);
	}
	template <typename T = bool> static T Is3V3GameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA936C))(0, inMode);
	}
	template <typename T = bool> static T Is2V2GameMode(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA9448))(0, inMode);
	}
	template <typename T = bool> static T IsLobby(uintptr_t inMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA9524))(0, inMode);
	}
	template <typename T = Il2CppString*> static T GetMapFullName(int32_t mapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA95FC))(0, mapId);
	}

};

}
