#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonTools"));
	}

	template <typename T = int32_t> static T& SmallIntToStrCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SmallIntToStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Lobby2DetailAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& Detail2LobbyAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& UI_DELAY_REFRESH_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& NUCLEAR_BOMB_STREAK_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> static T& DEFAULT_WEAPON_EULERANGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& ShowVideoLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& PEAK_CONVERT_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_NORMAL_MAX_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& BR_TEAM_SEAT_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& BR_TEAM_SEAT_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& BR_TEAM_SEAT_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& BR_TEAM_SEAT_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& BR_TEAM_SIGN_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppString*> static T& BR_TEAM_SIGN_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppString*> static T& BR_TEAM_SIGN_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppString*> static T& BR_TEAM_SIGN_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BR_TEAM_COLORS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppQuaternion> static T& WEAPON_ROTATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = Il2CppQuaternion> static T& THROW_WEAPON_ROTATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = Il2CppString*> static T& m_PreShowOffLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SafeSetClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeIsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeIsSelfActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeIsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeIsSelfActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SafeSetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SafeSetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetLabel_LOCID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SafeSetLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SafeSetLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_SafeSetLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetWidgetShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpriteNameAuto() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpriteNameMakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpriteNameRatioPixel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpritePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSpriteFillAmount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSIItemNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidgetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SafeSetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetLocalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCompGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContainerGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColliderEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafePlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BuildString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindClickEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BindClickEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HexToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherLevelProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelInfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelStringByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CompareLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherLevelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrTeamSeatColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrTeamSignSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrTeamColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HexToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChestBackgroundQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLargeBackgroundQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSmallBackgroundQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonWeaponQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonWeaponQualitySprite2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonWeaponQualitySprite3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonRoleQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonItemQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuckyBoardItemQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuckyDrawQualitySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBroadcastTipBGSpirte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeContextColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeContextColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemIconCheckRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopTypeByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UlongByInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFixIconByLevelUnlockConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelUnlockConfigByIconId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoneySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUILabelTextLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUILabelTextLengthImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigByScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDiffPosToParentObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetDiffPosToParentObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelByUIFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelByUIFlowTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankUpShowOffLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveWithAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChildDontInstantiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddChildDontInstantiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}

	template <typename T = void> static T SafeSetClick(uintptr_t obj, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29DB754))(0, obj, callback);
	}
	template <typename T = void> static T SafeSetClick_1(uintptr_t component, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E4284))(0, component, callback);
	}
	template <typename T = void> static T SafeSetEnable(uintptr_t collider, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E43E4))(0, collider, enable);
	}
	template <typename T = void> static T SafeSetClick_2(uintptr_t BtnTemp, uintptr_t func, Il2CppString* BtnLabel) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x29E452C))(0, BtnTemp, func, BtnLabel);
	}
	template <typename T = void> static T SafeSetAlpha(uintptr_t component, bool active) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E473C))(0, component, active);
	}
	template <typename T = void> static T SafeSetActive(uintptr_t component, bool active) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x299D8F0))(0, component, active);
	}
	template <typename T = void> static T SafeSetActive_1(uintptr_t go, bool active) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29A1138))(0, go, active);
	}
	template <typename T = void> static T SafeSetActive_2(Il2CppArray<uintptr_t>* objs, bool active) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x29D01AC))(0, objs, active);
	}
	template <typename T = bool> static T SafeIsActive(uintptr_t component) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E492C))(0, component);
	}
	template <typename T = bool> static T SafeIsSelfActive(uintptr_t component) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29D2570))(0, component);
	}
	template <typename T = bool> static T SafeIsActive_1(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29C4338))(0, go);
	}
	template <typename T = bool> static T SafeIsSelfActive_1(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E4A84))(0, go);
	}
	template <typename T = void> static T SafeSetValue(uintptr_t toggle, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E4BCC))(0, toggle, value);
	}
	template <typename T = void> static T SafeSetValue_1(uintptr_t slider, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x29E4D14))(0, slider, value);
	}
	template <typename T = void> static T SafeSetColor(uintptr_t slider, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E4E5C))(0, slider, color);
	}
	template <typename T = void> static T RefreshDraw(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29D8304))(0, obj);
	}
	template <typename T = void> static T SafeSetAlpha_1(uintptr_t rect, bool show) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x299D788))(0, rect, show);
	}
	template <typename T = void> static T SafeSetAlpha_2(uintptr_t rect, bool show, float alpha) {
		return ((T (*)(void *, uintptr_t, bool, float))(Il2CppBase() + 0x29E4FD8))(0, rect, show, alpha);
	}
	template <typename T = void> static T SafeSetAlpha_3(uintptr_t rect, float alpha) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x29DBBDC))(0, rect, alpha);
	}
	template <typename T = void> static T SafeSetLabel_LOCID(uintptr_t label, Il2CppString* locid) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x299F824))(0, label, locid);
	}
	template <typename T = void> static T SafeSetLabel(uintptr_t label, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x29A0B08))(0, label, text);
	}
	template <typename T = void> static T SafeSetLabel_1(uintptr_t label, int32_t intValue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x29DBD30))(0, label, intValue);
	}
	template <typename T = void> static T SafeSetLabel_2(uintptr_t label, uintptr_t builder, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x29E5168))(0, label, builder, format, args);
	}
	template <typename T = void> static T SafeSetLabel_3(uintptr_t label, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x29E53EC))(0, label, bytes);
	}
	template <typename T = void> static T SafeSetLabel_4(uintptr_t label, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E5600))(0, label, color);
	}
	template <typename T = void> static T SetSprte(uintptr_t sprite, uintptr_t tintColor) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E5780))(0, sprite, tintColor);
	}
	template <typename T = void> static T SafeSetColor_1(uintptr_t widget, uintptr_t tintColor) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x299FBDC))(0, widget, tintColor);
	}
	template <typename T = void> static T SafeSetWidgetShow(uintptr_t widget, bool show) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E5900))(0, widget, show);
	}
	template <typename T = void> static T SafeSetSpriteName(uintptr_t sprite, Il2CppString* spriteName, Il2CppVector2 fitRect, bool keepOriginalSizeIfSmaller) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppVector2, bool))(Il2CppBase() + 0x29E5A68))(0, sprite, spriteName, fitRect, keepOriginalSizeIfSmaller);
	}
	template <typename T = void> static T SafeSetSpriteName_1(uintptr_t sprite, Il2CppString* spriteName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x29AC5AC))(0, sprite, spriteName);
	}
	template <typename T = void> static T SafeSetSpriteNameAuto(uintptr_t sprite, Il2CppString* spriteName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x299FA90))(0, sprite, spriteName);
	}
	template <typename T = void> static T SafeSetSpriteNameMakePixelPerfect(uintptr_t sprite, Il2CppString* spriteName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x29E5C50))(0, sprite, spriteName);
	}
	template <typename T = void> static T SafeSetSpriteNameRatioPixel(uintptr_t sprite, Il2CppString* spriteName, bool isFixedWidth, float fixedSize) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, float))(Il2CppBase() + 0x29E5DB0))(0, sprite, spriteName, isFixedWidth, fixedSize);
	}
	template <typename T = void> static T SafeSetSpritePixelPerfect(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E5FF4))(0, sprite);
	}
	template <typename T = void> static T SafeSetSpriteFillAmount(uintptr_t sprite, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x29E613C))(0, sprite, value);
	}
	template <typename T = void> static T SetTexture(uintptr_t texture, Il2CppString* url) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x29E62C0))(0, texture, url);
	}
	template <typename T = bool> static T IsSIItemNull(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E6408))(0, item);
	}
	template <typename T = void> static T SetTexture_1(uintptr_t texture, uintptr_t pinfo, uint64_t playerID) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x29E6500))(0, texture, pinfo, playerID);
	}
	template <typename T = void> static T SafeSetTexture(uintptr_t uiTexture, uintptr_t texture) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E6654))(0, uiTexture, texture);
	}
	template <typename T = void> static T SafeForceUpdate(uintptr_t widget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E67A8))(0, widget);
	}
	template <typename T = void> static T SafeForceUpdate_1(uintptr_t anchor, bool forceUpdate, bool resetUICamera) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x29E68F4))(0, anchor, forceUpdate, resetUICamera);
	}
	template <typename T = void> static T SafeSetSize(uintptr_t widget, int32_t width, int32_t height) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x29E6A80))(0, widget, width, height);
	}
	template <typename T = void> static T SafeSetDepth(uintptr_t widget, int32_t depth) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x29E6BF8))(0, widget, depth);
	}
	template <typename T = void> static T SetWidgetRect(uintptr_t widget, int32_t width, int32_t height) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x29E6D44))(0, widget, width, height);
	}
	template <typename T = void> static T SafeSetLocalPosition(uintptr_t comp, Il2CppVector3 localpos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x299DC8C))(0, comp, localpos);
	}
	template <typename T = void> static T SafeSetLocalPosition_1(uintptr_t comp, float localX, float localY, float localZ) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x29E6EC8))(0, comp, localX, localY, localZ);
	}
	template <typename T = void> static T SafeSetLocalRotation(uintptr_t comp, Il2CppQuaternion localqutn) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x29E702C))(0, comp, localqutn);
	}
	template <typename T = void> static T SafeSetLocalScale(uintptr_t comp, Il2CppVector3 localscale) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x29DED98))(0, comp, localscale);
	}
	template <typename T = void> static T SetLocalPosition(uintptr_t go, Il2CppVector3 localpos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x29E71B8))(0, go, localpos);
	}
	template <typename T = void> static T SetCompGray(uintptr_t comp, bool isGray, bool recusively) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x29E733C))(0, comp, isGray, recusively);
	}
	template <typename T = void> static T SetContainerGray(uintptr_t go, bool isGray, bool recusively) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x29E74DC))(0, go, isGray, recusively);
	}
	template <typename T = void> static T SafeSetGray(uintptr_t sprite, bool gray) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E774C))(0, sprite, gray);
	}
	template <typename T = void> static T SetColliderEnable(uintptr_t obj, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E78A0))(0, obj, enable);
	}
	template <typename T = void> static T SafePlayAnimation(uintptr_t anim, bool isShow) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E7A60))(0, anim, isShow);
	}
	template <typename T = Il2CppString*> static T BuildString(uintptr_t builder, int32_t content) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x29E7BB4))(0, builder, content);
	}
	template <typename T = Il2CppString*> static T BuildString_1(uintptr_t builder, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x29E52A4))(0, builder, format, args);
	}
	template <typename T = void> static T BindClickEvent(uintptr_t go, uintptr_t del) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E7CE0))(0, go, del);
	}
	template <typename T = void> static T BindClickEvent_1(uintptr_t colider, uintptr_t del) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E7E30))(0, colider, del);
	}
	template <typename T = void> static T EnableButton(uintptr_t button, bool enabled) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x29E7F94))(0, button, enabled);
	}
	template <typename T = uintptr_t> static T HexToColor(Il2CppString* hex) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x29E8174))(0, hex);
	}
	template <typename T = int32_t> static T get_NORMAL_MAX_LEVEL() {
		return ((T (*)(void *))(Il2CppBase() + 0x29E8374))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetOtherLevelProgress(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E84D8))(0, info);
	}
	template <typename T = uintptr_t> static T GetLevelInfoType(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29E8E2C))(0, info);
	}
	template <typename T = Il2CppString*> static T GetLevelStringByLevel(int32_t normalLv, int32_t peakLv, bool isShort, bool onlyNumber) {
		return ((T (*)(void *, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x29E8F18))(0, normalLv, peakLv, isShort, onlyNumber);
	}
	template <typename T = int32_t> static T CompareLevel(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29E9250))(0, a, b);
	}
	template <typename T = int32_t> static T CompareLevel_1(uint32_t peakLvA, uint32_t normalLvA, uint32_t peakLvB, uint32_t normalLvB) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x29E93D0))(0, peakLvA, normalLvA, peakLvB, normalLvB);
	}
	template <typename T = Il2CppString*> static T GetOtherLevelString(uintptr_t info, bool isShort, bool onlyNumber) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x29E94D4))(0, info, isShort, onlyNumber);
	}
	template <typename T = uintptr_t> static T GetBrTeamSeatColor(int32_t seatIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29E9638))(0, seatIndex);
	}
	template <typename T = Il2CppString*> static T GetBrTeamSignSpriteName(int32_t seatIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29E9840))(0, seatIndex);
	}
	template <typename T = uintptr_t> static T GetBrTeamColor(uint32_t teamIndex) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x29E9A54))(0, teamIndex);
	}
	template <typename T = uintptr_t> static T HexToColor_1(int32_t HexVal) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29E9CD0))(0, HexVal);
	}
	template <typename T = Il2CppString*> static T GetChestBackgroundQualitySprite(int32_t subColor) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29E9DEC))(0, subColor);
	}
	template <typename T = Il2CppString*> static T GetLargeBackgroundQualitySprite(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29E9EF4))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetSmallBackgroundQualitySprite(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29EA05C))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetCommonWeaponQualitySprite(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29EA1C4))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetCommonWeaponQualitySprite2(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29DEF1C))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetCommonWeaponQualitySprite3(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29EA360))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetCommonRoleQualitySprite(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29EA4FC))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetCommonItemQualitySprite(int32_t color, int32_t subColor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x29DF0B8))(0, color, subColor);
	}
	template <typename T = Il2CppString*> static T GetLuckyBoardItemQualitySprite(int32_t color) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29EA698))(0, color);
	}
	template <typename T = Il2CppString*> static T GetLuckyDrawQualitySprite(int32_t color) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29EA80C))(0, color);
	}
	template <typename T = Il2CppString*> static T GetBroadcastTipBGSpirte(uint32_t color) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x29EA980))(0, color);
	}
	template <typename T = Il2CppString*> static T ChangeContextColor(Il2CppString* context, uintptr_t color) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x29EAB28))(0, context, color);
	}
	template <typename T = Il2CppString*> static T ChangeContextColor_1(Il2CppString* context, Il2CppString* color) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x29EACA4))(0, context, color);
	}
	template <typename T = bool> static T IsUIActive(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EADF0))(0, obj);
	}
	template <typename T = void> static T ItemIconCheckRotation(int32_t id, uintptr_t RotateTransform) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x29E05DC))(0, id, RotateTransform);
	}
	template <typename T = int32_t> static T GetShopTypeByID(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EAF88))(0, type);
	}
	template <typename T = int32_t> static T UlongByInt(uint64_t num) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x29EB0A0))(0, num);
	}
	template <typename T = Il2CppString*> static T GetFixIconByLevelUnlockConfig(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EB1F8))(0, config);
	}
	template <typename T = uintptr_t> static T GetLevelUnlockConfigByIconId(int32_t iconId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29EB5B0))(0, iconId);
	}
	template <typename T = Il2CppString*> static T GetMoneySprite(bool bo) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x29EB768))(0, bo);
	}
	template <typename T = int32_t> static T GetUILabelTextLength(uintptr_t label) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EB870))(0, label);
	}
	template <typename T = float> static T GetUILabelTextLengthImmediate(uintptr_t label) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EB9CC))(0, label);
	}
	template <typename T = uintptr_t> static T GetConfigByScore(int32_t Score) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29EBB44))(0, Score);
	}
	template <typename T = Il2CppVector3> static T GetDiffPosToParentObj(uintptr_t inCom, uintptr_t inParentCom) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29EBCEC))(0, inCom, inParentCom);
	}
	template <typename T = Il2CppVector3> static T GetDiffPosToParentObj_1(uintptr_t inObj, uintptr_t inParentObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29EC0B8))(0, inObj, inParentObj);
	}
	template <typename T = uintptr_t> static T GetPanelByUIFlowGrid(uintptr_t grid) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EC468))(0, grid);
	}
	template <typename T = uintptr_t> static T GetPanelByUIFlowTable(uintptr_t table) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29EC600))(0, table);
	}
	template <typename T = Il2CppString*> static T GetRankUpShowOffLabel(int32_t rankLevel) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29EC798))(0, rankLevel);
	}
	template <typename T = void> static T SetActiveWithAlphaTween(uintptr_t gameObject, bool active, float duration, float alpha, uintptr_t cb) {
		return ((T (*)(void *, uintptr_t, bool, float, float, uintptr_t))(Il2CppBase() + 0x29EC90C))(0, gameObject, active, duration, alpha, cb);
	}
	template <typename T = void> static T AddChildDontInstantiate(uintptr_t parent, uintptr_t prefab) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29ECC9C))(0, parent, prefab);
	}
	template <typename T = void> static T AddChildDontInstantiate_1(uintptr_t parent, uintptr_t child, int32_t layer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x29ECE10))(0, parent, child, layer);
	}

};

}
