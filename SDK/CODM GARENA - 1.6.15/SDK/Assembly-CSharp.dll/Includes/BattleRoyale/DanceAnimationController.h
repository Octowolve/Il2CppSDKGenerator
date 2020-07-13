#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceAnimationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceAnimationController"));
	}

	template <typename T = int32_t> static T& DurationReachMilestone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CurAnimIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DanceState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*> T& m_DanceStateMachine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_AnimStateInfoDict() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnDanceAnimMilestone() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OnDanceAnimEnded() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubcomponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimationInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDanceStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StateTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimationTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimationDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDanceAnimCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDanceAnimCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConsecutiveDanceMilestone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DanceAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DanceAnimInterrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMusicChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartConsecutiveDance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DanceAnimDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DanceAnimControllerTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = int32_t> T get_CurAnimIndex() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D3FF78))(this);
	}
	template <typename T = uintptr_t> T get_DanceState() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D3FF80))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D3FF88))(this);
	}
	template <typename T = void> T InitStatus(bool bStartPlay, int32_t index, float elapseTime) {
		return ((T (*)(DanceAnimationController*, bool, int32_t, float))(Il2CppBase() + 0x3D40774))(this, bStartPlay, index, elapseTime);
	}
	template <typename T = void> T DestroySubcomponent() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D40930))(this);
	}
	template <typename T = void> T InitAnimationInfo() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D402E4))(this);
	}
	template <typename T = void> T InitDanceStateMachine() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D404D8))(this);
	}
	template <typename T = void> T AddTransition(uintptr_t curState, uintptr_t condition, uintptr_t nextState) {
		return ((T (*)(DanceAnimationController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D40CFC))(this, curState, condition, nextState);
	}
	template <typename T = uintptr_t> T StateTransition(uintptr_t condition) {
		return ((T (*)(DanceAnimationController*, uintptr_t))(Il2CppBase() + 0x3D40EB4))(this, condition);
	}
	template <typename T = bool> T CheckAnimationTransition(uintptr_t curState, uintptr_t nextState) {
		return ((T (*)(DanceAnimationController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D41020))(this, curState, nextState);
	}
	template <typename T = void> T SetAnimationDuration(float duration, uintptr_t state) {
		return ((T (*)(DanceAnimationController*, float, uintptr_t))(Il2CppBase() + 0x3D41558))(this, duration, state);
	}
	template <typename T = void> T RegisterDanceAnimCallback(uintptr_t curState, uintptr_t nextState) {
		return ((T (*)(DanceAnimationController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D41260))(this, curState, nextState);
	}
	template <typename T = void> T UnRegisterDanceAnimCallback() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D4149C))(this);
	}
	template <typename T = void> T ConsecutiveDanceMilestone() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D418A4))(this);
	}
	template <typename T = void> T DanceAnimEnd() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D41AAC))(this);
	}
	template <typename T = void> T DanceAnimInterrupted(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(DanceAnimationController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D41D30))(this, args);
	}
	template <typename T = void> T OnMusicChanged(bool bStartPlay, int32_t index, float elapsedTime) {
		return ((T (*)(DanceAnimationController*, bool, int32_t, float))(Il2CppBase() + 0x3D40850))(this, bStartPlay, index, elapsedTime);
	}
	template <typename T = void> T StartConsecutiveDance(bool bStartTimer, float durationToMileStone) {
		return ((T (*)(DanceAnimationController*, bool, float))(Il2CppBase() + 0x3D4166C))(this, bStartTimer, durationToMileStone);
	}
	template <typename T = void> T DanceAnimDuration(bool bStartTimer, float danceAnimDuration) {
		return ((T (*)(DanceAnimationController*, bool, float))(Il2CppBase() + 0x3D41788))(this, bStartTimer, danceAnimDuration);
	}
	template <typename T = void> T DanceAnimControllerTimer(uintptr_t inTimeDelegate, bool bStartTimer, float interval, bool bIsLooping) {
		return ((T (*)(DanceAnimationController*, uintptr_t, bool, float, bool))(Il2CppBase() + 0x3D41F00))(this, inTimeDelegate, bStartTimer, interval, bIsLooping);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D4202C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitStatus(bool P0, int32_t P1, float P2) {
		return ((T (*)(DanceAnimationController*, bool, int32_t, float))(Il2CppBase() + 0x3D42030))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySubcomponent() {
		return ((T (*)(DanceAnimationController*))(Il2CppBase() + 0x3D42108))(this);
	}

};

}
