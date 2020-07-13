#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Components {

class VolumeClientDetector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Components", "VolumeClientDetector"));
	}

	template <typename T = int32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EventOnPawnEnter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& EventOnPawnLeave() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EventOnLocalPawnEnter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& EventOnLocalPawnLeave() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& VecUp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& VecRight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& VecLeft() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& ptRoot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& ptRootUp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& ptRootRight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& ptRootLeft() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& DetectRoof() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& ColliderCenter() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& ColliderSize() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceRight() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceLeft() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceTop() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& DisableXZPlaneTest() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& AuxBus1() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& AuxSendVal1() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& AuxBus2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& AuxSendVal2() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& AuxBus3() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& AuxSendVal3() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& AuxBus4() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& AuxSendVal4() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceMin() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& LocalSpaceMax() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& ShowGizmo() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> static T& DisableAllVCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& OnTriggerFirstEnterDelegate() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = void*> T& OnTriggerEnterDelegate() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& OnTriggerLastLeaveDelegate() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = void*> T& OnTriggerLeaveDelegate() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& mFilter() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& mLastPosition() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_CachedTransform() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& mIsShowLeft() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& mIsShowRight() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = bool> T& mIsShowTop() {
		return *(T*)((uintptr_t)this + 0x12A);
	}
	template <typename T = float> T& CornerSize() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> static T& DrawCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& DrawAllVCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& DrawDetectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = uintptr_t> T& mRoomComp() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& mAdbHelper() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HasRoof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRayIntersect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsPositionIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualDetect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HasMoved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CaculatePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMeasurement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInYAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CaculatePointEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMeasurementEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormailizeCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertAkRoomBus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_Filter() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DA41C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DA424))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DAA6C))(this);
	}
	template <typename T = void> T UpdateWorldShift() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DAB40))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DAC14))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DB24C))(this);
	}
	template <typename T = bool> T _HasRoof(Il2CppVector3 vecPoint, float fLength) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3, float))(Il2CppBase() + 0x44DB510))(this, vecPoint, fLength);
	}
	template <typename T = bool> T IsRayIntersect(Il2CppVector3 vecStartPos, Il2CppVector3 vecDirection, float iDistance) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x44DB728))(this, vecStartPos, vecDirection, iDistance);
	}
	template <typename T = bool> T _IsPositionIn(Il2CppVector3 vecPoint, uintptr_t* isInXZPlane) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x44DBBB4))(this, vecPoint, isInXZPlane);
	}
	template <typename T = bool> T IsIn(Il2CppVector3 pPosition, uintptr_t* isInXZPlane) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x44DBF00))(this, pPosition, isInXZPlane);
	}
	template <typename T = bool> T ManualDetect(uintptr_t pOther, Il2CppVector3 vecPawnPosition, int32_t iInstID, uintptr_t* isInXZPlane) {
		return ((T (*)(VolumeClientDetector*, uintptr_t, Il2CppVector3, int32_t, uintptr_t*))(Il2CppBase() + 0x44DC05C))(this, pOther, vecPawnPosition, iInstID, isInXZPlane);
	}
	template <typename T = Il2CppVector3> T GetPawnPosition(Il2CppVector3 vecPos) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3))(Il2CppBase() + 0x44DCA60))(this, vecPos);
	}
	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DCB94))(this);
	}
	template <typename T = bool> T _HasMoved() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DCC64))(this);
	}
	template <typename T = Il2CppVector3> T _CaculatePoint(Il2CppVector3 dirToRoot) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3))(Il2CppBase() + 0x44DCD90))(this, dirToRoot);
	}
	template <typename T = void> T RefreshMeasurement() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DA6D8))(this);
	}
	template <typename T = bool> T IsPointInYAxis(float fYPos) {
		return ((T (*)(VolumeClientDetector*, float))(Il2CppBase() + 0x44DCF88))(this, fYPos);
	}
	template <typename T = Il2CppVector3> T _CaculatePointEditor(Il2CppVector3 absDirToRoot, uintptr_t localSpacePos) {
		return ((T (*)(VolumeClientDetector*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x44DD088))(this, absDirToRoot, localSpacePos);
	}
	template <typename T = void> T RefreshMeasurementEditor() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DDD28))(this);
	}
	template <typename T = void> static T NormailizeCollider(uintptr_t pGo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44DE2B4))(0, pGo);
	}
	template <typename T = void> static T ConvertAkRoomBus(uintptr_t pVCD) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44DEB6C))(0, pVCD);
	}
	template <typename T = uintptr_t> T get_AdbHelper() {
		return ((T (*)(VolumeClientDetector*))(Il2CppBase() + 0x44DEEB8))(this);
	}

};

}
