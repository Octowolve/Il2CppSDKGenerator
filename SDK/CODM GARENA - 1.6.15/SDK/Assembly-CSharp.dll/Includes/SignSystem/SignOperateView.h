#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignOperateView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignOperateView"));
	}

	template <typename T = float> static T& JoyStickCancelRadiusRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OperateButton() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& JoyStickBGSpirite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OperateBtnIconSwitcher() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HightLightAnim() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector2> T& CurrJoyStickPos() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& IsInCancelArea() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsDragging() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = float> T& JoyStickHalfWidth() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& JoyStickHalfHeight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector2> T& MoveDis() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LastOpType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector2> T& LastRotationVector() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& CurrActiveBtnIconSwitcherIndex() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LastAimingTargetInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LastAimingOpType() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverToInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUnlockOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepLockRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveBtnIconSwitcherIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPickUPVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckImpactInfoSame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnableOperateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverUISize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHightLightAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopHightLightAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = Il2CppVector2> T get_CurrJoyStickPos() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EF6D4))(this);
	}
	template <typename T = void> T set_CurrJoyStickPos(Il2CppVector2 value) {
		return ((T (*)(SignOperateView*, Il2CppVector2))(Il2CppBase() + 0x38EF6E8))(this, value);
	}
	template <typename T = bool> T get_IsInCancelArea() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EF6F4))(this);
	}
	template <typename T = void> T set_IsInCancelArea(bool value) {
		return ((T (*)(SignOperateView*, bool))(Il2CppBase() + 0x38EC234))(this, value);
	}
	template <typename T = bool> T get_IsDragging() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EEFF0))(this);
	}
	template <typename T = void> T set_IsDragging(bool value) {
		return ((T (*)(SignOperateView*, bool))(Il2CppBase() + 0x38EF6FC))(this, value);
	}
	template <typename T = float> T get_JoyStickRadius() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EF704))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EF720))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SignOperateView*, float))(Il2CppBase() + 0x38EF934))(this, dt);
	}
	template <typename T = bool> T GamepadDragStart() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F05A4))(this);
	}
	template <typename T = bool> T GamepadDrag() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F0958))(this);
	}
	template <typename T = bool> T GamepadDragEnd() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F0B8C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F0DE8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F1140))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F1498))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F19B0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F1EC8))(this);
	}
	template <typename T = void> T OnDragStart(uintptr_t obj) {
		return ((T (*)(SignOperateView*, uintptr_t))(Il2CppBase() + 0x38EBD34))(this, obj);
	}
	template <typename T = void> T OnPress(uintptr_t obj, bool isPress) {
		return ((T (*)(SignOperateView*, uintptr_t, bool))(Il2CppBase() + 0x38F1ED0))(this, obj, isPress);
	}
	template <typename T = void> T OnDragEnd(uintptr_t obj) {
		return ((T (*)(SignOperateView*, uintptr_t))(Il2CppBase() + 0x38EC6B8))(this, obj);
	}
	template <typename T = void> T RecoverToInit(bool isCancel, bool delayRecoverWhenFalse) {
		return ((T (*)(SignOperateView*, bool, bool))(Il2CppBase() + 0x38F1FE8))(this, isCancel, delayRecoverWhenFalse);
	}
	template <typename T = bool> T CanDrag(uintptr_t pickObj) {
		return ((T (*)(SignOperateView*, uintptr_t))(Il2CppBase() + 0x38EE514))(this, pickObj);
	}
	template <typename T = void> T OnDrag(uintptr_t obj, Il2CppVector2 delta) {
		return ((T (*)(SignOperateView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x38ED53C))(this, obj, delta);
	}
	template <typename T = void> T DelayUnlockOps() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F2590))(this);
	}
	template <typename T = void> T SetLockRotation(bool isLock, bool delayRecoverWhenFalse) {
		return ((T (*)(SignOperateView*, bool, bool))(Il2CppBase() + 0x38EC000))(this, isLock, delayRecoverWhenFalse);
	}
	template <typename T = void> T KeepLockRotation() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EDC04))(this);
	}
	template <typename T = void> T SetActiveBtnIconSwitcherIndex(int32_t ActiveIndex) {
		return ((T (*)(SignOperateView*, int32_t))(Il2CppBase() + 0x38F0334))(this, ActiveIndex);
	}
	template <typename T = bool> T IsPickUPVisible() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F26D8))(this);
	}
	template <typename T = bool> T CheckImpactInfoSame(uintptr_t impactInfoA, uintptr_t impactInfoB) {
		return ((T (*)(SignOperateView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38F2988))(this, impactInfoA, impactInfoB);
	}
	template <typename T = uintptr_t> T GetEnableOperateType() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EFA68))(this);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(SignOperateView*, uint32_t))(Il2CppBase() + 0x38F360C))(this, PlayerID);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(SignOperateView*, bool))(Il2CppBase() + 0x38F3A80))(this, paused);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(SignOperateView*, bool))(Il2CppBase() + 0x38F3B74))(this, focus);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F3C60))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F3E3C))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(SignOperateView*, bool, bool))(Il2CppBase() + 0x38F3F24))(this, value, enableOptimize);
	}
	template <typename T = void> T RecoverUISize() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F2448))(this);
	}
	template <typename T = void> T PlayHightLightAnim() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38EFFF8))(this);
	}
	template <typename T = void> T StopHightLightAnim() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F01C0))(this);
	}
	template <typename T = void> static T GamepadDragEndm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F40F8))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F419C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SignOperateView*, float))(Il2CppBase() + 0x38F41A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(SignOperateView*, bool))(Il2CppBase() + 0x38F41CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(SignOperateView*))(Il2CppBase() + 0x38F41DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(SignOperateView*, bool, bool))(Il2CppBase() + 0x38F41E4))(this, P0, P1);
	}

};

}
