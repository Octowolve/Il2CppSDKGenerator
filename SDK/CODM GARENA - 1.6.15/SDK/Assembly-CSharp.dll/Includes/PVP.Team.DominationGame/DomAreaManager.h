#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomAreaManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomAreaManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_DomAreaInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DomAreaList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DomAreaStateList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LastTickSoundTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hasPlayTeamOccupyAll() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hasPlayEnemyOccupyAll() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DomAreaSoundInfos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllAreaOccupiedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeastOneAreaOccupiedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDomAreaIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDomAreaCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearestUnOccupiedDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDomAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDomAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDomAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOccupyCampState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateClientLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGFAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGFAreaActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGFVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDomAreaSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDomAreaSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T AddDomArea(uintptr_t area) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2E848))(this, area);
	}
	template <typename T = void> T RemoveAllDomArea() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2EAE8))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2EBBC))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2EC6C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2EE30))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F0CC))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F224))(this, levelObject);
	}
	template <typename T = bool> T IsAllAreaOccupiedBy(uintptr_t camp) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F2C4))(this, camp);
	}
	template <typename T = bool> T IsLeastOneAreaOccupiedBy(uintptr_t camp) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F484))(this, camp);
	}
	template <typename T = int32_t> T GetDomAreaIndex(uintptr_t pawn) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F608))(this, pawn);
	}
	template <typename T = int32_t> T GetDomAreaCount() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2F8E8))(this);
	}
	template <typename T = uintptr_t> T GetNearestUnOccupiedDomArea(uintptr_t pawn) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B2F9BC))(this, pawn);
	}
	template <typename T = uintptr_t> T GetDomArea(int32_t areaID) {
		return ((T (*)(DomAreaManager*, int32_t))(Il2CppBase() + 0x2B2FCEC))(this, areaID);
	}
	template <typename T = uintptr_t> T GetDomAreaInfo(int32_t areaID) {
		return ((T (*)(DomAreaManager*, int32_t))(Il2CppBase() + 0x2B2FEE0))(this, areaID);
	}
	template <typename T = void> T SetDomAreaInfo(int32_t areaID, uintptr_t camp, uintptr_t attackerCamp, unsigned char status, float rate, float speed) {
		return ((T (*)(DomAreaManager*, int32_t, uintptr_t, uintptr_t, unsigned char, float, float))(Il2CppBase() + 0x2B3008C))(this, areaID, camp, attackerCamp, status, rate, speed);
	}
	template <typename T = void> T ResetDomAreaInfo() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B2EEE0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DomAreaManager*, float))(Il2CppBase() + 0x2B303C8))(this, deltaTime);
	}
	template <typename T = void> T SetOccupyCampState(bool TeamOccupyState, bool EnemyOccupyState) {
		return ((T (*)(DomAreaManager*, bool, bool))(Il2CppBase() + 0x2B3148C))(this, TeamOccupyState, EnemyOccupyState);
	}
	template <typename T = void> T UpdateClientLogic() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B30F60))(this);
	}
	template <typename T = void> T SetGFAreaInfo(int32_t areaID, uintptr_t attackerCamp, unsigned char status, uint32_t areaRestTime, uint32_t curOccupyTime) {
		return ((T (*)(DomAreaManager*, int32_t, uintptr_t, unsigned char, uint32_t, uint32_t))(Il2CppBase() + 0x2B31688))(this, areaID, attackerCamp, status, areaRestTime, curOccupyTime);
	}
	template <typename T = void> T SetGFAreaActive(bool show) {
		return ((T (*)(DomAreaManager*, bool))(Il2CppBase() + 0x2B318A8))(this, show);
	}
	template <typename T = uintptr_t> T GetGFVolume() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B31AF4))(this);
	}
	template <typename T = void> T SetDomAreaSound(int32_t Id, uintptr_t OwnerCamp, uintptr_t AttackerCamp, uintptr_t State) {
		return ((T (*)(DomAreaManager*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B31D60))(this, Id, OwnerCamp, AttackerCamp, State);
	}
	template <typename T = void> T TickDomAreaSound() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B30924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B31FCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B31FD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(DomAreaManager*))(Il2CppBase() + 0x2B31FDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B31FE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(DomAreaManager*, uintptr_t))(Il2CppBase() + 0x2B31FEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DomAreaManager*, float))(Il2CppBase() + 0x2B31FF4))(this, P0);
	}

};

}
