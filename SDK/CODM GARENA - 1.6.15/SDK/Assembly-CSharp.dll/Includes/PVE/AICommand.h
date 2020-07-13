#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICommand"));
	}

	template <typename T = uintptr_t> T& MainCoroutine() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ChildCommand() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ChildStatus() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AIOwner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ShortName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsPendingPop() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_NeedNotifyFsmResult() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PerceptionDisabledByThisCmd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Coroutines() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TimerDelegates() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& CmdId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& NextValidCmdId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPrecondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopAllChildCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostPushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrePushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostResumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Delete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAbort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopSelfAndNotifyFsmIfNeeded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnsuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeStartCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTimerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseATargetIfNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = bool> T IsActive() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6794))(this);
	}
	template <typename T = void> T Init(uintptr_t param) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A43E0))(this, param);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AICommand*, float))(Il2CppBase() + 0x49A6894))(this, deltaTime);
	}
	template <typename T = bool> T CheckPrecondition() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A69CC))(this);
	}
	template <typename T = void> T TickActive() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6A9C))(this);
	}
	template <typename T = void> T PopAllChildCommand() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6B64))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A46E4))(this);
	}
	template <typename T = void> T PostPushed() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6C60))(this);
	}
	template <typename T = void> T PrePushed(uintptr_t aiController) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A6D68))(this, aiController);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A3BAC))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A4A78))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A4D04))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICommand*, Il2CppString*))(Il2CppBase() + 0x49A3AAC))(this, oldCmdName);
	}
	template <typename T = void> T PostResumed() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6E48))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A6F90))(this);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A70C8))(this);
	}
	template <typename T = bool> T CanAbort() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A73A8))(this);
	}
	template <typename T = void> T PopSelfAndNotifyFsmIfNeeded(uintptr_t cmdStatus) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A7478))(this, cmdStatus);
	}
	template <typename T = void> T SuppressAllReactions() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A75C8))(this);
	}
	template <typename T = void> T UnsuppressAllReactions() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A77F8))(this);
	}
	template <typename T = uintptr_t> T SafeStartCoroutine(uintptr_t routine) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A7A28))(this, routine);
	}
	template <typename T = uintptr_t> T SafeSetTimer(float InInterval, bool bLoop, uintptr_t InTimerDelegate, bool InAutoStart) {
		return ((T (*)(AICommand*, float, bool, uintptr_t, bool))(Il2CppBase() + 0x49A7B50))(this, InInterval, bLoop, InTimerDelegate, InAutoStart);
	}
	template <typename T = void> T ClearTimer(uintptr_t fun) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A7CB4))(this, fun);
	}
	template <typename T = bool> T IsTimerActive(uintptr_t fun) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A7DAC))(this, fun);
	}
	template <typename T = void> T NotifySeePlayer(uintptr_t SeenPlayer) {
		return ((T (*)(AICommand*, uintptr_t))(Il2CppBase() + 0x49A7EA4))(this, SeenPlayer);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A3B7C))(this);
	}
	template <typename T = uintptr_t> T get_TargetTransform() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A7F9C))(this);
	}
	template <typename T = uintptr_t> T get_AimTarget() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A63E0))(this);
	}
	template <typename T = bool> T CanAttackTarget() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A7FC8))(this);
	}
	template <typename T = void> T ChooseATargetIfNull() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A3F24))(this);
	}
	template <typename T = bool> T get_HasTarget() {
		return ((T (*)(AICommand*))(Il2CppBase() + 0x49A4010))(this);
	}

};

}
