#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class InteractiveInGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "InteractiveInGameHUD"));
	}

	template <typename T = uintptr_t> T& mBombGame() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mNuclearBomb() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mCarePackage() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mTrophySystem() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mInfectGoliath() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482280))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482288))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482294))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x34822A8))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482418))(this);
	}
	template <typename T = bool> T OnGamepadTrigger() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x34824B0))(this);
	}
	template <typename T = bool> T OnGamepadLongPress() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x348280C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482B44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482D08))(this);
	}
	template <typename T = void> T ResetPriority() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3482ECC))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(InteractiveInGameHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3483448))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(InteractiveInGameHUD*, uintptr_t))(Il2CppBase() + 0x34836BC))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3483770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3483778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3483780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InteractiveInGameHUD*))(Il2CppBase() + 0x3483788))(this);
	}

};

}
