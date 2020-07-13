#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsAnchorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsAnchorController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mCacheLastAnchorDelta() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& yCacheLastAnchorDelta() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mCacheDelta() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& DigitValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TempDigitValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& callBack() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector2> T& oldPosition1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& oldPosition2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& bAuto() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmMessageBoxClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isEnlarge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThumbAreaTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanSetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWidgetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSliderText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderValueChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideEffectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x25546A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255474C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x25548E0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2555508))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2555988))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2555BB8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x25565C4))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2556D58))(this);
	}
	template <typename T = void> T OnConfirmMessageBoxClick(uintptr_t result, int32_t userContext) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, int32_t))(Il2CppBase() + 0x25575D8))(this, result, userContext);
	}
	template <typename T = void> T OnCancellBtnClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x25578C8))(this);
	}
	template <typename T = void> T OnResetBtnClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2557C08))(this);
	}
	template <typename T = bool> T isEnlarge(Il2CppVector2 oP1, Il2CppVector2 oP2, Il2CppVector2 nP1, Il2CppVector2 nP2) {
		return ((T (*)(SettingsAnchorController*, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x2557DB8))(this, oP1, oP2, nP1, nP2);
	}
	template <typename T = void> T OnDoubleTouch() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2557F84))(this);
	}
	template <typename T = void> T OnLeftTouchDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x25587AC))(this, obj, delta);
	}
	template <typename T = void> T OnRightTouchDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x25589A0))(this, obj, delta);
	}
	template <typename T = void> T OnTopTouchDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2558B94))(this, obj, delta);
	}
	template <typename T = void> T OnBottomTouchDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2558F4C))(this, obj, delta);
	}
	template <typename T = void> T OnThumbAreaTouchDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SettingsAnchorController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x25592FC))(this, obj, delta);
	}
	template <typename T = void> T SetAnchor(int32_t value) {
		return ((T (*)(SettingsAnchorController*, int32_t))(Il2CppBase() + 0x2555734))(this, value);
	}
	template <typename T = int32_t> T CheckCanSetAnchor(int32_t value) {
		return ((T (*)(SettingsAnchorController*, int32_t))(Il2CppBase() + 0x2559910))(this, value);
	}
	template <typename T = void> T UpdateAnchor() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2559C58))(this);
	}
	template <typename T = void> T UpdateWidgetAnchor() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2559E04))(this);
	}
	template <typename T = void> T UpdateSliderText(int32_t percent, bool bInit) {
		return ((T (*)(SettingsAnchorController*, int32_t, bool))(Il2CppBase() + 0x2555080))(this, percent, bInit);
	}
	template <typename T = void> T OnSliderValueChange(float value) {
		return ((T (*)(SettingsAnchorController*, float))(Il2CppBase() + 0x2559E9C))(this, value);
	}
	template <typename T = void> T OnSubClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255A1F8))(this);
	}
	template <typename T = void> T OnAddClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255A868))(this);
	}
	template <typename T = void> T OnHideEffectClick() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x2557080))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AEC8))(this);
	}
	template <typename T = void> T RegisterDelegatesm__1() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AECC))(this);
	}
	template <typename T = void> T OnResetBtnClickm__2() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF10))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsAnchorController*))(Il2CppBase() + 0x255AF44))(this);
	}

};

}
