#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SpectatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SpectatorComponent"));
	}

	template <typename T = bool> T& m_IsIn1PSpectator() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& m_DelayOnWeaponChangeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& isCheckViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpectator1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectator3PFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpectator3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spectator3PViewCheckAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayOnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubWeaponStartFire_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubWeaponStopFire_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSubWeapon_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactiveSubWeapon_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncChangeClipStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncChangeClipLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncChangeClipEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpectatorRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spectating3PTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spectating1PTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Control1PTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Control3PTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = bool> T get_IsIn1PSpectator() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FD4BC))(this);
	}
	template <typename T = void> T ShowSpectator1PView() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FD4C4))(this);
	}
	template <typename T = void> T SwitchRole(uintptr_t viewType) {
		return ((T (*)(SpectatorComponent*, uintptr_t))(Il2CppBase() + 0x33FE1EC))(this, viewType);
	}
	template <typename T = float> T GetSpectator3PFOV() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FE350))(this);
	}
	template <typename T = void> T ShowSpectator3PView() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FE4E4))(this);
	}
	template <typename T = void> T Spectator3PViewCheckAimRotation() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FE78C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SpectatorComponent*, float))(Il2CppBase() + 0x33FEA1C))(this, deltaTime);
	}
	template <typename T = void> T OnWeaponAttachmentChanged() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FF420))(this);
	}
	template <typename T = void> T DelayOnWeaponChanged() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FED20))(this);
	}
	template <typename T = void> T OnWeaponChanged(uintptr_t invMgr) {
		return ((T (*)(SpectatorComponent*, uintptr_t))(Il2CppBase() + 0x33FF758))(this, invMgr);
	}
	template <typename T = bool> T CheckCanStartFire(uintptr_t weapon) {
		return ((T (*)(SpectatorComponent*, uintptr_t))(Il2CppBase() + 0x33FF930))(this, weapon);
	}
	template <typename T = void> T StartFire_1P(int32_t inFireCompIndex, bool setShotType, bool isSingleShot) {
		return ((T (*)(SpectatorComponent*, int32_t, bool, bool))(Il2CppBase() + 0x33FF530))(this, inFireCompIndex, setShotType, isSingleShot);
	}
	template <typename T = void> T SubWeaponStartFire_1P(int32_t inFireCompIndex, bool isSingleShot) {
		return ((T (*)(SpectatorComponent*, int32_t, bool))(Il2CppBase() + 0x33FFA84))(this, inFireCompIndex, isSingleShot);
	}
	template <typename T = void> T StopFire_1P() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x33FFC78))(this);
	}
	template <typename T = void> T SubWeaponStopFire_1P() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x34001B4))(this);
	}
	template <typename T = void> T ChangeWeapon_1P(int32_t weaponID, int32_t actorID, Il2CppList<uintptr_t>* partInfoList, uint32_t SkinID, int32_t slotId, int32_t weaponLevel, uint32_t crossHairID) {
		return ((T (*)(SpectatorComponent*, int32_t, int32_t, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x340027C))(this, weaponID, actorID, partInfoList, SkinID, slotId, weaponLevel, crossHairID);
	}
	template <typename T = void> T ChangeSubWeapon_1P(int32_t weaponID, int32_t slotId, int32_t actorID, uint32_t skinID) {
		return ((T (*)(SpectatorComponent*, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x3400558))(this, weaponID, slotId, actorID, skinID);
	}
	template <typename T = void> T DeactiveSubWeapon_1P() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x34006A8))(this);
	}
	template <typename T = void> T OnSyncAnimation_1P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(SpectatorComponent*, uintptr_t, float, float))(Il2CppBase() + 0x34007A4))(this, animName, animLength, Param1);
	}
	template <typename T = void> T OnSyncChangeClipStart(float Param1) {
		return ((T (*)(SpectatorComponent*, float))(Il2CppBase() + 0x3401588))(this, Param1);
	}
	template <typename T = void> T OnSyncChangeClipLoop(float Param1) {
		return ((T (*)(SpectatorComponent*, float))(Il2CppBase() + 0x340170C))(this, Param1);
	}
	template <typename T = void> T OnSyncChangeClipEnd() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3401824))(this);
	}
	template <typename T = void> T UpdateSpectatorRotation(bool isFirstPersonView) {
		return ((T (*)(SpectatorComponent*, bool))(Il2CppBase() + 0x3401954))(this, isFirstPersonView);
	}
	template <typename T = void> T Spectating3PTest() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3401BAC))(this);
	}
	template <typename T = void> T Spectating1PTest() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3401D7C))(this);
	}
	template <typename T = void> T Control1PTest() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3401F2C))(this);
	}
	template <typename T = void> T Control3PTest() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3402410))(this);
	}
	template <typename T = void> T ShowSpectator3PViewm__0() {
		return ((T (*)(SpectatorComponent*))(Il2CppBase() + 0x3402904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatorComponent*, float))(Il2CppBase() + 0x34029E0))(this, P0);
	}

};

}
