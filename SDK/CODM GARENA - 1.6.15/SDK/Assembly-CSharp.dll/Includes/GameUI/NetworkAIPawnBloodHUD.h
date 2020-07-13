#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class NetworkAIPawnBloodHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "NetworkAIPawnBloodHUD"));
	}

	template <typename T = uintptr_t> T& UIWidget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BossName() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DebuffLayer() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> static T& FADE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LASTING_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FADE_OUT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DEAD_FADE_OUT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AboveHeadPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_NetWorkAIPawn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_LastTriggerTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsDead() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDebuffLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetArmored() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoTweenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTweenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseTweenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerShowImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init(uintptr_t netWorkAIPawn) {
		return ((T (*)(NetworkAIPawnBloodHUD*, uintptr_t))(Il2CppBase() + 0x1FAB11C))(this, netWorkAIPawn);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAB6A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAB7B4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAB870))(this);
	}
	template <typename T = void> T OnNotifyDebuffLayer(uintptr_t msg) {
		return ((T (*)(NetworkAIPawnBloodHUD*, uintptr_t))(Il2CppBase() + 0x1FAB9B4))(this, msg);
	}
	template <typename T = void> T SetArmored(bool armored) {
		return ((T (*)(NetworkAIPawnBloodHUD*, bool))(Il2CppBase() + 0x1FAB474))(this, armored);
	}
	template <typename T = void> T SetValue(float value, bool force) {
		return ((T (*)(NetworkAIPawnBloodHUD*, float, bool))(Il2CppBase() + 0x1FAB30C))(this, value, force);
	}
	template <typename T = bool> T CanDisplay(Il2CppVector3 worldPos) {
		return ((T (*)(NetworkAIPawnBloodHUD*, Il2CppVector3))(Il2CppBase() + 0x1FABC48))(this, worldPos);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FABDA8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(NetworkAIPawnBloodHUD*, float))(Il2CppBase() + 0x1FABDB0))(this, dt);
	}
	template <typename T = void> T UpdateValue() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC1CC))(this);
	}
	template <typename T = void> T DoTweenAlpha(uintptr_t tweenAlphaType) {
		return ((T (*)(NetworkAIPawnBloodHUD*, uintptr_t))(Il2CppBase() + 0x1FAC2D8))(this, tweenAlphaType);
	}
	template <typename T = bool> T SetTweenAlpha(float to, float duration) {
		return ((T (*)(NetworkAIPawnBloodHUD*, float, float))(Il2CppBase() + 0x1FAC490))(this, to, duration);
	}
	template <typename T = void> T CloseTweenAlpha() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC614))(this);
	}
	template <typename T = void> T TriggerShow() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC8AC))(this);
	}
	template <typename T = void> T TriggerShowImmediately() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC998))(this);
	}
	template <typename T = void> T CheckHide() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC0D8))(this);
	}
	template <typename T = void> T TriggerDie() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FACA64))(this);
	}
	template <typename T = void> T NotifyDead() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FAC6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FACB4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FACB54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NetworkAIPawnBloodHUD*))(Il2CppBase() + 0x1FACB5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIPawnBloodHUD*, float))(Il2CppBase() + 0x1FACB64))(this, P0);
	}

};

}
