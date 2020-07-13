#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RelevantInfoManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RelevantInfoManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_RelevantInfos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CurCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CurFOV() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_FOVChange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurDetectIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_DetectRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& MaxSingleNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_IndexNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_WaitCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WaitProcessList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& RefreshStatsInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_refreshStatsTimestamp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIrrelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVehicleRelevantInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllRelevantInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRefreshStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_RelevantInfos() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D61D38))(this);
	}
	template <typename T = uintptr_t> T CreateBaseData(uint32_t id, uintptr_t relevantObjType) {
		return ((T (*)(RelevantInfoManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D61D40))(this, id, relevantObjType);
	}
	template <typename T = void> T OnRelevantInfo(uint32_t id, Il2CppVector3 serverPos, Il2CppVector3 rotation, uintptr_t relevantObjType) {
		return ((T (*)(RelevantInfoManager*, uint32_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3D620D8))(this, id, serverPos, rotation, relevantObjType);
	}
	template <typename T = void> T OnIrrelevantInfo(uint32_t id, uintptr_t relevantObjType) {
		return ((T (*)(RelevantInfoManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D62448))(this, id, relevantObjType);
	}
	template <typename T = void> T OnReSpawnPlayer(uint32_t id, uintptr_t resMsg) {
		return ((T (*)(RelevantInfoManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D62634))(this, id, resMsg);
	}
	template <typename T = void> T OnAddVehicle(uint32_t id, uintptr_t msg) {
		return ((T (*)(RelevantInfoManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D628C0))(this, id, msg);
	}
	template <typename T = void> T OnDeleteVehicle(uint32_t id, uintptr_t msg) {
		return ((T (*)(RelevantInfoManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D62F64))(this, id, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(RelevantInfoManager*, float))(Il2CppBase() + 0x3D63254))(this, deltaTime);
	}
	template <typename T = void> T SimulatedMoveData(float deltaTime) {
		return ((T (*)(RelevantInfoManager*, float))(Il2CppBase() + 0x3D63730))(this, deltaTime);
	}
	template <typename T = void> T ClearVehicleRelevantInfos() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D63B4C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D640C0))(this);
	}
	template <typename T = void> T ClearAllRelevantInfos(bool isForce) {
		return ((T (*)(RelevantInfoManager*, bool))(Il2CppBase() + 0x3D64168))(this, isForce);
	}
	template <typename T = void> T ClearRelevantInfo(uint32_t id) {
		return ((T (*)(RelevantInfoManager*, uint32_t))(Il2CppBase() + 0x3D630FC))(this, id);
	}
	template <typename T = uintptr_t> T GetBaseData(uint32_t actorID) {
		return ((T (*)(RelevantInfoManager*, uint32_t))(Il2CppBase() + 0x3D646F4))(this, actorID);
	}
	template <typename T = void> T ProcessRelevant() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D6394C))(this);
	}
	template <typename T = void> T PushRelevant(uintptr_t baseData) {
		return ((T (*)(RelevantInfoManager*, uintptr_t))(Il2CppBase() + 0x3D64858))(this, baseData);
	}
	template <typename T = void> T GetRelevantCount(uintptr_t* activeRelevantCount, uintptr_t* clientRelevantCount, uintptr_t* serverRelevantCount, uintptr_t* activePlayerRelevantCount, uintptr_t* clientPlayerRelevantCount, uintptr_t* serverPlayerRelevantCount, uintptr_t* activeMonsterRelevantCount, uintptr_t* clientMonsterRelevantCount, uintptr_t* serverMonsterRelevantCount, uintptr_t* activeVehicleRelevantCount, uintptr_t* clientVehicleRelevantCount, uintptr_t* serverVehicleRelevantCount) {
		return ((T (*)(RelevantInfoManager*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3D64A04))(this, activeRelevantCount, clientRelevantCount, serverRelevantCount, activePlayerRelevantCount, clientPlayerRelevantCount, serverPlayerRelevantCount, activeMonsterRelevantCount, clientMonsterRelevantCount, serverMonsterRelevantCount, activeVehicleRelevantCount, clientVehicleRelevantCount, serverVehicleRelevantCount);
	}
	template <typename T = void> T TryRefreshStats() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D64E08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(RelevantInfoManager*, float))(Il2CppBase() + 0x3D64FA8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(RelevantInfoManager*))(Il2CppBase() + 0x3D64FB0))(this);
	}

};

}
