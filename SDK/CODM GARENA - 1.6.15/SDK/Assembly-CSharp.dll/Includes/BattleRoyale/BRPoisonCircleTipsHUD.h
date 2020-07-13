#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPoisonCircleTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPoisonCircleTipsHUD"));
	}

	template <typename T = uintptr_t> T& TimeTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TimeTipsLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ShrinkTips() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_leftTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& kNotificationStandardTimeArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimeTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShrinkTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnalysisTriggerNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAcrossTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0BD6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0BD74))(this);
	}
	template <typename T = bool> T BaseCheck() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0BE88))(this);
	}
	template <typename T = void> T OnTimeTipsShow(int32_t secondCount) {
		return ((T (*)(BRPoisonCircleTipsHUD*, int32_t))(Il2CppBase() + 0x1B0BFDC))(this, secondCount);
	}
	template <typename T = void> T OnShrinkTipsShow() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0C250))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0C33C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRPoisonCircleTipsHUD*, float))(Il2CppBase() + 0x1B0C344))(this, dt);
	}
	template <typename T = void> T AnalysisTriggerNotification(float lastTime, float currentTime) {
		return ((T (*)(BRPoisonCircleTipsHUD*, float, float))(Il2CppBase() + 0x1B0C478))(this, lastTime, currentTime);
	}
	template <typename T = bool> T IsAcrossTime(float lastTime, float currentTime, float standard) {
		return ((T (*)(BRPoisonCircleTipsHUD*, float, float, float))(Il2CppBase() + 0x1B0C7E0))(this, lastTime, currentTime, standard);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRPoisonCircleTipsHUD*))(Il2CppBase() + 0x1B0C9C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRPoisonCircleTipsHUD*, float))(Il2CppBase() + 0x1B0C9CC))(this, P0);
	}

};

}
