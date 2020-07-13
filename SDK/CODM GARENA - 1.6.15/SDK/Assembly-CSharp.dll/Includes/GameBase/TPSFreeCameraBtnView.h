#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TPSFreeCameraBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TPSFreeCameraBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_DragIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsClickDown() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsClickUp() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenFPSFree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCloseFPSFree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC088))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC094))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC1A8))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC24C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC254))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC264))(this);
	}
	template <typename T = bool> T OnGamepadOpenFPSFree() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC26C))(this);
	}
	template <typename T = bool> T OnGamepadCloseFPSFree() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC35C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC444))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC608))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CC800))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TPSFreeCameraBtnView*, float))(Il2CppBase() + 0x27CC9B8))(this, dt);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(TPSFreeCameraBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x27CD1E8))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(TPSFreeCameraBtnView*, uintptr_t))(Il2CppBase() + 0x27CD45C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CD558))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CD560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CD568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CD570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(TPSFreeCameraBtnView*))(Il2CppBase() + 0x27CD578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TPSFreeCameraBtnView*, float))(Il2CppBase() + 0x27CD580))(this, P0);
	}

};

}
