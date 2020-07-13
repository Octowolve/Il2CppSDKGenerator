#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNonBattleAreaHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNonBattleAreaHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDown() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& CountDownTimeLimit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CurrentCountingTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_ProtectInitTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_WhenInitAwake() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& bCurrentShow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& bHasSendTimeoutRequest() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckNonBattleArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedSendNonBattleTimeoutRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA74F8))(this);
	}
	template <typename T = void> T OnGameReconnectSuccess() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA7720))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(BRNonBattleAreaHUD*, bool))(Il2CppBase() + 0x2DA75B0))(this, bShow);
	}
	template <typename T = bool> T NeedCheckNonBattleArea() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA7A80))(this);
	}
	template <typename T = bool> T NeedSendNonBattleTimeoutRequest() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA7B50))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA7BFC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRNonBattleAreaHUD*, float))(Il2CppBase() + 0x2DA7C04))(this, dt);
	}
	template <typename T = bool> T BaseCheck(uintptr_t localPawn) {
		return ((T (*)(BRNonBattleAreaHUD*, uintptr_t))(Il2CppBase() + 0x2DA8554))(this, localPawn);
	}
	template <typename T = void> static T OnGameReconnectSuccessm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DA8808))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA8814))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameReconnectSuccess() {
		return ((T (*)(BRNonBattleAreaHUD*))(Il2CppBase() + 0x2DA8818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRNonBattleAreaHUD*, float))(Il2CppBase() + 0x2DA881C))(this, P0);
	}

};

}
