#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectElectric
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_Electric"));
	}

	template <typename T = int32_t> T& m_EffectAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_3PHitEffect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ViewType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsObChanged() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsPlay1PElectric() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_IsPlay3PElectric() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& m_IsLockInput() {
		return *(T*)((uintptr_t)this + 0x3F);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTargetPawnUsingKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayElectric_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopElectric_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimation_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAudio_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayElectric_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopElectric_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimation_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAudio_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPawnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BreakPawnPhysic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanLockInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPlayElectric1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPlayElectric3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = bool> T get_IsPersistent() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3754C28))(this);
	}
	template <typename T = bool> T get_OnlyForLocalPlayer() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3754C30))(this);
	}
	template <typename T = bool> T get_ControlCameraEffect() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3754C38))(this);
	}
	template <typename T = bool> T IsTargetPawnUsingKillStreak() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3754C40))(this);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3755110))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x375625C))(this);
	}
	template <typename T = void> T PlayElectric_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3755F88))(this, pawn);
	}
	template <typename T = void> T StopElectric_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3756698))(this, pawn);
	}
	template <typename T = void> T PlayAnimation_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3756B80))(this, pawn);
	}
	template <typename T = void> T PlayEffect_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3756810))(this, pawn);
	}
	template <typename T = void> T PlayAudio_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3757040))(this, pawn);
	}
	template <typename T = void> T StopAnimation_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x37571EC))(this, pawn);
	}
	template <typename T = void> T StopEffect_3P() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3757598))(this);
	}
	template <typename T = void> T StopAudio_3P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x37573BC))(this, pawn);
	}
	template <typename T = void> T PlayElectric_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3755EA8))(this, pawn);
	}
	template <typename T = void> T StopElectric_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x37565C0))(this, pawn);
	}
	template <typename T = void> T PlayAnimation_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3757BAC))(this, pawn);
	}
	template <typename T = void> T PlayEffect_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x37577C8))(this, pawn);
	}
	template <typename T = void> T PlayAudio_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3757F28))(this, pawn);
	}
	template <typename T = void> T StopAnimation_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x37580D4))(this, pawn);
	}
	template <typename T = void> T StopEffect_1P() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x37585CC))(this);
	}
	template <typename T = void> T StopAudio_1P(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3758448))(this, pawn);
	}
	template <typename T = void> T StopPawnMove(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3755CF0))(this, pawn);
	}
	template <typename T = void> T BreakPawnPhysic(uintptr_t pawn) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3756068))(this, pawn);
	}
	template <typename T = void> T OnSwitchWeapon() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x37587E0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectElectric*, float))(Il2CppBase() + 0x3758ABC))(this, deltaTime);
	}
	template <typename T = void> T ChangeView(uintptr_t viewType) {
		return ((T (*)(BuffEffectElectric*, uintptr_t))(Il2CppBase() + 0x3758CE4))(this, viewType);
	}
	template <typename T = bool> T IsCanLockInput() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3755BC8))(this);
	}
	template <typename T = bool> T IsCanPlayElectric1P() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3757728))(this);
	}
	template <typename T = bool> T IsCanPlayElectric3P() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3756770))(this);
	}
	template <typename T = bool> T IsChangePawn() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3758E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3759024))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectElectric*))(Il2CppBase() + 0x3759028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectElectric*, float))(Il2CppBase() + 0x375902C))(this, P0);
	}

};

}
