#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FPAimIKController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FPAimIKController"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& leftClavName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& leftClavAbsoluteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& leftHandName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Bone_RightHandName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& rightClavName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> T& NameHash_DualSubWeaponLeftClavAbsolute() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_LeftClavTrans() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_leftClavAbsoluteTrans() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_LeftHandTrans() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Bone_RightHand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_RightClav() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& HideRightHand() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ShouldResetRightHand() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_NeedToCachedTransform() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& m_TransformCached() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = Il2CppVector3> T& m_CachedPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppQuaternion> T& m_CachedRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsResetRightHandUseOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& TransitionTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_RunSoft() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsRunning() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& m_LeftHandSoft() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& m_RightHandSoft() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = bool> T& m_SyncPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_SyncRotation() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& m_SyncLeftClav() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = bool> T& m_SyncRightClav() {
		return *(T*)((uintptr_t)this + 0x5B);
	}
	template <typename T = bool> T& m_IsLeftHandHide() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsRunLeftHandSoft() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = float> T& m_RunLeftHandSoftTransitionTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_RunLeftHandSoft() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_HideLeftHandVec() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_bIsFixedLeftHandToDest() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_StartLeftHandToDestDir() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_vLeftHandToDestDir() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& m_BoneRightHandToRightClavOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppQuaternion> T& m_BoneRightToRightClavRotation() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_EulerOffset() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> static T& IsOpenTestLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_SwimZoomOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_CurScale() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& mSwimmingRightIKTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& mToLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& FZoomUpdate() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBonesExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandToDestDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandFixedToDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RunIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunSwimmingRightIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimmingRightIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullZoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateZoomInRightIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateZoomOutRightIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCacheTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndCacheTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldTransformLeftClav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLeftClav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftClavToCachedRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T get_LeftClavTrans() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E48C8))(this);
	}
	template <typename T = uintptr_t> T get_LeftClavAbsoluteTrans() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E4A14))(this);
	}
	template <typename T = uintptr_t> T get_LeftHandTrans() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E4B60))(this);
	}
	template <typename T = uintptr_t> T get_Bone_RightHand() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E4CAC))(this);
	}
	template <typename T = uintptr_t> T get_RightClav() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E4DF8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E4F44))(this);
	}
	template <typename T = bool> T CheckBonesExist() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E5080))(this);
	}
	template <typename T = void> T SetLeftHandHide(bool isHide) {
		return ((T (*)(FPAimIKController*, bool))(Il2CppBase() + 0x31E520C))(this, isHide);
	}
	template <typename T = void> T SetLeftHandToDestDir(Il2CppVector3 vLeftHandToDestDir) {
		return ((T (*)(FPAimIKController*, Il2CppVector3))(Il2CppBase() + 0x31E5308))(this, vLeftHandToDestDir);
	}
	template <typename T = void> T SetLeftHandFixedToDest(bool isFixedLeftHandToDest) {
		return ((T (*)(FPAimIKController*, bool))(Il2CppBase() + 0x31E5408))(this, isFixedLeftHandToDest);
	}
	template <typename T = void> T RunIK(bool isRunLeft, bool leftSyncPos, bool leftSyncRotation, bool isRunRight, bool soft, float transitionTime) {
		return ((T (*)(FPAimIKController*, bool, bool, bool, bool, bool, float))(Il2CppBase() + 0x31E54E0))(this, isRunLeft, leftSyncPos, leftSyncRotation, isRunRight, soft, transitionTime);
	}
	template <typename T = void> T RunIK_1(bool syncPosition, bool syncRotation, bool syncRightClav, bool soft, float transitionTime) {
		return ((T (*)(FPAimIKController*, bool, bool, bool, bool, float))(Il2CppBase() + 0x31E580C))(this, syncPosition, syncRotation, syncRightClav, soft, transitionTime);
	}
	template <typename T = void> T StopIK(bool soft, bool rightSoft, float transitionTime) {
		return ((T (*)(FPAimIKController*, bool, bool, float))(Il2CppBase() + 0x31E5930))(this, soft, rightSoft, transitionTime);
	}
	template <typename T = void> T RunSwimmingRightIK(float transitionTime, float zoomOffsetz) {
		return ((T (*)(FPAimIKController*, float, float))(Il2CppBase() + 0x31E5B14))(this, transitionTime, zoomOffsetz);
	}
	template <typename T = void> T StopSwimmingRightIK(float transitionTime) {
		return ((T (*)(FPAimIKController*, float))(Il2CppBase() + 0x31E5CF8))(this, transitionTime);
	}
	template <typename T = void> static T NullZoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x31E60AC))(0);
	}
	template <typename T = void> T UpdateZoomInRightIK() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E616C))(this);
	}
	template <typename T = void> T UpdateZoomOutRightIK() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E650C))(this);
	}
	template <typename T = void> T OnCacheTransform() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E69F0))(this);
	}
	template <typename T = void> T OnEndCacheTransform() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E6AC4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E6B98))(this);
	}
	template <typename T = bool> T ShouldTransformLeftClav() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E7BC0))(this);
	}
	template <typename T = void> T ResetLeftClav() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E6DC4))(this);
	}
	template <typename T = void> T ResetRightHand() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E7750))(this);
	}
	template <typename T = void> T SetLeftClavToCachedRotation() {
		return ((T (*)(FPAimIKController*))(Il2CppBase() + 0x31E7D14))(this);
	}

};

}
