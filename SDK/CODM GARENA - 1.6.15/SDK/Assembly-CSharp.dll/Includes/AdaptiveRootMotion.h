#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdaptiveRootMotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdaptiveRootMotion"));
	}

	template <typename T = Il2CppVector3> T& rmScaling() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& rmOffsetVel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rootMotionAnimCache() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& animStartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& animTranslationEndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& animEndTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& animHighestTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& animNameHash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& transformed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& enableRotation() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& m_agentPawn() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& prevAnimCullingMode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& forceOnNavMesh() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& forceEnable_() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> T& _agentTrans() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _NavMeshLayer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RootMotionRuning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootMotionLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRootMotionTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalcRootMotionTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = float> T get_RMAnimStartTime() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16450))(this);
	}
	template <typename T = float> T get_RMAnimTranslationEndTime() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16458))(this);
	}
	template <typename T = float> T get_RMAnimEndTime() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16460))(this);
	}
	template <typename T = float> T get_RMAnimHightestTime() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16468))(this);
	}
	template <typename T = bool> T get_forceOnNavMesh() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16470))(this);
	}
	template <typename T = void> T set_forceOnNavMesh(bool value) {
		return ((T (*)(AdaptiveRootMotion*, bool))(Il2CppBase() + 0x4A16478))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16480))(this);
	}
	template <typename T = bool> T get_forceEnable() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A1654C))(this);
	}
	template <typename T = void> T set_forceEnable(bool value) {
		return ((T (*)(AdaptiveRootMotion*, bool))(Il2CppBase() + 0x4A16554))(this, value);
	}
	template <typename T = uintptr_t> T get_agentTransform() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16584))(this);
	}
	template <typename T = int32_t> T get_NavMeshLayer() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A166E8))(this);
	}
	template <typename T = bool> T get_EnableRotation() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16704))(this);
	}
	template <typename T = bool> T RootMotionRuning() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A16738))(this);
	}
	template <typename T = void> T BeginRootMotion(Il2CppString* animName, bool destOnGround, float blendTime) {
		return ((T (*)(AdaptiveRootMotion*, Il2CppString*, bool, float))(Il2CppBase() + 0x4A167E0))(this, animName, destOnGround, blendTime);
	}
	template <typename T = void> T BeginRootMotion_1(Il2CppString* animName, Il2CppVector3 destPos, float blendTime, float fixedTime, float speed) {
		return ((T (*)(AdaptiveRootMotion*, Il2CppString*, Il2CppVector3, float, float, float))(Il2CppBase() + 0x4A16A4C))(this, animName, destPos, blendTime, fixedTime, speed);
	}
	template <typename T = float> T GetRootMotionLength(Il2CppString* animName) {
		return ((T (*)(AdaptiveRootMotion*, Il2CppString*))(Il2CppBase() + 0x4A16B84))(this, animName);
	}
	template <typename T = int32_t> T PlayAnimInternal(Il2CppString* animName, float blendTime, float fixedTime, float speed) {
		return ((T (*)(AdaptiveRootMotion*, Il2CppString*, float, float, float))(Il2CppBase() + 0x4A16D30))(this, animName, blendTime, fixedTime, speed);
	}
	template <typename T = void> T PlayAnim(int32_t animHash, Il2CppString* animName, float blendTime, float fixedTime) {
		return ((T (*)(AdaptiveRootMotion*, int32_t, Il2CppString*, float, float))(Il2CppBase() + 0x4A17118))(this, animHash, animName, blendTime, fixedTime);
	}
	template <typename T = void> T CalcRootMotionTransform(int32_t index, Il2CppVector3 destPos, float fixedTime) {
		return ((T (*)(AdaptiveRootMotion*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x4A173B0))(this, index, destPos, fixedTime);
	}
	template <typename T = void> T CalcRootMotionTransform_1(int32_t index, Il2CppVector3 destPos) {
		return ((T (*)(AdaptiveRootMotion*, int32_t, Il2CppVector3))(Il2CppBase() + 0x4A179C8))(this, index, destPos);
	}
	template <typename T = void> T StopRootMotion() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A17E4C))(this);
	}
	template <typename T = void> T NotifyRootMotionEnd(int32_t stateNameId) {
		return ((T (*)(AdaptiveRootMotion*, int32_t))(Il2CppBase() + 0x4A17EF8))(this, stateNameId);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A17F98))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AdaptiveRootMotion*))(Il2CppBase() + 0x4A18548))(this);
	}

};

}
