#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimFloatingBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimFloatingBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FloatingBtnGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ActiveGo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& UnActiveGo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadFloatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadFloatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFloatingPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A6528))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A68A0))(this);
	}
	template <typename T = bool> T OnGamepadFloatingStart() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A6974))(this);
	}
	template <typename T = bool> T OnGamepadFloatingEnd() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A6DB8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A6F08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A70CC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7290))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7298))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A72A4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A72B0))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7374))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7414))(this);
	}
	template <typename T = void> T OnDragEnd(uintptr_t go) {
		return ((T (*)(SwimFloatingBtnView*, uintptr_t))(Il2CppBase() + 0x35A7588))(this, go);
	}
	template <typename T = void> T OnDragOut(uintptr_t go) {
		return ((T (*)(SwimFloatingBtnView*, uintptr_t))(Il2CppBase() + 0x35A763C))(this, go);
	}
	template <typename T = void> T OnDragOver(uintptr_t go) {
		return ((T (*)(SwimFloatingBtnView*, uintptr_t))(Il2CppBase() + 0x35A76F0))(this, go);
	}
	template <typename T = void> T OnFloatingPress(uintptr_t go, bool isPress) {
		return ((T (*)(SwimFloatingBtnView*, uintptr_t, bool))(Il2CppBase() + 0x35A6AC4))(this, go, isPress);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(SwimFloatingBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x35A7790))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(SwimFloatingBtnView*, uintptr_t))(Il2CppBase() + 0x35A7A04))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B00))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B20))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(SwimFloatingBtnView*))(Il2CppBase() + 0x35A7B28))(this);
	}

};

}
