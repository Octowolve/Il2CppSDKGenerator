#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimatorControllerPlayable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimatorControllerPlayable"));
	}


	template <typename T = uintptr_t> static T op_Implicit(uintptr_t b) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE428))(0, b);
	}
	template <typename T = uintptr_t> static T GetAnimatorControllerInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE450))(0, handle);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetAnimatorControllerInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE454))(0, handle);
	}
	template <typename T = float> T GetFloat(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE4EC))(this, name);
	}
	template <typename T = float> T GetFloat_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE4FC))(this, id);
	}
	template <typename T = void> T SetFloat(Il2CppString* name, float value) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float))(Il2CppBase() + 0x4DAE50C))(this, name, value);
	}
	template <typename T = void> T SetFloat_1(int32_t id, float value) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float))(Il2CppBase() + 0x4DAE548))(this, id, value);
	}
	template <typename T = bool> T GetBool(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE584))(this, name);
	}
	template <typename T = bool> T GetBool_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE594))(this, id);
	}
	template <typename T = void> T SetBool(Il2CppString* name, bool value) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, bool))(Il2CppBase() + 0x4DAE5A4))(this, name, value);
	}
	template <typename T = void> T SetBool_1(int32_t id, bool value) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, bool))(Il2CppBase() + 0x4DAE5E0))(this, id, value);
	}
	template <typename T = int32_t> T GetInteger(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE61C))(this, name);
	}
	template <typename T = int32_t> T GetInteger_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE62C))(this, id);
	}
	template <typename T = void> T SetInteger(Il2CppString* name, int32_t value) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, int32_t))(Il2CppBase() + 0x4DAE63C))(this, name, value);
	}
	template <typename T = void> T SetInteger_1(int32_t id, int32_t value) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t))(Il2CppBase() + 0x4DAE678))(this, id, value);
	}
	template <typename T = void> T SetTrigger(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE6B4))(this, name);
	}
	template <typename T = void> T SetTrigger_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE6C4))(this, id);
	}
	template <typename T = void> T ResetTrigger(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE6D4))(this, name);
	}
	template <typename T = void> T ResetTrigger_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE6E4))(this, id);
	}
	template <typename T = bool> T IsParameterControlledByCurve(Il2CppString* name) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE6F4))(this, name);
	}
	template <typename T = bool> T IsParameterControlledByCurve_1(int32_t id) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE704))(this, id);
	}
	template <typename T = int32_t> T get_layerCount() {
		return ((T (*)(AnimatorControllerPlayable*))(Il2CppBase() + 0x4DAE714))(this);
	}
	template <typename T = int32_t> static T GetLayerCountInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE71C))(0, handle);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetLayerCountInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE720))(0, handle);
	}
	template <typename T = Il2CppString*> static T GetLayerNameInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE7B8))(0, handle, layerIndex);
	}
	template <typename T = Il2CppString*> static T INTERNAL_CALL_GetLayerNameInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE7BC))(0, handle, layerIndex);
	}
	template <typename T = Il2CppString*> T GetLayerName(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE85C))(this, layerIndex);
	}
	template <typename T = int32_t> static T GetLayerIndexInternal(uintptr_t handle, Il2CppString* layerName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE868))(0, handle, layerName);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetLayerIndexInternal(uintptr_t handle, Il2CppString* layerName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE86C))(0, handle, layerName);
	}
	template <typename T = int32_t> T GetLayerIndex(Il2CppString* layerName) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DAE90C))(this, layerName);
	}
	template <typename T = float> static T GetLayerWeightInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE918))(0, handle, layerIndex);
	}
	template <typename T = float> static T INTERNAL_CALL_GetLayerWeightInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE91C))(0, handle, layerIndex);
	}
	template <typename T = float> T GetLayerWeight(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAE9BC))(this, layerIndex);
	}
	template <typename T = void> static T SetLayerWeightInternal(uintptr_t handle, int32_t layerIndex, float weight) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DAE9C8))(0, handle, layerIndex, weight);
	}
	template <typename T = void> static T INTERNAL_CALL_SetLayerWeightInternal(uintptr_t handle, int32_t layerIndex, float weight) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DAE9E0))(0, handle, layerIndex, weight);
	}
	template <typename T = void> T SetLayerWeight(int32_t layerIndex, float weight) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float))(Il2CppBase() + 0x4DAEA88))(this, layerIndex, weight);
	}
	template <typename T = void> static T SetLayerBoneWeightInternal(uintptr_t handle, int32_t layerIndex, Il2CppString* bonePath, float w) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, float))(Il2CppBase() + 0x4DAEAAC))(0, handle, layerIndex, bonePath, w);
	}
	template <typename T = void> static T INTERNAL_CALL_SetLayerBoneWeightInternal(uintptr_t handle, int32_t layerIndex, Il2CppString* bonePath, float w) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, float))(Il2CppBase() + 0x4DAEACC))(0, handle, layerIndex, bonePath, w);
	}
	template <typename T = void> T SetLayerBoneWeight(int32_t layerIndex, Il2CppString* bonePath, float w) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x4DAEB84))(this, layerIndex, bonePath, w);
	}
	template <typename T = uintptr_t> static T GetCurrentAnimatorStateInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAEBB0))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetCurrentAnimatorStateInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAECA8))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> T GetCurrentAnimatorStateInfo(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAED48))(this, layerIndex);
	}
	template <typename T = uintptr_t> static T GetNextAnimatorStateInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAEEA8))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetNextAnimatorStateInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAEFA0))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> T GetNextAnimatorStateInfo(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF040))(this, layerIndex);
	}
	template <typename T = uintptr_t> static T GetAnimatorTransitionInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF1A0))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetAnimatorTransitionInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF1D4))(0, handle, layerIndex);
	}
	template <typename T = uintptr_t> T GetAnimatorTransitionInfo(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF274))(this, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCurrentAnimatorClipInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF2D8))(0, handle, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_GetCurrentAnimatorClipInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF2DC))(0, handle, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCurrentAnimatorClipInfo(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF37C))(this, layerIndex);
	}
	template <typename T = void> T GetCurrentAnimatorClipInfo_1(int32_t layerIndex, Il2CppList<uintptr_t>* clips) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4DAF388))(this, layerIndex, clips);
	}
	template <typename T = void> T GetNextAnimatorClipInfo(int32_t layerIndex, Il2CppList<uintptr_t>* clips) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4DAF49C))(this, layerIndex, clips);
	}
	template <typename T = void> T GetAnimatorClipInfoInternal(uintptr_t handle, int32_t layerIndex, bool isCurrent, uintptr_t clips) {
		return ((T (*)(AnimatorControllerPlayable*, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4DAF468))(this, handle, layerIndex, isCurrent, clips);
	}
	template <typename T = void> static T INTERNAL_CALL_GetAnimatorClipInfoInternal(uintptr_t self, uintptr_t handle, int32_t layerIndex, bool isCurrent, uintptr_t clips) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4DAF57C))(0, self, handle, layerIndex, isCurrent, clips);
	}
	template <typename T = int32_t> static T GetAnimatorClipInfoCountInternal(uintptr_t handle, int32_t layerIndex, bool current) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4DAF634))(0, handle, layerIndex, current);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetAnimatorClipInfoCountInternal(uintptr_t handle, int32_t layerIndex, bool current) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4DAF64C))(0, handle, layerIndex, current);
	}
	template <typename T = int32_t> T GetCurrentAnimatorClipInfoCount(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF6F4))(this, layerIndex);
	}
	template <typename T = int32_t> T GetNextAnimatorClipInfoCount(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF718))(this, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetNextAnimatorClipInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF73C))(0, handle, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_GetNextAnimatorClipInfoInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF740))(0, handle, layerIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNextAnimatorClipInfo_1(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF7E0))(this, layerIndex);
	}
	template <typename T = Il2CppString*> T ResolveHash(int32_t hash) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF7EC))(this, hash);
	}
	template <typename T = Il2CppString*> static T ResolveHashInternal(uintptr_t handle, int32_t hash) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF7F8))(0, handle, hash);
	}
	template <typename T = Il2CppString*> static T INTERNAL_CALL_ResolveHashInternal(uintptr_t handle, int32_t hash) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF7FC))(0, handle, hash);
	}
	template <typename T = bool> static T IsInTransitionInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF89C))(0, handle, layerIndex);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsInTransitionInternal(uintptr_t handle, int32_t layerIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAF8A0))(0, handle, layerIndex);
	}
	template <typename T = bool> T IsInTransition(int32_t layerIndex) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAF940))(this, layerIndex);
	}
	template <typename T = int32_t> static T GetParameterCountInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAF94C))(0, handle);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetParameterCountInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAF950))(0, handle);
	}
	template <typename T = int32_t> T get_parameterCount() {
		return ((T (*)(AnimatorControllerPlayable*))(Il2CppBase() + 0x4DAF9E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetParametersArrayInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAF9F0))(0, handle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_GetParametersArrayInternal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAF9F4))(0, handle);
	}
	template <typename T = uintptr_t> T GetParameter(int32_t index) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DAFA8C))(this, index);
	}
	template <typename T = int32_t> static T StringToHash(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DAFB9C))(0, name);
	}
	template <typename T = void> T CrossFadeInFixedTime(Il2CppString* stateName, float transitionDuration, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x4DAFC34))(this, stateName, transitionDuration, layer);
	}
	template <typename T = void> T CrossFadeInFixedTime_1(Il2CppString* stateName, float transitionDuration) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float))(Il2CppBase() + 0x4DAFCB4))(this, stateName, transitionDuration);
	}
	template <typename T = void> T CrossFadeInFixedTime_2(Il2CppString* stateName, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float, int32_t, float))(Il2CppBase() + 0x4DAFC74))(this, stateName, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> T CrossFadeInFixedTime_3(int32_t stateNameHash, float transitionDuration, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float, int32_t))(Il2CppBase() + 0x4DAFD1C))(this, stateNameHash, transitionDuration, layer);
	}
	template <typename T = void> T CrossFadeInFixedTime_4(int32_t stateNameHash, float transitionDuration) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float))(Il2CppBase() + 0x4DAFD84))(this, stateNameHash, transitionDuration);
	}
	template <typename T = void> T CrossFadeInFixedTime_5(int32_t stateNameHash, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DAFD50))(this, stateNameHash, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> static T CrossFadeInFixedTimeInternal(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DAFCF4))(0, handle, stateNameHash, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> static T CrossFadeInFixedTimeInternal_1(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t))(Il2CppBase() + 0x4DAFE7C))(0, handle, stateNameHash, transitionDuration, layer);
	}
	template <typename T = void> static T CrossFadeInFixedTimeInternal_2(uintptr_t handle, int32_t stateNameHash, float transitionDuration) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DAFEA4))(0, handle, stateNameHash, transitionDuration);
	}
	template <typename T = void> static T INTERNAL_CALL_CrossFadeInFixedTimeInternal(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer, float fixedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DAFDB4))(0, handle, stateNameHash, transitionDuration, layer, fixedTime);
	}
	template <typename T = void> T CrossFade(Il2CppString* stateName, float transitionDuration, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x4DAFEC8))(this, stateName, transitionDuration, layer);
	}
	template <typename T = void> T CrossFade_1(Il2CppString* stateName, float transitionDuration) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float))(Il2CppBase() + 0x4DAFF4C))(this, stateName, transitionDuration);
	}
	template <typename T = void> T CrossFade_2(Il2CppString* stateName, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, float, int32_t, float))(Il2CppBase() + 0x4DAFF0C))(this, stateName, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> T CrossFade_3(int32_t stateNameHash, float transitionDuration, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float, int32_t))(Il2CppBase() + 0x4DAFFB8))(this, stateNameHash, transitionDuration, layer);
	}
	template <typename T = void> T CrossFade_4(int32_t stateNameHash, float transitionDuration) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float))(Il2CppBase() + 0x4DB0024))(this, stateNameHash, transitionDuration);
	}
	template <typename T = void> T CrossFade_5(int32_t stateNameHash, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DAFFF0))(this, stateNameHash, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> static T CrossFadeInternal(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DAFF90))(0, handle, stateNameHash, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> static T CrossFadeInternal_1(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t))(Il2CppBase() + 0x4DB0120))(0, handle, stateNameHash, transitionDuration, layer);
	}
	template <typename T = void> static T CrossFadeInternal_2(uintptr_t handle, int32_t stateNameHash, float transitionDuration) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DB014C))(0, handle, stateNameHash, transitionDuration);
	}
	template <typename T = void> static T INTERNAL_CALL_CrossFadeInternal(uintptr_t handle, int32_t stateNameHash, float transitionDuration, int32_t layer, float normalizedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, float, int32_t, float))(Il2CppBase() + 0x4DB0058))(0, handle, stateNameHash, transitionDuration, layer, normalizedTime);
	}
	template <typename T = void> T PlayInFixedTime(Il2CppString* stateName, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, int32_t))(Il2CppBase() + 0x4DB0174))(this, stateName, layer);
	}
	template <typename T = void> T PlayInFixedTime_1(Il2CppString* stateName) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DB01E8))(this, stateName);
	}
	template <typename T = void> T PlayInFixedTime_2(Il2CppString* stateName, int32_t layer, float fixedTime) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x4DB01B0))(this, stateName, layer, fixedTime);
	}
	template <typename T = void> T PlayInFixedTime_3(int32_t stateNameHash, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t))(Il2CppBase() + 0x4DB0240))(this, stateNameHash, layer);
	}
	template <typename T = void> T PlayInFixedTime_4(int32_t stateNameHash) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DB029C))(this, stateNameHash);
	}
	template <typename T = void> T PlayInFixedTime_5(int32_t stateNameHash, int32_t layer, float fixedTime) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t, float))(Il2CppBase() + 0x4DB0270))(this, stateNameHash, layer, fixedTime);
	}
	template <typename T = void> static T PlayInFixedTimeInternal(uintptr_t handle, int32_t stateNameHash, int32_t layer, float fixedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x4DB0220))(0, handle, stateNameHash, layer, fixedTime);
	}
	template <typename T = void> static T PlayInFixedTimeInternal_1(uintptr_t handle, int32_t stateNameHash, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DB0384))(0, handle, stateNameHash, layer);
	}
	template <typename T = void> static T PlayInFixedTimeInternal_2(uintptr_t handle, int32_t stateNameHash) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB03A8))(0, handle, stateNameHash);
	}
	template <typename T = void> static T INTERNAL_CALL_PlayInFixedTimeInternal(uintptr_t handle, int32_t stateNameHash, int32_t layer, float fixedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x4DB02CC))(0, handle, stateNameHash, layer, fixedTime);
	}
	template <typename T = void> T Play(Il2CppString* stateName, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, int32_t))(Il2CppBase() + 0x4DB03D0))(this, stateName, layer);
	}
	template <typename T = void> T Play_1(Il2CppString* stateName) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*))(Il2CppBase() + 0x4DB0444))(this, stateName);
	}
	template <typename T = void> T Play_2(Il2CppString* stateName, int32_t layer, float normalizedTime) {
		return ((T (*)(AnimatorControllerPlayable*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x4DB040C))(this, stateName, layer, normalizedTime);
	}
	template <typename T = void> T Play_3(int32_t stateNameHash, int32_t layer) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t))(Il2CppBase() + 0x4DB049C))(this, stateNameHash, layer);
	}
	template <typename T = void> T Play_4(int32_t stateNameHash) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t))(Il2CppBase() + 0x4DB04F8))(this, stateNameHash);
	}
	template <typename T = void> T Play_5(int32_t stateNameHash, int32_t layer, float normalizedTime) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t, float))(Il2CppBase() + 0x4DB04CC))(this, stateNameHash, layer, normalizedTime);
	}
	template <typename T = void> static T PlayInternal(uintptr_t handle, int32_t stateNameHash, int32_t layer, float normalizedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x4DB047C))(0, handle, stateNameHash, layer, normalizedTime);
	}
	template <typename T = void> static T PlayInternal_1(uintptr_t handle, int32_t stateNameHash, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DB05E0))(0, handle, stateNameHash, layer);
	}
	template <typename T = void> static T PlayInternal_2(uintptr_t handle, int32_t stateNameHash) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB0604))(0, handle, stateNameHash);
	}
	template <typename T = void> static T INTERNAL_CALL_PlayInternal(uintptr_t handle, int32_t stateNameHash, int32_t layer, float normalizedTime) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x4DB0528))(0, handle, stateNameHash, layer, normalizedTime);
	}
	template <typename T = bool> T HasState(int32_t layerIndex, int32_t stateID) {
		return ((T (*)(AnimatorControllerPlayable*, int32_t, int32_t))(Il2CppBase() + 0x4DB062C))(this, layerIndex, stateID);
	}
	template <typename T = bool> static T HasStateInternal(uintptr_t handle, int32_t layerIndex, int32_t stateID) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DB0650))(0, handle, layerIndex, stateID);
	}
	template <typename T = bool> static T INTERNAL_CALL_HasStateInternal(uintptr_t handle, int32_t layerIndex, int32_t stateID) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DB0668))(0, handle, layerIndex, stateID);
	}
	template <typename T = void> static T SetFloatString(uintptr_t handle, Il2CppString* name, float value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x4DAE530))(0, handle, name, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetFloatString(uintptr_t handle, Il2CppString* name, float value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x4DB0710))(0, handle, name, value);
	}
	template <typename T = void> static T SetFloatID(uintptr_t handle, int32_t id, float value) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DAE56C))(0, handle, id, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetFloatID(uintptr_t handle, int32_t id, float value) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DB07B8))(0, handle, id, value);
	}
	template <typename T = float> static T GetFloatString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE4F8))(0, handle, name);
	}
	template <typename T = float> static T INTERNAL_CALL_GetFloatString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB0860))(0, handle, name);
	}
	template <typename T = float> static T GetFloatID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE508))(0, handle, id);
	}
	template <typename T = float> static T INTERNAL_CALL_GetFloatID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB0900))(0, handle, id);
	}
	template <typename T = void> static T SetBoolString(uintptr_t handle, Il2CppString* name, bool value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4DAE5C8))(0, handle, name, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetBoolString(uintptr_t handle, Il2CppString* name, bool value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4DB09A0))(0, handle, name, value);
	}
	template <typename T = void> static T SetBoolID(uintptr_t handle, int32_t id, bool value) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4DAE604))(0, handle, id, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetBoolID(uintptr_t handle, int32_t id, bool value) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4DB0A48))(0, handle, id, value);
	}
	template <typename T = bool> static T GetBoolString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE590))(0, handle, name);
	}
	template <typename T = bool> static T INTERNAL_CALL_GetBoolString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB0AF0))(0, handle, name);
	}
	template <typename T = bool> static T GetBoolID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE5A0))(0, handle, id);
	}
	template <typename T = bool> static T INTERNAL_CALL_GetBoolID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB0B90))(0, handle, id);
	}
	template <typename T = void> static T SetIntegerString(uintptr_t handle, Il2CppString* name, int32_t value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4DAE660))(0, handle, name, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetIntegerString(uintptr_t handle, Il2CppString* name, int32_t value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4DB0C30))(0, handle, name, value);
	}
	template <typename T = void> static T SetIntegerID(uintptr_t handle, int32_t id, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DAE69C))(0, handle, id, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetIntegerID(uintptr_t handle, int32_t id, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4DB0CD8))(0, handle, id, value);
	}
	template <typename T = int32_t> static T GetIntegerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE628))(0, handle, name);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetIntegerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB0D80))(0, handle, name);
	}
	template <typename T = int32_t> static T GetIntegerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE638))(0, handle, id);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetIntegerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB0E20))(0, handle, id);
	}
	template <typename T = void> static T SetTriggerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE6C0))(0, handle, name);
	}
	template <typename T = void> static T INTERNAL_CALL_SetTriggerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB0EC0))(0, handle, name);
	}
	template <typename T = void> static T SetTriggerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE6D0))(0, handle, id);
	}
	template <typename T = void> static T INTERNAL_CALL_SetTriggerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB0F60))(0, handle, id);
	}
	template <typename T = void> static T ResetTriggerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE6E0))(0, handle, name);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetTriggerString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB1000))(0, handle, name);
	}
	template <typename T = void> static T ResetTriggerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE6F0))(0, handle, id);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetTriggerID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB10A0))(0, handle, id);
	}
	template <typename T = bool> static T IsParameterControlledByCurveString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DAE700))(0, handle, name);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsParameterControlledByCurveString(uintptr_t handle, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DB1140))(0, handle, name);
	}
	template <typename T = bool> static T IsParameterControlledByCurveID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE710))(0, handle, id);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsParameterControlledByCurveID(uintptr_t handle, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB11E0))(0, handle, id);
	}

};

}
