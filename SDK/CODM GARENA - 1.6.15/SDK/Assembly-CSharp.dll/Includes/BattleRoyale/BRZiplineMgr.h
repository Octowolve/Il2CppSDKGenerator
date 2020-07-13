#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineMgr"));
	}

	template <typename T = float> static T& MinCheckDistanceSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MinShowDistanceSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& MaxHideDistanceSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& m_PositionYOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ForwardCheckMinDis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ShowEffectVelocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RadBlurValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_StartAniTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_StartVelocity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_MaxVelocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_MaxVelAddMoveVelRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_Acceleration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_AutoRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_ExitStopTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_ExitDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_BtnHideTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_BtnHideDistance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_UseCD() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_DicTmpServerInfo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_DicZiplines() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllZiplines() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& m_LastCheckPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BaseUvs() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TmpUvs() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAddZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerCtrRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTmpServerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnStartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSegmentEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetMeshUv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAndSetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = int32_t> static T get_ItemAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x266E9F0))(0);
	}
	template <typename T = int32_t> static T get_SegmentAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x266E9FC))(0);
	}
	template <typename T = int32_t> static T get_EmptySegmentAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x266EA08))(0);
	}
	template <typename T = int32_t> static T get_EffectAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x266EA14))(0);
	}
	template <typename T = int32_t> static T get_StartEffectAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x266EA20))(0);
	}
	template <typename T = float> T get_PositionYOffset() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA2C))(this);
	}
	template <typename T = float> T get_SqrForwardCheckMinDis() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA34))(this);
	}
	template <typename T = float> T get_ShowEffectVelocity() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA44))(this);
	}
	template <typename T = float> T get_RadBlurValue() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA4C))(this);
	}
	template <typename T = float> T get_StartAniTime() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266BB28))(this);
	}
	template <typename T = float> T get_StartVelocity() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA54))(this);
	}
	template <typename T = float> T get_EndVelocity() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA5C))(this);
	}
	template <typename T = float> T get_MaxVelocity() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA70))(this);
	}
	template <typename T = float> T get_MaxVelAddMoveVelRate() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA78))(this);
	}
	template <typename T = float> T get_Acceleration() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA80))(this);
	}
	template <typename T = float> T get_AutoRotationSpeed() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA88))(this);
	}
	template <typename T = float> T get_ExitStopTime() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA90))(this);
	}
	template <typename T = float> T get_SqrExitDistance() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EA98))(this);
	}
	template <typename T = float> T get_BtnHideTime() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EAA8))(this);
	}
	template <typename T = float> T get_BtnHideDistanceSqr() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EAB0))(this);
	}
	template <typename T = float> T get_UseCD() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EAC0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x266EAC8))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRZiplineMgr*, uintptr_t))(Il2CppBase() + 0x266ED3C))(this, levelObject);
	}
	template <typename T = void> T Register(uintptr_t zipline) {
		return ((T (*)(BRZiplineMgr*, uintptr_t))(Il2CppBase() + 0x266EEC4))(this, zipline);
	}
	template <typename T = void> T UnRegister(uintptr_t zipline) {
		return ((T (*)(BRZiplineMgr*, uintptr_t))(Il2CppBase() + 0x266F1F8))(this, zipline);
	}
	template <typename T = uintptr_t> T Find(uint32_t uid) {
		return ((T (*)(BRZiplineMgr*, uint32_t))(Il2CppBase() + 0x266F33C))(this, uid);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRZiplineMgr*, float))(Il2CppBase() + 0x266F470))(this, deltaTime);
	}
	template <typename T = void> T ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(BRZiplineMgr*, Il2CppVector3))(Il2CppBase() + 0x266F7B4))(this, shift);
	}
	template <typename T = void> T OnSyncAddZipline(uint32_t uid, Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(BRZiplineMgr*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x266F8A0))(this, uid, startPos, endPos);
	}
	template <typename T = void> T OnServerCtrRegister(uintptr_t zipline) {
		return ((T (*)(BRZiplineMgr*, uintptr_t))(Il2CppBase() + 0x266F024))(this, zipline);
	}
	template <typename T = uintptr_t> T GetTmpServerInfo(uint32_t uid, bool autoCreat) {
		return ((T (*)(BRZiplineMgr*, uint32_t, bool))(Il2CppBase() + 0x266FA98))(this, uid, autoCreat);
	}
	template <typename T = uintptr_t> static T SpawnStartEffect(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x2669334))(0, pos);
	}
	template <typename T = uintptr_t> static T SpawnLineEffect(Il2CppArray<uintptr_t>* allSegmentsData) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2669088))(0, allSegmentsData);
	}
	template <typename T = uintptr_t> static T SpawnSegmentEditor(uintptr_t segRoot, uintptr_t data, uintptr_t zipline) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x266FCE8))(0, segRoot, data, zipline);
	}
	template <typename T = uintptr_t> static T SpawnSegment(uintptr_t data, uintptr_t zipline) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2668DE4))(0, data, zipline);
	}
	template <typename T = uintptr_t> static T InitSegment(uintptr_t segObj, uintptr_t data, uintptr_t zipline) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x266FF60))(0, segObj, data, zipline);
	}
	template <typename T = void> T AutoSetMeshUv(uintptr_t obj, float magnitude) {
		return ((T (*)(BRZiplineMgr*, uintptr_t, float))(Il2CppBase() + 0x2670414))(this, obj, magnitude);
	}
	template <typename T = void> static T AddAndSetVolume(uintptr_t obj, int32_t startIdx, uintptr_t zipline, Il2CppVector3 size, Il2CppVector3 center) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x266967C))(0, obj, startIdx, zipline, size, center);
	}
	template <typename T = void> static T DespawnSegment(uintptr_t segm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x26699C8))(0, segm);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRZiplineMgr*, uintptr_t, bool))(Il2CppBase() + 0x26707EC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x2670960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRZiplineMgr*))(Il2CppBase() + 0x2670ACC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRZiplineMgr*, uintptr_t))(Il2CppBase() + 0x2670AD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRZiplineMgr*, float))(Il2CppBase() + 0x2670ADC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyWorldShift(Il2CppVector3 P0) {
		return ((T (*)(BRZiplineMgr*, Il2CppVector3))(Il2CppBase() + 0x2670AE4))(this, P0);
	}

};

}
