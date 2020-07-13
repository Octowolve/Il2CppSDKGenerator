#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SquadTeamCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SquadTeamCamera"));
	}

	template <typename T = uintptr_t> static T& CurrentActiveInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& MoveSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Backspeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NormalTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalTransform_More() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LoadoutTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RoleTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OtherTransformAry() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TargetTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& NeedMove() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _lightControl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _effectController() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _sceneRootSelectController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OnMoveFinish() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnRotationAction() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CacheBeforeToWeaponTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mSelfCamera() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleTargetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleCurrentTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToRoomView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSceneGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceToNormalTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusToWeaponRootPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFromWeaponRootPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchBRWeaponBoxState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceReLinkWhenEffectEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LinkController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLinkControlloer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_LightControl() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x3949124))(this);
	}
	template <typename T = uintptr_t> T get_EffectControl() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x39492C0))(this);
	}
	template <typename T = uintptr_t> T get_SceneRootSelectController() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394945C))(this);
	}
	template <typename T = void> T SetCameraPosition(uintptr_t normalTrans, uintptr_t normalTrans_more, uintptr_t loadoutTrans, uintptr_t roleTrans) {
		return ((T (*)(SquadTeamCamera*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x394952C))(this, normalTrans, normalTrans_more, loadoutTrans, roleTrans);
	}
	template <typename T = uintptr_t> T GetOtherTransform(int32_t index) {
		return ((T (*)(SquadTeamCamera*, int32_t))(Il2CppBase() + 0x3949634))(this, index);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x39497C4))(this);
	}
	template <typename T = void> T MoveToTarget() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x3949A74))(this);
	}
	template <typename T = void> T HandleTargetTransform(bool bMultiPlayerNum, uintptr_t roomUIType, uintptr_t avatarViewType) {
		return ((T (*)(SquadTeamCamera*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3949D08))(this, bMultiPlayerNum, roomUIType, avatarViewType);
	}
	template <typename T = void> T HandleCurrentTransform(bool bMultiPlayerNum, uintptr_t roomUIType, uintptr_t avatarViewType) {
		return ((T (*)(SquadTeamCamera*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3949E18))(this, bMultiPlayerNum, roomUIType, avatarViewType);
	}
	template <typename T = void> T MoveToRoomView(bool bMultiPlayerNum, uintptr_t roomUIType, uintptr_t avatarViewType, bool lastMultiPlayerNum, uintptr_t lastRoomUIType, uintptr_t lastAvatarViewType) {
		return ((T (*)(SquadTeamCamera*, bool, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x394A140))(this, bMultiPlayerNum, roomUIType, avatarViewType, lastMultiPlayerNum, lastRoomUIType, lastAvatarViewType);
	}
	template <typename T = void> T FocusOn(bool bLoaodut, bool bReset) {
		return ((T (*)(SquadTeamCamera*, bool, bool))(Il2CppBase() + 0x394AC34))(this, bLoaodut, bReset);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394B1E8))(this);
	}
	template <typename T = void> T ShowSceneGameObject(bool show) {
		return ((T (*)(SquadTeamCamera*, bool))(Il2CppBase() + 0x394AA6C))(this, show);
	}
	template <typename T = void> T ForceToNormalTransform() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394B504))(this);
	}
	template <typename T = void> T FocusToWeaponRootPos(uintptr_t targetTrans, float fov, uintptr_t moveFinishAction, uintptr_t rotationAction) {
		return ((T (*)(SquadTeamCamera*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x394B6E8))(this, targetTrans, fov, moveFinishAction, rotationAction);
	}
	template <typename T = void> T ResetFromWeaponRootPos(uintptr_t moveFinishAction) {
		return ((T (*)(SquadTeamCamera*, uintptr_t))(Il2CppBase() + 0x394BA30))(this, moveFinishAction);
	}
	template <typename T = void> T SwitchBRWeaponBoxState(bool isShow) {
		return ((T (*)(SquadTeamCamera*, bool))(Il2CppBase() + 0x394BD38))(this, isShow);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394BEDC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394C2F0))(this);
	}
	template <typename T = void> T StopCameraAnimation() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394C6C0))(this);
	}
	template <typename T = void> static T ForceReLinkWhenEffectEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x394C7AC))(0);
	}
	template <typename T = void> T LinkController() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394C0E0))(this);
	}
	template <typename T = void> T UnLinkControlloer() {
		return ((T (*)(SquadTeamCamera*))(Il2CppBase() + 0x394C4AC))(this);
	}

};

}
