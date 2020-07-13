#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignTipsItemGeneral
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignTipsItemGeneral"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SwitcherItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DescLabelLod0() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DescLabelLod2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadBGSprites() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadIconSprites() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadPanels() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegSprites() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadIconSpritesAnim() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegSpritesAnim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PlayerSpriteLod0() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& CancelSpriteLod0() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ResponseSpriteLod0() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& CancelLabelLod0() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ResponseLabelLod0() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& PlayerNumLabelLod0() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& PlayerNumPanel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& StandardLeg() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& StandardHead() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& LegWidthTactical() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& LegWidthPickup() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadPosOffsetToLegTactical() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadPosOffsetToLegPickup() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AreaDivideSizes() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& CurrActiveSwitcherIndex() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegOrigHeights() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegAnimOrigHeights() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadPosOffsetToLeg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewForSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSignState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllSwitcherItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAreaIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLegLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHeadPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidLegLengthInScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigPlayerNumPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustLegLengthInScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampLegLengthInScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStandardHeadPosInScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealHeadPosInScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeadPosInViewPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T SetIdle(bool isInIdle) {
		return ((T (*)(SignTipsItemGeneral*, bool))(Il2CppBase() + 0x3C9B564))(this, isInIdle);
	}
	template <typename T = void> T UpdateView(bool IsFirstTime) {
		return ((T (*)(SignTipsItemGeneral*, bool))(Il2CppBase() + 0x3C9B898))(this, IsFirstTime);
	}
	template <typename T = void> T UpdateData(uintptr_t InSignCom) {
		return ((T (*)(SignTipsItemGeneral*, uintptr_t))(Il2CppBase() + 0x3C9BDE8))(this, InSignCom);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SignTipsItemGeneral*))(Il2CppBase() + 0x3C9BEC4))(this);
	}
	template <typename T = void> T UpdateViewForSign(bool IsFirstTime) {
		return ((T (*)(SignTipsItemGeneral*, bool))(Il2CppBase() + 0x3C9B954))(this, IsFirstTime);
	}
	template <typename T = void> T SwitchSignState(int32_t ActiveIndex, bool IsFirstTime) {
		return ((T (*)(SignTipsItemGeneral*, int32_t, bool))(Il2CppBase() + 0x3C9DEA4))(this, ActiveIndex, IsFirstTime);
	}
	template <typename T = void> T HideAllSwitcherItems() {
		return ((T (*)(SignTipsItemGeneral*))(Il2CppBase() + 0x3C9B624))(this);
	}
	template <typename T = int32_t> T GetAreaIndex(Il2CppVector2 ViewPortPos) {
		return ((T (*)(SignTipsItemGeneral*, Il2CppVector2))(Il2CppBase() + 0x3C9DC48))(this, ViewPortPos);
	}
	template <typename T = Il2CppString*> T GetPlayerSpriteName(uint32_t PlayerID) {
		return ((T (*)(SignTipsItemGeneral*, uint32_t))(Il2CppBase() + 0x3C9CB90))(this, PlayerID);
	}
	template <typename T = void> T UpdateLegLength(float LegLength) {
		return ((T (*)(SignTipsItemGeneral*, float))(Il2CppBase() + 0x3C9D270))(this, LegLength);
	}
	template <typename T = void> T UpdateHeadPos(float LegLength) {
		return ((T (*)(SignTipsItemGeneral*, float))(Il2CppBase() + 0x3C9D4E0))(this, LegLength);
	}
	template <typename T = float> T GetValidLegLengthInScreen() {
		return ((T (*)(SignTipsItemGeneral*))(Il2CppBase() + 0x3C9CD34))(this);
	}
	template <typename T = void> T ConfigPlayerNumPanel(uintptr_t OwnerPlayerInfo) {
		return ((T (*)(SignTipsItemGeneral*, uintptr_t))(Il2CppBase() + 0x3C9E51C))(this, OwnerPlayerInfo);
	}
	template <typename T = float> T GetAdjustLegLengthInScreen(float ValidLegLength) {
		return ((T (*)(SignTipsItemGeneral*, float))(Il2CppBase() + 0x3C9CF88))(this, ValidLegLength);
	}
	template <typename T = bool> T ClampLegLengthInScreen(float OrigLegLength, uintptr_t* CorrectedLegLength) {
		return ((T (*)(SignTipsItemGeneral*, float, uintptr_t*))(Il2CppBase() + 0x3C9D0E0))(this, OrigLegLength, CorrectedLegLength);
	}
	template <typename T = Il2CppVector2> T GetStandardHeadPosInScreen(float LegLength) {
		return ((T (*)(SignTipsItemGeneral*, float))(Il2CppBase() + 0x3C9D6B8))(this, LegLength);
	}
	template <typename T = Il2CppVector2> T GetRealHeadPosInScreen(float LegLength, int32_t AreaIndex) {
		return ((T (*)(SignTipsItemGeneral*, float, int32_t))(Il2CppBase() + 0x3C9E1F0))(this, LegLength, AreaIndex);
	}
	template <typename T = Il2CppVector2> T GetHeadPosInViewPort(Il2CppVector2 HeadPosInScreen) {
		return ((T (*)(SignTipsItemGeneral*, Il2CppVector2))(Il2CppBase() + 0x3C9D9F8))(this, HeadPosInScreen);
	}
	template <typename T = void> T xLuaBaseProxy_SetIdle(bool P0) {
		return ((T (*)(SignTipsItemGeneral*, bool))(Il2CppBase() + 0x3C9E8B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(bool P0) {
		return ((T (*)(SignTipsItemGeneral*, bool))(Il2CppBase() + 0x3C9E8B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateData(uintptr_t P0) {
		return ((T (*)(SignTipsItemGeneral*, uintptr_t))(Il2CppBase() + 0x3C9E8B8))(this, P0);
	}

};

}
