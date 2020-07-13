#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ReplayDataInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ReplayDataInfo"));
	}

	template <typename T = uintptr_t> T& ReplayType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& DeadID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& KillerPlayerID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& KillerActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& KillerCamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& KillerWeaponID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& KillerWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& KillReplayTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsKillerInitInSnipeZooming() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsKillerInitInFOV() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& DeadType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& KillerKillNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& SufferKillNum() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uint32_t> T& KillerIndividuationID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_MoveProcessor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ProcessorList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& FrameSet() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_KillerWeaponInfo_SwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ResReplayDataList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_RelevantPlayerIDList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_SkillPlayerIDList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SkillList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplayID_Static() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOriginalID_Static() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplayID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOriginalID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReplayInitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyDeathInitItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddReplayInitPlayerBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplayInitPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReplayInitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillerWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBatchAIAttackMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreProcessWeaponName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseKillReplayFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDamageSyncMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckKillSyncMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwitchWeaponMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayPawnRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKilledByWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponIDWithDeadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uintptr_t> T get_MoveProcessor() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2AA4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ProcessorList() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2AAC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_SkillPlayerIDList() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2AB4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SkillList() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2ABC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE0EFC))(this);
	}
	template <typename T = uintptr_t> T GetSpecialProcess() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2AC4))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(ReplayDataInfo*, uint32_t))(Il2CppBase() + 0x2DE2E30))(this, actorID);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2F04))(this);
	}
	template <typename T = bool> T NeedCalculateCamera3P() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE2FCC))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(ReplayDataInfo*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DE3094))(this, camera, position, rotation);
	}
	template <typename T = void> T CalculateCamera3P(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(ReplayDataInfo*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DE3184))(this, camera, position, rotation);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE19B4))(this);
	}
	template <typename T = bool> static T IsReplayID(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2DE2934))(0, id);
	}
	template <typename T = uint32_t> static T GetReplayID_Static(uint32_t originalID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2DE3274))(0, originalID);
	}
	template <typename T = uint32_t> static T GetOriginalID_Static(uint32_t fakeID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2DE3354))(0, fakeID);
	}
	template <typename T = uint32_t> T GetReplayID(uint32_t originalID) {
		return ((T (*)(ReplayDataInfo*, uint32_t))(Il2CppBase() + 0x2DE3430))(this, originalID);
	}
	template <typename T = uint32_t> T GetOriginalID(uint32_t fakeID) {
		return ((T (*)(ReplayDataInfo*, uint32_t))(Il2CppBase() + 0x2DE34DC))(this, fakeID);
	}
	template <typename T = bool> T ReplaceID(uint32_t srcID, uintptr_t* destID) {
		return ((T (*)(ReplayDataInfo*, uint32_t, uintptr_t*))(Il2CppBase() + 0x2DE3588))(this, srcID, destID);
	}
	template <typename T = bool> T SetReplayInitData(uintptr_t data) {
		return ((T (*)(ReplayDataInfo*, uintptr_t))(Il2CppBase() + 0x2DE3654))(this, data);
	}
	template <typename T = uintptr_t> T CopyDeathInitItem(uintptr_t source) {
		return ((T (*)(ReplayDataInfo*, uintptr_t))(Il2CppBase() + 0x2DE3A0C))(this, source);
	}
	template <typename T = void> T AddReplayInitPlayerBuff(uint32_t playerID, uint32_t fakePlayerID) {
		return ((T (*)(ReplayDataInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x2DE42D8))(this, playerID, fakePlayerID);
	}
	template <typename T = bool> T GetReplayInitPlayerID(int32_t index, uintptr_t playerID, uintptr_t camp, uintptr_t playerState, uintptr_t roleID) {
		return ((T (*)(ReplayDataInfo*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DE4574))(this, index, playerID, camp, playerState, roleID);
	}
	template <typename T = bool> T GetReplayInitInfo(uint32_t playerID, uintptr_t* initState, uintptr_t* initPos, uintptr_t* initFace, uintptr_t* weaponInfo, uintptr_t* health) {
		return ((T (*)(ReplayDataInfo*, uint32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2DE47A8))(this, playerID, initState, initPos, initFace, weaponInfo, health);
	}
	template <typename T = uintptr_t> T GetKillerWeaponInfo() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE4AC0))(this);
	}
	template <typename T = void> T CheckBatchAIAttackMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(ReplayDataInfo*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x2DE4BFC))(this, data, index, shootTime);
	}
	template <typename T = uintptr_t> T PreProcessWeaponName(uintptr_t oldName) {
		return ((T (*)(ReplayDataInfo*, uintptr_t))(Il2CppBase() + 0x2DE2D7C))(this, oldName);
	}
	template <typename T = void> T RemoveSkill(Il2CppList<uint32_t>* playerList, Il2CppList<uintptr_t>* skillList) {
		return ((T (*)(ReplayDataInfo*, Il2CppList<uint32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2DE5564))(this, playerList, skillList);
	}
	template <typename T = void> T ParseKillReplayFrame(Il2CppArray<uintptr_t>* data, float replayTime, int32_t frameIndex) {
		return ((T (*)(ReplayDataInfo*, Il2CppArray<uintptr_t>*, float, int32_t))(Il2CppBase() + 0x2DE57DC))(this, data, replayTime, frameIndex);
	}
	template <typename T = void> T CheckDamageSyncMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(ReplayDataInfo*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x2DE5AD8))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckKillSyncMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime, int32_t frameIndex) {
		return ((T (*)(ReplayDataInfo*, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x2DE5D10))(this, data, index, shootTime, frameIndex);
	}
	template <typename T = void> T CheckSwitchWeaponMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime, int32_t frameIndex) {
		return ((T (*)(ReplayDataInfo*, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x2DE5FA8))(this, data, index, shootTime, frameIndex);
	}
	template <typename T = bool> T IsReplayPawnRelevant(uint32_t playerID) {
		return ((T (*)(ReplayDataInfo*, uint32_t))(Il2CppBase() + 0x2DE614C))(this, playerID);
	}
	template <typename T = bool> T IsKilledByWeapon(uintptr_t checkWeaponName) {
		return ((T (*)(ReplayDataInfo*, uintptr_t))(Il2CppBase() + 0x2DE643C))(this, checkWeaponName);
	}
	template <typename T = void> T SetWeaponIDWithDeadType() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE391C))(this);
	}
	template <typename T = void> T ParseSyncBuffer() {
		return ((T (*)(ReplayDataInfo*))(Il2CppBase() + 0x2DE6540))(this);
	}
	template <typename T = void> T ParseSyncNotify(uintptr_t RecData) {
		return ((T (*)(ReplayDataInfo*, uintptr_t))(Il2CppBase() + 0x2DE65D8))(this, RecData);
	}

};

}
