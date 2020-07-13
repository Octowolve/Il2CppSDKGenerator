#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameHudStateManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameHudStateManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& totalState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& m_LastTotalState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& cacheNoneValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bDirty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMultiStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMultiStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandlePhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVehicleAllState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameHudStateManager*))(Il2CppBase() + 0x321BCD4))(this);
	}
	template <typename T = uint64_t> T GetCurrentState() {
		return ((T (*)(GameHudStateManager*))(Il2CppBase() + 0x321BDAC))(this);
	}
	template <typename T = bool> T IsInCurrentState(uint64_t state) {
		return ((T (*)(GameHudStateManager*, uint64_t))(Il2CppBase() + 0x321BE7C))(this, state);
	}
	template <typename T = void> T AddState(uintptr_t state, bool forceRefresh) {
		return ((T (*)(GameHudStateManager*, uintptr_t, bool))(Il2CppBase() + 0x321BF78))(this, state, forceRefresh);
	}
	template <typename T = void> T AddMultiStates(uint64_t state, bool forceRefresh) {
		return ((T (*)(GameHudStateManager*, uint64_t, bool))(Il2CppBase() + 0x321C138))(this, state, forceRefresh);
	}
	template <typename T = void> T RemoveState(uintptr_t state, bool forceRefresh) {
		return ((T (*)(GameHudStateManager*, uintptr_t, bool))(Il2CppBase() + 0x3202EF0))(this, state, forceRefresh);
	}
	template <typename T = void> T RemoveMultiStates(uint64_t state, bool forceRefresh) {
		return ((T (*)(GameHudStateManager*, uint64_t, bool))(Il2CppBase() + 0x321C2F8))(this, state, forceRefresh);
	}
	template <typename T = bool> T CheckState(uintptr_t state) {
		return ((T (*)(GameHudStateManager*, uintptr_t))(Il2CppBase() + 0x321C4B8))(this, state);
	}
	template <typename T = bool> T IsActive(uintptr_t uiView) {
		return ((T (*)(GameHudStateManager*, uintptr_t))(Il2CppBase() + 0x321C5B8))(this, uiView);
	}
	template <typename T = void> T HandlePhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(GameHudStateManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x321C758))(this, preState, curState);
	}
	template <typename T = void> T ClearVehicleAllState() {
		return ((T (*)(GameHudStateManager*))(Il2CppBase() + 0x321CAE0))(this);
	}

};

}
