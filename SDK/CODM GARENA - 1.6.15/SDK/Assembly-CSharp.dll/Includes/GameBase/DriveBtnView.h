#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DriveBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DriveBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NormalEffect() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tweens() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DriveButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40E9690))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40E9B10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40E9C58))(this);
	}
	template <typename T = bool> T OnGamepadDrive() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40E9DA0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA104))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA2EC))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA524))(this);
	}
	template <typename T = void> T DriveButtonClick(uintptr_t obj) {
		return ((T (*)(DriveBtnView*, uintptr_t))(Il2CppBase() + 0x40E9E4C))(this, obj);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(DriveBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40EA5C4))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(DriveBtnView*, uintptr_t))(Il2CppBase() + 0x40EA84C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA968))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(DriveBtnView*))(Il2CppBase() + 0x40EA970))(this);
	}

};

}
