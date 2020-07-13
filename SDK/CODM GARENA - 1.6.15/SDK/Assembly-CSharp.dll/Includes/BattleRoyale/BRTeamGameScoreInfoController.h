#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScoreInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScoreInfoController"));
	}

	template <typename T = uintptr_t> T& m_ScoreData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TeamScoreInfoView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RealLeftTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bHasShowLeft3Min() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bHasShowLeft2Min() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& bHasShowLeft1Min() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& bIsLastStage() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = bool> T& bIsLastMinutes() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenScorePanelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEnterLastStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameEnterLastMinute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameScoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerKillCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerDogTagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTickSpecialTargetLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x2627FE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x262808C))(this);
	}
	template <typename T = void> T OnOpenScorePanelButtonClick() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x262829C))(this);
	}
	template <typename T = void> T GameEnterLastStage() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x2628380))(this);
	}
	template <typename T = void> T OnGameEnterLastMinute() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x26287C0))(this);
	}
	template <typename T = void> T PrepareData(uintptr_t scoreModel) {
		return ((T (*)(BRTeamGameScoreInfoController*, uintptr_t))(Il2CppBase() + 0x2628B18))(this, scoreModel);
	}
	template <typename T = void> T UpdateGameScoreData() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x2628C84))(this);
	}
	template <typename T = void> T UpdateLocalPlayerKillCount(int32_t inKillCount) {
		return ((T (*)(BRTeamGameScoreInfoController*, int32_t))(Il2CppBase() + 0x2628E88))(this, inKillCount);
	}
	template <typename T = void> T UpdateLocalPlayerDogTagCount(uint32_t inKillCount) {
		return ((T (*)(BRTeamGameScoreInfoController*, uint32_t))(Il2CppBase() + 0x2629098))(this, inKillCount);
	}
	template <typename T = void> T OnServerSyncLeftTime(int32_t inLeftTime) {
		return ((T (*)(BRTeamGameScoreInfoController*, int32_t))(Il2CppBase() + 0x26292A8))(this, inLeftTime);
	}
	template <typename T = void> T TickLeftTime() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x262935C))(this);
	}
	template <typename T = void> T OnTickSpecialTargetLeftTime(int32_t inLeftTime) {
		return ((T (*)(BRTeamGameScoreInfoController*, int32_t))(Il2CppBase() + 0x262952C))(this, inLeftTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x2629700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameScoreInfoController*))(Il2CppBase() + 0x2629708))(this);
	}

};

}
