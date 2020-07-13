#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PvpCommonTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PvpCommonTipsHUD"));
	}

	template <typename T = uintptr_t> T& mTextTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mImageTips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& bShowing() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& cacheTipData() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& mTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> static T& NORMAL_TEXT_SPRITENAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SPECIAL_TEXT_SPRITENAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TEXT_SPRITE_WIDTH_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bHiddenStartGameImage() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFirstTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleHideStartGameImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB65C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB668))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB670))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB718))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB720))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADB834))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PvpCommonTipsHUD*, float))(Il2CppBase() + 0x2ADB8F0))(this, dt);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADBCA0))(this);
	}
	template <typename T = void> T TryToShowTips() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADBA8C))(this);
	}
	template <typename T = void> T RemoveFirstTips() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADCAC4))(this);
	}
	template <typename T = void> T ToggleHideStartGameImage(uintptr_t Msg) {
		return ((T (*)(PvpCommonTipsHUD*, uintptr_t))(Il2CppBase() + 0x2ADCBF0))(this, Msg);
	}
	template <typename T = void> T ResetUI() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADC448))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(PvpCommonTipsHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2ADCD70))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(PvpCommonTipsHUD*, uintptr_t))(Il2CppBase() + 0x2ADCFE4))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADD120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADD128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADD130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PvpCommonTipsHUD*, float))(Il2CppBase() + 0x2ADD138))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PvpCommonTipsHUD*))(Il2CppBase() + 0x2ADD140))(this);
	}

};

}
