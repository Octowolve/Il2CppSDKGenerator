#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadMatchDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadMatchDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_OpponentInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& MatchOpponentUID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& BattleID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& Round() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MatchData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GameSyncData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& MapItemNumMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& MapItemTotalNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& RivalNumMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_RivalInfoUpdated() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedUpdateOpponentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMatchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpponentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOpponentInfo_Rival() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildOpponentInfo_Rival() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOpponentInfoByBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowedOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOpponentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateMapIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_OpponentInfoList() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3941FB4))(this);
	}
	template <typename T = uint64_t> T get_MatchOpponentUID() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3941FBC))(this);
	}
	template <typename T = void> T set_MatchOpponentUID(uint64_t value) {
		return ((T (*)(SquadMatchDataStore*, uint64_t))(Il2CppBase() + 0x3941FC4))(this, value);
	}
	template <typename T = uint32_t> T get_BattleID() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3941FD4))(this);
	}
	template <typename T = void> T set_BattleID(uint32_t value) {
		return ((T (*)(SquadMatchDataStore*, uint32_t))(Il2CppBase() + 0x3941FDC))(this, value);
	}
	template <typename T = uint32_t> T get_Round() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3941FE4))(this);
	}
	template <typename T = void> T set_Round(uint32_t value) {
		return ((T (*)(SquadMatchDataStore*, uint32_t))(Il2CppBase() + 0x3941FEC))(this, value);
	}
	template <typename T = bool> T NeedUpdateOpponentInfo() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3941FF4))(this);
	}
	template <typename T = void> T ResetMatchInfo() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x394209C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x3942150))(this);
	}
	template <typename T = uintptr_t> T GetOpponentInfo(uint64_t opponentID) {
		return ((T (*)(SquadMatchDataStore*, uint64_t))(Il2CppBase() + 0x3942240))(this, opponentID);
	}
	template <typename T = void> T UpdateOpponentInfo_Rival(uintptr_t listInfo) {
		return ((T (*)(SquadMatchDataStore*, uintptr_t))(Il2CppBase() + 0x3942514))(this, listInfo);
	}
	template <typename T = uintptr_t> T BuildOpponentInfo_Rival(uintptr_t battleInfo) {
		return ((T (*)(SquadMatchDataStore*, uintptr_t))(Il2CppBase() + 0x3942BE8))(this, battleInfo);
	}
	template <typename T = void> T UpdateOpponentInfoByBattleInfo(uintptr_t listInfo) {
		return ((T (*)(SquadMatchDataStore*, uintptr_t))(Il2CppBase() + 0x3942D34))(this, listInfo);
	}
	template <typename T = void> T UpdateShowedOnMap() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x394314C))(this);
	}
	template <typename T = void> T RemoveOpponentInfo(uint64_t opponentID) {
		return ((T (*)(SquadMatchDataStore*, uint64_t))(Il2CppBase() + 0x3943390))(this, opponentID);
	}
	template <typename T = int32_t> T CalculateMapIndex() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x394351C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(SquadMatchDataStore*))(Il2CppBase() + 0x39436D0))(this);
	}

};

}
