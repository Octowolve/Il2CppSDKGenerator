#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapEarth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapEarth"));
	}

	template <typename T = uintptr_t> T& TransformEarth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TransformSelectMapCam() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TransformLevelUpTaskCamPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OnOncePoinstioned() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Earth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Cam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CameraController() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& HighEarth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Highs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Lows() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& RorateDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppQuaternion>*> T& mRegion2Quats() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& TargetQuat() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& InversedTargetQuat() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mRegion() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_MapEarthType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& NearestPoint() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& CenterPoint() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& xAxis() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& yAxis() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& zAxis() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& mLayerMask() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> static T& kAngleOverLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kAngleDamping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& StartDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> T& mDragging() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppQuaternion> T& mDragStartQuat() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppQuaternion> T& mDragEndQuat() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& mShouldBounceReversely() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& mBounceSupplement() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& mDragStartTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector2> T& mDragDelta() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> static T& kLinearDraggingRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& m_DraggingQuat() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_RotateAngleToTarget() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsRotateToTarget() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppQuaternion> T& m_QuaternionRotateToTarget() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_RotateForward() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector3> T& m_LeftRotateLimit() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& m_RightRotateLimit() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_xAngle() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& m_xDrag() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& mAngleReduceSpeed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& mMaxAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_AngleSpeed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_IsLeftLimit() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& m_IsRightLimit() {
		return *(T*)((uintptr_t)this + 0x135);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadRegions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNeareastCamHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ZoomIn2Pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearZoomIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EarthCamPostionSelectMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectMapCloseReverCamPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegionWillChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRegionParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragEarth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotateBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T set_MapEarthType(uintptr_t value) {
		return ((T (*)(LobbyMapEarth*, uintptr_t))(Il2CppBase() + 0x3692A20))(this, value);
	}
	template <typename T = void> T ReloadRegions(uintptr_t from) {
		return ((T (*)(LobbyMapEarth*, uintptr_t))(Il2CppBase() + 0x3692A28))(this, from);
	}
	template <typename T = void> T set_Region(uintptr_t value) {
		return ((T (*)(LobbyMapEarth*, uintptr_t))(Il2CppBase() + 0x3693030))(this, value);
	}
	template <typename T = Il2CppVector3> T GetHitPoint(Il2CppVector2 uipoint) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector2))(Il2CppBase() + 0x3693390))(this, uipoint);
	}
	template <typename T = Il2CppVector3> T GetNeareastCamHit() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x36935C0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3693864))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x36939C0))(this);
	}
	template <typename T = void> T ZoomIn2Pos(Il2CppVector3 position, uintptr_t callback) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x36940EC))(this, position, callback);
	}
	template <typename T = void> T ClearZoomIn() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3694484))(this);
	}
	template <typename T = void> T EarthCamPostionSelectMap() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3694688))(this);
	}
	template <typename T = void> T SelectMapCloseReverCamPos() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3694838))(this);
	}
	template <typename T = void> T RegionWillChange() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3693170))(this);
	}
	template <typename T = void> T ClearRegionParameters() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3692EF4))(this);
	}
	template <typename T = void> T NotifyDragStart() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x36949E8))(this);
	}
	template <typename T = void> T NotifyDragEnd() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3694BC4))(this);
	}
	template <typename T = void> T DragEarth(Il2CppVector2 uidrag) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector2))(Il2CppBase() + 0x3694D78))(this, uidrag);
	}
	template <typename T = void> T set_RotateAngleToTarget(float value) {
		return ((T (*)(LobbyMapEarth*, float))(Il2CppBase() + 0x3694FC8))(this, value);
	}
	template <typename T = bool> T get_IsRotateToTarget() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3694FD0))(this);
	}
	template <typename T = void> T set_IsRotateToTarget(bool value) {
		return ((T (*)(LobbyMapEarth*, bool))(Il2CppBase() + 0x3694FD8))(this, value);
	}
	template <typename T = void> T set_QuaternionRotateToTarget(Il2CppVector3 value) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector3))(Il2CppBase() + 0x3694FE0))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3695030))(this);
	}
	template <typename T = Il2CppVector3> T get_LeftRotateLimit() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x36964F4))(this);
	}
	template <typename T = void> T set_LeftRotateLimit(Il2CppVector3 value) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector3))(Il2CppBase() + 0x3696508))(this, value);
	}
	template <typename T = Il2CppVector3> T get_RightRotateLimit() {
		return ((T (*)(LobbyMapEarth*))(Il2CppBase() + 0x3696514))(this);
	}
	template <typename T = void> T set_RightRotateLimit(Il2CppVector3 value) {
		return ((T (*)(LobbyMapEarth*, Il2CppVector3))(Il2CppBase() + 0x3696528))(this, value);
	}
	template <typename T = void> T SetRotateBound(bool left, bool right) {
		return ((T (*)(LobbyMapEarth*, bool, bool))(Il2CppBase() + 0x3696534))(this, left, right);
	}

};

}
