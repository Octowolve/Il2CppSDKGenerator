#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignOperateForPickupHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignOperateForPickupHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MarkBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& OrigPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragEnd_Sign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEasyTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMarkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C95A08))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignOperateForPickupHUD*, bool))(Il2CppBase() + 0x3C95B64))(this, isShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C95C58))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C95D98))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C95E40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C95F48))(this);
	}
	template <typename T = void> T EasyTouch_On_DragStart(uintptr_t gesture) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96050))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_DragEnd_Sign(uintptr_t gesture) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96120))(this, gesture);
	}
	template <typename T = bool> T CanEasyTouchDrag(uintptr_t pickObj) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96438))(this, pickObj);
	}
	template <typename T = void> T EasyTouch_On_Drag(uintptr_t gesture) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C9654C))(this, gesture);
	}
	template <typename T = void> T UpdateMarkUI(bool IsMarkBtnSelceted) {
		return ((T (*)(SignOperateForPickupHUD*, bool))(Il2CppBase() + 0x3C96848))(this, IsMarkBtnSelceted);
	}
	template <typename T = void> T OnMarkBtnClick() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C968E8))(this);
	}
	template <typename T = bool> T MarkPickupItem(uint32_t ActorID) {
		return ((T (*)(SignOperateForPickupHUD*, uint32_t))(Il2CppBase() + 0x3C96980))(this, ActorID);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C96ADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C96AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C96AEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C96AF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SignOperateForPickupHUD*))(Il2CppBase() + 0x3C96AFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_DragStart(uintptr_t P0) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96B04))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanEasyTouchDrag(uintptr_t P0) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96B0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_Drag(uintptr_t P0) {
		return ((T (*)(SignOperateForPickupHUD*, uintptr_t))(Il2CppBase() + 0x3C96B14))(this, P0);
	}

};

}
