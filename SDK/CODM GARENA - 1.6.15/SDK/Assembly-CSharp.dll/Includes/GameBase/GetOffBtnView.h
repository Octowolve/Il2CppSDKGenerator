#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GetOffBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GetOffBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& GetoffBtnClickSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GetoffBtnReleaseSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetoffButtonSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC8D30))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC8DD8))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9010))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC90B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9150))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9298))(this);
	}
	template <typename T = bool> T OnGamepadOff() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC93E0))(this);
	}
	template <typename T = void> T GetOffButtonClick(uintptr_t obj) {
		return ((T (*)(GetOffBtnView*, uintptr_t))(Il2CppBase() + 0x1EC948C))(this, obj);
	}
	template <typename T = void> T SetGetoffButtonSprite(uintptr_t vehicleType) {
		return ((T (*)(GetOffBtnView*, uintptr_t))(Il2CppBase() + 0x1EC97A0))(this, vehicleType);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9938))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(GetOffBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EC9B20))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(GetOffBtnView*, uintptr_t))(Il2CppBase() + 0x1EC9D94))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9E90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9E98))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9EA0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9EA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9EB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9EB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(GetOffBtnView*))(Il2CppBase() + 0x1EC9EC0))(this);
	}

};

}
