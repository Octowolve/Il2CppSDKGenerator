#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SprintingBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SprintingBtnView"));
	}

	template <typename T = uintptr_t> T& RunSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& StopSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SprintClick() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Instance() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoveAixsEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoveAixsBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSprintingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1C9C))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1DD0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1DDC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1DE4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1DF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A1F3C))(this);
	}
	template <typename T = bool> T OnMoveAixsEnd() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2084))(this);
	}
	template <typename T = bool> T OnMoveAixsBegin() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2244))(this);
	}
	template <typename T = bool> T OnGamepadButtonClick() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2688))(this);
	}
	template <typename T = void> T OnSprintingBtnClick() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A23F8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2830))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SprintingBtnView*, float))(Il2CppBase() + 0x30A2838))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2A44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2A4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SprintingBtnView*))(Il2CppBase() + 0x30A2A54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SprintingBtnView*, float))(Il2CppBase() + 0x30A2A5C))(this, P0);
	}

};

}
