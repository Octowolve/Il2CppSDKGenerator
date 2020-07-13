#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadBattleDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadBattleDataStore"));
	}

	template <typename T = int32_t> static T& MaxBattleNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DefaultPageSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& SelfTurnInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OpponentTurnInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CompleteInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattleInfoByOppoID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRivalNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattleInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattleResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBattleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetBattleInfoByOppoID(uint64_t oppoID) {
		return ((T (*)(SquadBattleDataStore*, uint64_t))(Il2CppBase() + 0x39323BC))(this, oppoID);
	}
	template <typename T = uintptr_t> T GetBattleInfo(uint32_t battleID) {
		return ((T (*)(SquadBattleDataStore*, uint32_t))(Il2CppBase() + 0x39325E4))(this, battleID);
	}
	template <typename T = int32_t> T GetRivalNum(uintptr_t infoType) {
		return ((T (*)(SquadBattleDataStore*, uintptr_t))(Il2CppBase() + 0x3932970))(this, infoType);
	}
	template <typename T = uintptr_t> T GetBattleInfoList(uintptr_t infoType) {
		return ((T (*)(SquadBattleDataStore*, uintptr_t))(Il2CppBase() + 0x3932B8C))(this, infoType);
	}
	template <typename T = uintptr_t> T BuildBattleInfo(uintptr_t logInfo, uintptr_t infoType, uint64_t localPlayerID) {
		return ((T (*)(SquadBattleDataStore*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x3932D7C))(this, logInfo, infoType, localPlayerID);
	}
	template <typename T = uintptr_t> T GetBattleResult(uintptr_t result, bool isOnSelfSide) {
		return ((T (*)(SquadBattleDataStore*, uintptr_t, bool))(Il2CppBase() + 0x3933834))(this, result, isOnSelfSide);
	}
	template <typename T = uintptr_t> T UpdateBattleList(Il2CppList<uintptr_t>* logInfoList, uintptr_t infoType, int32_t pageIndex, int32_t pageCount) {
		return ((T (*)(SquadBattleDataStore*, Il2CppList<uintptr_t>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3933910))(this, logInfoList, infoType, pageIndex, pageCount);
	}

};

}
