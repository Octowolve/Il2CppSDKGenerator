#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRUseDogTagComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRUseDogTagComponent"));
	}

	template <typename T = float> T& END_ANI_TIME() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& FX_SOCKET_3P() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& START_ANINAME_1P() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& START_ANINAME_3P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& START_ANINAME_3P_PRONE() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DOG_ASSET_ID_1P() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DOG_ASSET_ID_3P() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DOG_ASSET_Eff_1P() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_brPawn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_WaitUseItem() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsRealUseItem() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = float> T& m_ClentPreUseEndTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LastStartUseItemTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_NextCheckTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_MaxStopTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsLastProneing() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_CurrentModel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CurrentEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLoopAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUsingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReviveTeammateAnimArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = bool> T get_IsWeaponVisible() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263E2C4))(this);
	}
	template <typename T = bool> T get_IsClentUse() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263E3D8))(this);
	}
	template <typename T = void> T set_IsClentUse(bool value) {
		return ((T (*)(BRUseDogTagComponent*, bool))(Il2CppBase() + 0x263E3F0))(this, value);
	}
	template <typename T = bool> T get_IsUseItem() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263E42C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRUseDogTagComponent*, uintptr_t))(Il2CppBase() + 0x263E458))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRUseDogTagComponent*, float))(Il2CppBase() + 0x263E564))(this, deltaTime);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F3C0))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F53C))(this);
	}
	template <typename T = void> T OnOverAim() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F5EC))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F6A4))(this);
	}
	template <typename T = void> T FixPlayAnim() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F470))(this);
	}
	template <typename T = void> T DoPlayAnim(float playTime) {
		return ((T (*)(BRUseDogTagComponent*, float))(Il2CppBase() + 0x263F8CC))(this, playTime);
	}
	template <typename T = void> T ForceStopAnim() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x2640254))(this);
	}
	template <typename T = void> T StopAnim(bool isForce) {
		return ((T (*)(BRUseDogTagComponent*, bool))(Il2CppBase() + 0x263E84C))(this, isForce);
	}
	template <typename T = void> T ChangeLoopAni() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263EE6C))(this);
	}
	template <typename T = void> T CheckUsingAnim() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263F19C))(this);
	}
	template <typename T = bool> T IsInAnimationState(int32_t layerIndex, Il2CppString* stateName) {
		return ((T (*)(BRUseDogTagComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x26404C0))(this, layerIndex, stateName);
	}
	template <typename T = void> T GetReviveTeammateAnimArgs(uintptr_t* animName, uintptr_t* animLayer) {
		return ((T (*)(BRUseDogTagComponent*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x26400F4))(this, animName, animLayer);
	}
	template <typename T = void> T SetWeaponVisible(bool isVisible) {
		return ((T (*)(BRUseDogTagComponent*, bool))(Il2CppBase() + 0x263EC90))(this, isVisible);
	}
	template <typename T = void> T AttachModel() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x263FF48))(this);
	}
	template <typename T = void> T OnModelReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRUseDogTagComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x26407B4))(this, assetId, arg);
	}
	template <typename T = void> T DettachModel() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x2640360))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x2640E30))(this);
	}
	template <typename T = void> T DeleteEffect() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x2641204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRUseDogTagComponent*, uintptr_t))(Il2CppBase() + 0x264135C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRUseDogTagComponent*, float))(Il2CppBase() + 0x2641364))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x264136C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(BRUseDogTagComponent*))(Il2CppBase() + 0x2641374))(this);
	}

};

}
