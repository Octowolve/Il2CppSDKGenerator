#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnBuffManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnBuffManager"));
	}

	template <typename T = uint32_t> T& m_TargetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BuffList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EffectInstanceList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllDelayBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNotExistBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffEffectHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllTriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffTimeOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSameGroupBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSameIDBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSameUIDBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AccessEffectInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindBuffIDByEffectName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uint32_t> T get_TargetID() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A1AC8))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A1AD0))(this);
	}
	template <typename T = void> T Init(uint32_t targetID) {
		return ((T (*)(PawnBuffManager*, uint32_t))(Il2CppBase() + 0x16A1AD8))(this, targetID);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A1B80))(this);
	}
	template <typename T = void> T UpdateTarget(uintptr_t target) {
		return ((T (*)(PawnBuffManager*, uintptr_t))(Il2CppBase() + 0x16A1DE0))(this, target);
	}
	template <typename T = void> T AddBuff(uint32_t from, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(PawnBuffManager*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x16A1FB8))(this, from, buffUID, buffID);
	}
	template <typename T = void> T AddBuff_1(uint32_t from, uint32_t buffUID, uintptr_t conf) {
		return ((T (*)(PawnBuffManager*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x16A20F4))(this, from, buffUID, conf);
	}
	template <typename T = void> T RemoveBuff(uint32_t buffUID, int32_t buffID, bool removeAllBuff) {
		return ((T (*)(PawnBuffManager*, uint32_t, int32_t, bool))(Il2CppBase() + 0x16A244C))(this, buffUID, buffID, removeAllBuff);
	}
	template <typename T = void> T RemoveAllBuff() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A26C4))(this);
	}
	template <typename T = void> T RemoveAllDelayBuff() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A2878))(this);
	}
	template <typename T = void> T RemoveNotExistBuff(Il2CppList<uint32_t>* buffUIDList) {
		return ((T (*)(PawnBuffManager*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x16A2A4C))(this, buffUIDList);
	}
	template <typename T = void> T SetBuffEffectHidden(bool isHidden) {
		return ((T (*)(PawnBuffManager*, bool))(Il2CppBase() + 0x16A2C74))(this, isHidden);
	}
	template <typename T = void> T UpdateBuffState(uint32_t buffUID, bool active, int32_t layer, float duration, bool trigger) {
		return ((T (*)(PawnBuffManager*, uint32_t, bool, int32_t, float, bool))(Il2CppBase() + 0x16A2DB0))(this, buffUID, active, layer, duration, trigger);
	}
	template <typename T = void> T RefreshTriggerEffect(uint32_t buffUID, bool active) {
		return ((T (*)(PawnBuffManager*, uint32_t, bool))(Il2CppBase() + 0x16A2F7C))(this, buffUID, active);
	}
	template <typename T = void> T RefreshAllTriggerEffect(bool active) {
		return ((T (*)(PawnBuffManager*, bool))(Il2CppBase() + 0x16A310C))(this, active);
	}
	template <typename T = void> T OnBuffTimeOver(uintptr_t buff) {
		return ((T (*)(PawnBuffManager*, uintptr_t))(Il2CppBase() + 0x16A3248))(this, buff);
	}
	template <typename T = bool> T CheckSameGroupBuff(uintptr_t conf, uintptr_t buff) {
		return ((T (*)(PawnBuffManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A33C4))(this, conf, buff);
	}
	template <typename T = bool> T CheckSameIDBuff(uintptr_t conf, uintptr_t buff) {
		return ((T (*)(PawnBuffManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A3594))(this, conf, buff);
	}
	template <typename T = bool> T CheckSameUIDBuff(uint32_t uid) {
		return ((T (*)(PawnBuffManager*, uint32_t))(Il2CppBase() + 0x16A22FC))(this, uid);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(PawnBuffManager*, uintptr_t))(Il2CppBase() + 0x16A374C))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnBuffManager*, float))(Il2CppBase() + 0x16A3888))(this, deltaTime);
	}
	template <typename T = uintptr_t> T AccessEffectInstance() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x334CF70))(this);
	}
	template <typename T = Il2CppString*> T BuildBuffInfo() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A3B8C))(this);
	}
	template <typename T = int32_t> T FindBuffIDByEffectName(Il2CppString* effectName) {
		return ((T (*)(PawnBuffManager*, Il2CppString*))(Il2CppBase() + 0x16A3D94))(this, effectName);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllBuff() {
		return ((T (*)(PawnBuffManager*))(Il2CppBase() + 0x16A3F78))(this);
	}

};

}
