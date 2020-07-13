#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PawnBuffList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllDelayBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNotExistBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffEffectHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllTriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPawnBuffIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildLocalPlayerBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnBuffMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T AddPlayer(uint32_t playerID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C4455C))(this, playerID);
	}
	template <typename T = void> T RemovePlayer(uint32_t playerID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C447E0))(this, playerID);
	}
	template <typename T = void> T UpdatePlayerPawn(uint32_t playerID, uintptr_t pawn) {
		return ((T (*)(BuffManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x3C44918))(this, playerID, pawn);
	}
	template <typename T = void> T AddBuff(uint32_t targetID, uint32_t givenByID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(BuffManager*, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3C44A3C))(this, targetID, givenByID, buffUID, buffID);
	}
	template <typename T = void> T RemoveBuff(uint32_t targetID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(BuffManager*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3C44B74))(this, targetID, buffUID, buffID);
	}
	template <typename T = void> T RemoveAllBuff(uint32_t targetID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C44CA4))(this, targetID);
	}
	template <typename T = void> T RemoveAllDelayBuff(uint32_t targetID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C44DA8))(this, targetID);
	}
	template <typename T = void> T RemoveNotExistBuff(uint32_t targetID, Il2CppList<uint32_t>* buffUIDList) {
		return ((T (*)(BuffManager*, uint32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x3C44EAC))(this, targetID, buffUIDList);
	}
	template <typename T = void> T SetBuffEffectHidden(uint32_t targetID, bool isHidden) {
		return ((T (*)(BuffManager*, uint32_t, bool))(Il2CppBase() + 0x3C44FD0))(this, targetID, isHidden);
	}
	template <typename T = void> T UpdateBuffState(uint32_t targetID, uint32_t buffUID, bool active, int32_t layer, float duration, bool trigger) {
		return ((T (*)(BuffManager*, uint32_t, uint32_t, bool, int32_t, float, bool))(Il2CppBase() + 0x3C450F4))(this, targetID, buffUID, active, layer, duration, trigger);
	}
	template <typename T = void> T RefreshAllTriggerEffect(uint32_t targetID, bool active) {
		return ((T (*)(BuffManager*, uint32_t, bool))(Il2CppBase() + 0x3C45254))(this, targetID, active);
	}
	template <typename T = void> T RefreshTriggerEffect(uint32_t targetID, bool active, uint32_t buffUID) {
		return ((T (*)(BuffManager*, uint32_t, bool, uint32_t))(Il2CppBase() + 0x3C45378))(this, targetID, active, buffUID);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffManager*, uintptr_t))(Il2CppBase() + 0x3C454A8))(this, msg);
	}
	template <typename T = int32_t> T FindPawnBuffIndex(uint32_t targetID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C44694))(this, targetID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffManager*, float))(Il2CppBase() + 0x3C455E4))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T BuildLocalPlayerBuffInfo() {
		return ((T (*)(BuffManager*))(Il2CppBase() + 0x3C4583C))(this);
	}
	template <typename T = uintptr_t> T GetPawnBuffMgr(uint32_t playerID) {
		return ((T (*)(BuffManager*, uint32_t))(Il2CppBase() + 0x3C459A0))(this, playerID);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffManager*, float))(Il2CppBase() + 0x3C45A98))(this, P0);
	}

};

}
