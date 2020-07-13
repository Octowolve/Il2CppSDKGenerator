#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchReceiver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchReceiver"));
	}

	template <typename T = bool> T& EnableLogProtocol() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Protocols() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bIsProcessProtocols() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MinProcessCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxProcessFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& mProcessCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& OptimizeFlushProto() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_RealTimeProtocols() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_ReplicationDataDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_UnusedReplicationData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_FireCmdDataDic() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FireProtocols() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_RecycleFireCmdList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_FireCmdDelegate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ProtocalHandler() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_AbnormalPingCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGameInfoData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogFields() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseProcessProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProcessProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProcessCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessProtocals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlushProtocols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearProtocols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRealTimeProcessProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveRealTimeProcessProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReceivedReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterWeaponFireCmdDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterWeaponFireCmdDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponFireCmdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleFireCmdInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFireData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllFireData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillWeaponFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncInventoryCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseDSLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseDSLoginSecondary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResPingStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateMoveDataPacked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDSLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MatchReceiver*, float))(Il2CppBase() + 0x19BC80C))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BD5DC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BD7F4))(this);
	}
	template <typename T = void> T ClearGameInfoData() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BD6B0))(this);
	}
	template <typename T = void> T PushProtocol(uintptr_t msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BDE4C))(this, msg);
	}
	template <typename T = void> static T LogFields(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19BE088))(0, o);
	}
	template <typename T = bool> T get_IsPauseProcessProtocol() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BE334))(this);
	}
	template <typename T = void> T PauseProcessProtocol() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BE348))(this);
	}
	template <typename T = void> T StartProcessProtocol() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x1960564))(this);
	}
	template <typename T = void> T UpdateProcessCount(int32_t totalCount) {
		return ((T (*)(MatchReceiver*, int32_t))(Il2CppBase() + 0x19BE41C))(this, totalCount);
	}
	template <typename T = void> T ProcessProtocals() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BCCD4))(this);
	}
	template <typename T = void> T FlushProtocols() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x1960638))(this);
	}
	template <typename T = void> T ClearProtocols() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BDD40))(this);
	}
	template <typename T = void> T AddRealTimeProcessProtocol(uint32_t readTimeProtocol) {
		return ((T (*)(MatchReceiver*, uint32_t))(Il2CppBase() + 0x19BE60C))(this, readTimeProtocol);
	}
	template <typename T = void> T RemoveRealTimeProcessProtocol(uint32_t readTimeProtocol) {
		return ((T (*)(MatchReceiver*, uint32_t))(Il2CppBase() + 0x19BE71C))(this, readTimeProtocol);
	}
	template <typename T = void> T ReceivedReplicationData(uint32_t ActorID, uintptr_t RepData) {
		return ((T (*)(MatchReceiver*, uint32_t, uintptr_t))(Il2CppBase() + 0x19BE82C))(this, ActorID, RepData);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReplicationData(uint32_t ActorID) {
		return ((T (*)(MatchReceiver*, uint32_t))(Il2CppBase() + 0x19BEA10))(this, ActorID);
	}
	template <typename T = void> T ClearAllReplicationData() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BC8F8))(this);
	}
	template <typename T = void> T RegisterWeaponFireCmdDelegate(uint32_t UIN, uintptr_t callBack) {
		return ((T (*)(MatchReceiver*, uint32_t, uintptr_t))(Il2CppBase() + 0x19BEB4C))(this, UIN, callBack);
	}
	template <typename T = void> T UnRegisterWeaponFireCmdDelegate(uint32_t UIN, uintptr_t callBack) {
		return ((T (*)(MatchReceiver*, uint32_t, uintptr_t))(Il2CppBase() + 0x19BECE4))(this, UIN, callBack);
	}
	template <typename T = void> T GetWeaponFireCmdList(uint32_t UIN, uintptr_t* tList) {
		return ((T (*)(MatchReceiver*, uint32_t, uintptr_t*))(Il2CppBase() + 0x19BEE70))(this, UIN, tList);
	}
	template <typename T = void> T RecycleFireCmdInfo(uintptr_t obj) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BEF9C))(this, obj);
	}
	template <typename T = void> T ProcessFireData() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BD1E0))(this);
	}
	template <typename T = void> T ClearAllFireData(bool bClearLocal) {
		return ((T (*)(MatchReceiver*, bool))(Il2CppBase() + 0x19BD8C8))(this, bClearLocal);
	}
	template <typename T = void> T FillWeaponFireCmd(uintptr_t msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BF0AC))(this, msg);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19BF458))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BF914))(this, msg);
	}
	template <typename T = void> T RegisterProtocolHandler(uint32_t commandId, void* handler) {
		return ((T (*)(MatchReceiver*, uint32_t, void*))(Il2CppBase() + 0x19BF800))(this, commandId, handler);
	}
	template <typename T = void> T UnRegisterProtocolHandler(uint32_t commandId) {
		return ((T (*)(MatchReceiver*, uint32_t))(Il2CppBase() + 0x19BFA0C))(this, commandId);
	}
	template <typename T = void> T OnServerSyncInventoryCommon(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BFB04))(this, Msg);
	}
	template <typename T = void> T OnServerSyncInventoryBag(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BFCB4))(this, Msg);
	}
	template <typename T = void> T OnResponseDSLogin(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19BFF10))(this, Msg);
	}
	template <typename T = void> T OnResponseDSLoginSecondary(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C0220))(this, Msg);
	}
	template <typename T = void> T OnResPing(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C04CC))(this, Msg);
	}
	template <typename T = void> T OnResPingStat(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C092C))(this, Msg);
	}
	template <typename T = void> T OnSimulateMoveDataPacked(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C0BE0))(this, Msg);
	}
	template <typename T = void> T OnEndMatch(uintptr_t Msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C10E0))(this, Msg);
	}
	template <typename T = void> T OnResDSLogout(uintptr_t msg) {
		return ((T (*)(MatchReceiver*, uintptr_t))(Il2CppBase() + 0x19C139C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MatchReceiver*, float))(Il2CppBase() + 0x19C1580))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19C1588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19C1590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MatchReceiver*))(Il2CppBase() + 0x19C1598))(this);
	}

};

}
