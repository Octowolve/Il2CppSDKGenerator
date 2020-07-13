#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MapConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MapConfigConfig"));
	}

	template <typename T = int32_t> T& ModeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ENetMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EOverrideGameMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Mapid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MapidDecimal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DisableObserver() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& OverrideGameMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& NetMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& UIProcess() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LoadingResource() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& TexturePath() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Thumb_spritename() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& IsCamp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& LeastPlayerCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& MaxPlayerCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& MaxObserverCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& AddedTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& ExpireTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& PxGravity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& PxRestitution() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& CheckEnterPreparingBht() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& CheckStartMatchBht() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& CheckEndMatchBht() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& CheckStartRoundBht() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& CheckEndRoundBht() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& RoundInitBht() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& RoundTickBht() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& RoundEndBht() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& MatchEndBht() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& XTriggerRule() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& WinnerCircleBG() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& WinnerCircleLightRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& LoadingBGM() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& InGameBGM() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& AudioSwitch() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& LoadingBank() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& Bank1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& Bank2() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& Bank3() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& Bank4() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& Bank5() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& MaxMatchTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& PreparationTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& RoundTarget() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& RoundTimeLimit() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& ForbidJoinTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& ForbidJoinKills() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& ForbidJoinRound() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& EnableRespawn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& RespawnTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& RoundOver_Win() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& RoundOver_Lose() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& RoundOver_Draw() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& VictoryInGame() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppString*> T& DefeatInGame() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& ZM_Crossbone_Victory() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& ZM_Crossbone_Defeat() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& VictoryInGame_PVP_Traitor() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& VictoryInGame_PVP_Guarder() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& DefeatInGame_PVP_Traitor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& DefeatInGame_PVP_Guarder() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& DrawInGame_PVP() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& Top3_PVP_FFA() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& Unlisted_PVP_FFA() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppString*> T& VictoryOutsideGame_PVP() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& DefeatOutsideGame_PVP() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& DrawOutsideGame_PVP() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& SafeAreaCenterBounds() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMapEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapsFromGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapsFromGameModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomMapFromGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentRandomMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundTimeLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = int32_t> T get_ModeId() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37784BC))(this);
	}
	template <typename T = void> T set_ModeId(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37784C4))(this, value);
	}
	template <typename T = uintptr_t> T get_ENetMode() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37784CC))(this);
	}
	template <typename T = void> T set_ENetMode(uintptr_t value) {
		return ((T (*)(MapConfigConfig*, uintptr_t))(Il2CppBase() + 0x37784D4))(this, value);
	}
	template <typename T = uintptr_t> T get_EOverrideGameMode() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37784DC))(this);
	}
	template <typename T = void> T set_EOverrideGameMode(uintptr_t value) {
		return ((T (*)(MapConfigConfig*, uintptr_t))(Il2CppBase() + 0x37784E4))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37784EC))(this);
	}
	template <typename T = bool> static T IsMapEnable(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x377863C))(0, mapID);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetMapsFromGameMode(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3778760))(0, gameMode);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetMapsFromGameModeCategory(uintptr_t gameCategory) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37788F0))(0, gameCategory);
	}
	template <typename T = int32_t> static T GetRandomMapFromGameMode(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3778A80))(0, gameMode);
	}
	template <typename T = bool> static T IsCurrentRandomMap(int32_t mapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3778BC4))(0, mapId);
	}
	template <typename T = Il2CppString*> static T GetLoadingTexture(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3778C6C))(0, mapID);
	}
	template <typename T = int32_t> static T GetRoundTimeLimit(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3778D80))(0, mapID);
	}
	template <typename T = int32_t> static T GetRoundTarget(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3778E94))(0, mapID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778FA8))(this);
	}
	template <typename T = int32_t> T get_Mapid() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778624))(this);
	}
	template <typename T = void> T set_Mapid(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779048))(this, value);
	}
	template <typename T = int32_t> T get_MapidDecimal() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779050))(this);
	}
	template <typename T = void> T set_MapidDecimal(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779058))(this, value);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778758))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(MapConfigConfig*, bool))(Il2CppBase() + 0x3779060))(this, value);
	}
	template <typename T = int32_t> T get_DisableObserver() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779068))(this);
	}
	template <typename T = void> T set_DisableObserver(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779070))(this, value);
	}
	template <typename T = Il2CppString*> T get_OverrideGameMode() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778634))(this);
	}
	template <typename T = void> T set_OverrideGameMode(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779078))(this, value);
	}
	template <typename T = Il2CppString*> T get_NetMode() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x377862C))(this);
	}
	template <typename T = void> T set_NetMode(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779080))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779088))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779090))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779098))(this);
	}
	template <typename T = bool> T get_UIProcess() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37790A8))(this);
	}
	template <typename T = void> T set_UIProcess(bool value) {
		return ((T (*)(MapConfigConfig*, bool))(Il2CppBase() + 0x37790B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadingResource() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778D78))(this);
	}
	template <typename T = void> T set_LoadingResource(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37790B8))(this, value);
	}
	template <typename T = int32_t> T get_TexturePath() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37790C0))(this);
	}
	template <typename T = void> T set_TexturePath(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37790C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Thumb_spritename() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37790D0))(this);
	}
	template <typename T = void> T set_Thumb_spritename(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37790D8))(this, value);
	}
	template <typename T = int32_t> T get_IsCamp() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37790E0))(this);
	}
	template <typename T = void> T set_IsCamp(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37790E8))(this, value);
	}
	template <typename T = int32_t> T get_LeastPlayerCount() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37790F0))(this);
	}
	template <typename T = void> T set_LeastPlayerCount(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37790F8))(this, value);
	}
	template <typename T = int32_t> T get_MaxPlayerCount() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779100))(this);
	}
	template <typename T = void> T set_MaxPlayerCount(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779108))(this, value);
	}
	template <typename T = int32_t> T get_MaxObserverCount() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779110))(this);
	}
	template <typename T = void> T set_MaxObserverCount(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779118))(this, value);
	}
	template <typename T = int32_t> T get_IsOpen() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779120))(this);
	}
	template <typename T = void> T set_IsOpen(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779128))(this, value);
	}
	template <typename T = int32_t> T get_AddedTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779130))(this);
	}
	template <typename T = void> T set_AddedTime(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779138))(this, value);
	}
	template <typename T = int32_t> T get_ExpireTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779140))(this);
	}
	template <typename T = void> T set_ExpireTime(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779148))(this, value);
	}
	template <typename T = float> T get_PxGravity() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779150))(this);
	}
	template <typename T = void> T set_PxGravity(float value) {
		return ((T (*)(MapConfigConfig*, float))(Il2CppBase() + 0x3779158))(this, value);
	}
	template <typename T = float> T get_PxRestitution() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779160))(this);
	}
	template <typename T = void> T set_PxRestitution(float value) {
		return ((T (*)(MapConfigConfig*, float))(Il2CppBase() + 0x3779168))(this, value);
	}
	template <typename T = Il2CppString*> T get_CheckEnterPreparingBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779170))(this);
	}
	template <typename T = void> T set_CheckEnterPreparingBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779178))(this, value);
	}
	template <typename T = Il2CppString*> T get_CheckStartMatchBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779180))(this);
	}
	template <typename T = void> T set_CheckStartMatchBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779188))(this, value);
	}
	template <typename T = Il2CppString*> T get_CheckEndMatchBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779190))(this);
	}
	template <typename T = void> T set_CheckEndMatchBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779198))(this, value);
	}
	template <typename T = Il2CppString*> T get_CheckStartRoundBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791A0))(this);
	}
	template <typename T = void> T set_CheckStartRoundBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_CheckEndRoundBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791B0))(this);
	}
	template <typename T = void> T set_CheckEndRoundBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundInitBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791C0))(this);
	}
	template <typename T = void> T set_RoundInitBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundTickBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791D0))(this);
	}
	template <typename T = void> T set_RoundTickBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundEndBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791E0))(this);
	}
	template <typename T = void> T set_RoundEndBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MatchEndBht() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37791F0))(this);
	}
	template <typename T = void> T set_MatchEndBht(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37791F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_XTriggerRule() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779200))(this);
	}
	template <typename T = void> T set_XTriggerRule(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779208))(this, value);
	}
	template <typename T = Il2CppString*> T get_WinnerCircleBG() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779210))(this);
	}
	template <typename T = void> T set_WinnerCircleBG(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779218))(this, value);
	}
	template <typename T = Il2CppString*> T get_WinnerCircleLightRoot() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779220))(this);
	}
	template <typename T = void> T set_WinnerCircleLightRoot(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779228))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadingBGM() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779230))(this);
	}
	template <typename T = void> T set_LoadingBGM(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779238))(this, value);
	}
	template <typename T = Il2CppString*> T get_InGameBGM() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779240))(this);
	}
	template <typename T = void> T set_InGameBGM(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779248))(this, value);
	}
	template <typename T = Il2CppString*> T get_AudioSwitch() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779250))(this);
	}
	template <typename T = void> T set_AudioSwitch(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779258))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadingBank() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779260))(this);
	}
	template <typename T = void> T set_LoadingBank(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779268))(this, value);
	}
	template <typename T = Il2CppString*> T get_Bank1() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779270))(this);
	}
	template <typename T = void> T set_Bank1(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779278))(this, value);
	}
	template <typename T = Il2CppString*> T get_Bank2() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779280))(this);
	}
	template <typename T = void> T set_Bank2(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779288))(this, value);
	}
	template <typename T = Il2CppString*> T get_Bank3() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779290))(this);
	}
	template <typename T = void> T set_Bank3(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779298))(this, value);
	}
	template <typename T = Il2CppString*> T get_Bank4() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37792A0))(this);
	}
	template <typename T = void> T set_Bank4(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37792A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Bank5() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37792B0))(this);
	}
	template <typename T = void> T set_Bank5(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37792B8))(this, value);
	}
	template <typename T = int32_t> T get_MaxMatchTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37792C0))(this);
	}
	template <typename T = void> T set_MaxMatchTime(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37792C8))(this, value);
	}
	template <typename T = int32_t> T get_PreparationTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37792D0))(this);
	}
	template <typename T = void> T set_PreparationTime(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37792D8))(this, value);
	}
	template <typename T = int32_t> T get_RoundTarget() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778FA0))(this);
	}
	template <typename T = void> T set_RoundTarget(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37792E0))(this, value);
	}
	template <typename T = int32_t> T get_RoundTimeLimit() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3778E8C))(this);
	}
	template <typename T = void> T set_RoundTimeLimit(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37792E8))(this, value);
	}
	template <typename T = int32_t> T get_ForbidJoinTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37792F0))(this);
	}
	template <typename T = void> T set_ForbidJoinTime(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x37792F8))(this, value);
	}
	template <typename T = int32_t> T get_ForbidJoinKills() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779300))(this);
	}
	template <typename T = void> T set_ForbidJoinKills(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779308))(this, value);
	}
	template <typename T = int32_t> T get_ForbidJoinRound() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779310))(this);
	}
	template <typename T = void> T set_ForbidJoinRound(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779318))(this, value);
	}
	template <typename T = int32_t> T get_EnableRespawn() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779320))(this);
	}
	template <typename T = void> T set_EnableRespawn(int32_t value) {
		return ((T (*)(MapConfigConfig*, int32_t))(Il2CppBase() + 0x3779328))(this, value);
	}
	template <typename T = float> T get_RespawnTime() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779330))(this);
	}
	template <typename T = void> T set_RespawnTime(float value) {
		return ((T (*)(MapConfigConfig*, float))(Il2CppBase() + 0x3779338))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundOver_Win() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779340))(this);
	}
	template <typename T = void> T set_RoundOver_Win(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779348))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundOver_Lose() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779350))(this);
	}
	template <typename T = void> T set_RoundOver_Lose(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779358))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoundOver_Draw() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779360))(this);
	}
	template <typename T = void> T set_RoundOver_Draw(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779368))(this, value);
	}
	template <typename T = Il2CppString*> T get_VictoryInGame() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779370))(this);
	}
	template <typename T = void> T set_VictoryInGame(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779378))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefeatInGame() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779380))(this);
	}
	template <typename T = void> T set_DefeatInGame(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779388))(this, value);
	}
	template <typename T = Il2CppString*> T get_ZM_Crossbone_Victory() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779390))(this);
	}
	template <typename T = void> T set_ZM_Crossbone_Victory(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779398))(this, value);
	}
	template <typename T = Il2CppString*> T get_ZM_Crossbone_Defeat() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793A0))(this);
	}
	template <typename T = void> T set_ZM_Crossbone_Defeat(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_VictoryInGame_PVP_Traitor() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793B0))(this);
	}
	template <typename T = void> T set_VictoryInGame_PVP_Traitor(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_VictoryInGame_PVP_Guarder() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793C0))(this);
	}
	template <typename T = void> T set_VictoryInGame_PVP_Guarder(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefeatInGame_PVP_Traitor() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793D0))(this);
	}
	template <typename T = void> T set_DefeatInGame_PVP_Traitor(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefeatInGame_PVP_Guarder() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793E0))(this);
	}
	template <typename T = void> T set_DefeatInGame_PVP_Guarder(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_DrawInGame_PVP() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x37793F0))(this);
	}
	template <typename T = void> T set_DrawInGame_PVP(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37793F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Top3_PVP_FFA() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779400))(this);
	}
	template <typename T = void> T set_Top3_PVP_FFA(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779408))(this, value);
	}
	template <typename T = Il2CppString*> T get_Unlisted_PVP_FFA() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779410))(this);
	}
	template <typename T = void> T set_Unlisted_PVP_FFA(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779418))(this, value);
	}
	template <typename T = Il2CppString*> T get_VictoryOutsideGame_PVP() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779420))(this);
	}
	template <typename T = void> T set_VictoryOutsideGame_PVP(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779428))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefeatOutsideGame_PVP() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779430))(this);
	}
	template <typename T = void> T set_DefeatOutsideGame_PVP(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779438))(this, value);
	}
	template <typename T = Il2CppString*> T get_DrawOutsideGame_PVP() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779440))(this);
	}
	template <typename T = void> T set_DrawOutsideGame_PVP(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779448))(this, value);
	}
	template <typename T = Il2CppString*> T get_SafeAreaCenterBounds() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779450))(this);
	}
	template <typename T = void> T set_SafeAreaCenterBounds(Il2CppString* value) {
		return ((T (*)(MapConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3779458))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3779460))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(MapConfigConfig*))(Il2CppBase() + 0x3779C04))(this);
	}

};

}
