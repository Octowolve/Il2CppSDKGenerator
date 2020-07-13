#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& ActivityID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isNeedReqMySelfInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& curSelectType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& curSelectGlobalMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& curSelectTabs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& curSelectChild() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& cnMaxIDCollectionRankPlayerCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isRequestingMoreData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _protocolData() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RoleModelData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ZoneData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CacheFriendRankId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& curRankId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& serverRankTypeMap() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& accountTypeQQ() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& accountTypeWeChat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& accountTypeGuest() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabScrollViewOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchTabSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabChildSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZbSwitchTabSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResFriendRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRankAndActivitiesList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResRankAndActivitiesList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqModelGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResModelGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRankPLayerCallingCardinfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReqRankPLayerCallingCardinfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitServerRankTypeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x37FEDA0))(0);
	}
	template <typename T = void> T SwitchRankType(uintptr_t eGlobalMode, uintptr_t eRankModeType, uintptr_t eRankTabs, int32_t eRankTabChild) {
		return ((T (*)(RankManager*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3801498))(this, eGlobalMode, eRankModeType, eRankTabs, eRankTabChild);
	}
	template <typename T = uintptr_t> T get_protocolData() {
		return ((T (*)(RankManager*))(Il2CppBase() + 0x3810014))(this);
	}
	template <typename T = uintptr_t> T get_modelData() {
		return ((T (*)(RankManager*))(Il2CppBase() + 0x38100C4))(this);
	}
	template <typename T = uintptr_t> T get_zoneData() {
		return ((T (*)(RankManager*))(Il2CppBase() + 0x3810174))(this);
	}
	template <typename T = void> T ChangeTabScrollViewOffset(bool isSpecial) {
		return ((T (*)(RankManager*, bool))(Il2CppBase() + 0x3810224))(this, isSpecial);
	}
	template <typename T = void> T OnTabSelect(int32_t index) {
		return ((T (*)(RankManager*, int32_t))(Il2CppBase() + 0x38103E8))(this, index);
	}
	template <typename T = void> T OnSwitchTabSelect(int32_t index) {
		return ((T (*)(RankManager*, int32_t))(Il2CppBase() + 0x38105AC))(this, index);
	}
	template <typename T = void> T OnTabChildSelect(int32_t index) {
		return ((T (*)(RankManager*, int32_t))(Il2CppBase() + 0x3810770))(this, index);
	}
	template <typename T = void> T OnZbSwitchTabSelect(int32_t index) {
		return ((T (*)(RankManager*, int32_t))(Il2CppBase() + 0x3810934))(this, index);
	}
	template <typename T = void> T ReqRankList(uintptr_t rankMode, int32_t rankId, bool isMoreData) {
		return ((T (*)(RankManager*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3805E2C))(this, rankMode, rankId, isMoreData);
	}
	template <typename T = bool> T ResRankList(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RankManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3810AF8))(this, message, err);
	}
	template <typename T = bool> T ResFriendRankList(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RankManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3811054))(this, message, err);
	}
	template <typename T = void> T ReqRankAndActivitiesList(int32_t rankId, bool isMoreData) {
		return ((T (*)(RankManager*, int32_t, bool))(Il2CppBase() + 0x37FEFD8))(this, rankId, isMoreData);
	}
	template <typename T = bool> T ResRankAndActivitiesList(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RankManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3811754))(this, message, err);
	}
	template <typename T = void> T ReqModelGun(Il2CppList<uint64_t>* playeridList) {
		return ((T (*)(RankManager*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x3808F60))(this, playeridList);
	}
	template <typename T = bool> T ResModelGun(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RankManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3812470))(this, message, err);
	}
	template <typename T = void> T ReqRankPLayerCallingCardinfo(Il2CppList<uintptr_t>* infos) {
		return ((T (*)(RankManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3811570))(this, infos);
	}
	template <typename T = void> T ReqRankPLayerCallingCardinfo_1(Il2CppList<uint64_t>* playeridList) {
		return ((T (*)(RankManager*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x38122C0))(this, playeridList);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_ServerRankTypeMap() {
		return ((T (*)(RankManager*))(Il2CppBase() + 0x38129AC))(this);
	}
	template <typename T = void> T set_ServerRankTypeMap(Il2CppDictionary<uintptr_t, uintptr_t>* value) {
		return ((T (*)(RankManager*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x38129D4))(this, value);
	}
	template <typename T = void> T InitServerRankTypeMap() {
		return ((T (*)(RankManager*))(Il2CppBase() + 0x380FDE4))(this);
	}

};

}
