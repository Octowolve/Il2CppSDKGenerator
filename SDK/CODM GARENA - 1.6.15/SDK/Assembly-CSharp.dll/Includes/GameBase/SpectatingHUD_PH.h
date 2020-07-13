#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpectatingHUDPH
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpectatingHUD_PH"));
	}

	template <typename T = uintptr_t> T& PropBG() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& HumanBG() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& PropIcon() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& HumanIcon() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& HumanDetailCell() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& PropDetailCell() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& PropHuntBetCell() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& m_CurPropItemID() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& m_BetTipsFlag() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& m_NoMoneyTipsFlag() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextPlayerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectatingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowBetCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDeadObjectObserveHuman() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWhenObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrenadeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEmptyUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PropHuntNoteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T OnNextPlayerClick() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309D244))(this);
	}
	template <typename T = void> T CheckSpectatingMode() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309D4D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309D818))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingHUDPH*, float))(Il2CppBase() + 0x309DACC))(this, dt);
	}
	template <typename T = void> T UpdateCommonInfo() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309DB7C))(this);
	}
	template <typename T = bool> T ShouldShowBetCell() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309DFF8))(this);
	}
	template <typename T = bool> T IsDeadObjectObserveHuman(uintptr_t localPlayerInfo, uintptr_t propHuntPlayerInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t))(Il2CppBase() + 0x309E310))(this, localPlayerInfo, propHuntPlayerInfo);
	}
	template <typename T = void> T UpdateWhenObserve(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309E41C))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309EB10))(this);
	}
	template <typename T = void> T UpdateGrenadeInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309F080))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateKillStreakInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309F728))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateUltInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309F7E4))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateEmptyUI(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309F8A0))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T PropHuntNoteBtnClick(uintptr_t obj) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t))(Il2CppBase() + 0x309FA58))(this, obj);
	}
	template <typename T = void> T UpdateCommonInfom__0() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FD64))(this);
	}
	template <typename T = bool> T UpdateWeaponInfom__1(uintptr_t s) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t))(Il2CppBase() + 0x309FE40))(this, s);
	}
	template <typename T = void> T PropHuntNoteBtnClickm__2() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FE84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNextPlayerClick() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FF68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FF6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingHUDPH*, float))(Il2CppBase() + 0x309FF70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCommonInfo() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FF74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWhenObserve(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309FF78))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeaponInfo() {
		return ((T (*)(SpectatingHUDPH*))(Il2CppBase() + 0x309FF90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateGrenadeInfo(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309FF94))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateKillStreakInfo(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309FFAC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltInfo(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309FFC4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEmptyUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(SpectatingHUDPH*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309FFDC))(this, P0, P1, P2);
	}

};

}
