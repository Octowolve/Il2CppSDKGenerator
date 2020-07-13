#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PassengerBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PassengerBtnView"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPassenger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PassengerButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1624050))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x16240F8))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1624330))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x16243D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1624518))(this);
	}
	template <typename T = bool> T OnGamepadPassenger() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1624660))(this);
	}
	template <typename T = void> T PassengerButtonClick(uintptr_t obj) {
		return ((T (*)(PassengerBtnView*, uintptr_t))(Il2CppBase() + 0x162470C))(this, obj);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x16249C4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1624BAC))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(PassengerBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1624D94))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(PassengerBtnView*, uintptr_t))(Il2CppBase() + 0x1625008))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1625104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x162510C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1625114))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x162511C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1625124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x162512C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(PassengerBtnView*))(Il2CppBase() + 0x1625134))(this);
	}

};

}
