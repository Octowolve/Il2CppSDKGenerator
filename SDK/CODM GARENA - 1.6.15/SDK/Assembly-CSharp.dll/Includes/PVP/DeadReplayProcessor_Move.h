#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Move"));
	}

	template <typename T = uint32_t> T& m_DeadID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_KillerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_MoveInfoDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppVector3>*> T& m_ReplayPlayerPosDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSniperMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDamageSyncMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckKillerMoveMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCalcList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxVel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothMoveInfo2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffsetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerFinalPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T get_MoveInfoDic() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x3461C54))(this);
	}
	template <typename T = void> T SetPlayerID(uint32_t deadID, uint32_t killerID) {
		return ((T (*)(DeadReplayProcessorMove*, uint32_t, uint32_t))(Il2CppBase() + 0x3461C5C))(this, deadID, killerID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x3461D20))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorMove*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3461E28))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T AddSniperMove(uintptr_t damageMsg, float shootTime, Il2CppVector3 targetPos) {
		return ((T (*)(DeadReplayProcessorMove*, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x34628BC))(this, damageMsg, shootTime, targetPos);
	}
	template <typename T = void> T CheckDamageSyncMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorMove*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3461F34))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckKillerMoveMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorMove*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x34622E4))(this, data, index, shootTime);
	}
	template <typename T = void> T AddMoveInfo(uint32_t playerID, float time, Il2CppVector3 position, Il2CppQuaternion rotation, Il2CppVector3 velocity, bool isKeyMove, unsigned char moveState) {
		return ((T (*)(DeadReplayProcessorMove*, uint32_t, float, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, bool, unsigned char))(Il2CppBase() + 0x3462CE0))(this, playerID, time, position, rotation, velocity, isKeyMove, moveState);
	}
	template <typename T = int32_t> T GetMinRange() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x3463108))(this);
	}
	template <typename T = int32_t> T GetMaxRange() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x34631A8))(this);
	}
	template <typename T = void> T ProcessMoveInfo() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x344A88C))(this);
	}
	template <typename T = void> T CheckCalcList(int32_t totalCalcTimes, Il2CppList<uintptr_t>* keyMoveCalcInfoList) {
		return ((T (*)(DeadReplayProcessorMove*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x34632E0))(this, totalCalcTimes, keyMoveCalcInfoList);
	}
	template <typename T = void> T LogMoveInfo() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x3463248))(this);
	}
	template <typename T = void> T SmoothMoveInfo(Il2CppList<uintptr_t>* moveInfoList) {
		return ((T (*)(DeadReplayProcessorMove*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x34636F4))(this, moveInfoList);
	}
	template <typename T = float> T GetMaxVel() {
		return ((T (*)(DeadReplayProcessorMove*))(Il2CppBase() + 0x3463D4C))(this);
	}
	template <typename T = void> T SmoothMoveInfo2(Il2CppList<uintptr_t>* moveInfoList) {
		return ((T (*)(DeadReplayProcessorMove*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3463908))(this, moveInfoList);
	}
	template <typename T = float> T GetOffsetTime(int32_t indexI, int32_t indexJ, Il2CppList<uintptr_t>* moveInfoList, bool withVecocity) {
		return ((T (*)(DeadReplayProcessorMove*, int32_t, int32_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x346344C))(this, indexI, indexJ, moveInfoList, withVecocity);
	}
	template <typename T = int32_t> T GetMoveInfo(uint32_t playerID, float lerpTime, uintptr_t moveInfo) {
		return ((T (*)(DeadReplayProcessorMove*, uint32_t, float, uintptr_t))(Il2CppBase() + 0x344F8E0))(this, playerID, lerpTime, moveInfo);
	}
	template <typename T = Il2CppVector3> T GetPlayerFinalPos(uint32_t playerID) {
		return ((T (*)(DeadReplayProcessorMove*, uint32_t))(Il2CppBase() + 0x3463DF0))(this, playerID);
	}

};

}
