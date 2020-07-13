#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Animator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Animator"));
	}

	template <typename T = uintptr_t> T& ObjectCreatedCallBack() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ObjectClearedCallBack() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_isHuman() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4690C84))(this);
	}
	template <typename T = float> T get_humanScale() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4690D1C))(this);
	}
	template <typename T = float> T GetFloat(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4690DB4))(this, name);
	}
	template <typename T = float> T GetFloat_1(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4690E58))(this, id);
	}
	template <typename T = void> T SetFloat(Il2CppString* name, float value) {
		return ((T (*)(Animator*, Il2CppString*, float))(Il2CppBase() + 0x4690EFC))(this, name, value);
	}
	template <typename T = void> T SetFloat_1(Il2CppString* name, float value, float dampTime, float deltaTime) {
		return ((T (*)(Animator*, Il2CppString*, float, float, float))(Il2CppBase() + 0x4690FA8))(this, name, value, dampTime, deltaTime);
	}
	template <typename T = void> T SetFloat_2(int32_t id, float value) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x4691078))(this, id, value);
	}
	template <typename T = void> T SetFloat_3(int32_t id, float value, float dampTime, float deltaTime) {
		return ((T (*)(Animator*, int32_t, float, float, float))(Il2CppBase() + 0x4691124))(this, id, value, dampTime, deltaTime);
	}
	template <typename T = bool> T GetBool(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x46911F4))(this, name);
	}
	template <typename T = bool> T GetBool_1(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4691298))(this, id);
	}
	template <typename T = void> T SetBool(Il2CppString* name, bool value) {
		return ((T (*)(Animator*, Il2CppString*, bool))(Il2CppBase() + 0x469133C))(this, name, value);
	}
	template <typename T = void> T SetBool_1(int32_t id, bool value) {
		return ((T (*)(Animator*, int32_t, bool))(Il2CppBase() + 0x46913E8))(this, id, value);
	}
	template <typename T = int32_t> T GetInteger(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4691494))(this, name);
	}
	template <typename T = int32_t> T GetInteger_1(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4691538))(this, id);
	}
	template <typename T = void> T SetInteger(Il2CppString* name, int32_t value) {
		return ((T (*)(Animator*, Il2CppString*, int32_t))(Il2CppBase() + 0x46915DC))(this, name, value);
	}
	template <typename T = void> T SetInteger_1(int32_t id, int32_t value) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4691688))(this, id, value);
	}
	template <typename T = void> T SetTrigger(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4691734))(this, name);
	}
	template <typename T = void> T SetTrigger_1(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46917D8))(this, id);
	}
	template <typename T = void> T ResetTrigger(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x469187C))(this, name);
	}
	template <typename T = void> T ResetTrigger_1(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4691920))(this, id);
	}
	template <typename T = bool> T IsParameterControlledByCurve(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x46919C4))(this, name);
	}
	template <typename T = Il2CppVector3> T get_deltaPosition() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691A68))(this);
	}
	template <typename T = void> T INTERNAL_get_deltaPosition(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x4691AB0))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_deltaRotation() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691B50))(this);
	}
	template <typename T = void> T INTERNAL_get_deltaRotation(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x4691B88))(this, value);
	}
	template <typename T = Il2CppVector3> T get_rootPosition() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691C28))(this);
	}
	template <typename T = void> T INTERNAL_get_rootPosition(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x4691C70))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rootRotation() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691D10))(this);
	}
	template <typename T = void> T INTERNAL_get_rootRotation(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x4691D48))(this, value);
	}
	template <typename T = bool> T get_applyRootMotion() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691DE8))(this);
	}
	template <typename T = void> T set_applyRootMotion(bool value) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x4691E80))(this, value);
	}
	template <typename T = uintptr_t> T get_updateMode() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4691F20))(this);
	}
	template <typename T = void> T set_updateMode(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4691FB8))(this, value);
	}
	template <typename T = float> T get_minUpdateInterval() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4692058))(this);
	}
	template <typename T = void> T set_minUpdateInterval(float value) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x46920F0))(this, value);
	}
	template <typename T = bool> T ShouldUpdate() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4692190))(this);
	}
	template <typename T = float> T get_gravityWeight() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4692228))(this);
	}
	template <typename T = Il2CppVector3> T get_bodyPosition() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46922C0))(this);
	}
	template <typename T = void> T set_bodyPosition(Il2CppVector3 value) {
		return ((T (*)(Animator*, Il2CppVector3))(Il2CppBase() + 0x4692450))(this, value);
	}
	template <typename T = Il2CppVector3> T GetBodyPositionInternal() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4692410))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetBodyPositionInternal(uintptr_t self, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46924B4))(0, self, value);
	}
	template <typename T = void> T SetBodyPositionInternal(Il2CppVector3 bodyPosition) {
		return ((T (*)(Animator*, Il2CppVector3))(Il2CppBase() + 0x4692490))(this, bodyPosition);
	}
	template <typename T = void> static T INTERNAL_CALL_SetBodyPositionInternal(uintptr_t self, uintptr_t bodyPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4692554))(0, self, bodyPosition);
	}
	template <typename T = Il2CppQuaternion> T get_bodyRotation() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46925F4))(this);
	}
	template <typename T = void> T set_bodyRotation(Il2CppQuaternion value) {
		return ((T (*)(Animator*, Il2CppQuaternion))(Il2CppBase() + 0x4692684))(this, value);
	}
	template <typename T = Il2CppQuaternion> T GetBodyRotationInternal() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4692650))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetBodyRotationInternal(uintptr_t self, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46926F4))(0, self, value);
	}
	template <typename T = void> T SetBodyRotationInternal(Il2CppQuaternion bodyRotation) {
		return ((T (*)(Animator*, Il2CppQuaternion))(Il2CppBase() + 0x46926CC))(this, bodyRotation);
	}
	template <typename T = void> static T INTERNAL_CALL_SetBodyRotationInternal(uintptr_t self, uintptr_t bodyRotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4692794))(0, self, bodyRotation);
	}
	template <typename T = Il2CppVector3> T GetIKPosition(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692834))(this, goal);
	}
	template <typename T = Il2CppVector3> T GetIKPositionInternal(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x46928A8))(this, goal);
	}
	template <typename T = void> static T INTERNAL_CALL_GetIKPositionInternal(uintptr_t self, uintptr_t goal, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46928E8))(0, self, goal, value);
	}
	template <typename T = void> T SetIKPosition(uintptr_t goal, Il2CppVector3 goalPosition) {
		return ((T (*)(Animator*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4692990))(this, goal, goalPosition);
	}
	template <typename T = void> T SetIKPositionInternal(uintptr_t goal, Il2CppVector3 goalPosition) {
		return ((T (*)(Animator*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x46929D8))(this, goal, goalPosition);
	}
	template <typename T = void> static T INTERNAL_CALL_SetIKPositionInternal(uintptr_t self, uintptr_t goal, uintptr_t goalPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4692A0C))(0, self, goal, goalPosition);
	}
	template <typename T = Il2CppQuaternion> T GetIKRotation(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692AB4))(this, goal);
	}
	template <typename T = Il2CppQuaternion> T GetIKRotationInternal(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692B18))(this, goal);
	}
	template <typename T = void> static T INTERNAL_CALL_GetIKRotationInternal(uintptr_t self, uintptr_t goal, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4692B4C))(0, self, goal, value);
	}
	template <typename T = void> T SetIKRotation(uintptr_t goal, Il2CppQuaternion goalRotation) {
		return ((T (*)(Animator*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x4692BF4))(this, goal, goalRotation);
	}
	template <typename T = void> T SetIKRotationInternal(uintptr_t goal, Il2CppQuaternion goalRotation) {
		return ((T (*)(Animator*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x4692C44))(this, goal, goalRotation);
	}
	template <typename T = void> static T INTERNAL_CALL_SetIKRotationInternal(uintptr_t self, uintptr_t goal, uintptr_t goalRotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4692C84))(0, self, goal, goalRotation);
	}
	template <typename T = float> T GetIKPositionWeight(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692D2C))(this, goal);
	}
	template <typename T = float> T GetIKPositionWeightInternal(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692D50))(this, goal);
	}
	template <typename T = void> T SetIKPositionWeight(uintptr_t goal, float value) {
		return ((T (*)(Animator*, uintptr_t, float))(Il2CppBase() + 0x4692DF0))(this, goal, value);
	}
	template <typename T = void> T SetIKPositionWeightInternal(uintptr_t goal, float value) {
		return ((T (*)(Animator*, uintptr_t, float))(Il2CppBase() + 0x4692E1C))(this, goal, value);
	}
	template <typename T = float> T GetIKRotationWeight(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692EC4))(this, goal);
	}
	template <typename T = float> T GetIKRotationWeightInternal(uintptr_t goal) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4692EE8))(this, goal);
	}
	template <typename T = void> T SetIKRotationWeight(uintptr_t goal, float value) {
		return ((T (*)(Animator*, uintptr_t, float))(Il2CppBase() + 0x4692F88))(this, goal, value);
	}
	template <typename T = void> T SetIKRotationWeightInternal(uintptr_t goal, float value) {
		return ((T (*)(Animator*, uintptr_t, float))(Il2CppBase() + 0x4692FB4))(this, goal, value);
	}
	template <typename T = void> T SetLookAtPosition(Il2CppVector3 lookAtPosition) {
		return ((T (*)(Animator*, Il2CppVector3))(Il2CppBase() + 0x469305C))(this, lookAtPosition);
	}
	template <typename T = void> T SetLookAtPositionInternal(Il2CppVector3 lookAtPosition) {
		return ((T (*)(Animator*, Il2CppVector3))(Il2CppBase() + 0x469309C))(this, lookAtPosition);
	}
	template <typename T = void> static T INTERNAL_CALL_SetLookAtPositionInternal(uintptr_t self, uintptr_t lookAtPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46930C0))(0, self, lookAtPosition);
	}
	template <typename T = void> T SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight) {
		return ((T (*)(Animator*, float, float, float, float))(Il2CppBase() + 0x4693160))(this, weight, bodyWeight, headWeight, eyesWeight);
	}
	template <typename T = void> T SetLookAtWeight_1(float weight, float bodyWeight, float headWeight) {
		return ((T (*)(Animator*, float, float, float))(Il2CppBase() + 0x46931F8))(this, weight, bodyWeight, headWeight);
	}
	template <typename T = void> T SetLookAtWeight_2(float weight, float bodyWeight) {
		return ((T (*)(Animator*, float, float))(Il2CppBase() + 0x4693244))(this, weight, bodyWeight);
	}
	template <typename T = void> T SetLookAtWeight_3(float weight) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x469328C))(this, weight);
	}
	template <typename T = void> T SetLookAtWeight_4(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight) {
		return ((T (*)(Animator*, float, float, float, float, float))(Il2CppBase() + 0x46931AC))(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
	}
	template <typename T = void> T SetLookAtWeightInternal(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight) {
		return ((T (*)(Animator*, float, float, float, float, float))(Il2CppBase() + 0x46932D0))(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
	}
	template <typename T = void> T add_ObjectCreatedCallBack(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4693380))(this, value);
	}
	template <typename T = void> T remove_ObjectCreatedCallBack(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4693534))(this, value);
	}
	template <typename T = void> T add_ObjectClearedCallBack(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x46936E8))(this, value);
	}
	template <typename T = void> T remove_ObjectClearedCallBack(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x469389C))(this, value);
	}
	template <typename T = void> T OnObjectCreatedCallBack() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4693A50))(this);
	}
	template <typename T = void> T OnObjectClearedCallBack() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4693AF4))(this);
	}
	template <typename T = bool> T get_stabilizeFeet() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4693B98))(this);
	}
	template <typename T = void> T set_stabilizeFeet(bool value) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x4693C30))(this, value);
	}
	template <typename T = int32_t> T get_layerCount() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4693CD0))(this);
	}
	template <typename T = Il2CppString*> T GetLayerName(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4693D68))(this, layerIndex);
	}
	template <typename T = int32_t> T GetLayerIndex(Il2CppString* layerName) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4693E08))(this, layerName);
	}
	template <typename T = float> T GetLayerWeight(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4693EA8))(this, layerIndex);
	}
	template <typename T = void> T SetLayerWeight(int32_t layerIndex, float weight) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x4693F48))(this, layerIndex, weight);
	}
	template <typename T = void> T SetLayerBoneWeight(int32_t layerIndex, Il2CppString* path, float weight) {
		return ((T (*)(Animator*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x4693FF0))(this, layerIndex, path, weight);
	}
	template <typename T = uintptr_t> T GetCurrentAnimatorStateInfo(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46940A0))(this, layerIndex);
	}
	template <typename T = uintptr_t> T GetNextAnimatorStateInfo(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4694140))(this, layerIndex);
	}
	template <typename T = uintptr_t> T GetAnimatorTransitionInfo(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46941E0))(this, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCurrentAnimatorClipInfo(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4694280))(this, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNextAnimatorClipInfo(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4694320))(this, layerIndex);
	}
	template <typename T = bool> T IsInTransition(int32_t layerIndex) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46943C0))(this, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_parameters() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694460))(this);
	}
	template <typename T = void> T SetGenericBoneRetarget(int32_t count, Il2CppArray<uintptr_t>* bones, Il2CppArray<uintptr_t>* positions, Il2CppArray<uintptr_t>* quaternions) {
		return ((T (*)(Animator*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46944F8))(this, count, bones, positions, quaternions);
	}
	template <typename T = void> T InternalSetGenericBoneRetarget(int32_t count, Il2CppArray<uintptr_t>* bones, Il2CppArray<uintptr_t>* positions, Il2CppArray<uintptr_t>* quaternions) {
		return ((T (*)(Animator*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4694620))(this, count, bones, positions, quaternions);
	}
	template <typename T = float> T get_feetPivotActive() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46946D0))(this);
	}
	template <typename T = void> T set_feetPivotActive(float value) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4694768))(this, value);
	}
	template <typename T = float> T get_pivotWeight() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694808))(this);
	}
	template <typename T = Il2CppVector3> T get_pivotPosition() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46948A0))(this);
	}
	template <typename T = void> T INTERNAL_get_pivotPosition(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x46948E8))(this, value);
	}
	template <typename T = void> T MatchTarget(Il2CppVector3 matchPosition, Il2CppQuaternion matchRotation, uintptr_t targetBodyPart, uintptr_t weightMask, float startNormalizedTime, float targetNormalizedTime) {
		return ((T (*)(Animator*, Il2CppVector3, Il2CppQuaternion, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x4694988))(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime);
	}
	template <typename T = void> static T INTERNAL_CALL_MatchTarget(uintptr_t self, uintptr_t matchPosition, uintptr_t matchRotation, uintptr_t targetBodyPart, uintptr_t weightMask, float startNormalizedTime, float targetNormalizedTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x4694A00))(0, self, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime);
	}
	template <typename T = void> T InterruptMatchTarget(bool completeMatch) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x4694AD8))(this, completeMatch);
	}
	template <typename T = bool> T get_isMatchingTarget() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694B78))(this);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694C10))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4694CA8))(this, value);
	}
	template <typename T = bool> T SetBlendDurationTimeWhenSwitchAnimationSet(float blendDutationTime) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4694D48))(this, blendDutationTime);
	}
	template <typename T = bool> T InternalSetBlendDurationTimeWhenSwitchAnimationSet(float blendDutationTime) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4694D4C))(this, blendDutationTime);
	}
	template <typename T = bool> T IsInSwitchAnimationSetBlending() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694DEC))(this);
	}
	template <typename T = bool> T InternalIsInSwitchAnimationSetBlending() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694DF0))(this);
	}
	template <typename T = float> T GetSwitchAnimationSetBlendingDurationTime() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694E88))(this);
	}
	template <typename T = float> T InternalGetSwitchAnimationSetBlendingDurationTime() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4694E8C))(this);
	}
	template <typename T = void> T SetAvatarMaskWhenSwitchAnimationSet(uintptr_t mask) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4694F24))(this, mask);
	}
	template <typename T = void> T SetAvatarMaskWhenSwitchAnimationSetIntenal(uintptr_t mask) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4694F28))(this, mask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetStateAnimationClips(int32_t layerIndex, int32_t stateNameId) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4694FC8))(this, layerIndex, stateNameId);
	}
	template <typename T = void> T CrossFadeInFixedTime(Il2CppString* stateName, float transitionDuration, int32_t layer) {
		return ((T (*)(Animator*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x4695070))(this, stateName, transitionDuration, layer);
	}
	template <typename T = void> T CrossFadeInFixedTime_1(Il2CppString* stateName, float transitionDuration) {
		return ((T (*)(Animator*, Il2CppString*, float))(Il2CppBase() + 0x46950F0))(this, stateName, transitionDuration);
	}
	template <typename T = void> T CrossFadeInFixedTime_2(Il2CppString* stateName, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(Animator*, Il2CppString*, float, int32_t, float))(Il2CppBase() + 0x46950B0))(this, stateName, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> T CrossFadeInFixedTime_3(int32_t stateNameHash, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(Animator*, int32_t, float, int32_t, float))(Il2CppBase() + 0x46951C4))(this, stateNameHash, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> T CrossFadeInFixedTime_4(int32_t stateNameHash, float transitionDuration) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x4695274))(this, stateNameHash, transitionDuration);
	}
	template <typename T = void> T CrossFade(Il2CppString* stateName, float transitionDuration, int32_t layer) {
		return ((T (*)(Animator*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x4695298))(this, stateName, transitionDuration, layer);
	}
	template <typename T = void> T CrossFade_1(Il2CppString* stateName, float transitionDuration) {
		return ((T (*)(Animator*, Il2CppString*, float))(Il2CppBase() + 0x469531C))(this, stateName, transitionDuration);
	}
	template <typename T = void> T CrossFade_2(Il2CppString* stateName, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(Animator*, Il2CppString*, float, int32_t, float))(Il2CppBase() + 0x46952DC))(this, stateName, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> T CrossFade_3(int32_t stateNameHash, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(Animator*, int32_t, float, int32_t, float))(Il2CppBase() + 0x469535C))(this, stateNameHash, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> T PlayInFixedTime(Il2CppString* stateName, int32_t layer, float fixedTime) {
		return ((T (*)(Animator*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x469540C))(this, stateName, layer, fixedTime);
	}
	template <typename T = void> T PlayInFixedTime_1(int32_t stateNameHash, int32_t layer, float fixedTime) {
		return ((T (*)(Animator*, int32_t, int32_t, float))(Il2CppBase() + 0x4695444))(this, stateNameHash, layer, fixedTime);
	}
	template <typename T = void> T Play(Il2CppString* stateName, int32_t layer) {
		return ((T (*)(Animator*, Il2CppString*, int32_t))(Il2CppBase() + 0x46954F4))(this, stateName, layer);
	}
	template <typename T = void> T Play_1(Il2CppString* stateName) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4695564))(this, stateName);
	}
	template <typename T = void> T Play_2(Il2CppString* stateName, int32_t layer, float normalizedTime) {
		return ((T (*)(Animator*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x469552C))(this, stateName, layer, normalizedTime);
	}
	template <typename T = void> T Play_3(int32_t stateNameHash, int32_t layer, float normalizedTime) {
		return ((T (*)(Animator*, int32_t, int32_t, float))(Il2CppBase() + 0x4695598))(this, stateNameHash, layer, normalizedTime);
	}
	template <typename T = void> T Play_4(int32_t stateNameHash, int32_t layer) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4695648))(this, stateNameHash, layer);
	}
	template <typename T = void> T Play_5(int32_t stateNameHash) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4695668))(this, stateNameHash);
	}
	template <typename T = void> T SetTarget(uintptr_t targetIndex, float targetNormalizedTime) {
		return ((T (*)(Animator*, uintptr_t, float))(Il2CppBase() + 0x469568C))(this, targetIndex, targetNormalizedTime);
	}
	template <typename T = Il2CppVector3> T get_targetPosition() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695734))(this);
	}
	template <typename T = void> T INTERNAL_get_targetPosition(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x469577C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_targetRotation() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x469581C))(this);
	}
	template <typename T = void> T INTERNAL_get_targetRotation(uintptr_t* value) {
		return ((T (*)(Animator*, uintptr_t*))(Il2CppBase() + 0x4695854))(this, value);
	}
	template <typename T = uintptr_t> T GetBoneTransform(uintptr_t humanBoneId) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x46958F4))(this, humanBoneId);
	}
	template <typename T = uintptr_t> T GetBoneTransformInternal(int32_t humanBoneId) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46958F8))(this, humanBoneId);
	}
	template <typename T = uintptr_t> T get_cullingMode() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695998))(this);
	}
	template <typename T = void> T set_cullingMode(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4695A30))(this, value);
	}
	template <typename T = void> T set_lodMode(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4695AD0))(this, value);
	}
	template <typename T = void> T SetLodRelativeHeight(int32_t lodStatus, float value) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x4695B70))(this, lodStatus, value);
	}
	template <typename T = void> T SetLodFrequenceTimer(int32_t lodStatus, float value) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x4695C18))(this, lodStatus, value);
	}
	template <typename T = void> T StartPlayback() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695CC0))(this);
	}
	template <typename T = void> T StopPlayback() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695D58))(this);
	}
	template <typename T = float> T get_playbackTime() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695DF0))(this);
	}
	template <typename T = void> T set_playbackTime(float value) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4695E88))(this, value);
	}
	template <typename T = void> T StartRecording(int32_t frameCount) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4695F28))(this, frameCount);
	}
	template <typename T = void> T StopRecording() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4695FC8))(this);
	}
	template <typename T = float> T get_recorderStartTime() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696060))(this);
	}
	template <typename T = float> T get_recorderStopTime() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46960F8))(this);
	}
	template <typename T = uintptr_t> T get_runtimeAnimatorController() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696190))(this);
	}
	template <typename T = void> T set_runtimeAnimatorController(uintptr_t value) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4696228))(this, value);
	}
	template <typename T = bool> T get_hasBoundPlayables() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46962C8))(this);
	}
	template <typename T = bool> T HasState(int32_t layerIndex, int32_t stateID) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4696360))(this, layerIndex, stateID);
	}
	template <typename T = uintptr_t> T GetAnimatorControllerPlayable() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696408))(this);
	}
	template <typename T = bool> T InternalGetAnimatorControllerPlayable(uintptr_t handle) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4696474))(this, handle);
	}
	template <typename T = bool> static T INTERNAL_CALL_InternalGetAnimatorControllerPlayable(uintptr_t self, uintptr_t handle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4696480))(0, self, handle);
	}
	template <typename T = float> T GetStateSpeed(int32_t layerIndex, int32_t stateNameHash) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4696520))(this, layerIndex, stateNameHash);
	}
	template <typename T = void> T SetStateSpeed(int32_t layerIndex, int32_t stateNameHash, float speed) {
		return ((T (*)(Animator*, int32_t, int32_t, float))(Il2CppBase() + 0x46965C8))(this, layerIndex, stateNameHash, speed);
	}
	template <typename T = void> T SetDefaultState(int32_t layerIndex, int32_t stateNameHash) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x4696678))(this, layerIndex, stateNameHash);
	}
	template <typename T = void> T ClearDefaultStates() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696720))(this);
	}
	template <typename T = void> T ForceSetLodRunning() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46967B8))(this);
	}
	template <typename T = bool> static T IsOptimizeRebind() {
		return ((T (*)(void *))(Il2CppBase() + 0x4696850))(0);
	}
	template <typename T = void> static T SetIsOptimizeRebind(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x46968E0))(0, value);
	}
	template <typename T = bool> T IsCacheParameter() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696978))(this);
	}
	template <typename T = void> T OptimizeRebind() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696A10))(this);
	}
	template <typename T = bool> T IsCacheController() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696AA8))(this);
	}
	template <typename T = uintptr_t> T GetCahcedRuntimeController() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696B40))(this);
	}
	template <typename T = int32_t> T GetCurrentPlayableStateIsPaused() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696BD8))(this);
	}
	template <typename T = int32_t> static T StringToHash(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x469512C))(0, name);
	}
	template <typename T = uintptr_t> T get_playableGraph() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696C70))(this);
	}
	template <typename T = void> T InternalGetCurrentGraph(uintptr_t graph) {
		return ((T (*)(Animator*, uintptr_t))(Il2CppBase() + 0x4696D40))(this, graph);
	}
	template <typename T = void> T CheckIfInIKPass() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x469232C))(this);
	}
	template <typename T = bool> T CheckIfInIKPassInternal() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696E78))(this);
	}
	template <typename T = void> T SetFloatString(Il2CppString* name, float value) {
		return ((T (*)(Animator*, Il2CppString*, float))(Il2CppBase() + 0x4690F00))(this, name, value);
	}
	template <typename T = void> T SetFloatID(int32_t id, float value) {
		return ((T (*)(Animator*, int32_t, float))(Il2CppBase() + 0x469107C))(this, id, value);
	}
	template <typename T = float> T GetFloatString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4690DB8))(this, name);
	}
	template <typename T = float> T GetFloatID(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4690E5C))(this, id);
	}
	template <typename T = void> T SetBoolString(Il2CppString* name, bool value) {
		return ((T (*)(Animator*, Il2CppString*, bool))(Il2CppBase() + 0x4691340))(this, name, value);
	}
	template <typename T = void> T SetBoolID(int32_t id, bool value) {
		return ((T (*)(Animator*, int32_t, bool))(Il2CppBase() + 0x46913EC))(this, id, value);
	}
	template <typename T = bool> T GetBoolString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x46911F8))(this, name);
	}
	template <typename T = bool> T GetBoolID(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x469129C))(this, id);
	}
	template <typename T = void> T SetIntegerString(Il2CppString* name, int32_t value) {
		return ((T (*)(Animator*, Il2CppString*, int32_t))(Il2CppBase() + 0x46915E0))(this, name, value);
	}
	template <typename T = void> T SetIntegerID(int32_t id, int32_t value) {
		return ((T (*)(Animator*, int32_t, int32_t))(Il2CppBase() + 0x469168C))(this, id, value);
	}
	template <typename T = int32_t> T GetIntegerString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4691498))(this, name);
	}
	template <typename T = int32_t> T GetIntegerID(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x469153C))(this, id);
	}
	template <typename T = void> T SetTriggerString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4691738))(this, name);
	}
	template <typename T = void> T SetTriggerID(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x46917DC))(this, id);
	}
	template <typename T = void> T ResetTriggerString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x4691880))(this, name);
	}
	template <typename T = void> T ResetTriggerID(int32_t id) {
		return ((T (*)(Animator*, int32_t))(Il2CppBase() + 0x4691924))(this, id);
	}
	template <typename T = bool> T IsParameterControlledByCurveString(Il2CppString* name) {
		return ((T (*)(Animator*, Il2CppString*))(Il2CppBase() + 0x46919C8))(this, name);
	}
	template <typename T = void> T SetFloatStringDamp(Il2CppString* name, float value, float dampTime, float deltaTime) {
		return ((T (*)(Animator*, Il2CppString*, float, float, float))(Il2CppBase() + 0x4690FC8))(this, name, value, dampTime, deltaTime);
	}
	template <typename T = void> T SetFloatIDDamp(int32_t id, float value, float dampTime, float deltaTime) {
		return ((T (*)(Animator*, int32_t, float, float, float))(Il2CppBase() + 0x4691144))(this, id, value, dampTime, deltaTime);
	}
	template <typename T = bool> T get_layersAffectMassCenter() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696F10))(this);
	}
	template <typename T = void> T set_layersAffectMassCenter(bool value) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x4696FA8))(this, value);
	}
	template <typename T = float> T get_leftFeetBottomHeight() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4697048))(this);
	}
	template <typename T = float> T get_rightFeetBottomHeight() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x46970E0))(this);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(Animator*, float))(Il2CppBase() + 0x4697178))(this, deltaTime);
	}
	template <typename T = void> T Rebind() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4697218))(this);
	}
	template <typename T = bool> T get_logWarnings() {
		return ((T (*)(Animator*))(Il2CppBase() + 0x4696DE0))(this);
	}
	template <typename T = void> T set_logWarnings(bool value) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x46972B0))(this, value);
	}
	template <typename T = void> T set_fireEvents(bool value) {
		return ((T (*)(Animator*, bool))(Il2CppBase() + 0x4697350))(this, value);
	}

};

}
