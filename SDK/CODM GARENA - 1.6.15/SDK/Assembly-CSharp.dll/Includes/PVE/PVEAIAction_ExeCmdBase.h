#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionExeCmdBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_ExeCmdBase"));
	}

	template <typename T = Il2CppString*> T& CmdName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RetryMaxTimes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& NotifyFsmResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& TimesOfRetry() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_CmdId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Coroutine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBehaviorChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbortCurrentBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Retry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCorrespondingBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryExeCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TryExeCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_CmdId() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436DBC4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436DBCC))(this);
	}
	template <typename T = bool> T IsBehaviorChanged(Il2CppString* desiredBehavior) {
		return ((T (*)(PVEAIActionExeCmdBase*, Il2CppString*))(Il2CppBase() + 0x436DDF0))(this, desiredBehavior);
	}
	template <typename T = void> T AbortCurrentBehavior() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436DEE4))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436DC80))(this);
	}
	template <typename T = uintptr_t> T Retry() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E268))(this);
	}
	template <typename T = Il2CppString*> T GetCorrespondingBehavior() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E458))(this);
	}
	template <typename T = bool> T TryExeCmd() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436DA4C))(this);
	}
	template <typename T = bool> T TryExeCmd_1(uintptr_t param) {
		return ((T (*)(PVEAIActionExeCmdBase*, uintptr_t))(Il2CppBase() + 0x436E4F8))(this, param);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E714))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E908))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBehaviorChanged(Il2CppString* P0) {
		return ((T (*)(PVEAIActionExeCmdBase*, Il2CppString*))(Il2CppBase() + 0x436E90C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AbortCurrentBehavior() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E910))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetCorrespondingBehavior() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExit() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E918))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVEAIActionExeCmdBase*))(Il2CppBase() + 0x436E920))(this);
	}

};

}
