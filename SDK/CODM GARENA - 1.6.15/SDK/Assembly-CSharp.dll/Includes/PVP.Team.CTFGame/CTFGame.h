#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGame"));
	}

	template <typename T = uintptr_t> T& DefenderFlag() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& AttackerFlag() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& DefenderBase() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& AttackerBase() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefenderFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttackerFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefenderFlagBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttackerFlagBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideFlagBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideFlagBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCTFObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClientTryStopDeadReplayCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B25FD0))(this);
	}
	template <typename T = void> T SetDefenderFlag(uintptr_t flag) {
		return ((T (*)(CTFGame*, uintptr_t))(Il2CppBase() + 0x2B24F50))(this, flag);
	}
	template <typename T = void> T SetAttackerFlag(uintptr_t flag) {
		return ((T (*)(CTFGame*, uintptr_t))(Il2CppBase() + 0x2B2512C))(this, flag);
	}
	template <typename T = void> T SetDefenderFlagBase(uintptr_t flagBase) {
		return ((T (*)(CTFGame*, uintptr_t))(Il2CppBase() + 0x2B25BC4))(this, flagBase);
	}
	template <typename T = void> T SetAttackerFlagBase(uintptr_t flagBase) {
		return ((T (*)(CTFGame*, uintptr_t))(Il2CppBase() + 0x2B25C6C))(this, flagBase);
	}
	template <typename T = uintptr_t> T GetMineSideFlag() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B260FC))(this);
	}
	template <typename T = uintptr_t> T GetEnemySideFlag() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B262BC))(this);
	}
	template <typename T = uintptr_t> T GetMineSideFlagBase() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B2647C))(this);
	}
	template <typename T = uintptr_t> T GetEnemySideFlagBase() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B2663C))(this);
	}
	template <typename T = void> T OnDeadReplayBegin() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B267FC))(this);
	}
	template <typename T = void> T OnDeadReplayEnd() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B26E64))(this);
	}
	template <typename T = void> T ShowCTFObjects(bool bShow) {
		return ((T (*)(CTFGame*, bool))(Il2CppBase() + 0x2B26AF4))(this, bShow);
	}
	template <typename T = void> T ClientTryStopDeadReplayCallBack() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B272DC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B27550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B277B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayBegin() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B277BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B277C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(CTFGame*))(Il2CppBase() + 0x2B277CC))(this);
	}

};

}
