#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpectatingHUDMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpectatingHUD_MP"));
	}

	template <typename T = uintptr_t> T& RegularColor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& RebelColor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& FFANormalColor() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& CarePackageStreakIcon() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GrenadeIconList() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillStreakIconList() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillStreakActiveIconList() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillStreakCurIconList() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& StreakScoreLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& StreakScoreSlider() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& BombIcon_Regular() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BombIcon_Rebel() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& UltIcon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& UltBG() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& UltEnergySprite() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& StreakRoot() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& StreakEmptyGO() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& GrenadeBG_1() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& GrenadeBG_2() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& GrenadeEmptyGO_1() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& GrenadeEmptyGO_2() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& SkillGO() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& SkillEmptyGO() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& BottomGrid() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& WeaponWidget() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_LastStreakScore() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& m_CurStreakScore() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextPlayerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoleHUDInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWhenObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillStreakInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStreakValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCarePackageStreakValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrenadeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBombIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEmptyUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWidgetAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T OnNextPlayerClick() {
		return ((T (*)(SpectatingHUDMP*))(Il2CppBase() + 0x309A638))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingHUDMP*, float))(Il2CppBase() + 0x309A824))(this, dt);
	}
	template <typename T = void> T UpdateRoleHUDInfo(uintptr_t currPlayerInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t))(Il2CppBase() + 0x309AA24))(this, currPlayerInfo);
	}
	template <typename T = void> T UpdateWhenObserve(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309AD34))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateKillStreakInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309B3A4))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = bool> T IsStreakValid(uintptr_t playerInfo, int32_t itemID) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, int32_t))(Il2CppBase() + 0x309C344))(this, playerInfo, itemID);
	}
	template <typename T = bool> T IsCarePackageStreakValid(uintptr_t playerInfo, uintptr_t obInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x309C26C))(this, playerInfo, obInfo);
	}
	template <typename T = void> T SortKillStreak(uintptr_t obInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t))(Il2CppBase() + 0x309BF74))(this, obInfo);
	}
	template <typename T = void> T UpdateGrenadeInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309C448))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateUltInfo(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309C80C))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateBombIcon(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309CB60))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateEmptyUI(uintptr_t playerInfo, uintptr_t obInfo, uintptr_t bulletInfo) {
		return ((T (*)(SpectatingHUDMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x309CE30))(this, playerInfo, obInfo, bulletInfo);
	}
	template <typename T = void> T UpdateWidgetAnchors() {
		return ((T (*)(SpectatingHUDMP*))(Il2CppBase() + 0x309D04C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNextPlayerClick() {
		return ((T (*)(SpectatingHUDMP*))(Il2CppBase() + 0x309D19C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingHUDMP*, float))(Il2CppBase() + 0x309D1A0))(this, P0);
	}

};

}
