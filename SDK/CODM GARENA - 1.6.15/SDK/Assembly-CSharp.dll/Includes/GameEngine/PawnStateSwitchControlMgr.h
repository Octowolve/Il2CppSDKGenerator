#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnStateSwitchControlMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnStateSwitchControlMgr"));
	}

	template <typename T = uintptr_t> T& mPawnState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLockPawnState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnSwitchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPawnSwitchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InPawnSwitchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbidInCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockAllState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockPawnStateExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockPawnStateExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_PawnState() {
		return ((T (*)(PawnStateSwitchControlMgr*))(Il2CppBase() + 0x273DA78))(this);
	}
	template <typename T = uintptr_t> T get_CurrentLockPawnState() {
		return ((T (*)(PawnStateSwitchControlMgr*))(Il2CppBase() + 0x273DA80))(this);
	}
	template <typename T = void> T set_CurrentLockPawnState(uintptr_t value) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273DA88))(this, value);
	}
	template <typename T = void> T ResetState() {
		return ((T (*)(PawnStateSwitchControlMgr*))(Il2CppBase() + 0x273DA98))(this);
	}
	template <typename T = void> T SetPawnSwitchState(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273DB40))(this, state);
	}
	template <typename T = void> T ResetPawnSwitchState(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273DC0C))(this, state);
	}
	template <typename T = bool> T InPawnSwitchState(uintptr_t swithcState) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273DCD8))(this, swithcState);
	}
	template <typename T = bool> T IsForbidInCurrentState(uintptr_t uiState) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273DD9C))(this, uiState);
	}
	template <typename T = void> T LockAllState() {
		return ((T (*)(PawnStateSwitchControlMgr*))(Il2CppBase() + 0x273DE7C))(this);
	}
	template <typename T = void> T ResetLockState() {
		return ((T (*)(PawnStateSwitchControlMgr*))(Il2CppBase() + 0x273E31C))(this);
	}
	template <typename T = void> T LockPawnState(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273E3C4))(this, state);
	}
	template <typename T = void> T ResetLockPawnState(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273E610))(this, state);
	}
	template <typename T = void> T LockPawnStateExcept(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273E85C))(this, state);
	}
	template <typename T = void> T ResetLockPawnStateExcept(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273E930))(this, state);
	}
	template <typename T = bool> T IsLockPawnState(uintptr_t state) {
		return ((T (*)(PawnStateSwitchControlMgr*, uintptr_t))(Il2CppBase() + 0x273E9FC))(this, state);
	}

};

}
