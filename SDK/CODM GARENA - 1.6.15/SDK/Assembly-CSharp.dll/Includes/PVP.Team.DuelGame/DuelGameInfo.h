#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameInfo"));
	}

	template <typename T = uint32_t> T& m_RoundTargetScore() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint32_t> T& m_AttackerRoundScore() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& m_DefenderRoundScore() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& m_MlkUavEndTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& m_MlkUavNextTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_MlkUavNextCheckTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& m_MlkUavLastCheckRe() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_MlkUavInit() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUAVState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMlkUav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckMlkUav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_RoundTargetScore() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400CCFC))(this);
	}
	template <typename T = void> T set_RoundTargetScore(uint32_t value) {
		return ((T (*)(DuelGameInfo*, uint32_t))(Il2CppBase() + 0x400CD04))(this, value);
	}
	template <typename T = uint32_t> T get_AttackerRoundScore() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400CE5C))(this);
	}
	template <typename T = void> T set_AttackerRoundScore(uint32_t value) {
		return ((T (*)(DuelGameInfo*, uint32_t))(Il2CppBase() + 0x400CE64))(this, value);
	}
	template <typename T = uint32_t> T get_DefenderRoundScore() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400CFBC))(this);
	}
	template <typename T = void> T set_DefenderRoundScore(uint32_t value) {
		return ((T (*)(DuelGameInfo*, uint32_t))(Il2CppBase() + 0x400CFC4))(this, value);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D11C))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D124))(this);
	}
	template <typename T = bool> T get_ShowSelfBag() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D12C))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D158))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DuelGameInfo*, float))(Il2CppBase() + 0x400D160))(this, deltaTime);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(DuelGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x400D388))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D468))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(DuelGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x400D470))(this, propertyID, value, varType);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D5A4))(this);
	}
	template <typename T = bool> T get_UAVEnabled() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D724))(this);
	}
	template <typename T = void> T ResetUAVState() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D76C))(this);
	}
	template <typename T = void> T CheckMlkUav() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D21C))(this);
	}
	template <typename T = bool> T DoCheckMlkUav() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400D81C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DuelGameInfo*, float))(Il2CppBase() + 0x400DA34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(DuelGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x400DA3C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(DuelGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x400DA44))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(DuelGameInfo*))(Il2CppBase() + 0x400DA64))(this);
	}

};

}
