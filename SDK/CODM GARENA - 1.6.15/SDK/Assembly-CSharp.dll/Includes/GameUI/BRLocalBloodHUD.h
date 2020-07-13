#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRLocalBloodHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRLocalBloodHUD"));
	}

	template <typename T = int32_t> static T& BloodMaxHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& HelmetIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& VestIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HelmetIconHP() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& VestIconHP() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VestArray() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& VestLevelBG() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& kBrightColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kDarkColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& kBrightSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDarkSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& HPNumberLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& HPForeGroundSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& DyingColor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> static T& HP_THREE_STYLE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_currentThreeStyle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Top1Color() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Top2Color() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Top3Color() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& Top1Blood() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& Top2Blood() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVewTargetPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectatorTargetVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVestChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVestHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBloodBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenDyingColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNormalBloodColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D91A04))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D91A0C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D91A1C))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BRLocalBloodHUD*, bool, bool))(Il2CppBase() + 0x2D920B0))(this, value, enableOptimize);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D92344))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D92484))(this);
	}
	template <typename T = void> T SetVewTargetPlayerId() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D9256C))(this);
	}
	template <typename T = void> T SetSpectatorTargetVest() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D9293C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D92C08))(this);
	}
	template <typename T = void> T OnVestChanged(uintptr_t msg) {
		return ((T (*)(BRLocalBloodHUD*, uintptr_t))(Il2CppBase() + 0x2D92F44))(this, msg);
	}
	template <typename T = void> T RefreshVest(bool isSpectator) {
		return ((T (*)(BRLocalBloodHUD*, bool))(Il2CppBase() + 0x2D92DA4))(this, isSpectator);
	}
	template <typename T = void> T SetVest(int32_t count) {
		return ((T (*)(BRLocalBloodHUD*, int32_t))(Il2CppBase() + 0x2D91B0C))(this, count);
	}
	template <typename T = void> T SetVestHp(int32_t hp, float maxHp) {
		return ((T (*)(BRLocalBloodHUD*, int32_t, float))(Il2CppBase() + 0x2D92AC8))(this, hp, maxHp);
	}
	template <typename T = void> T ChangeSprite(uintptr_t binding, bool reveal) {
		return ((T (*)(BRLocalBloodHUD*, uintptr_t, bool))(Il2CppBase() + 0x2D930AC))(this, binding, reveal);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BRLocalBloodHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2D93294))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRLocalBloodHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2D934D0))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRLocalBloodHUD*, uintptr_t))(Il2CppBase() + 0x2D93774))(this, itemType);
	}
	template <typename T = void> T UpdateBloodBar(bool isSpectator) {
		return ((T (*)(BRLocalBloodHUD*, bool))(Il2CppBase() + 0x2D9264C))(this, isSpectator);
	}
	template <typename T = void> T SetBloodBar(float scale, bool threeStyle) {
		return ((T (*)(BRLocalBloodHUD*, float, bool))(Il2CppBase() + 0x2D91F4C))(this, scale, threeStyle);
	}
	template <typename T = void> T TweenDyingColor(uintptr_t curPlayState) {
		return ((T (*)(BRLocalBloodHUD*, uintptr_t))(Il2CppBase() + 0x2D938E0))(this, curPlayState);
	}
	template <typename T = void> T ConfigNormalBloodColor() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D93AD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D93E2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BRLocalBloodHUD*, bool, bool))(Il2CppBase() + 0x2D93E30))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D93E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D93E38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRLocalBloodHUD*))(Il2CppBase() + 0x2D93E3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRLocalBloodHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2D93E40))(this, P0, P1, P2);
	}

};

}
