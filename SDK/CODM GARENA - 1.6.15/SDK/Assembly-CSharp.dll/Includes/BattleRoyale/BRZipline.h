#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZipline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZipline"));
	}

	template <typename T = int32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& StartExitForawrd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& EndPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& EndExitForawrd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& MaxOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& LineTriggerSize() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& PointTriggerAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& PointTriggerYOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& StartTriggerSize() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& EndTriggerSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllSegmentsData() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsServerCtr() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsServerSyned() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllSegments() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_StartPoint() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_EndPoint() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_LineEffect() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_StartEffect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppQuaternion> T& m_Rotation() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_LastShow() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAddZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExitForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidSegmentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSegmentDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindStartSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountSqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsUseEffectLine() {
		return ((T (*)(BRZipline*))(Il2CppBase() + 0x2666EC4))(this);
	}
	template <typename T = uintptr_t> T get_ZiplineMgr() {
		return ((T (*)(BRZipline*))(Il2CppBase() + 0x2666ECC))(this);
	}
	template <typename T = void> T OnSyncAddZipline(uint32_t uid, Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(BRZipline*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2666F18))(this, uid, startPos, endPos);
	}
	template <typename T = void> T ApplyRotation(Il2CppQuaternion rot) {
		return ((T (*)(BRZipline*, Il2CppQuaternion))(Il2CppBase() + 0x26675F0))(this, rot);
	}
	template <typename T = Il2CppVector3> T GetTargetForward(bool isPositive, uintptr_t seg) {
		return ((T (*)(BRZipline*, bool, uintptr_t))(Il2CppBase() + 0x26676C8))(this, isPositive, seg);
	}
	template <typename T = Il2CppVector3> T GetExitForward(bool isPositive, Il2CppVector3 baseForward) {
		return ((T (*)(BRZipline*, bool, Il2CppVector3))(Il2CppBase() + 0x26678B4))(this, isPositive, baseForward);
	}
	template <typename T = bool> T IsValidSegmentIndex(int32_t idx) {
		return ((T (*)(BRZipline*, int32_t))(Il2CppBase() + 0x2667A7C))(this, idx);
	}
	template <typename T = uintptr_t> T GetSegmentDate(int32_t idx) {
		return ((T (*)(BRZipline*, int32_t))(Il2CppBase() + 0x2667B48))(this, idx);
	}
	template <typename T = uintptr_t> T FindStartSegment(Il2CppVector3 pos) {
		return ((T (*)(BRZipline*, Il2CppVector3))(Il2CppBase() + 0x2667C24))(this, pos);
	}
	template <typename T = void> T Check(Il2CppVector3 pos) {
		return ((T (*)(BRZipline*, Il2CppVector3))(Il2CppBase() + 0x26680B0))(this, pos);
	}
	template <typename T = bool> T IsNeedShow(Il2CppVector3 pos) {
		return ((T (*)(BRZipline*, Il2CppVector3))(Il2CppBase() + 0x26681C4))(this, pos);
	}
	template <typename T = float> T CountSqrDistance(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 q) {
		return ((T (*)(BRZipline*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2668AE8))(this, p1, p2, q);
	}
	template <typename T = void> T Show() {
		return ((T (*)(BRZipline*))(Il2CppBase() + 0x26683A0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BRZipline*))(Il2CppBase() + 0x26671F0))(this);
	}
	template <typename T = uintptr_t> T CreatChild(Il2CppString* name) {
		return ((T (*)(BRZipline*, Il2CppString*))(Il2CppBase() + 0x266955C))(this, name);
	}

};

}
